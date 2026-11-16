/* f_0x10327b03 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   tail-jumps to FUN_10316337 after setting eax to the image address 0x1034bd7c.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327b03(Guest* g, uint32_t sp0)
{
    g->eax = COW_IMG(0x1034BD7Cu);

    /*
     * The original is a tail jump:
     *
     *   mov eax, 0x1034bd7c
     *   jmp 0x10316337
     *
     * FUN_10316337 therefore sees the caller's stack exactly as it was at entry to
     * 0x10327b03:
     *
     *   [esp]     = return address to the original caller
     *   [esp+4]   = first argument
     *   [esp+8]   = second argument
     *   [esp+12]  = third argument
     *   [esp+16]  = fourth argument
     *
     * The callee ends in a bare ret, so its arguments are popped by its caller.
     * To emulate the tail jump while still using the guest call helper, temporarily
     * place the helper's call trampoline at [sp0], so that the callee starts with
     * esp == sp0 and sees the original stack arguments at [esp+4...].
     */
    const uint32_t saved_ret = rd32(sp0);

    g->esp = sp0 + 4u;
    const uint32_t result = cow_cdecl(g, COW_IMG(0x10316337u), 0u);
    g->esp = sp0;

    wr32(sp0, saved_ret);

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327b03(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10327b03(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* the target ends in a bare ret */
}
/* COW_ADAPTER END */
