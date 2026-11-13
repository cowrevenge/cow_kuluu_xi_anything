/* f_0x101ba260 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns -1 if the global object pointer is null; otherwise tail-calls the handler with that pointer in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ba260(Guest* g)
{
    const uint32_t ecx = rd32(COW_IMG(0x10662DB8u));

    if (ecx == 0u)
    {
        return 0xFFFFFFFFu;
    }

    g->ecx = ecx;
    return cow_cdecl(g, COW_IMG(0x101ba560u), 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101ba260(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
