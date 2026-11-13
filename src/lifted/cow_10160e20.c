/* f_0x10160e20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer, calls a cleanup/helper routine, then tail-calls another routine with the same object.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10160e20(Guest* g, uint32_t self)
{
    const uint32_t entry_esi = g->esi;

    /* 10160e21: mov esi, ecx */
    g->esi = self;

    /* 10160e23: mov dword ptr [esi], 0x10335334 */
    wr32(self, COW_IMG(0x10335334u));

    /* 10160e29: call 0x10160ea0
       ecx is self at the call site; no stack arguments. */
    cow_thiscall_cdecl(g, COW_IMG(0x10160ea0u), self, 0u);

    /* 10160e2e: mov ecx, esi
       10160e30: pop esi
       Restore esi to the caller's value before the tail call. */
    g->esi = entry_esi;

    /* 10160e31: jmp 0x101c7fd0
       Tail call with ecx = self and no stack arguments. */
    cow_thiscall_cdecl(g, COW_IMG(0x101c7fd0u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10160e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10160e20(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
