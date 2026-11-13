/* f_0x101b7fb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears a byte in the object referenced by [this+0x1c], then calls FUN_101b8cb0 with [this+0x2c].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101b7fb0(Guest* g, uint32_t self)
{
    const uint32_t eax = rd32(self + 0x1cu);
    wr8(eax + 0xf11du, 0u);

    const uint32_t edx = rd32(self + 0x2cu);

    /* Match the register state at the original call site. */
    g->eax = eax;
    g->edx = edx;

    cow_stdcall(g, COW_IMG(0x101b8cb0u), 1u, edx);

    /* The original returns with whatever eax/edx the callee left behind. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b7fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101b7fb0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
