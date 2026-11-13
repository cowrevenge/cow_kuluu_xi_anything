/* f_0x10087870 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10087660, then returns 0 if its low byte was zero, otherwise 0xFFFF0000 masked with the 16-bit word at 0x10480822.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10087870(Guest* g)
{
    uint32_t callee_eax = cow_cdecl(g, COW_IMG(0x10087660u), 0u);
    uint8_t al = (uint8_t)callee_eax;

    /* neg al sets CF = (al != 0); sbb eax, eax then makes eax either 0 or 0xFFFFFFFF. */
    uint32_t mask = (al != 0u) ? 0xFFFFFFFFu : 0u;

    /* and ax, word ptr [0x10480822] keeps the high 16 bits of eax and masks the low 16 bits. */
    uint32_t table = (uint32_t)rd16(COW_IMG(0x10480822u));
    return (mask & 0xFFFF0000u) | (mask & table);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10087870(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
