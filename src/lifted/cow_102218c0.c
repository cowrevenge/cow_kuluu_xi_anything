/* f_0x102218c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable, calls a cleanup routine, resets the vtable, then tail-calls another routine with this+4.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102218c0(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    wr32(self, COW_IMG(0x1033BF78u));

    cow_thiscall_cdecl(g, COW_IMG(0x10221A30u), self, 0u);

    g->esi = saved_esi;

    wr32(self, COW_IMG(0x10333360u));

    g->ecx = self + 4u;
    g->esi = saved_esi;
    g->esp = g->esp; /* entry esp is restored by the adapter before rt_return */

    cow_thiscall_cdecl(g, COW_IMG(0x10126330u), self + 4u, 0u);

    g->esi = saved_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102218c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_102218c0(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
