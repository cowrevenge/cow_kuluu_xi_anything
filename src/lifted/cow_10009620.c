/* f_0x10009620 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the second and third stack arguments into self+0x90 and self+0x94, then returns the second stack argument with its low byte forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10009620(Guest* g, uint32_t self, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    (void)g;
    (void)arg0;

    wr32(self + 0x90u, arg1);
    wr32(self + 0x94u, arg2);

    return (arg1 & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10009620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_10009620(g, self, 0u, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
