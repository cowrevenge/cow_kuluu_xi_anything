/* f_0x102e72f2 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the dword at [ecx] is -1, returns immediately; otherwise tail-calls FUN_102e72b1 with ecx as this-pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102e72f2(Guest* g, uint32_t self)
{
    if (rd32(self) == 0xFFFFFFFFu)
    {
        return;
    }
    /* Tail call to FUN_102e72b1. The decompiler shows it as __fastcall with param_1, but the caller passes ecx.
       Given the context of thiscall-like patterns and the fact that ecx is the only register set up before the jump,
       we treat this as a thiscall where self is passed in ecx. Since the callee ends in bare ret (caller pops),
       we use cow_thiscall_cdecl. */
    cow_thiscall_cdecl(g, COW_IMG(0x102e72b1u), self, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e72f2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    cow_fn_102e72f2(g, self);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
