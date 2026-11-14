/* f_0x102169c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Marks the object as dirty and, if a global pointer is set, calls a method on its +0x20 subobject with argument 2.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102169c0(Guest* g, uint32_t self)
{
    wr16(self + 0x2eu, (uint16_t)0xFFFFu);

    uint32_t eax = rd32(COW_IMG(0x105781f8u));
    g->eax = eax;

    if (eax != 0u)
    {
        cow_thiscall(g, COW_IMG(0x102211b0u), eax + 0x20u, 1u, 2u);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102169c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102169c0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
