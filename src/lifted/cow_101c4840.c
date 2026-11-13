/* f_0x101c4840 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Replaces a null sixth stack argument with a default function pointer, retargets this to [this+4], and tail-calls FUN_101bfaa0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_101c4840(Guest* g, uint32_t self,
                         uint32_t arg0, uint32_t arg1, uint32_t arg2,
                         uint32_t arg3, uint32_t arg4, uint32_t arg5)
{
    uint32_t eax = arg5;

    if (eax == 0u)
    {
        eax = COW_IMG(0x101c4d50u);
    }

    const uint32_t new_self = rd32(self + 4u);

    return cow_thiscall(g, COW_IMG(0x101bfaa0u), new_self, 6u,
                        arg0, arg1, arg2, arg3, arg4, eax);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4840(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t self = g->ecx;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 0xcu);
    const uint32_t arg3 = rd32(sp0 + 0x10u);
    const uint32_t arg4 = rd32(sp0 + 0x14u);
    const uint32_t arg5 = rd32(sp0 + 0x18u);

    const uint32_t result = cow_fn_101c4840(g, self, arg0, arg1, arg2, arg3, arg4, arg5);

    g->esp = sp0;
    rt_return(g, result, 24u);
}
/* COW_ADAPTER END */
