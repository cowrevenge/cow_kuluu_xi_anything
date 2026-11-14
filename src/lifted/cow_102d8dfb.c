/* f_0x102d8dfb - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Calls FUN_102e7670(1), then tail-jumps to the import at [0x103cc460], passing the caller's stack arguments unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102d8dfb(Guest* g, uint32_t sp0)
{
    /*
     * 102d8dfb: push 1
     * 102d8dfd: call 0x102e7670
     *
     * The called function ends with "ret 4", so this is a stdcall helper call
     * with one stack argument.  On return, esp is back at sp0, exactly as in
     * the original instruction stream.
     */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    /*
     * 102d8e02: jmp dword ptr [0x103cc460]
     *
     * The tail jump is made with esp == sp0.  The target therefore sees:
     *   [sp0]     = return address to this function's caller
     *   [sp0 + 4] = first tail-call argument
     *   [sp0 + 8] = second tail-call argument
     *
     * The observed final ESP is sp0 + 12, so the tail target is an imported
     * stdcall function that pops two argument bytes (ret 8).
     *
     * cow_stdcall() pushes a return address before entering the callee.  To
     * make the target see the original return address at sp0, temporarily set
     * g->esp to sp0 + 4 so the helper's call instruction pushes at sp0.
     */
    const uint32_t target = rd32(COW_IMG(0x103cc460u));

    g->esp = sp0 + 4u;
    cow_stdcall(g, target, 2u, rd32(sp0 + 4u), rd32(sp0 + 8u));

    /*
     * The helper has already returned from the tail callee.  The adapter will
     * restore esp and perform the final rt_return with the callee's cleanup.
     */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d8dfb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102d8dfb(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 8u);   /* tail target pops two stack arguments */
}
/* COW_ADAPTER END */
