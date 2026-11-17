/* f_0x10118a80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Fetches a record via FUN_10126500, then repeatedly calls FUN_10126520 until the record's first word is 2, copying two selected words to the caller's output pointers.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10118a80(Guest* g, uint32_t sp0, uint32_t self, uint32_t out0, uint32_t out1)
{
    const uint32_t esi = self + 0x14u;
    const uint32_t local = cow_frame(g, sp0, 4u);

    const uint32_t saved_esi = g->esi;

    uint32_t val = cow_thiscall_cdecl(g, COW_IMG(0x10126500u), esi, 0u);
    wr32(local, val);

    for (;;)
    {
        uint32_t eax = rd32(local);
        if (eax == 0u)
        {
            g->esi = saved_esi;
            return 0u;
        }

        eax = cow_thiscall(g, COW_IMG(0x10126520u), esi, 1u, local);

        if (rd16(eax) == 2u)
        {
            const uint16_t v0 = rd16(eax + 0x20u);
            wr16(out0, v0);

            const uint16_t v1 = rd16(eax + 0x22u);
            wr16(out1, v1);

            g->esi = saved_esi;
            return (eax & 0xFFFF0000u) | (v1 & 0xFF00u) | 1u;
        }
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t out0 = rd32(sp0 + 4u);
    const uint32_t out1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10118a80(g, sp0, self, out0, out1);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
