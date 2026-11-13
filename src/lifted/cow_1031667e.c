/* f_0x1031667e - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the caller's EAX, the dword at [EBP+8], and EBP itself into three consecutive dwords of a fixed global block.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1031667e(Guest* g, uint32_t eax, uint32_t ebp)
{
    const uint32_t base = COW_IMG(0x103D0370u);
    const uint32_t v = rd32(ebp + 8u);

    wr32(base + 8u, v);
    wr32(base + 4u, eax);
    wr32(base + 0xCu, ebp);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031667e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t eax = g->eax;
    const uint32_t ebp = g->ebp;

    cow_fn_1031667e(g, eax, ebp);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
