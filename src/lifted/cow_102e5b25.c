/* f_0x102e5b25 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a thunk on the object, conditionally calls a cleanup/notify routine when the stack argument's low bit is set, and returns the object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102e5b25(Guest* g, uint32_t self, uint32_t sp0)
{
    /* 102e5b25: push esi
       102e5b26: mov esi, ecx
       102e5b28: call 0x102e5b41
       The call site passes ecx = self.  The callee is described as __fastcall,
       so use cow_fastcall and preserve the incoming edx for the callee. */
    cow_fastcall(g, COW_IMG(0x102e5b41u), self, g->edx, 0u);

    /* 102e5b2d: test byte ptr [esp + 8], 1
       102e5b32: je 0x102e5b3b
       At this point esp == sp0 - 4, so [esp + 8] is the original stack argument
       at sp0 + 4.  Read it after the first call, matching the original order. */
    if ((rd8(sp0 + 4u) & 1u) != 0u)
    {
        /* 102e5b34: push esi
           102e5b35: call 0x10311bf0
           102e5b3a: pop ecx
           The callee ends in a bare ret, so the caller pops the one argument. */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, self);

        /* The original pop ecx restores ecx to the pushed esi value. */
        g->ecx = self;
    }

    /* 102e5b3b: mov eax, esi
       102e5b3d: pop esi
       102e5b3e: ret 4
       eax is returned as self.  edx is whatever the last executed call left in
       g->edx, which matches the original. */
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e5b25(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_102e5b25(g, self, sp0);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
