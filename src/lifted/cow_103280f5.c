/* f_0x103280f5 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   sets eax to 0x1034c3f8 and tail-jumps to 0x10316337, returning its result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_103280f5(Guest* g, uint32_t sp0)
{
    /*
     * Original:
     *   mov eax, 0x1034c3f8
     *   jmp 0x10316337
     *
     * This is a tail call, so 0x10316337 must observe the original caller's
     * stack frame exactly:
     *
     *   [sp0]      = return address to the caller of 0x103280f5
     *   [sp0 + 4]  = first stack argument
     *   [sp0 + 8]  = second stack argument
     *   [sp0 +12]  = third stack argument
     *   [sp0 +16]  = fourth stack argument
     *
     * cow_cdecl() performs a normal call, which pushes a return address.  To
     * make the callee see the same stack layout as a jmp would, temporarily
     * point esp at sp0 + 4.  The call then pushes its return address into the
     * slot at sp0, so the callee's esp is exactly sp0 and its [esp+4...]
     * parameters are the original caller's parameters, preserving writes to
     * those original stack slots.
     */
    const uint32_t saved_retaddr = rd32(sp0);

    g->eax = COW_IMG(0x1034c3f8u);
    g->esp = sp0 + 4u;

    const uint32_t result = cow_cdecl(g, COW_IMG(0x10316337u), 0u);

    /*
     * Restore the original return-address slot.  The callee's normal return
     * was intercepted by cow_cdecl(); the real return to the caller is done
     * by rt_return() in the adapter.
     */
    wr32(sp0, saved_retaddr);

    /*
     * The target is declared with a bare ret, so it pops no arguments itself.
     * eax is returned from the callee; edx must be whatever the callee left.
     */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103280f5(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_103280f5(g, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* target ends in a bare ret; this thunk pops 0 */
}
/* COW_ADAPTER END */
