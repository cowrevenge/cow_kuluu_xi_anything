/* f_0x102a20d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the argument's field at +0x44 is nonzero, tail-call FUN_1029b960 with that field as its sole argument; otherwise return.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102a20d0(Guest* g, uint32_t sp0, uint32_t param)
{
    const uint32_t v = rd32(param + 0x44u);

    if (v == 0u)
        return;

    /*
     * The original does:
     *   mov dword ptr [esp + 4], eax
     *   jmp 0x1029b960
     *
     * So the callee is entered with the *same* esp as this function had at entry:
     *   [esp]     = caller's return address
     *   [esp + 4] = v
     *
     * cow_cdecl normally emulates a real call, pushing argument + return address.
     * To make the callee see the original tail-jmp stack layout, pre-advance esp
     * by the 8 bytes cow_cdecl will use for one cdecl argument.
     */
    g->esp = sp0 + 8u;
    cow_cdecl(g, COW_IMG(0x1029b960u), 1u, v);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a20d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_102a20d0(g, sp0, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
