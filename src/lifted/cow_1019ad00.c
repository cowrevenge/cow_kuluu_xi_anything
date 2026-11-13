/* f_0x1019ad00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the stack argument equals 8, clears the two bytes at self+0x20 and self+0x21 and returns eax with its low byte zeroed; otherwise returns eax unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1019ad00(Guest* g, uint32_t self, uint32_t arg)
{
    uint32_t eax = g->eax;

    if (arg == 8u)
    {
        eax &= 0xFFFFFF00u;
        g->eax = eax;
        wr8(self + 0x20u, 0u);
        wr8(self + 0x21u, 0u);
    }

    g->edx = g->edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019ad00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1019ad00(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
