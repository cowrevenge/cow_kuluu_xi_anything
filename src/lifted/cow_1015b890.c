/* f_0x1015b890 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls 0x1015b8a0 with the current this pointer, then tail-calls 0x10126370 with the same this pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015b890(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;

    /* 1015b891: mov esi, ecx */
    g->esi = self;

    /* 1015b893: call 0x1015b8a0 */
    cow_thiscall_cdecl(g, COW_IMG(0x1015b8a0u), self, 0u);

    /* 1015b898: mov ecx, esi */
    g->ecx = self;

    /* 1015b89a: pop esi */
    g->esi = saved_esi;

    /* 1015b89b: jmp 0x10126370 */
    g->esp = sp0;
    cow_thiscall_cdecl(g, COW_IMG(0x10126370u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_1015b890(g, self, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
