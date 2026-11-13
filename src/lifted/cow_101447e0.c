/* f_0x101447e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the byte at self+0x10 is nonzero, calls FUN_10118f70 with this=[self+8] and one stack argument self+0x18.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101447e0(Guest* g, uint32_t self)
{
    const uint32_t b = rd8(self + 0x10u);

    if (b == 0u)
    {
        /* mov al, byte ptr [ecx + 0x10] leaves the upper 24 bits of eax unchanged. */
        return (g->eax & 0xFFFFFF00u) | (b & 0xFFu);
    }

    {
        const uint32_t arg = self + 0x18u;
        const uint32_t this = rd32(self + 8u);

        /* Match the register state at the original call site. */
        g->eax = arg;
        g->ecx = this;

        cow_thiscall(g, COW_IMG(0x10118f70u), this, 1u, arg);

        /* eax and edx are whatever the callee left in them. */
        return g->eax;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101447e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101447e0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
