/* f_0x10081450 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets one bit in the byte at 0x1047d499 according to the low 5 bits of the byte argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10081450(Guest* g, uint32_t param)
{
    const uint32_t shift = param & 31u;
    const uint32_t mask = (uint32_t)(uint8_t)(1u << shift);

    /* mov cl, byte ptr [esp + 4] */
    g->ecx = (g->ecx & 0xFFFFFF00u) | (param & 0xFFu);

    /* mov al, 1; shl al, cl */
    g->eax = (g->eax & 0xFFFFFF00u) | mask;

    /* or byte ptr [0x1047d499], al */
    const uint32_t addr = COW_IMG(0x1047d499u);
    wr8(addr, (uint8_t)(rd8(addr) | mask));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10081450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);

    cow_fn_10081450(g, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
