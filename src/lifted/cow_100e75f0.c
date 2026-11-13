/* f_0x100e75f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the low byte of eax with bits 8-31 preserved, ANDed with 1 in the low bit (i.e., returns (param_1's byte at offset 0x98) & 1, but only the low byte is masked; upper bytes come from the pointer

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e75f0(Guest* g, uint32_t param_1)
{
    (void)g;
    /* mov eax, [esp+4] -> eax = param_1 */
    /* mov al, byte ptr [eax + 0x98] -> low byte of eax replaced by *(uint8_t*)(param_1 + 0x98), upper 24 bits unchanged */
    uint32_t eax = (param_1 & 0xFFFFFF00u) | rd8(param_1 + 0x98u);
    /* and al, 1 -> low byte &= 1, upper bytes unchanged */
    eax = (eax & 0xFFFFFF00u) | ((uint8_t)eax & 1u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e75f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100e75f0(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
