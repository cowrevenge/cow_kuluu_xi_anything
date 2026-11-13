/* f_0x1022b3b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the low 16 bits of (stack argument * 60) into the global word at 0x106679e0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1022b3b0(Guest* g, uint32_t param)
{
    (void)g;

    uint32_t eax = param;
    eax = (uint32_t)(eax + eax * 2u);   /* lea eax, [eax + eax*2] */
    eax = (uint32_t)(eax + eax * 4u);   /* lea eax, [eax + eax*4] */
    eax = (uint32_t)(eax << 2);         /* shl eax, 2 */

    wr16(COW_IMG(0x106679e0u), (uint16_t)eax);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b3b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);

    cow_fn_1022b3b0(g, arg);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
