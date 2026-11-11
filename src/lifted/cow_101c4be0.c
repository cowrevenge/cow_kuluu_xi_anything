/* f_0x101c4be0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Loads a new this-pointer from [self+4] into ecx and tail-calls FUN_101c2380 as a thiscall.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101c4be0(Guest* g, uint32_t self, uint32_t arg1, uint32_t arg2)
{
    (void)arg1;
    (void)arg2;
    uint32_t new_ecx = rd32(self + 4u);
    return cow_thiscall(g, COW_IMG(0x101c2380u), new_ecx, 2, arg1, arg2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101c4be0(g, g->ecx, rd32(sp0 + 4u), rd32(sp0 + 8u));
    g->esp = sp0;
    rt_return(g, result, 8u);   /* ret 8 from the tail-called callee */
}
/* COW_ADAPTER END */
