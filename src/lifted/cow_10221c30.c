/* f_0x10221c30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears two flag bytes in the object referenced by self+8, then tail-calls FUN_10221c90.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10221c30(Guest* g, uint32_t self)
{
    uint32_t eax = rd32(self + 8u);

    if (eax != 0u)
    {
        wr8(eax + 0x69u, 0u);
        eax = rd32(self + 8u);
        wr8(eax + 0x6au, 0u);
    }

    g->ecx = self;
    g->edx = 0u;
    g->eax = eax;

    cow_fastcall(g, COW_IMG(0x10221c90u), self, 0u, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10221c30(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
