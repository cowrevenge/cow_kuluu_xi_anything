/* f_0x10305630 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   zeroes the 32-bit word at the address stored in [esp+0x10] and returns that address in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10305630(Guest* g, uint32_t sp0)
{
    (void)g;
    const uint32_t ptr = rd32(sp0 + 0x10u);
    wr32(ptr, 0u);
    return ptr; /* eax still holds the loaded pointer after and dword ptr [eax], 0 */
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10305630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10305630(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
