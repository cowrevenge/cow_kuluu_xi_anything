/* f_0x10152f00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the thunk at 0x10152ef0 with (0x12, param) and returns its eax, adding 4 when param equals 0x16.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10152f00(Guest* g, uint32_t param)
{
    cow_cdecl(g, COW_IMG(0x10152ef0u), 2u, 0x12u, param);
    uint32_t eax = g->eax;

    if (param == 0x16u)
    {
        eax += 4u;
    }

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10152f00(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
