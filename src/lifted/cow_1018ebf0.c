/* f_0x1018ebf0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 when the byte at [this->0xc + 0x60] is zero; otherwise tail-calls FUN_1018e780 with that pointer as `this`.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018ebf0(Guest* g, uint32_t self)
{
    const uint32_t ecx = rd32(self + 0xcu);
    const uint8_t al = rd8(ecx + 0x60u);

    if (al == 0u)
    {
        return 1u;
    }

    /* Preserve the effect of `mov al, byte ptr [ecx + 0x60]` in case the tail callee reads eax. */
    g->eax = (g->eax & 0xFFFFFF00u) | (uint32_t)al;

    return cow_thiscall_cdecl(g, COW_IMG(0x1018e780u), ecx, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018ebf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1018ebf0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
