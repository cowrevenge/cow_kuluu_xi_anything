/* f_0x100191b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global timer period value is nonzero, calls the imported timeEndPeriod with it.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100191b0(Guest* g)
{
    const uint32_t value = rd32(COW_IMG(0x10456d24u));

    if (value != 0u)
    {
        cow_stdcall(g, rd32(COW_IMG(0x103293fcu)), 1u, value);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100191b0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_100191b0(g);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
