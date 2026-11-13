/* f_0x102acc30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the dword at (stack argument + 0x34) is non-zero, tail-call FUN_10285760 with that address.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102acc30(Guest* g, uint32_t param_1, uint32_t sp0)
{
    const uint32_t eax = param_1 + 0x34u;

    if (rd32(eax) == 0u)
        return;

    /*
     * Original tail call:
     *   mov  dword ptr [esp + 4], eax
     *   jmp  0x10285760
     *
     * FUN_10285760 is entered with esp still equal to sp0 and reads its
     * parameter from [esp + 4].  cow_cdecl will push one argument and a
     * return address, so raise the current esp by 8 before the call to make
     * the callee see esp == sp0.
     */
    wr32(sp0 + 4u, eax);

    const uint32_t saved_esp = g->esp;
    g->esp = sp0 + 8u;
    cow_cdecl(g, COW_IMG(0x10285760u), 1u, eax);
    g->esp = saved_esp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102acc30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    cow_fn_102acc30(g, param_1, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
