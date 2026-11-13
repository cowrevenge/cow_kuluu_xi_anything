/* f_0x10054360 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100543a0 when the pointed-to value is 1 or 4, otherwise returns value - 4.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10054360(Guest* g, uint32_t self, uint32_t ptr)
{
    const uint32_t v = rd32(ptr);

    if (v == 1u || v == 4u)
    {
        g->eax = 0u;
        g->ecx = self;
        cow_cdecl(g, COW_IMG(0x100543a0u), 1u, self);
        g->ecx = self;
        return g->eax;
    }

    return v - 4u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10054360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t ptr = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10054360(g, self, ptr);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
