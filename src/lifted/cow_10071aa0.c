/* f_0x10071aa0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10071de0 with this in ecx, then conditionally calls thunk_FUN_10028aa0 with the current esi if the low bit of the stack argument is set, returning the current esi and restoring the caller's 

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10071aa0(Guest* g, uint32_t sp0)
{
    /* push esi */
    wr32(sp0 - 4u, g->esi);
    g->esp = sp0 - 4u;

    /* mov esi, ecx */
    g->esi = g->ecx;

    /* call 0x10071de0 */
    cow_thiscall_cdecl(g, COW_IMG(0x10071de0u), g->ecx, 0u);
    g->esp = sp0 - 4u;

    /* test byte ptr [esp + 8], 1 */
    if ((rd8(sp0 + 4u) & 1u) != 0u)
    {
        /* push esi; call 0x10028710; add esp, 4 */
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10028710u), 1u, g->esi);
        g->esp = sp0 - 4u;
    }

    /* mov eax, esi */
    const uint32_t result = g->esi;

    /* pop esi */
    g->esi = rd32(sp0 - 4u);

    /* edx is whatever the last callee left in it */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10071aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10071aa0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
