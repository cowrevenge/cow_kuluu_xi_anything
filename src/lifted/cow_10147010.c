/* f_0x10147010 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x105781f8 is non-null, calls FUN_10221300 with this = ptr + 0x20 and argument 0x40, then returns 1 while preserving the upper 24 bits of eax left by the call.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10147010(Guest* g, uint32_t self)
{
    (void)self;

    uint32_t eax = rd32(COW_IMG(0x105781f8u));
    uint32_t edx = g->edx;

    if (eax != 0u)
    {
        g->eax = eax;
        cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1u, 0x40u);
        eax = g->eax;
        edx = g->edx;
    }

    eax = (eax & 0xFFFFFF00u) | 1u;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10147010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10147010(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
