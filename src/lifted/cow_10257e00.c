/* f_0x10257e00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   forwards the three stack arguments to FUN_102578d0 as a thiscall, preserving the callee's eax and edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10257e00(Guest* g, uint32_t p1, uint32_t p2, uint32_t p3)
{
    uint32_t eax = cow_thiscall(g, COW_IMG(0x102578d0u), p1, 2u, p2, p3);
    g->edx = g->edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t p1 = rd32(sp0 + 4u);
    const uint32_t p2 = rd32(sp0 + 8u);
    const uint32_t p3 = rd32(sp0 + 0xcu);

    const uint32_t result = cow_fn_10257e00(g, p1, p2, p3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
