/* f_0x10327511 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer and, if its field at +8 is nonzero, calls FUN_10311bf0 with the field at +4.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327511(Guest* g, uint32_t self)
{
    const uint32_t cond = rd32(self + 8u);

    wr32(self, COW_IMG(0x1034b4c8u));

    if (cond != 0u)
    {
        const uint32_t arg = rd32(self + 4u);

        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, arg);

        /* Original: pop ecx after the call. */
        g->ecx = arg;
    }

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327511(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10327511(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
