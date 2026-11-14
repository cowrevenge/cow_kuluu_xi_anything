/* f_0x100876e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears in the global byte at 0x10480824 the bits that are set in the low byte of the stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100876e0(Guest* g, uint32_t param)
{
    (void)g;

    const uint32_t addr = COW_IMG(0x10480824u);

    uint32_t al = (uint8_t)param;
    al = (uint8_t)~(uint8_t)al;

    uint32_t cl = rd8(addr);
    cl = (uint8_t)(cl & al);

    wr8(addr, (uint8_t)cl);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100876e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);

    cow_fn_100876e0(g, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
