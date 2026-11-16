/* f_0x1005e070 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1018bbc0 with this=&stack_arg1 and the difference between *this and stack_arg1, then stores stack_arg1 into the address given by stack_arg0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1005e070(Guest* g, uint32_t self, uint32_t sp0)
{
    uint32_t eax = rd32(self);
    uint32_t edx = rd32(sp0 + 8u);
    eax = eax - edx;

    cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 + 8u, 1u, eax);

    eax = rd32(sp0 + 4u);
    edx = rd32(sp0 + 8u);
    wr32(eax, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005e070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1005e070(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
