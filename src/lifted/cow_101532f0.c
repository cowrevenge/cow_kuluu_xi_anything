/* f_0x101532f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Replaces the first stack argument with the 16-bit value formed from the first two bytes of the pointed-to buffer, then tail-calls 0x101532b0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101532f0(Guest* g, uint32_t sp0)
{
    const uint32_t p = rd32(sp0 + 4u);

    uint32_t ecx = 0u;
    ecx = (ecx & 0xFFFF00FFu) | ((uint32_t)(uint8_t)rd8(p) << 8);
    ecx = (ecx & 0xFFFFFF00u) | (uint32_t)(uint8_t)rd8(p + 1u);

    wr32(sp0 + 4u, ecx);

    cow_cdecl(g, COW_IMG(0x101532b0u), 1u, ecx);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101532f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101532f0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
