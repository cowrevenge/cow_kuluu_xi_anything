/* f_0x10084330 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   returns the result of a tail call to 0x10095790 when [this+0x70] is non-null, otherwise clears al and returns the unchanged upper bits of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10084330(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t ecx = rd32(self + 0x70u);

    if (ecx == 0u)
    {
        /* xor al, al: only the low byte of eax is cleared. */
        return g->eax & 0xFFFFFF00u;
    }

    /* Tail call: 0x10095790 is __thiscall and ends with ret 4. */
    return cow_thiscall(g, COW_IMG(0x10095790u), ecx, 1u, rd32(sp0 + 4u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10084330(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
