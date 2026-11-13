/* f_0x102f379c - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_102f2c9b with the first stack argument and 1, then returns the callee's result only if it is negative, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102f379c(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t pre_eax)
{
    /* Preserve the callee-visible register state exactly as the original does. */
    g->eax = pre_eax;

    /*
       Original stack setup:
         push 1
         push [esp+8]   ; after push 1, this is the original [sp0+4]
         call 0x102f2c9b

       Therefore the callee receives:
         param_1 = arg0
         param_2 = 1
    */
    uint32_t eax = cow_cdecl(g, COW_IMG(0x102f2c9bu), 2u, arg0, 1u);

    /*
       test eax, eax
       pop ecx
       pop ecx
       jl  short 0x102f37b3
       xor eax, eax

       test clears OF, so jl is equivalent to a signed-negative test on eax.
    */
    if ((int32_t)eax >= 0)
    {
        eax = 0u;
    }

    /*
       edx is not written by this function after the call, so whatever the
       callee left in g->edx is the value to return.
    */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f379c(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg0    = rd32(sp0 + 4u);
    const uint32_t pre_eax = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102f379c(g, sp0, arg0, pre_eax);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
