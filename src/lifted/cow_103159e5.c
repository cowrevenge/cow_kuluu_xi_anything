/* f_0x103159e5 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls each non-null function pointer in the half-open range [begin, end), advancing by 4 bytes.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_103159e5(Guest* g, uint32_t sp0, uint32_t begin)
{
    const uint32_t saved_esi = g->esi;
    uint32_t cur = begin;

    /* Original has pushed esi, so its esp during the loop is sp0 - 4. */
    g->esp = sp0 - 4u;

    while (cur < rd32(sp0 + 8u))
    {
        const uint32_t target = rd32(cur);

        if (target != 0u)
        {
            /* At the call site: eax = target, esi = cur, esp = sp0 - 4. */
            g->eax = target;
            g->esi = cur;
            g->esp = sp0 - 4u;

            cow_cdecl(g, target, 0u);
        }

        cur += 4u;
    }

    /* Original pops esi before returning, restoring the caller's esi. */
    g->esi = saved_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103159e5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t begin = rd32(sp0 + 4u);

    cow_fn_103159e5(g, sp0, begin);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
