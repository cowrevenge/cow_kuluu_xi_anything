/* f_0x10082c40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10085270 with this=ecx; if it returns zero, tail-calls FUN_10085240, otherwise tail-calls FUN_10085270 again with this=esi.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10082c40(Guest* g, uint32_t self)
{
    const uint32_t entry_esi = g->esi;

    /* 10082c43: call 0x10085270  (ecx = self, bare ret => caller pops) */
    cow_thiscall_cdecl(g, COW_IMG(0x10085270u), self, 0u);

    /* 10082c48: test eax, eax / 10082c4a: je */
    if (g->eax == 0u)
    {
        /* 10082c54: pop esi */
        g->esi = entry_esi;

        /* 10082c55: jmp 0x10085240
         * ecx is whatever the first call left in ecx.
         * Target has no stack args and bare ret => rt_return pops 0.
         */
        cow_cdecl(g, COW_IMG(0x10085240u), 0u);
        return g->eax;
    }

    /* 10082c4c: mov ecx, esi */
    const uint32_t tail_self = g->esi;

    /* 10082c4e: pop esi */
    g->esi = entry_esi;

    /* 10082c4f: jmp 0x10085270
     * ecx = tail_self, bare ret => rt_return pops 0.
     */
    cow_thiscall_cdecl(g, COW_IMG(0x10085270u), tail_self, 0u);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10082c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10082c40(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
