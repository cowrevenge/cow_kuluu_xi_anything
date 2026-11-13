/* f_0x101c48c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Normalizes the sixth stack argument to a default callback if null, replaces this with this->field_4, then tail-calls FUN_101bff40 with the six arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=6 */
uint32_t cow_fn_101c48c0(Guest* g, uint32_t sp0, uint32_t self,
                         uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t a4, uint32_t a5, uint32_t a6)
{
    uint32_t eax = a6;

    if (eax == 0u)
    {
        eax = COW_IMG(0x101c4d50u);
    }

    const uint32_t new_self = rd32(self + 4u);

    wr32(sp0 + 0x18u, eax);

    g->ecx = new_self;

    const uint32_t result = cow_thiscall(
        g,
        COW_IMG(0x101bff40u),
        new_self,
        6u,
        a1,
        a2,
        a3,
        a4,
        a5,
        eax
    );

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c48c0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t self = g->ecx;
    const uint32_t a1 = rd32(sp0 + 4u);
    const uint32_t a2 = rd32(sp0 + 8u);
    const uint32_t a3 = rd32(sp0 + 12u);
    const uint32_t a4 = rd32(sp0 + 16u);
    const uint32_t a5 = rd32(sp0 + 20u);
    const uint32_t a6 = rd32(sp0 + 24u);

    const uint32_t result = cow_fn_101c48c0(g, sp0, self, a1, a2, a3, a4, a5, a6);

    g->esp = sp0;
    rt_return(g, result, 24u);
}
/* COW_ADAPTER END */
