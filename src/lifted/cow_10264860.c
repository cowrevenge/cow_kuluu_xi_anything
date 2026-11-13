/* f_0x10264860 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Signals the event handle stored at offset 0xd0, then tail-calls FUN_102632b0 with this in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10264860(Guest* g, uint32_t self)
{
    const uint32_t entry_esi = g->esi;

    /* 10264863: mov eax, dword ptr [esi + 0xd0] */
    const uint32_t handle = rd32(self + 0xd0u);

    /* 1026486a: call dword ptr [0x103291c4]  (SetEvent, stdcall) */
    cow_stdcall(g, rd32(COW_IMG(0x103291c4u)), 1u, handle);

    /* 10264870: mov ecx, esi */
    /* 10264872: pop esi */
    g->ecx = self;
    g->esi = entry_esi;

    /* 10264873: jmp 0x102632b0  (tail call; target is thiscall/cdecl with no stack args) */
    cow_thiscall_cdecl(g, COW_IMG(0x102632b0u), self, 0u);

    /* The final eax/edx are whatever the tail-callee leaves. */
    const uint32_t eax = g->eax;
    const uint32_t edx = g->edx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10264860(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* tail callee ends in bare ret */
}
/* COW_ADAPTER END */
