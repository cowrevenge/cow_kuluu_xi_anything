/* f_0x100fee20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the second stack argument if it is non-null and its first byte is 0 or 2; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_100fee20(Guest* g, uint32_t arg1, uint32_t arg2)
{
    (void)g;
    (void)arg1;

    uint32_t eax = arg2;

    if (eax == 0u)
    {
        return 0u;
    }

    uint32_t cl = rd8(eax);

    if (cl == 0u || cl == 2u)
    {
        return eax;
    }

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fee20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t edx0 = g->edx;

    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_100fee20(g, arg1, arg2);

    g->esp = sp0;
    g->edx = edx0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
