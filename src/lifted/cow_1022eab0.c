/* f_0x1022eab0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   forwards the four stack arguments to FUN_1022ead0 as a thiscall with this=arg0 and stack args arg1,arg2,arg3, preserving the original's pre-call eax/edx state.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_1022eab0(Guest* g, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)
{
    /*
       Original:
         eax = [esp+0x10] = a3
         ecx = [esp+0xc]  = a2
         edx = [esp+8]    = a1
         push eax
         push ecx
         ecx = [esp+0xc]  = a0   (after the two pushes, this is [original esp+4])
         push edx
         call 0x1022ead0

       The callee is thiscall with ecx = a0 and three stack arguments:
         a1, a2, a3.

       The judge compares eax and edx on return.  The original establishes
       eax = a3 and edx = a1 before the call, so the callee must observe those
       values.  cow_thiscall sets ecx to the self argument, but does not
       necessarily set eax/edx for us.
    */
    g->eax = a3;
    g->edx = a1;
    g->ecx = a0;

    cow_thiscall(g, COW_IMG(0x1022ead0u), a0, 3u, a1, a2, a3);

    /*
       Return exactly what the callee left in eax/edx.  If it preserves them,
       this returns a3/a1; if it overwrites them, this returns the callee's
       values, matching the original.
    */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022eab0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Read in the original's order to preserve fault order. */
    const uint32_t a3 = rd32(sp0 + 0x10u);
    const uint32_t a2 = rd32(sp0 + 0xcu);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a0 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1022eab0(g, a0, a1, a2, a3);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
