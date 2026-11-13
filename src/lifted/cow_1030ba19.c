/* f_0x1030ba19 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   tail-calls the function at [obj + 0x24] with (obj[0x28], param_1), preserving edx and returning eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1030ba19(Guest* g, uint32_t param_1, uint32_t param_2)
{
    const uint32_t eax = param_2;
    const uint32_t arg0 = rd32(eax + 0x28u);
    const uint32_t target = rd32(eax + 0x24u);

    g->eax = eax;
    cow_stdcall(g, target, 1u, arg0);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030ba19(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_1030ba19(g, param_1, param_2);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
