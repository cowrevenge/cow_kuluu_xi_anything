/* f_0x100956a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns whether the selected 32-bit value equals 0x55, using the stack argument unless it is 0xFF, in which case it uses [this + 0x170].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100956a0(Guest* g, uint32_t self, uint32_t arg)
{
    (void)g;

    uint32_t value = arg;
    if (value == 0xFFu)
    {
        value = rd32(self + 0x170u);
    }

    return (value & 0xFFFFFF00u) | ((value == 0x55u) ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100956a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100956a0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
