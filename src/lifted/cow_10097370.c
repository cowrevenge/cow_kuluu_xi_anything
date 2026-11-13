/* f_0x10097370 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the pointer argument is non-null, stores 1 at [ptr] and stores (byte_arg == 0) at [ptr + 4].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10097370(Guest* g, uint32_t param1, uint32_t param2)
{
    if (param1 != 0u)
    {
        /* mov cl, byte ptr [esp + 8] */
        g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)param2;

        /* mov byte ptr [eax], 1 */
        wr8(param1, 1u);

        /* test cl, cl / sete cl */
        const uint8_t v = (param2 == 0u) ? 1u : 0u;
        g->ecx = (g->ecx & 0xFFFFFF00u) | v;

        /* mov byte ptr [eax + 4], cl */
        wr8(param1 + 4u, v);
    }

    /* eax is the value loaded from [esp + 4]; edx is never written. */
    return param1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);

    /* Read the second stack argument only on the path where the original reads it. */
    uint32_t param2 = 0u;
    if (param1 != 0u)
    {
        param2 = rd8(sp0 + 8u);
    }

    const uint32_t result = cow_fn_10097370(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
