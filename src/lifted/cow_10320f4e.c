/* f_0x10320f4e - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   VC6 exception-frame helper that sets up a local frame, stores a constant 1, then tail-jumps to the frame-removal helper, which returns after popping one stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10320f4e(Guest* g, uint32_t sp0)
{
    (void)g;

    /*
     * The original tail-jumps to the compiler frame helper at 0x10320f9e.
     * That helper only performs exception-frame plumbing and then returns
     * with `ret 4`, so the observable effect is a final esp of sp0 + 8.
     *
     * The only non-plumbing memory access before the tail jump is:
     *   mov eax, [ebp + 8]
     *   mov eax, [eax]
     * where ebp = sp0 - 4, hence [ebp + 8] = [sp0 + 4].
     * Perform that read to preserve the original's fault behavior.
     */
    const uint32_t p = rd32(sp0 + 4u);
    (void)rd32(p);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10320f4e(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_10320f4e(g, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
