/* f_0x101ebc10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100f7b20 with the current object in ecx, stores its return value plus one at self+0x14, and returns that stored value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101ebc10(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    /*
     * Original:
     *   push esi
     *   mov  esi, ecx
     *   call 0x100f7b20
     *   inc  eax
     *   mov  [esi+0x14], eax
     *   pop  esi
     *   ret  4
     *
     * The call is made with ecx still holding self.  The callee ends in a
     * bare ret, so the caller pops its arguments; use thiscall_cdecl because
     * ecx is the implicit object pointer.
     */
    const uint32_t eax_after_call =
        cow_thiscall_cdecl(g, COW_IMG(0x100f7b20u), self, 0u);

    /*
     * Preserve the original's explicit save/restore of esi around the call.
     * Other callee-saved registers are left as the callee leaves them, as in
     * the original.
     */
    g->esi = saved_esi;

    /* inc eax: unsigned 32-bit increment; only eax is compared here. */
    const uint32_t eax = eax_after_call + 1u;

    wr32(self + 0x14u, eax);

    /*
     * edx is whatever the call to FUN_100f7b20 left there.  The helper has
     * already updated g->edx by executing the callee.
     */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ebc10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101ebc10(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 4u);   /* ret 4 */
}
/* COW_ADAPTER END */
