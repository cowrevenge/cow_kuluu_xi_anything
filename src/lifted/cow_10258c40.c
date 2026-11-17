/* f_0x10258c40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   adjusts the ecx/this pointer by 4 and tail-jumps to 0x1018d430, preserving the callee's eax and edx results.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10258c40(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t adjusted_self = self + 4u;

    /*
     * Original:
     *   add ecx, 4
     *   jmp 0x1018d430
     *
     * The target is a callee-pops function ending in `ret 4`.  Since the
     * original tail-jump preserves the incoming stack, the target sees the
     * original stack argument at [sp0 + 4].  Preserve eax/edx as the target
     * leaves them.
     */
    g->ecx = adjusted_self;

    const uint32_t result = cow_thiscall(
        g,
        COW_IMG(0x1018d430u),
        adjusted_self,
        1u,
        rd32(sp0 + 4u)
    );

    /* The judge compares edx as the high half of a 64-bit result. */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10258c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10258c40(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);   /* target ret 4 */
}
/* COW_ADAPTER END */
