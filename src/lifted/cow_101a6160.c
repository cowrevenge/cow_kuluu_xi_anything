/* f_0x101a6160 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second stack argument's low byte is nonzero, tail-calls FUN_101a2b40 with ecx loaded from a global; otherwise returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101a6160(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t eax_in)
{
    uint32_t al = (uint32_t)(uint8_t)rd8(g->esp + 8u);
    uint32_t eax = (eax_in & 0xFFFFFF00u) | al;

    if (al == 0u)
    {
        g->edx = g->edx;
        return eax;
    }

    g->ecx = rd32(COW_IMG(0x10662794u));

    cow_cdecl(g, COW_IMG(0x101a2b40u), 2u, arg0, arg1);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t eax_in = g->eax;

    const uint32_t result = cow_fn_101a6160(g, arg0, arg1, eax_in);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
