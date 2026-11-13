/* f_0x103028cb - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   calls _malloc with the second stack argument and returns, leaving eax from malloc and ecx popped.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_103028cb(Guest* g, uint32_t param1, uint32_t param2)
{
    (void)param1;
    /* push [esp+8] -> param2 is the argument to malloc */
    uint32_t result = cow_cdecl(g, COW_IMG(0x10312fd6u), 1, param2);
    /* pop ecx: the value popped is the return address pushed by call, which equals 0x103028d4 */
    g->ecx = 0x103028D4u + RD;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103028cb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t result = cow_fn_103028cb(g, param1, param2);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
