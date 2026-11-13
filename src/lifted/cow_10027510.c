/* f_0x10027510 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10026eb0 with the two stack arguments, then calls FUN_100274b0 with the first stack argument, returning the final eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10027510(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t arg1)
{
    const uint32_t saved_esi = g->esi;

    /* Original:
       mov eax, [esp+8]   -> eax = arg1
       push esi           -> save caller esi at sp0-4
       mov esi, [esp+8]   -> esi = arg0
    */
    g->eax = arg1;
    g->esi = arg0;

    /* Reproduce the caller-side stack slot written by "push esi".
       This keeps the stack layout seen by the callee identical to the original. */
    wr32(sp0 - 4u, saved_esi);

    /* Before the first call, original esp is sp0-12 after pushing the two arguments.
       cow_cdecl starts from the caller esp before its own argument pushes, so use sp0-4. */
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2u, arg0, arg1);

    /* After the first call, original esp is sp0-12.
       The second call pushes one argument, so cow_cdecl should start from sp0-12. */
    g->esp = sp0 - 12u;
    cow_cdecl(g, COW_IMG(0x100274b0u), 1u, g->esi);

    /* Original restores the saved esi with pop esi. */
    g->esi = saved_esi;

    /* Original returns whatever eax the second callee left in eax. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10027510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10027510(g, sp0, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
