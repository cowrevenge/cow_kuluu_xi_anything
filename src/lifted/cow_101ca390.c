/* f_0x101ca390 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1011d840 with the stack argument and a zeroed two-dword local buffer, then returns the first dword of that buffer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ca390(Guest* g, uint32_t arg)
{
    const uint32_t sp0 = g->esp;
    const uint32_t buf = cow_frame(g, sp0, 8u);

    wr32(buf, 0u);
    wr32(buf + 4u, 0u);

    g->esp = buf;
    cow_cdecl(g, COW_IMG(0x1011d840u), 2u, arg, buf);

    return rd32(buf);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ca390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101ca390(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
