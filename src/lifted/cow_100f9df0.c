/* f_0x100f9df0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100f9e10 when the argument is non-null and its byte at +0xc is non-zero, then returns eax with its low byte forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f9df0(Guest* g, uint32_t param)
{
    if (param == 0u)
    {
        return 1u;
    }

    const uint8_t b = (uint8_t)rd8(param + 0xCu);

    /* Original: mov cl, byte ptr [eax + 0xc] */
    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint32_t)b;

    if (b == 0u)
    {
        /* Original: mov al, 1 preserves the upper 24 bits of eax, which is still param. */
        return (param & 0xFFFFFF00u) | 1u;
    }

    /* Original has eax = param and ecx low byte = b before the call. */
    g->eax = param;

    /* Original: push eax; call 0x100f9e10; add esp, 4 */
    cow_cdecl(g, COW_IMG(0x100f9e10u), 1u, param);

    /* Original: mov al, 1 preserves the upper 24 bits of eax returned by the callee. */
    return (g->eax & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f9df0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_100f9df0(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
