/* f_0x10257e30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Forwards the three stack arguments to FUN_10257940 as a thiscall (self=arg0, stack args=arg1,arg2) and returns the callee's eax/edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10257e30(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    uint32_t eax = cow_thiscall(g, COW_IMG(0x10257940u), arg0, 2u, arg1, arg2);
    uint32_t edx = g->edx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 0xcu);

    const uint32_t result = cow_fn_10257e30(g, arg0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
