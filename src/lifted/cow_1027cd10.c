/* f_0x1027cd10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   zeroes a 12-byte local buffer and calls FUN_1027cff0 with the three stack arguments and the buffer address.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1027cd10(Guest* g, uint32_t sp0, uint32_t param1, uint32_t param2, uint32_t param3)
{
    const uint32_t buf = cow_frame(g, sp0, 0xCu);

    wr32(buf + 0x0u, 0u);
    wr32(buf + 0x4u, 0u);
    wr32(buf + 0x8u, 0u);

    cow_cdecl(g, COW_IMG(0x1027cff0u), 4u, param1, param2, buf, param3);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027cd10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param3 = rd32(sp0 + 12u);

    cow_fn_1027cd10(g, sp0, param1, param2, param3);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
