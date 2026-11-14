/* f_0x100e67c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100dc080, adds its return value to the dword at [global+0x138], stores the sum at [global+0x13c], and returns the global pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e67c0(Guest* g)
{
    uint32_t callee_result = cow_cdecl(g, COW_IMG(0x100dc080u), 0u);
    uint32_t ecx = callee_result;
    uint32_t eax = rd32(COW_IMG(0x104df770u));

    ecx += rd32(eax + 0x138u);
    wr32(eax + 0x13cu, ecx);

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e67c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100e67c0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
