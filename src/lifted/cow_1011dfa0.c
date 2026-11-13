/* f_0x1011dfa0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_101202d0 with a pointer to a temporary containing (this + 0x30), using the global 0x104e1bf8 as this.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1011dfa0(Guest* g, uint32_t self)
{
    const uint32_t buf = cow_frame(g, g->esp, 4u);
    wr32(buf, self + 0x30u);

    cow_thiscall(g, COW_IMG(0x101202d0u), COW_IMG(0x104e1bf8u), 1u, buf);

    /* pop ecx after the call does not affect eax/edx; leave them as the callee left them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011dfa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1011dfa0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
