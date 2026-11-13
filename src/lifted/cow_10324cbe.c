/* f_0x10324cbe - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 when the imported predicate at [0x103292a4] returns zero for the argument, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10324cbe(Guest* g, uint32_t param)
{
    const uint32_t saved_esi = g->esi;

    /* push 1 / pop esi */
    g->esi = 1u;

    /* call dword ptr [0x103292a4] */
    const uint32_t target = rd32(COW_IMG(0x103292a4u));
    cow_stdcall(g, target, 1u, param);

    /* test eax, eax / je / xor esi, esi */
    if (g->eax != 0u)
    {
        g->esi = 0u;
    }

    /* mov eax, esi */
    const uint32_t result = g->esi & 0xFFu;

    /* pop esi */
    g->esi = saved_esi;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10324cbe(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10324cbe(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
