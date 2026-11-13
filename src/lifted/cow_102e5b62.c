/* f_0x102e5b62 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a thunk on the object, then conditionally calls a cleanup function when the low bit of the stack argument is set, returning the object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102e5b62(Guest* g, uint32_t self, uint32_t sp0)
{
    /* Original:
       push esi
       mov  esi, ecx
       call 0x102e5b7e
       test byte ptr [esp + 8], 1
       je   0x102e5b78
       push esi
       call 0x10311bf0
       pop  ecx
       mov  eax, esi
       pop  esi
       ret  4

       At the test, esp == sp0 - 4, so [esp + 8] == [sp0 + 4], the stack argument.
       Read it after the first call, because the first call may modify it.
    */

    /* Emulate the stack position after "push esi" for the first call.
       The callee sees esp = sp0 - 4 before its call pushes the return address. */
    g->esp = sp0 - 4u;

    /* call 0x102e5b7e
       No stack arguments.  The call site uses ecx as the object pointer. */
    cow_thiscall(g, COW_IMG(0x102e5b7eu), self, 0u);

    /* After the callee returns, esp is back to sp0 - 4. */
    g->esp = sp0 - 4u;

    if ((rd8(sp0 + 4u) & 1u) != 0u)
    {
        /* push esi / call 0x10311bf0 / pop ecx
           The callee is cdecl with one stack argument.  cow_cdecl pushes the
           argument, calls, and pops it, leaving esp at sp0 - 4. */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, self);

        /* Original "pop ecx" sets ecx to the pushed esi value.  ecx is not
           compared by the judge, but keep it faithful. */
        g->ecx = self;
    }

    /* mov eax, esi */
    /* pop esi */
    /* ret 4 */
    g->esp = sp0;
    g->edx = g->edx;   /* edx is whatever the last executed call left there */

    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e5b62(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_102e5b62(g, self, sp0);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
