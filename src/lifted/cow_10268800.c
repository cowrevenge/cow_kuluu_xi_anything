/* f_0x10268800 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls 0x10266cd0 with the caller's six stack arguments, replacing the first with (param1 + 0x10) and the second with 0x1033ee98.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=6 */
uint32_t cow_fn_10268800(Guest* g, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6)
{
    uint32_t new_p1 = p1 + 0x10u;
    uint32_t new_p2 = COW_IMG(0x1033EE98u);

    /* The original leaves ecx = p1 + 0x10 before the tail jump.  If the target
       is thiscall, that is its this pointer; if it is stdcall, ecx is merely
       scratch.  Set it explicitly so the tail call sees the same register state. */
    g->ecx = new_p1;

    /* The target ends in ret 24, so it pops six stack words.  Use stdcall unless
       the target is known to be thiscall; the prompt's callee note allows either,
       but the original's explicit ecx setup suggests thiscall semantics. */
    uint32_t result = cow_thiscall(g, COW_IMG(0x10266CD0u), new_p1, 6u,
                                   new_p1, new_p2, p3, p4, p5, p6);

    /* The tail call leaves eax and edx exactly as the target does.  cow_thiscall
       updates g->edx, but make the final state explicit for the judge. */
    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10268800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t p1 = rd32(sp0 + 4u);
    const uint32_t p2 = rd32(sp0 + 8u);
    const uint32_t p3 = rd32(sp0 + 12u);
    const uint32_t p4 = rd32(sp0 + 16u);
    const uint32_t p5 = rd32(sp0 + 20u);
    const uint32_t p6 = rd32(sp0 + 24u);

    const uint32_t result = cow_fn_10268800(g, p1, p2, p3, p4, p5, p6);

    g->esp = sp0;
    rt_return(g, result, 24u);   /* target pops 6 stack arguments */
}
/* COW_ADAPTER END */
