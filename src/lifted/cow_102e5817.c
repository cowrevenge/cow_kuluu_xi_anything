/* f_0x102e5817 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a thunk on the object in ecx, optionally calls FUN_10311bf0 when the low bit of the stack byte is set, and returns the original ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102e5817(Guest* g, uint32_t sp0, uint32_t self, uint32_t flag)
{
    const uint32_t saved_esi = g->esi;

    /* 102e5817: push esi */
    g->esp = sp0 - 4u;

    /* 102e5818: mov esi, ecx */
    /* esi is represented by self; do not disturb g->esi until the original pop restores it. */

    /* 102e581a: call 0x102e5833 */
    /*
     * At this point ecx still contains self.  The callee is a thunk with no stack
     * arguments at the call site; use thiscall so ecx is the object/first argument.
     */
    cow_thiscall(g, COW_IMG(0x102e5833u), self, 0u);

    /*
     * The original leaves esp at sp0 - 4 after the call (the pushed esi is still
     * there).  cow_thiscall should return with the callee's stack cleanup done.
     */
    g->esp = sp0 - 4u;

    /* 102e581f: test byte ptr [esp + 8], 1 */
    /* 102e5824: je 0x102e582d */
    if ((flag & 1u) != 0u)
    {
        /* 102e5826: push esi */
        /* 102e5827: call 0x10311bf0 */
        /* 102e582c: pop ecx */
        /*
         * FUN_10311bf0 is cdecl with one stack argument: the saved esi/self.
         * cow_cdecl pushes the argument and performs the caller-side pop.
         */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, self);

        /* Restore the caller stack position after the original pop ecx. */
        g->esp = sp0 - 4u;
    }

    /* 102e582d: mov eax, esi */
    /* 102e582f: pop esi */
    g->esi = saved_esi;

    /*
     * edx is whatever the last executed call left in it.  The helpers above have
     * already updated g->edx accordingly.  If the branch was not taken, it is the
     * value left by the first call; if taken, by the second call.
     */
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e5817(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t flag = rd8(sp0 + 4u);

    const uint32_t result = cow_fn_102e5817(g, sp0, self, flag);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
