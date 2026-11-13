/* f_0x101a5ef0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If a byte flag in the object pointed to by [this+0x14] is zero, calls FUN_10118b60(5, 2).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101a5ef0(Guest* g, uint32_t self)
{
    const uint32_t eax = rd32(self + 0x14u);
    const uint32_t b = rd8(eax + 0x235Cu);

    if (b != 0u)
    {
        g->eax = eax;
        g->edx = (g->edx & 0xFFFFFF00u) | b;
        return eax;
    }

    g->eax = eax;
    g->edx = (g->edx & 0xFFFFFF00u) | b;
    g->ecx = rd32(self + 8u);

    cow_stdcall(g, COW_IMG(0x10118b60u), 2u, 5u, 2u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a5ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101a5ef0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
