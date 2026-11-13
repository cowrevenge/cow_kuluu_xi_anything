/* f_0x100a8c40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Fetches an object from FUN_10081550(0x1047d600) and, if non-null, calls its vtable slot 0x33c with argument 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100a8c40(Guest* g)
{
    cow_thiscall_cdecl(g, COW_IMG(0x10081550u), COW_IMG(0x1047D600u), 0);

    if (g->eax == 0u)
    {
        return g->eax;
    }

    g->edx = rd32(g->eax);
    cow_thiscall(g, rd32(g->edx + 0x33cu), g->eax, 1u, 1u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a8c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100a8c40(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
