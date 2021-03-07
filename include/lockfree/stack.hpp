#pragma once

#include <cstdint>
#include <atomic>
#include <cassert>

namespace lockfree
{
    // Use 4 for align(16), greater alignments are safer.
    template <unsigned ALIGN_BITS = 3>
    class stack
    {
        typedef uint64_t u64;

        struct Node
        {
            std::atomic<Node*> next;
        };

        std::atomic_uint64_t head;


        // Pointer validation.

        static constexpr u64 ALIGN     = 1 << ALIGN_BITS;
        static constexpr u64 PTR_48    = 0x0000ffffffffffff;
        static constexpr u64 PTR_4x    = PTR_48 & ~((1 << ALIGN_BITS) - 1);
                                // e.g.  0x0000fffffffffff0;


        // Pointer tagging.

        inline u64 tag(const Node* ptr, u64 lastID)
        {
            // Ptrs are 48bit vals,
            //  ours are 44bit because 16-byte align,
            //   so we use the rest for a u20 ABA tag.

                                            //            ####    ####
            assert(!(u64(ptr) & ~PTR_4x));  // e.g. 0x0000fffffffffff0
                                            //        ####    ####

            return  (u64(ptr)    >>     ALIGN_BITS)
                 | ((lastID + 1) << (48-ALIGN_BITS));
        }

        inline Node* untag(u64 tagged_ptr)
        {
            return (Node*)(
                (tagged_ptr << ALIGN_BITS)
                    & PTR_48);
        }

        inline u64 tagof(u64 tagged_ptr)
        {
            return u64(tagged_ptr) >> (48-ALIGN_BITS);
        }


        // We sync on the .next pointers.

    public:
        void push(char* mem)
        {
            Node* node = (Node*)mem;

            u64 state0 = head.load(
                std::memory_order_relaxed);

            Retry:
            {
                node->next.store(untag(state0), //////////////
                    std::memory_order_release); //// sync ////
                                                //////////////

                const u64 state1 = tag(node, tagof(state0));

                assert(untag(state1) == node);

                if (!head.compare_exchange_weak(
                    state0, state1,
                        std::memory_order_relaxed,
                        std::memory_order_relaxed))
                {
                    goto Retry;
                }
            }
        }

        char* try_pop()
        {
            u64 state0 = head.load(
                std::memory_order_relaxed);

            Retry:
            {
                const Node* node = untag(state0);
                if (node)
                {
                    const u64 state1 = tag(
                        node->next.load(                //////////////
                            std::memory_order_acquire), //// sync ////
                                tagof(state0));         //////////////

                    if (!head.compare_exchange_weak(
                        state0, state1,
                            std::memory_order_relaxed,
                            std::memory_order_relaxed))
                    {
                        goto Retry;
                    }
                }

                return (char*)node;
            }
        }
    };
}
