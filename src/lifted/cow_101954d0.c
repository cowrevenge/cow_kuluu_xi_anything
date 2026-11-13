/* f_0x101954d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the value at self+4 plus 44 times the stack argument when that value is non-null, otherwise returns 0, and sets edx to 5 times the stack argument only on the non-null path.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101954d0(Guest* g, uint32_t base, uint32_t index)
{
    if (base == 0u)
    {
        return 0u;
    }

    const uint32_t edx = (uint32_t)(index + index * 4u);
    g->edx = edx;

    uint32_t eax = (uint32_t)(index + edx * 2u);
    eax = (uint32_t)(base + eax * 4u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101954d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t base = rd32(self + 4u);
    g->ecx = base;

    uint32_t index = 0u;
    if (base != 0u)
    {
        index = rd32(sp0 + 4u);
    }

    const uint32_t result = cow_fn_101954d0(g, base, index);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
