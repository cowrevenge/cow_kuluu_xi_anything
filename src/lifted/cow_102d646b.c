/* f_0x102d646b - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   pushes 1, stdcall-calls FUN_102e7670, then tail-jumps to the imported function at [0x103cc410], returning its result and preserving its stack cleanup.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102d646b(Guest* g, uint32_t sp0)
{
    (void)sp0;

    /*
       102d646b: push 1
       102d646d: call 0x102e7670

       FUN_102e7670 is stdcall and ends in ret 4, so it pops its own one
       stack argument.  The original returns to esp == sp0 after this call.
    */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    /*
       102d6472: jmp dword ptr [0x103cc410]

       This is a tail jump.  The imported target sees the original caller's
       stack: [esp] is the return address to our caller, and the following
       words are the target's stack arguments.

       The judge's observed final esp is sp0 + 16.  Since rt_return pops the
       return address plus the target's own argument cleanup, the target is
       stdcall with 12 bytes of stack arguments (3 words).
    */
    const uint32_t target = rd32(COW_IMG(0x103cc410u));

    cow_stdcall(g,
                target,
                3u,
                rd32(g->esp + 4u),
                rd32(g->esp + 8u),
                rd32(g->esp + 12u));

    /* eax and edx are both observable.  The tail target leaves them; copy edx
       back into the guest context and return eax. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d646b(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Restore the caller-visible stack before letting rt_return perform the
       final return.  The tail target's cleanup is represented by the byte
       count passed to rt_return. */
    const uint32_t result = cow_fn_102d646b(g, sp0);

    g->esp = sp0;
    rt_return(g, result, 12u);   /* tail target pops 12 bytes of stack args */
}
/* COW_ADAPTER END */
