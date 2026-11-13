/* f_0x102b3340 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1029b9f0 with the non-null dword at offset 0x44 of the stack argument, preserving the callee's final eax/edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102b3340(Guest* g, uint32_t param_1)
{
    uint32_t v = rd32(param_1 + 0x44u);

    if (v != 0u)
    {
        g->eax = v;
        cow_cdecl(g, COW_IMG(0x1029b9f0u), 1u, v);
    }
    else
    {
        g->eax = v;
    }

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102b3340(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
