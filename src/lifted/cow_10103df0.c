/* f_0x10103df0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns (value * 50) with its low byte replaced by 1 when (value * 50) is unsigned less than 0x40, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10103df0(Guest* g, uint32_t unused, uint32_t value)
{
    (void)unused;

    uint32_t eax = value;
    eax = (uint32_t)(eax + eax * 4u);
    eax = (uint32_t)(eax + eax * 4u);
    eax = (uint32_t)(eax + eax);

    /* edx is never written by the original; leave it alone. */
    g->edx = g->edx;

    return (eax & 0xFFFFFF00u) | (uint32_t)(eax < 0x40u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103df0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = 0u;
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10103df0(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
