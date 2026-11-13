/* f_0x100feea0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the second stack argument unchanged if it is non-null and its first byte is 0 or 3; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100feea0(Guest* g, uint32_t arg1, uint32_t arg2)
{
    (void)arg1;

    if (arg2 == 0u)
    {
        return 0u;
    }

    const uint32_t c = rd8(arg2);

    /* Original: mov cl, byte ptr [eax] */
    g->ecx = (g->ecx & 0xFFFFFF00u) | (c & 0xFFu);

    if (c == 0u || c == 3u)
    {
        return arg2;
    }

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100feea0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Original only reads [esp + 8]; do not read [esp + 4] to avoid extra memory touches. */
    const uint32_t arg2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_100feea0(g, 0u, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
