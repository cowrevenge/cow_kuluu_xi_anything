/* f_0x10312bee - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   forwards its single stack argument and the constant 8 to FUN_1031a160 as cdecl arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10312bee(Guest* g, uint32_t param1)
{
    cow_cdecl(g, COW_IMG(0x1031a160u), 2u, param1, 8u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312bee(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    cow_fn_10312bee(g, param1);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
