/* f_0x10291310 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the function pointer at offset 0x40 of the argument is non-null, tail-call it with the argument as its sole stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10291310(Guest* g, uint32_t param)
{
    g->ecx = param;

    const uint32_t fn = rd32(param + 0x40u);
    if (fn == 0u)
    {
        return;
    }

    /* Original: mov dword ptr [esp + 4], ecx; jmp eax
       The stack argument is already param, but keep the guest-visible call setup. */
    cow_cdecl(g, fn, 1u, param);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10291310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_10291310(g, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
