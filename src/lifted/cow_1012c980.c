/* f_0x1012c980 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls three helper routines using a zeroed 8-byte local buffer and the object's field at +8 as `this` for the first call.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1012c980(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t buf = cow_frame(g, sp0, 16u);

    const uint32_t saved_esi = g->esi;

    g->esp = sp0 - 8u;
    g->eax = 0u;

    g->esi = self;

    wr16(buf + 0u,  (uint16_t)g->eax);
    wr16(buf + 2u,  (uint16_t)g->eax);
    wr16(buf + 4u,  (uint16_t)g->eax);
    wr16(buf + 6u,  (uint16_t)g->eax);

    g->ecx = rd32(self + 8u);

    cow_thiscall(g, COW_IMG(0x10118f70u), g->ecx, 1u, buf);

    uint32_t ecx = rd32(buf + 2u);
    uint32_t edx = rd32(buf + 0u);

    cow_thiscall(g, COW_IMG(0x1012c9d0u), self, 2u, edx, ecx);

    uint32_t eax = rd32(buf + 2u);
    ecx = rd32(buf + 0u);

    cow_thiscall(g, COW_IMG(0x1012ca00u), self, 2u, ecx, eax);

    g->esi = saved_esi;
    g->esp = sp0;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012c980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1012c980(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
