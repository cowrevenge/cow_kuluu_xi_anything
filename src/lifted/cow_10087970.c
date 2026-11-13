/* f_0x10087970 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears bit 1 of the byte at 0x10480824, sets bit 0 of the byte at 0x104808a8, and returns eax with its low byte set to the modified second byte while preserving the original upper 24 bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10087970(Guest* g)
{
    const uint32_t addr1 = COW_IMG(0x10480824u);
    const uint32_t addr2 = COW_IMG(0x104808a8u);

    uint8_t v1 = (uint8_t)(rd8(addr1) & 0xFDu);
    wr8(addr1, v1);

    uint8_t v2 = (uint8_t)(rd8(addr2) | 1u);
    wr8(addr2, v2);

    return (g->eax & 0xFFFFFF00u) | (uint32_t)v2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10087970(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
