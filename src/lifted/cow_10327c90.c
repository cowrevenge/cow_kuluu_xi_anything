/* f_0x10327c90 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_1025e8c0 with ecx set to ebp - 0x18, returning the callee's eax and edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327c90(Guest* g, uint32_t ebp, uint32_t edx)
{
    const uint32_t ecx = ebp - 0x18u;

    g->edx = edx;
    g->ecx = ecx;

    cow_thiscall_cdecl(g, COW_IMG(0x1025e8c0u), ecx, 0);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327c90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10327c90(g, g->ebp, g->edx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
