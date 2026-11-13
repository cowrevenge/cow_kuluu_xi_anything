/* f_0x100b04c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls _rand(), calls FUN_100af310(1, rand) with this=ecx, then adds 3 to the 16-bit field at this+0x256.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b04c0(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    g->esi = self;
    g->ecx = self;

    const uint32_t r = cow_cdecl(g, COW_IMG(0x103149e0u), 0u);

    g->esi = self;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2u, 1u, r);

    const uint32_t addr = self + 0x256u;
    const uint16_t old = rd16(addr);
    wr16(addr, (uint16_t)(old + 3u));

    g->esi = saved_esi;
    g->ebx = saved_ebx;
    g->edi = saved_edi;
    g->ebp = saved_ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b04c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_100b04c0(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
