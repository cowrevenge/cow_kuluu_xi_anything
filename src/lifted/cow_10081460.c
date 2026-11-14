/* f_0x10081460 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears in the byte at 0x1047d499 the bit corresponding to (1 << (param & 31)), with shifts of 8 or more clearing no bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10081460(Guest* g, uint32_t param)
{
    (void)g;

    const uint32_t addr = COW_IMG(0x1047d499u);
    const uint32_t shift = param & 31u;

    /* al = 1; shl al, cl */
    uint8_t al = (shift >= 8u) ? 0u : (uint8_t)(1u << shift);

    /* cl = [0x1047d499]; not al; and cl, al; [0x1047d499] = cl */
    uint8_t dat = rd8(addr);
    wr8(addr, (uint8_t)(dat & (uint8_t)~al));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10081460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);

    cow_fn_10081460(g, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
