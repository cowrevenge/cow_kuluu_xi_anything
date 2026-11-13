/* f_0x1008a7b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer, calls a cleanup routine, then tail-calls another cleanup routine.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008a7b0(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    /* mov dword ptr [esi], 0x1032d69c */
    wr32(self, COW_IMG(0x1032d69cu));

    /* push esi / call FUN_1008ee30 / pop esi
       Preserve esi across the call because the callee may clobber it. */
    g->esp -= 4u;
    wr32(g->esp, saved_esi);

    cow_thiscall_cdecl(g, COW_IMG(0x1008ee30u), self, 0u);

    g->esp += 4u;
    g->esi = saved_esi;

    /* mov ecx, esi / jmp FUN_10092900
       Tail call with this in ecx. */
    cow_thiscall_cdecl(g, COW_IMG(0x10092900u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008a7b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_1008a7b0(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
