/* f_0x1031acf6 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10324484 with the two stack arguments unless the low 16 bits of the first argument are 0xFFFF.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1031acf6(Guest* g, uint32_t arg0, uint32_t arg1)
{
    cow_cdecl(g, COW_IMG(0x10324484u), 2u, arg0, arg1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031acf6(Guest* g)
{
    const uint32_t sp0 = g->esp;

    if (rd16(sp0 + 4u) != 0xFFFFu)
    {
        const uint32_t arg1 = rd32(sp0 + 8u);
        const uint32_t arg0 = rd32(sp0 + 4u);

        cow_fn_1031acf6(g, arg0, arg1);

        g->ecx = arg1;
    }

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
