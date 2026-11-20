/* f_0x102c6fe0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Computes a byte-wise table-based checksum/CRC over `len` bytes at `ptr`, starting from `seed`, returning the complemented final state.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_102c6fe0(Guest* g, uint32_t sp0, uint32_t seed, uint32_t ptr, uint32_t len)
{
    const uint32_t len_addr = sp0 + 12u;
    const uint32_t table = COW_IMG(0x10342f88u);

    uint32_t edx = ptr;

    if (edx == 0u)
    {
        g->edx = 0u;
        return 0u;
    }

    uint32_t eax = ~seed;
    const uint32_t ecx = 0xffu;

    if (len >= 8u)
    {
        uint32_t edi = len >> 3;

        do
        {
            uint32_t b0 = (uint32_t)rd8(edx);

            len -= 8u;
            wr32(len_addr, len);

            uint32_t idx = (eax & ecx) ^ b0;
            eax = rd32(table + idx * 4u) ^ (eax >> 8);
            ++edx;

            uint32_t b1 = (uint32_t)rd8(edx);
            idx = (eax & ecx) ^ b1;
            eax = rd32(table + idx * 4u) ^ (eax >> 8);
            ++edx;

            uint32_t b2 = (uint32_t)rd8(edx);
            idx = (eax & ecx) ^ b2;
            eax = rd32(table + idx * 4u) ^ (eax >> 8);
            ++edx;

            uint32_t b3 = (uint32_t)rd8(edx);
            idx = (eax & ecx) ^ b3;
            eax = rd32(table + idx * 4u) ^ (eax >> 8);
            ++edx;

            uint32_t b4 = (uint32_t)rd8(edx);
            idx = (eax & ecx) ^ b4;
            eax = rd32(table + idx * 4u) ^ (eax >> 8);
            ++edx;

            uint32_t b5 = (uint32_t)rd8(edx);
            idx = (eax & ecx) ^ b5;
            eax = rd32(table + idx * 4u) ^ (eax >> 8);
            ++edx;

            uint32_t b6 = (uint32_t)rd8(edx);
            idx = (eax & ecx) ^ b6;
            eax = rd32(table + idx * 4u) ^ (eax >> 8);
            ++edx;

            uint32_t b7 = (uint32_t)rd8(edx);
            idx = (eax & ecx) ^ b7;
            eax = rd32(table + idx * 4u) ^ (eax >> 8);
            ++edx;

            --edi;
        } while (edi != 0u);
    }

    while (len != 0u)
    {
        uint32_t b = (uint32_t)rd8(edx);
        uint32_t idx = (eax & ecx) ^ b;
        eax = rd32(table + idx * 4u) ^ (eax >> 8);
        ++edx;

        --len;
        wr32(len_addr, len);
    }

    g->edx = edx;
    return ~eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c6fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t seed = rd32(sp0 + 4u);
    const uint32_t ptr = rd32(sp0 + 8u);
    const uint32_t len = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_102c6fe0(g, sp0, seed, ptr, len);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
