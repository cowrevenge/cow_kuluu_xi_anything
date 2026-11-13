/* f_0x101b7260 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts `this` by 0x7e30 and tail-calls FUN_101ac990 with the caller's six stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101b7260(Guest* g, uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t a4, uint32_t a5, uint32_t a6)
{
    const uint32_t target = COW_IMG(0x101ac990u);
    const uint32_t new_self = self + 0x7e30u;

    /* Preserve the values the original places in eax/edx before the tail jump. */
    g->eax = a6;
    g->edx = a5;

    /*
     * The target is a thiscall with six stack arguments and ends in `ret 24`.
     * Arguments are listed in source order: a1 is at [esp+4], ..., a6 at [esp+0x18].
     */
    uint32_t r = cow_thiscall(g, target, new_self, 6u, a1, a2, a3, a4, a5, a6);

    /* Leave eax/edx exactly as the target left them. */
    g->edx = g->edx;
    return r;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b7260(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t self = g->ecx;
    const uint32_t a1 = rd32(sp0 + 0x04u);
    const uint32_t a2 = rd32(sp0 + 0x08u);
    const uint32_t a3 = rd32(sp0 + 0x0cu);
    const uint32_t a4 = rd32(sp0 + 0x10u);
    const uint32_t a5 = rd32(sp0 + 0x14u);
    const uint32_t a6 = rd32(sp0 + 0x18u);

    const uint32_t result = cow_fn_101b7260(g, self, a1, a2, a3, a4, a5, a6);

    g->esp = sp0;
    rt_return(g, result, 24u);   /* target pops 6 words */
}
/* COW_ADAPTER END */
