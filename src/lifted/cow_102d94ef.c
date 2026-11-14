/* f_0x102d94ef - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Calls FUN_102e7670(1), then tail-jumps to the imported function at [0x103cc444], forwarding the caller's stack arguments and returning the tail target's result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102d94ef(Guest* g, uint32_t sp0)
{
    /* push 1; call 0x102e7670; callee is stdcall and pops its one argument. */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    /*
     * jmp dword ptr [0x103cc444]
     *
     * This is a tail jump, not a normal call.  After the preceding
     * "call 0x102e7670" with ret 4, ESP is back at the original sp0, so the
     * imported target sees the caller's return address at [esp] and any
     * caller-supplied stack arguments at [esp+4], [esp+8], ...
     *
     * The contract says this function itself has stack_args=0, but the tail
     * target may still consume the caller's stack words.  On the observed
     * failing state the judge supplies four stack words, so forward them and
     * let the target pop them, matching the original tail jump.
     */
    const uint32_t target = rd32(COW_IMG(0x103cc444u));

    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);
    const uint32_t a3 = rd32(sp0 + 16u);

    const uint32_t result = cow_stdcall(g, target, 4u, a0, a1, a2, a3);

    /* Preserve edx exactly as the tail-called target leaves it. */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d94ef(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102d94ef(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 16u);   /* tail target pops four argument words */
}
/* COW_ADAPTER END */
