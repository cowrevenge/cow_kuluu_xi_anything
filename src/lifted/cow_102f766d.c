/* f_0x102f766d - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10312eed with the second stack argument when both stack arguments are non-zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102f766d(Guest* g, uint32_t param1, uint32_t param2)
{
    if (param1 != 0u && param2 != 0u)
    {
        cow_cdecl(g, COW_IMG(0x10312eedu), 1u, param2);

        /* Original: pop ecx after the call, loading the pushed argument into ecx. */
        g->ecx = param2;

        /* eax and edx are whatever the callee left in them. */
        g->edx = g->edx;
    }

    /* If no call occurred, eax/edx are unchanged from entry. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f766d(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t param1 = rd32(sp0 + 4u);
    uint32_t param2 = 0u;

    /* The original only reads [esp + 8] if [esp + 4] is non-zero. */
    if (param1 != 0u)
    {
        param2 = rd32(sp0 + 8u);
    }

    const uint32_t result = cow_fn_102f766d(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
