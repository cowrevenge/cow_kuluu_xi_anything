/* f_0x102575b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Rounds the stack argument to a multiple of 4 using signed arithmetic, leaving edx as the correction value used.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102575b0(Guest* g, uint32_t param)
{
    uint32_t eax = param + 3u;

    /* cdq then and edx, 3: edx becomes 3 if eax is negative, otherwise 0. */
    uint32_t edx = (eax & 0x80000000u) ? 3u : 0u;

    /* add eax, edx */
    eax += edx;

    /* sar eax, 2: arithmetic shift right by 2. */
    if (eax & 0x80000000u)
    {
        uint32_t mag = (uint32_t)(0u - eax);
        uint32_t q = (mag + 3u) / 4u;
        eax = (uint32_t)(0u - q);
    }
    else
    {
        eax >>= 2;
    }

    /* shl eax, 2 */
    eax <<= 2;

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102575b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102575b0(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
