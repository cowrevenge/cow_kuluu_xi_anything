/* f_0x102659b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Lazily loads OleAut32.dll and caches its module handle in a global.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102659b0(Guest* g)
{
    const uint32_t handle_global = COW_IMG(0x1067a29cu);
    uint32_t handle = rd32(handle_global);

    if (handle == 0u)
    {
        const uint32_t target = rd32(COW_IMG(0x10329134u));
        (void)cow_stdcall(g, target, 1u, COW_IMG(0x10340914u));
        handle = g->eax;
        wr32(handle_global, handle);
    }

    g->eax = handle;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102659b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102659b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
