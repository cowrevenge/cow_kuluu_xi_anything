/* f_0x10081a30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   repeatedly obtains objects from FUN_10085240 and invokes their virtual slot 0x18 with argument 1 until FUN_10085240 returns null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10081a30(Guest* g)
{
    cow_cdecl(g, COW_IMG(0x10085240u), 0);
    uint32_t obj = g->eax;

    while (obj != 0u)
    {
        uint32_t edx = rd32(obj);
        uint32_t target = rd32(edx + 0x18u);

        cow_thiscall(g, target, obj, 1, 1u);

        cow_cdecl(g, COW_IMG(0x10085240u), 0);
        obj = g->eax;
    }

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10081a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10081a30(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
