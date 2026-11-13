/* f_0x102da79f - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a helper on the object, then conditionally calls another helper with the object as a stack argument when the low bit of the caller's stack argument is set, and returns the object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102da79f(Guest* g, uint32_t self, uint32_t sp0)
{
    /* Original:
       push esi
       mov esi, ecx
       call 0x102e90d8
       test byte ptr [esp + 8], 1
       je 0x102da7b5
       push esi
       call 0x10311bf0
       pop ecx
       mov eax, esi
       pop esi
       ret 4
    */

    /* Simulate the live "push esi" before the first call. */
    g->esp = sp0 - 4u;

    /*
       The first call has no stack arguments.  The original leaves ecx = self
       at the call site, so use the thiscall-style caller-pops helper.
    */
    cow_thiscall_cdecl(g, COW_IMG(0x102e90d8u), self, 0u);

    /*
       After the first call, esp is sp0 - 4, so [esp + 8] is the caller's
       first stack argument at sp0 + 4.  The original tests only one byte.
    */
    if ((rd8(sp0 + 4u) & 1u) != 0u)
    {
        /* Simulate "push esi" before the second call. */
        g->esp = sp0 - 4u;

        /*
           The second call passes esi (the object pointer) as a stack argument
           and the caller pops it with "pop ecx".
        */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, self);
    }

    /* Return value is eax = esi = self. */
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102da79f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_102da79f(g, self, sp0);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
