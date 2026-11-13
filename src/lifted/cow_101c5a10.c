/* f_0x101c5a10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_101c5950 on the object, then calls FUN_101c59b0 with the object's field at +8.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101c5a10(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    /* mov esi, ecx */
    g->esi = self;

    /* mov edi, dword ptr [esi + 8] */
    g->edi = rd32(self + 8u);

    /* call 0x101c5950: ecx = self, no stack arguments, caller pops */
    cow_thiscall_cdecl(g, COW_IMG(0x101c5950u), self, 0u);

    /*
     * The original uses the current esi/edi after the first call:
     *   push edi
     *   mov ecx, esi
     *   call 0x101c59b0
     */
    const uint32_t self2 = g->esi;
    const uint32_t arg2 = g->edi;

    /* call 0x101c59b0: ecx = self2, one stack argument, callee pops 4 */
    cow_thiscall(g, COW_IMG(0x101c59b0u), self2, 1u, arg2);

    /* pop edi / pop esi */
    g->esi = saved_esi;
    g->edi = saved_edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c5a10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101c5a10(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
