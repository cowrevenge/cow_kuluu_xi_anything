/* f_0x101e3680 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   ORs the low nibble of param_2 shifted left by 6 into the 32-bit word at param_1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101e3680(Guest* g, uint32_t param_1, uint32_t param_2)
{
    const uint32_t ecx = (param_2 & 0xFu) << 6u;
    const uint32_t edx = rd32(param_1) | ecx;

    wr32(param_1, edx);

    g->ecx = ecx;
    g->edx = edx;
    g->eax = param_1;

    return param_1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd8(sp0 + 8u);

    const uint32_t result = cow_fn_101e3680(g, param_1, param_2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
