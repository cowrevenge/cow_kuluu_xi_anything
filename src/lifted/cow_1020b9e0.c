/* f_0x1020b9e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets byte 0x15 of the object to 1 when the first stack byte is zero and the second stack byte is nonzero, preserving the upper 24 bits of eax and the low byte of the last tested argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1020b9e0(Guest* g, uint32_t self, uint32_t initial_eax, uint32_t a0, uint32_t a1)
{
    (void)g;

    if (a0 != 0u)
    {
        return (initial_eax & 0xFFFFFF00u) | (a0 & 0xFFu);
    }

    if (a1 != 0u)
    {
        wr8((uint32_t)(self + 0x15u), 1u);
    }

    return (initial_eax & 0xFFFFFF00u) | (a1 & 0xFFu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020b9e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t initial_eax = g->eax;

    const uint32_t a0 = rd8((uint32_t)(sp0 + 4u));
    uint32_t a1 = 0u;

    if (a0 == 0u)
    {
        a1 = rd8((uint32_t)(sp0 + 8u));
    }

    const uint32_t result = cow_fn_1020b9e0(g, self, initial_eax, a0, a1);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
