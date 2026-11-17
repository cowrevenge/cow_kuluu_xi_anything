/* f_0x100f7430 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   checks a global pointer and, if present, tail-calls a thiscall worker with six pushed arguments, returning its eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=6 */
uint32_t cow_fn_100f7430(Guest* g, uint32_t sp0, uint32_t arg0_addr,
                         uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5)
{
    const uint32_t self = rd32(COW_IMG(0x104df908u));

    g->ecx = self;

    if (self == 0u)
    {
        /*
           Original early path:
             mov ecx, [global]
             test ecx, ecx
             mov eax, 2
             ret
           edx is untouched; ecx is left as the loaded global.
        */
        return 2u;
    }

    /*
       Original stack trace at the call:

       Entry esp = sp0:
         [sp0 + 0x04] arg0
         [sp0 + 0x08] arg1
         [sp0 + 0x0c] arg2
         [sp0 + 0x10] arg3
         [sp0 + 0x14] arg4
         [sp0 + 0x18] arg5

       Instructions build these arguments, last push first:
         push arg5
         push arg4
         push 0x0a
         push arg3
         push arg2
         push (sp0 + 0x04)

       The callee is thiscall with ecx = self and ret 24, so the six
       stack arguments in source order are:
         arg0_addr, arg2, arg3, 0x0a, arg4, arg5.

       At the call instruction, eax = arg0_addr and edx = arg2.
    */
    g->eax = arg0_addr;
    g->edx = arg2;

    cow_thiscall(g, COW_IMG(0x100f2500u), self, 6u,
                 arg0_addr,
                 arg2,
                 arg3,
                 0xAu,
                 arg4,
                 arg5);

    /*
       The original returns immediately after the call.  The callee owns
       eax and edx by this point; cow_thiscall is expected to have updated
       g->eax and g->edx exactly as the original call would.
    */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t edx_in = g->edx;

    /*
       Match only the stack words the original actually reads:
         arg5 = [esp + 0x18]
         arg4 = [esp + 0x14]
         arg3 = [esp + 0x10]
         arg2 = [esp + 0x0c]

       arg0 is not dereferenced; only its address sp0 + 4 is passed.
       arg1 is not touched by this function.
    */
    const uint32_t arg2 = rd32(sp0 + 0x0cu);
    const uint32_t arg3 = rd32(sp0 + 0x10u);
    const uint32_t arg4 = rd32(sp0 + 0x14u);
    const uint32_t arg5 = rd32(sp0 + 0x18u);
    const uint32_t arg0_addr = sp0 + 0x04u;

    const uint32_t result = cow_fn_100f7430(
        g,
        sp0,
        arg0_addr,
        arg2,
        arg3,
        arg4,
        arg5
    );

    /* Preserve the no-call path's untouched edx behavior. */
    if (rd32(COW_IMG(0x104df908u)) == 0u)
    {
        g->edx = edx_in;
    }

    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
