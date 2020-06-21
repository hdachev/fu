#include <cstdint>
#include <atomic>
#include <cassert>
#include <memory>


//

namespace {


//

class LockFree_StackOf_45BitPtrs
{
    struct Node
    {
        uint64_t m_NEXT;
    };

    std::atomic_uint64_t m_HEAD;


    // Pointer tagging.

    inline uint64_t tag(const Node* ptr, int lastID)
    {
        // Ptrs are 48bit vals,
        //  ours are 45bit because 16-byte align,
        //   so we use the rest for a u19 ABA tag.

        assert(!(~uint64_t(ptr) & 0xfffffffffff0)
            && "Not a 45bit pointer.");

        return  (uint64_t(ptr)         >>     3)
             | ((uint64_t(lastID) + 1) << (48-3));
    }

    inline Node* untag(uint64_t tagged_ptr)
    {
        return (Node*)(
            (tagged_ptr << 3)
                & 0xffffffffffff);
    }

    inline int tagof(uint64_t tagged_ptr)
    {
        return int(uint64_t(tagged_ptr) >> (48-3));
    }


    // Lock free release.

public:
    inline void push(char* mem)
    {
        Node* node = (Node*)mem;

        uint64_t state0 = m_HEAD.load(
            std::memory_order_relaxed);

        Retry:
        {
            node->m_NEXT = state0;
            const uint64_t state1 = tag(node, tagof(state0));

            if (!m_HEAD.compare_exchange_weak(
                state0, state1,
                    std::memory_order_release,
                    std::memory_order_relaxed))
            {
                goto Retry;
            }
        }
    }

    inline char* try_pop()
    {
        uint64_t state0 = m_HEAD.load(
            std::memory_order_relaxed);

        Retry:
        {
            Node* node = untag(state0);
            if (node)
            {
                const uint64_t state1 = node->m_NEXT;

                if (!m_HEAD.compare_exchange_weak(
                    state0, state1,
                        std::memory_order_acquire,
                        std::memory_order_relaxed))
                {
                    goto Retry;
                }
            }

            return (char*)node;
        }
    }
};


//

template <
    int log2_MinAlloc  =  7 /* 128 bytes */,
    int log2_MaxAlloc  = 31 /*   2 gb    */,
    int log2_GrowAlloc = 26 /*  64 mb    */>

struct LockFree_Pow2Heap
{
    static constexpr int MAX_CACHELINE_bytes    = 128;
    static constexpr int          PAGE_bytes    = 4096;

    static constexpr int NUM_BUCKETS            = log2_MaxAlloc - log2_MinAlloc + 1;
    static constexpr int MIN_ALLOC              = 1 << log2_MinAlloc;


    //

    struct alignas(MAX_CACHELINE_bytes) Bucket
    {
        LockFree_StackOf_45BitPtrs m_stack;
    };

    Bucket m_buckets[NUM_BUCKETS];


    //

    inline char* try_alloc(const int log2_bytes)
    {
        // Fast path.
        int start = log2_bytes - log2_MinAlloc;
        char* mem = m_buckets[start].pop();
        if (mem)
            return mem;

        // Start falling back.
        return fallback(start);
    }


    //

    char* fallback(const int start)
    {
        // Try fragmenting what we currently have,
        //  without resorting to breaking down much bigger chunks.
        {
            int end = start + 8;

            const int   i_grow = log2_GrowAlloc - log2_MinAlloc;
            end = end > i_grow
                ? end : i_grow;

            end = end < NUM_BUCKETS
                ? end : NUM_BUCKETS;

            char* mem = fallback_split(start + 1, end);
            if (mem)
                return mem;
        }

        // OS-allocate.
        return fallback_allocate(start);
    }

    char* fallback_allocate(const int start)
    {
        int log2_bytes = start + log2_MinAlloc;

        log2_bytes = log2_bytes > log2_GrowAlloc
                   ? log2_bytes : log2_GrowAlloc;

        // Allocate.
        size_t bytes = size_t(1 << log2_bytes);
        char* mem = (char*)malloc(bytes);

        // In case we're out of memory,
        //  we might try to free up some of our bigger slots.
        if (!mem)
            return mem;

        // Return if exact match (>= growsize).
        int index = log2_bytes - log2_MinAlloc;
        if (index == start)
            return mem;

        // Else store on the heap and try again.
        m_buckets[index].push(mem);
        return try_alloc(start);
    }


    //

    char* fallback_split(const int i, const int end)
    {
        if (i >= end)
            return nullptr;

        char* mem = m_buckets[i].pop();
        if (!mem)
            mem = fallback_split(i + 1, end);

        if (mem)
        {
            // Chop off and link up the right half of the alloc.
            int log2 = i + log2_MinAlloc;
            int size = 1 << log2;
            int half = (size >> 1);

            char* right = mem + half;
            m_buckets[i - 1].push(right);
        }

        return mem;
    }

};

} // namespace;
