/* f_0x10095680 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 if the selected 32-bit value (the stack argument, or the object field at +0x170 when that argument is 0xFF) equals 5, otherwise the same value with its low byte cleared.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10095680(Guest* g, uint32_t self, uint32_t arg)
{
    uint32_t eax = arg;

    if (arg == 0xFFu)
    {
        eax = rd32(self + 0x170u);
    }

    if (eax == 5u)
    {
        eax = (eax & 0xFFFFFF00u) | 1u;
    }
    else
    {
        eax = eax & 0xFFFFFF00u;
    }

    (void)g;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10095680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10095680(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
