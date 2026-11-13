/* f_0x102e57da - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a cleanup thunk on the object, optionally deletes it when the low bit of the stack flag is set, and returns the object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102e57da(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edx = g->edx;

    /* 102e57db: mov esi, ecx */
    /* The original keeps ecx unchanged here, and the first call is a fastcall-style
       thunk with the object pointer in ecx.  edx is whatever the caller left there. */
    cow_fastcall(g, COW_IMG(0x102e57f6u), self, g->edx, 0u);

    /* 102e57e2: test byte ptr [esp + 8], 1
       After the initial push esi, [esp + 8] is the first stack argument. */
    if ((rd8(sp0 + 4u) & 1u) != 0u)
    {
        /* 102e57e9: push esi
           102e57ea: call 0x10311bf0
           102e57ef: pop ecx
           Caller pops the one 4-byte argument. */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, self);

        /* The original restores ecx from the pushed value.  ecx is not compared,
           but this keeps the visible register state faithful. */
        g->ecx = self;
    }

    /* 102e57f0: mov eax, esi */
    /* 102e57f2: pop esi */
    g->esi = saved_esi;

    /* edx is whatever the last executed call left there.  If no second call was
       taken, that is the result of the first thunk; otherwise it is the result of
       FUN_10311bf0.  If neither call modified edx, preserve the entry value. */
    if (g->edx == saved_edx && g->edx == 0u)
    {
        /* No reliable way to distinguish "callee wrote zero" from "callee did not
           write edx" without callee semantics.  The helpers update g->edx when the
           callee writes it, so this branch is only a conservative fallback for the
           case where the guest model left g->edx untouched. */
        g->edx = saved_edx;
    }

    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e57da(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t stack_arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_102e57da(g, self, sp0);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
