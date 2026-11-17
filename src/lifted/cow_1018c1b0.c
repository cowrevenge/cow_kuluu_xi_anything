/* f_0x1018c1b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   saves the incoming ecx, calls two helper routines, calls a third with the second's result, then stores the saved ecx through the sole stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1018c1b0(Guest* g, uint32_t self, uint32_t out_ptr, uint32_t sp0)
{
    const uint32_t saved_ecx = sp0 - 4u;

    wr32(saved_ecx, self);

    cow_thiscall_cdecl(g, COW_IMG(0x1018bbb0u), saved_ecx, 0u);

    const uint32_t eax = cow_thiscall_cdecl(g, COW_IMG(0x1018bd30u), COW_IMG(0x1065cb1cu), 0u);

    cow_thiscall(g, COW_IMG(0x1018bfa0u), saved_ecx, 1u, eax);

    wr32(out_ptr, rd32(saved_ecx));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c1b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t out_ptr = rd32(sp0 + 4u);

    cow_fn_1018c1b0(g, g->ecx, out_ptr, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
