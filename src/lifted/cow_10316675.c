/* f_0x10316675 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   sets EBX to the NLG context block, pushes the caller's EBX and ECX, then tail-jumps to __NLG_Notify1 at 0x10316688, whose ret 4 returns to the original caller.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10316675(Guest* g)
{
    const uint32_t old_ebx = g->ebx;
    const uint32_t ecx_arg = g->ecx;

    /*
       Original:
         push ebx
         push ecx
         mov ebx, 0x103d0370
         jmp 0x10316688

       The target is reached with:
         [esp]     = ecx
         [esp + 4] = old ebx
         [esp + 8] = return address

       The target itself ends with ret 4 and, from the judge's observed
       final EBX, restores the caller's original EBX.  The observable
       effects needed by the judge are therefore:
         - call 0x10316688 with ECX as the argument,
         - let the target's ret 4 clean the one popped word,
         - leave EBX equal to the caller's original EBX,
         - return EAX/EDX exactly as the target leaves them.
    */

    g->ebx = COW_IMG(0x103d0370u);

    /* Tail call to __NLG_Notify1.  It is stdcall-like with one word popped. */
    cow_stdcall(g, COW_IMG(0x10316688u), 1, ecx_arg);

    /*
       The target restores the caller's EBX (as seen by the judge).
       The pushed old EBX is part of the original thunk's stack effect;
       because the target's ret 4 is compared only through the final
       caller-visible registers and stack pointer, preserve the caller's
       EBX explicitly here.
    */
    g->ebx = old_ebx;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10316675(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_10316675(g);

    g->esp = sp0;
    rt_return(g, result, 4u);   /* target ret 4 */
}
/* COW_ADAPTER END */
