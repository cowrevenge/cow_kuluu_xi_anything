/* f_0x10327ad8 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   tail-jump thunk that sets eax to a fixed image address and tail-calls FUN_10316337.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327ad8(Guest* g, uint32_t sp0)
{
    /*
     * The original does:
     *   mov eax, 0x1034bd50
     *   jmp 0x10316337
     *
     * This is a true tail call: the target sees the caller's original stack
     * layout, with its return address at [sp0] and its four cdecl arguments
     * at [sp0+4], [sp0+8], [sp0+12], [sp0+16].  In particular, the target
     * may read or overwrite those argument slots, so the call must be made
     * with g->esp positioned such that cow_cdecl rebuilds exactly that
     * stack frame.
     */
    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);
    const uint32_t a3 = rd32(sp0 + 16u);

    g->eax = COW_IMG(0x1034bd50u);

    /*
     * cow_cdecl will push:
     *   args a3, a2, a1, a0
     *   a synthetic return address
     * starting from the current g->esp and ending at target-entry esp.
     *
     * To make the target entry esp equal to sp0 (the original tail-call
     * stack layout), start with esp advanced by the 4 arguments plus the
     * return address.
     */
    g->esp = sp0 + 5u * 4u;

    /* Target is cdecl and ends with a bare ret. */
    cow_cdecl(g, COW_IMG(0x10316337u), 4u, a0, a1, a2, a3);

    /*
     * The original leaves eax and edx whatever the target left there.
     * The target's bare ret would return to the original caller; the
     * adapter will synthesize that return with rt_return(..., 0).
     */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327ad8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10327ad8(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* target ends in a bare ret */
}
/* COW_ADAPTER END */
