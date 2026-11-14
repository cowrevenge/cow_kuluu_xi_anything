/* f_0x10324ca2 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if the imported two-argument predicate returns zero, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10324ca2(Guest* g, uint32_t param_1, uint32_t param_2)
{
    const uint32_t saved_esi = g->esi;

    /* Original sets esi = 1 before the call, then restores the caller's esi afterward. */
    g->esi = 1u;

    const uint32_t target = rd32(COW_IMG(0x103290b8u));
    const uint32_t r = cow_stdcall(g, target, 2u, param_1, param_2);

    g->esi = saved_esi;

    /* test eax, eax / je: full 32-bit zero test. */
    return (r == 0u) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10324ca2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10324ca2(g, param_1, param_2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
