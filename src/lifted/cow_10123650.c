/* f_0x10123650 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the low byte of the second stack argument into a byte table indexed by the sign-extended first stack argument multiplied by 16.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10123650(Guest* g, uint32_t param1, uint32_t param2)
{
    (void)g;

    /* movsx eax, byte ptr [esp + 4] */
    uint32_t eax = (param1 & 0x80u) ? (param1 | 0xFFFFFF00u) : (param1 & 0xFFu);

    /* shl eax, 4 */
    uint32_t addr = (eax << 4) + COW_IMG(0x1036E0F0u);

    /* mov byte ptr [eax + 0x1036e0f0], cl */
    wr8(addr, (uint8_t)param2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10123650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd8(sp0 + 4u);
    const uint32_t param2 = rd8(sp0 + 8u);

    cow_fn_10123650(g, param1, param2);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
