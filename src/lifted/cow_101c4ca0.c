/* f_0x101c4ca0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads a pointer from [this+4] into ecx and tail-calls FUN_101c2a80 with the original stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101c4ca0(Guest* g, uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    (void)arg1; (void)arg2; (void)arg3;
    const uint32_t new_ecx = rd32(self + 4u);
    return cow_thiscall(g, COW_IMG(0x101c2a80u), new_ecx, 3u, arg1, arg2, arg3);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);
    const uint32_t arg3 = rd32(sp0 + 12u);
    const uint32_t result = cow_fn_101c4ca0(g, self, arg1, arg2, arg3);
    g->esp = sp0;
    rt_return(g, result, 12u);   /* ret 12 */
}
/* COW_ADAPTER END */
