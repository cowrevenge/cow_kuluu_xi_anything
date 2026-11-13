/* f_0x10082c60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100852a0 with `this`; if it returns nonzero, tail-calls FUN_100852a0 again with `this`, otherwise tail-calls FUN_10085220.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10082c60(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;

    /* push esi; mov esi, ecx */
    g->esp = sp0 - 4u;
    g->esi = self;

    /* call 0x100852a0 */
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x100852a0u), self, 0u);

    /* test eax, eax; je ... */
    if (g->eax != 0u)
    {
        /* mov ecx, esi; pop esi; jmp 0x100852a0 */
        g->esi = saved_esi;
        g->esp = sp0;
        g->eax = cow_thiscall_cdecl(g, COW_IMG(0x100852a0u), self, 0u);
    }
    else
    {
        /* pop esi; jmp 0x10085220 */
        g->esi = saved_esi;
        g->esp = sp0;
        g->eax = cow_cdecl(g, COW_IMG(0x10085220u), 0u);
    }

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10082c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10082c60(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
