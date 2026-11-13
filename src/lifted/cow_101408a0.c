/* f_0x101408a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the byte at self+0x10 is nonzero, calls FUN_10118f70 with this=[self+8] and argument self+0x14.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101408a0(Guest* g, uint32_t self)
{
    const uint32_t flag = rd8(self + 0x10u);

    if (flag == 0u)
    {
        /* mov al, byte ptr [ecx + 0x10] leaves the upper 24 bits of eax unchanged. */
        const uint32_t final_eax = (g->eax & 0xFFFFFF00u) | (flag & 0xFFu);
        g->edx = g->edx;
        return final_eax;
    }

    const uint32_t arg = self + 0x14u;
    const uint32_t new_ecx = rd32(self + 8u);

    cow_thiscall(g, COW_IMG(0x10118f70u), new_ecx, 1u, arg);

    const uint32_t final_eax = g->eax;
    const uint32_t final_edx = g->edx;
    g->edx = final_edx;
    return final_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101408a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101408a0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
