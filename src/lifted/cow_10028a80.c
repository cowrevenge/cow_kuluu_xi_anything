/* f_0x10028a80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10028730 with the sole stack argument, stores its result into the original argument slot, then tail-calls FUN_10028a50 with that stored value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10028a80(Guest* g, uint32_t param_1)
{
    uint32_t eax;

    /* 10028a80: mov eax, dword ptr [esp + 4] */
    eax = param_1;

    /* 10028a84: push eax
       10028a85: call 0x10028730
       10028a8a: add esp, 4
       The callee is cdecl with a bare ret, so the caller pops the 4-byte argument. */
    eax = cow_cdecl(g, COW_IMG(0x10028730u), 1u, eax);

    /* After the call and add esp, 4, esp is back at the original sp0.
       10028a8d: mov dword ptr [esp + 4], eax */
    wr32(g->esp + 4u, eax);

    /* 10028a91: jmp 0x10028a50
       Tail call: FUN_10028a50 is entered with esp pointing at the original return address,
       and its sole stack argument is the value just stored at [esp + 4]. */
    eax = cow_cdecl(g, COW_IMG(0x10028a50u), 1u, eax);

    /* Preserve the final edx left by the tail-called function. */
    g->edx = g->edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10028a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10028a80(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
