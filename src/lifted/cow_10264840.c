/* f_0x10264840 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Signals the event handle stored at self+0xd0, then tail-calls FUN_10263260 with self in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10264840(Guest* g, uint32_t self)
{
    const uint32_t entry_esi = g->esi;

    /* 10264843: mov eax, dword ptr [esi + 0xd0] */
    const uint32_t handle = rd32(self + 0xd0u);

    /* 1026484a: call dword ptr [0x103291c4]  (SetEvent, stdcall) */
    cow_stdcall(g, rd32(COW_IMG(0x103291c4u)), 1u, handle);

    /* 10264850: mov ecx, esi */
    /* 10264852: pop esi  -> restore the caller's esi before the tail call */
    g->ecx = self;
    g->esi = entry_esi;

    /* 10264853: jmp 0x10263260  (tail call; target uses ecx and has no stack args) */
    const uint32_t result = cow_thiscall_cdecl(g, COW_IMG(0x10263260u), self, 0u);

    /* Preserve the final edx exactly as the original leaves it after the tail call. */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10264840(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
