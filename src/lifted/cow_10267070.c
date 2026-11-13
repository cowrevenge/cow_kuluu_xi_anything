/* f_0x10267070 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds 0x10 to the first stack argument, stores it back, then writes 1 to the second stack argument if it is non-null and returns S_OK, otherwise returns E_POINTER.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10267070(Guest* g, uint32_t sp0)
{
    uint32_t ecx = rd32(sp0 + 4u);
    ecx += 0x10u;
    wr32(sp0 + 4u, ecx);

    uint32_t eax = rd32(sp0 + 8u);
    uint32_t result;

    if (eax == 0u)
    {
        result = 0x80004003u;
    }
    else
    {
        wr32(eax, 1u);
        result = 0u;
    }

    g->ecx = ecx;
    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10267070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10267070(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
