/* f_0x102bc7a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_102bc480 and then FUN_102bc6e0 with the single stack argument, preserving esi.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102bc7a0(Guest* g, uint32_t param, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;

    /* Before the first call the original has:
       push esi            -> esp = sp0 - 4
       push param          -> esp = sp0 - 8
       call                -> target sees esp = sp0 - 12
       cow_cdecl will push the argument and return address itself, so set esp
       to the value the original had just before its push of the argument. */
    g->esp = sp0 - 4u;
    g->esi = param;
    cow_cdecl(g, COW_IMG(0x102bc480u), 1u, param);

    /* After the first call the original still has the first argument on the stack:
       esp = sp0 - 8
       push param          -> esp = sp0 - 12
       call                -> target sees esp = sp0 - 16 */
    g->esp = sp0 - 8u;
    g->esi = param;
    cow_cdecl(g, COW_IMG(0x102bc6e0u), 1u, param);

    /* Restore the caller-saved register exactly as the original pop esi does. */
    g->esi = saved_esi;
    g->esp = sp0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc7a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_102bc7a0(g, param, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
