/* f_0x1022b070 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the 16-bit table entry at index `param_1` from a global word array, zero-extended into eax's low half while preserving its upper half.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1022b070(Guest* g, uint32_t param_1)
{
    (void)g;
    /* mov eax, [esp+4] -> eax = param_1 */
    /* mov ax, word ptr [eax*2 + 0x106671e0] -> low 16 bits of eax replaced by table entry, upper 16 preserved */
    uint32_t addr = COW_IMG(0x106671E0u) + param_1 * 2u;
    uint16_t val = rd16(addr);
    /* eax was param_1 from the first mov, so upper half is (param_1 & 0xFFFF0000) */
    return (param_1 & 0xFFFF0000u) | (uint32_t)val;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1022b070(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
