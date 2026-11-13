/* f_0x10164aa0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Increments the 16-bit field at [this+0x2c] into [this->field8+0x4c], then calls FUN_10118170 with this=[this->field8] and the reloaded 16-bit value as its stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10164aa0(Guest* g, uint32_t self, uint32_t eax_in)
{
    const uint32_t edx = rd32(self + 0x8u);
    const uint16_t inc_val = (uint16_t)(rd16(self + 0x2cu) + 1u);

    wr16(edx + 0x4cu, inc_val);

    const uint32_t ecx = rd32(self + 0x8u);
    const uint32_t eax = (eax_in & 0xFFFF0000u) | (uint32_t)rd16(ecx + 0x4cu);

    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;

    cow_thiscall(g, COW_IMG(0x10118170u), ecx, 1u, eax);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10164aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10164aa0(g, g->ecx, g->eax);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
