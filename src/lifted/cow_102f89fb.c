/* f_0x102f89fb - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Computes a 32-bit table-driven rolling hash over a byte buffer, returning its bitwise complement.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_102f89fb(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t sp0)
{
    const uint32_t table = COW_IMG(0x10348e10u);
    const uint32_t len_addr = sp0 + 12u;

    if (arg1 == 0u)
    {
        g->edx = 0u;
        return 0u;
    }

    uint32_t edx = arg1;
    uint32_t esi = ~arg0;
    uint32_t len = arg2;

    if (len >= 8u)
    {
        uint32_t count = len >> 3;

        while (count != 0u)
        {
            uint32_t byte0 = rd8(edx);
            uint32_t shifted0 = esi >> 8;

            len -= 8u;
            wr32(len_addr, len);

            uint32_t idx = (byte0 ^ esi) & 0xffu;
            esi = rd32(table + idx * 4u) ^ shifted0;
            edx++;

            uint32_t byte1 = rd8(edx);
            uint32_t shifted1 = esi >> 8;
            idx = (byte1 ^ esi) & 0xffu;
            esi = rd32(table + idx * 4u) ^ shifted1;
            edx++;

            uint32_t byte2 = rd8(edx);
            uint32_t shifted2 = esi >> 8;
            idx = (byte2 ^ esi) & 0xffu;
            esi = rd32(table + idx * 4u) ^ shifted2;
            edx++;

            uint32_t byte3 = rd8(edx);
            uint32_t shifted3 = esi >> 8;
            idx = (byte3 ^ esi) & 0xffu;
            esi = rd32(table + idx * 4u) ^ shifted3;
            edx++;

            uint32_t byte4 = rd8(edx);
            uint32_t shifted4 = esi >> 8;
            idx = (byte4 ^ esi) & 0xffu;
            esi = rd32(table + idx * 4u) ^ shifted4;
            edx++;

            uint32_t byte5 = rd8(edx);
            uint32_t shifted5 = esi >> 8;
            idx = (byte5 ^ esi) & 0xffu;
            esi = rd32(table + idx * 4u) ^ shifted5;
            edx++;

            uint32_t byte6 = rd8(edx);
            uint32_t shifted6 = esi >> 8;
            idx = (byte6 ^ esi) & 0xffu;
            esi = rd32(table + idx * 4u) ^ shifted6;
            edx++;

            uint32_t byte7 = rd8(edx);
            uint32_t shifted7 = esi >> 8;
            idx = (byte7 ^ esi) & 0xffu;
            esi = rd32(table + idx * 4u) ^ shifted7;
            edx++;

            count--;
        }
    }

    while (len != 0u)
    {
        uint32_t byte = rd8(edx);
        uint32_t shifted = esi >> 8;
        uint32_t idx = (byte ^ esi) & 0xffu;
        esi = rd32(table + idx * 4u) ^ shifted;
        edx++;

        len--;
        wr32(len_addr, len);
    }

    g->edx = edx;
    return ~esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f89fb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_102f89fb(g, arg0, arg1, arg2, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
