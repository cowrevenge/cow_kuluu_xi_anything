/* f_0x10223980 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the subobject helper at self+0x10, then tail-calls the thunk at 0x10257860 with self.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10223980(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    /* 10223983: lea ecx, [esi + 0x10]; 10223986: call 0x101c8050 */
    cow_thiscall(g, COW_IMG(0x101c8050u), self + 0x10u, 0u);

    /* 1022398b: mov ecx, esi; 1022398d: pop esi; 1022398e: jmp 0x10257860 */
    g->esi = saved_esi;
    cow_thiscall(g, COW_IMG(0x10257860u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10223980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_10223980(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
