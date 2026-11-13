/* f_0x102e730a - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Deletes the GDI object handle stored at the pointer passed in ecx, if it is non-null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102e730a(Guest* g, uint32_t self)
{
    const uint32_t handle = rd32(self);
    if (handle != 0u)
    {
        cow_stdcall(g, rd32(COW_IMG(0x1032905cu)), 1u, handle);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e730a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102e730a(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
