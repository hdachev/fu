#pragma once

namespace fu {

struct LF_FreeList
{
    struct Node { Node* next; };

    /////////////////////////////////////////////

    typedef unsigned int uint;

    static constexpr uint NUM_SLOTS = 64;

    fu_INL uint mod64_shuffle(uint cursor) noexcept
    {
        return ((cursor & 1) << 5)
             | ((cursor & 2) << 3)
             | ((cursor & 4) << 1)
             | ((cursor >> 3) & 7);
    }

    /////////////////////////////////////////////

    typedef std::atomic<Node*> Slot;

    Slot                m_slots[NUM_SLOTS];
    std::atomic_uint    m_cursor;

    fu_INL uint rotate_uint() noexcept
    {
        return mod64_shuffle(
            m_cursor.fetch_add(
                1u, std::memory_order_relaxed ) );
    }

    fu_INL Slot* rotate_slot() noexcept
    {
        return m_slots + mod64_shuffle( rotate_uint() );
    }

    ////////////////////////////////////////////////

    template <bool DO_NOT_INTRUDE>
    fu_INL bool do_dealloc(Node* node) noexcept
    {
        ////////////////////////////
        Slot& head = *rotate_slot();
        ////////////////////////////

        for (;;)
        {
            Node* OLD_HEAD = head
                .load(
                    std::memory_order_relaxed );

            if constexpr (DO_NOT_INTRUDE)
            {
                // If OLD_HEAD is zero it can mean one of two things:
                //  - Slot is really empty (unlikely).
                //  - Someone is currently allocating on this slot:
                //     If that's the case, and we dealloc here,
                //      they'd be stuck with the excess nodes.

                if (!OLD_HEAD)
                    return false;
            }

            node->next = OLD_HEAD;

            bool OK = head
                .compare_exchange_weak(
                    OLD_HEAD, node,
                        std::memory_order_release,
                        std::memory_order_relaxed );

            if (OK)
                return true;
        }
    }

    void dealloc(char* node) noexcept
    {
        if (!do_dealloc<true>((Node*) node))
            do_dealloc<false>((Node*) node);
    }

    ////////////////////////////////////////////////

    char* try_alloc() noexcept
    {
        bool empty;
        for (;;)
        {
            empty = true;

            ////////////////////////////
            uint offset = rotate_uint();
            ////////////////////////////

            for (uint i = 0; i < NUM_SLOTS; i++)
            {
                auto& head = m_slots[ (offset + i) % NUM_SLOTS ];

                Node* OLD_HEAD = head
                    .load(
                        std::memory_order_relaxed );

                // Chunk available?
                if (OLD_HEAD)
                {
                    Node* null = nullptr;

                    bool PROCEED = head
                        .compare_exchange_weak(
                            OLD_HEAD, null,
                                std::memory_order_acquire,
                                std::memory_order_relaxed );

                    // Managed to grab it?
                    if (PROCEED)
                    {
                        Node* REST = OLD_HEAD->next;

                        jmp_RETRY:
                        {
                            // Try to put back tail.
                            bool OK = head
                                .compare_exchange_weak(
                                    null, REST,
                                        std::memory_order_release,
                                        std::memory_order_relaxed );

                            if (!OK)
                            {
                                // Retry on spurious fail.
                                Node* INTRUDER = head
                                    .load(
                                        std::memory_order_relaxed);

                                if (!INTRUDER)
                                    goto jmp_RETRY;

                                // Intruder generally should be no more
                                //  than a single deallocated chunk.
                                //   Attempt swap with the deeper tree we got stuck with -
                                //    so that we have fewer things re-insert.
                                bool OK = head
                                    .compare_exchange_weak(
                                        INTRUDER, REST,
                                        std::memory_order_acq_rel,
                                        std::memory_order_relaxed );

                                REST = OK   ? INTRUDER
                                            : REST;

                                // Re-deallocate the intruder list.
                                FAIL_dealloc_intruder(REST);
                            }
                        }

                        return (char*) OLD_HEAD;
                    }

                    empty = false;
                }
            }

            if (empty)
                return nullptr;
        }
    }

    ////////////////////////////////////////////////

    void FAIL_dealloc_intruder(Node* REST) noexcept
    {
        while (REST)
        {
            Node* head = REST;
            REST = REST->next;
            dealloc((char*) head);
        }
    }
};

} // namespace
