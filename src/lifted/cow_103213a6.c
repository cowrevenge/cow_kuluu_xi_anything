/* f_0x103213a6 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0 unless the pointer argument points to a pointer whose first dword is 0xE06D7363; otherwise tail-calls 0x1032181c and returns its result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_103213a6(Guest* g, uint32_t param_1)
{
    uint32_t p = rd32(param_1);
    if (rd32(p) != 0xE06D7363u)
    {
        return 0u;
    }
    return cow_stdcall(g, COW_IMG(0x1032181cu), 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103213a6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_103213a6(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
