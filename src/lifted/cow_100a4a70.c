/* f_0x100a4a70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores whether the byte argument equals 1 into the byte at [edx + ecx + 0x83e], preserving eax's upper bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_100a4a70(Guest* g, uint32_t ecx, uint32_t param2, uint32_t param3, uint32_t eax_in)
{
    const uint32_t al = param2 & 0xFFu;
    const uint32_t sete = (al == 1u) ? 1u : 0u;
    const uint32_t eax = (eax_in & 0xFFFFFF00u) | sete;
    const uint32_t edx = param3;

    g->eax = eax;
    g->edx = edx;

    wr8(edx + ecx + 0x83Eu, (uint8_t)sete);

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a4a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ecx = g->ecx;
    const uint32_t param2 = rd8(sp0 + 4u);
    const uint32_t param3 = rd32(sp0 + 8u);
    const uint32_t eax_in = g->eax;

    const uint32_t result = cow_fn_100a4a70(g, ecx, param2, param3, eax_in);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
