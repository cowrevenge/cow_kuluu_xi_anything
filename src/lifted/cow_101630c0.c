/* f_0x101630c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object's field at +0xc is nonzero, calls a helper and then tail-calls another function with that field as the this/register argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101630c0(Guest* g, uint32_t self)
{
    if (rd32(self + 0xCu) == 0u)
    {
        return;
    }

    cow_cdecl(g, COW_IMG(0x10163380u), 0);

    const uint32_t arg = rd32(self + 0xCu);
    cow_thiscall_cdecl(g, COW_IMG(0x1019ead0u), arg, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101630c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_101630c0(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
