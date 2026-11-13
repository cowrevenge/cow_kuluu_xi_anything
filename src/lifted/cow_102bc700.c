/* f_0x102bc700 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   forwards its two stack arguments to FUN_102bc4a0, then forwards the second argument to FUN_102bc600.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102bc700(Guest* g, uint32_t param1, uint32_t param2)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t sp0 = g->esp;

    /* Original:
       mov eax, [esp+4]
       push esi
       mov esi, [esp+0xc]
       push esi
       push eax
       call 0x102bc4a0
    */
    g->eax = param1;
    g->esi = param2;

    /* Match the stack pointer just before the original's argument pushes. */
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102bc4a0u), 2u, param1, param2);

    /* Original:
       push esi
       call 0x102bc600
       add esp, 0xc
    */
    g->esi = param2;

    /* At this point the original still has the first call's two arguments on the
       stack, so the second callee sees them below its own argument.  Preserve
       that by starting the second call from the original pre-push stack pointer. */
    g->esp = sp0 - 12u;
    cow_cdecl(g, COW_IMG(0x102bc600u), 1u, param2);

    /* The original restores esi from the saved value pushed at entry. */
    g->esi = entry_esi;

    /* eax and edx are whatever the last call left behind. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102bc700(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
