/* f_0x100feb30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns bit 13 of the 16-bit word at [p+2] when p is non-null and [p] == 1, otherwise returns 1 in al while preserving eax's upper 24 bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100feb30(Guest* g, uint32_t p)
{
    (void)g;

    if (p == 0u)
    {
        return 1u;
    }

    if (rd8(p) != 1u)
    {
        return (p & 0xFFFFFF00u) | 1u;
    }

    uint32_t eax = (p & 0xFFFF0000u) | (uint32_t)rd16(p + 2u);
    eax >>= 13;
    eax &= 1u;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100feb30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t p = rd32(sp0 + 8u);
    const uint32_t result = cow_fn_100feb30(g, p);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
