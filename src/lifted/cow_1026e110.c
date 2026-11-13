/* f_0x1026e110 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds 0x5c to the first stack argument and tail-calls 0x10274670 with the modified argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1026e110(Guest* g, uint32_t param_1, uint32_t param_2)
{
    const uint32_t adjusted_param_1 = param_1 + 0x5cu;

    const uint32_t eax = cow_cdecl(g, COW_IMG(0x10274670u), 2u, adjusted_param_1, param_2);

    /* The tail-called function leaves edx; preserve whatever it produced. */
    g->edx = g->edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026e110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_1026e110(g, param_1, param_2);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* tail callee ends in bare ret */
}
/* COW_ADAPTER END */
