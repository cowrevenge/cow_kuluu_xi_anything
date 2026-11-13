/* f_0x100e7670 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   returns the stack argument with its low byte replaced by (byte at arg+8) & 3.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e7670(Guest* g, uint32_t param)
{
    (void)g;
    /* mov eax, [esp+4]; mov al, [eax+8]; and al, 3
       Only the low byte of eax is modified; upper 3 bytes remain from param. */
    return (param & 0xFFFFFF00u) | ((uint32_t)(rd8(param + 8u) & 0x3u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100e7670(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
