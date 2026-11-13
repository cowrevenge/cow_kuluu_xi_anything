/* f_0x101b9420 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer, then calls the imported function with the handle at offset 0x4 if the byte at offset 0x14 is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101b9420(Guest* g, uint32_t self)
{
    uint32_t flag = rd8(self + 0x14u);

    wr32(self, COW_IMG(0x10337b0cu));

    if (flag != 0u)
    {
        return;
    }

    uint32_t handle = rd32(self + 4u);
    uint32_t target = rd32(COW_IMG(0x10329104u));

    cow_stdcall(g, target, 1u, handle);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b9420(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_101b9420(g, g->ecx);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
