/* f_0x1013a4f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears two 16-bit fields of the object, then calls FUN_10118f70 with the object's +0x14 address as its sole stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1013a4f0(Guest* g, uint32_t self)
{
    const uint32_t eax = self + 0x14u;

    wr16(self + 0x1cu, (uint16_t)0x0000u);
    wr16(self + 0x1eu, (uint16_t)0x003cu);

    const uint32_t ecx = rd32(self + 8u);

    cow_thiscall(g, COW_IMG(0x10118f70u), ecx, 1u, eax);

    const uint32_t edx_after = g->edx;
    g->edx = edx_after;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a4f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1013a4f0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
