/* f_0x1031782d - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0 unless the first dword of the object pointed to by the argument is the MSVC C++ exception code, in which case it tail-calls 0x1032181c.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031782d(Guest* g, uint32_t param1)
{
    const uint32_t p = rd32(param1);
    if (rd32(p) != 0xE06D7363u)
    {
        return 0u;
    }

    return cow_cdecl(g, COW_IMG(0x1032181cu), 1u, param1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031782d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1031782d(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
