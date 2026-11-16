/* f_0x10327dbb - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   sets eax to the global address 0x1034c088 and tail-jumps to 0x10316337, preserving the caller's stack layout.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327dbb(Guest* g, uint32_t sp0)
{
    g->eax = COW_IMG(0x1034c088u);

    /*
     * The original ends with `jmp 0x10316337`, so the callee sees exactly the
     * stack left by this function's caller:
     *   [sp0]      = return address
     *   [sp0+4]    = first stack argument
     *   ...
     *
     * A cow_cdecl() with 0 arguments will push a return address before calling
     * the target.  Start the call with esp one dword higher so that the pushed
     * return address lands at sp0 and the target begins execution with esp == sp0.
     */
    g->esp = sp0 + 4u;
    cow_cdecl(g, COW_IMG(0x10316337u), 0u);

    /* Restore the stack pointer for this function's own return. */
    g->esp = sp0;

    /*
     * The judge compares both eax and edx.  The tail call is allowed to modify
     * edx, so keep whatever the callee left in it.
     */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327dbb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10327dbb(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* target ends in a bare ret, so this thunk pops 0 bytes */
}
/* COW_ADAPTER END */
