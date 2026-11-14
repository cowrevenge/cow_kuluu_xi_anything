/* f_0x101f1cc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the first stack argument (a 16-bit value) equals 6, calls FUN_101f2600 with ecx loaded from a global; otherwise returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101f1cc0(Guest* g, uint32_t param)
{
    if ((uint16_t)param == 6u)
    {
        const uint32_t ecx = rd32(COW_IMG(0x10663740u));
        cow_thiscall_cdecl(g, COW_IMG(0x101f2600u), ecx, 0);
    }

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f1cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd16(sp0 + 4u);
    const uint32_t result = cow_fn_101f1cc0(g, param);
    g->esp = sp0;
    rt_return(g, result, 16u);
}
/* COW_ADAPTER END */
