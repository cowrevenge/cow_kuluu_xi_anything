/* f_0x10159f00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10159eb0 with the stack argument and returns 1 in eax's low byte if its result is nonzero, preserving eax's upper bytes and edx's post-call value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10159f00(Guest* g, uint32_t param)
{
    cow_cdecl(g, COW_IMG(0x10159eb0u), 1u, param);

    uint32_t eax = g->eax;
    uint32_t edx = g->edx;

    eax = (eax & 0xFFFFFF00u) | (uint32_t)((eax != 0u) ? 1u : 0u);

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10159f00(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
