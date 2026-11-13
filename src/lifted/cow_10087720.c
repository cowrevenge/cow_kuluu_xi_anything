/* f_0x10087720 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   calls FUN_10087660 and returns the global dword at 0x10480808 if its byte result is nonzero, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10087720(Guest* g)
{
    cow_cdecl(g, COW_IMG(0x10087660u), 0u);

    const uint32_t ecx = rd32(COW_IMG(0x10480808u));
    const uint32_t result = (((uint8_t)g->eax) != 0u) ? ecx : 0u;

    g->eax = result;
    g->ecx = ecx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10087720(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
