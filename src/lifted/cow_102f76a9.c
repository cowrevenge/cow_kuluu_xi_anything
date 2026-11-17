/* f_0x102f76a9 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   fills count bytes at dest with the low byte of the third stack argument, using dword stores for aligned chunks and byte stores for the remainder.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_102f76a9(Guest* g, uint32_t dest, uint32_t fill, uint32_t count)
{
    const uint32_t f = fill & 0xFFu;
    const uint32_t pattern = f * 0x01010101u;

    uint32_t p = dest;
    uint32_t n = count >> 2;

    while (n != 0u)
    {
        wr32(p, pattern);
        p += 4u;
        --n;
    }

    n = count & 3u;
    while (n != 0u)
    {
        wr8(p, (uint8_t)f);
        p += 1u;
        --n;
    }

    g->edx = count;
    return dest;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f76a9(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t dest  = rd32(sp0 + 8u);
    const uint32_t fill  = rd8(sp0 + 12u);
    const uint32_t count = rd32(sp0 + 16u);

    const uint32_t result = cow_fn_102f76a9(g, dest, fill, count);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
