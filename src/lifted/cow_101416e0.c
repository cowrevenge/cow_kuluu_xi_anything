/* f_0x101416e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a predicate on a global object and, if it returns true, tail-calls another routine on the same object.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101416e0(Guest* g)
{
    uint32_t ecx = rd32(COW_IMG(0x10578214u));
    cow_thiscall_cdecl(g, COW_IMG(0x1013eff0u), ecx, 0);

    if (((uint8_t)g->eax) == 0)
    {
        g->edx = g->edx;
        return g->eax;
    }

    ecx = rd32(COW_IMG(0x10578214u));
    cow_thiscall_cdecl(g, COW_IMG(0x1013f060u), ecx, 0);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101416e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101416e0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
