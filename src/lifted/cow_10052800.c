/* f_0x10052800 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the three stack arguments into the first three dwords of the object pointed to by ecx, preserving the original read/write order and final eax/edx values.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10052800(Guest* g, uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t sp0)
{
    wr32(self, arg1);

    uint32_t eax = rd32(sp0 + 0xcu);

    wr32(self + 4u, arg2);
    wr32(self + 8u, eax);

    g->edx = arg2;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10052800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10052800(g, self, arg1, arg2, sp0);

    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
