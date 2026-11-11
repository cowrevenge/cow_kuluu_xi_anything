/* f_0x10258cd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   tail-calls FUN_1018d470 with ecx advanced by four bytes, preserving its returned eax and edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10258cd0(Guest* g, uint32_t self)
{
    const uint32_t adjusted_self = self + 4u;

    g->ecx = adjusted_self;

    const uint32_t result = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), adjusted_self, 0u);

    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10258cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10258cd0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
