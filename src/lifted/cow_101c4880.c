/* f_0x101c4880 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Replaces a null callback argument with a default function pointer, adjusts the this pointer, and tail-calls FUN_101bfd00.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_101c4880(Guest* g, uint32_t self,
                         uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t a4, uint32_t a5, uint32_t a6)
{
    uint32_t new_self;
    uint32_t callback;

    callback = a6;
    if (callback == 0u)
    {
        callback = COW_IMG(0x101c4d50u);
    }

    new_self = rd32(self + 4u);

    return cow_thiscall(g, COW_IMG(0x101bfd00u), new_self, 6u,
                        a1, a2, a3, a4, a5, callback);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t a1 = rd32(sp0 + 4u);
    const uint32_t a2 = rd32(sp0 + 8u);
    const uint32_t a3 = rd32(sp0 + 12u);
    const uint32_t a4 = rd32(sp0 + 16u);
    const uint32_t a5 = rd32(sp0 + 20u);
    const uint32_t a6 = rd32(sp0 + 24u);

    const uint32_t result = cow_fn_101c4880(g, self, a1, a2, a3, a4, a5, a6);

    g->esp = sp0;
    rt_return(g, result, 24u);
}
/* COW_ADAPTER END */
