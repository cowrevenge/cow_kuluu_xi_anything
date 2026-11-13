/* f_0x10016ff0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Frees the loaded module handle stored in the global at 0x10456a44, if it is non-null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10016ff0(Guest* g)
{
    const uint32_t hModule = rd32(COW_IMG(0x10456a44u));

    if (hModule != 0u)
    {
        const uint32_t target = rd32(COW_IMG(0x10329130u));
        cow_stdcall(g, target, 1u, hModule);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10016ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_10016ff0(g);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
