/* f_0x10101cb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10101bf0 with the stack argument, masks its return value to 8 bits, and returns the byte from the table at 0x10364470 indexed by that value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10101cb0(Guest* g, uint32_t param)
{
    uint32_t eax = cow_cdecl(g, COW_IMG(0x10101bf0u), 1u, param);
    eax &= 0xFFu;
    return rd8(COW_IMG(0x10364470u) + eax);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10101cb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10101cb0(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
