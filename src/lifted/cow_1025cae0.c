/* f_0x1025cae0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Frees the library handle stored in the global, if any, and clears the global.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1025cae0(Guest* g)
{
    const uint32_t hModule = rd32(COW_IMG(0x10669468u));

    if (hModule != 0u)
    {
        cow_stdcall(g, rd32(COW_IMG(0x10329130u)), 1u, hModule);
    }

    wr32(COW_IMG(0x10669468u), 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025cae0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_1025cae0(g);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
