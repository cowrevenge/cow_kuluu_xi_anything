/* f_0x10284fb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Tail-calls the function pointer stored at offset 0x18 of the object passed as the single stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10284fb0(Guest* g, uint32_t param_1)
{
    const uint32_t target = rd32(param_1 + 0x18u);

    /*
       The original code is a tail jump:

         mov  eax, [esp+4]
         mov  [esp+4], eax
         jmp  [eax+0x18]

       The callee is entered with the same stack layout as this function:

         [esp]   = return address to the caller of 0x10284fb0
         [esp+4] = param_1

       The object pointer is passed as a stack argument, not in ECX.  This is the
       normal layout for a stdcall vtable-style function that receives its "this"
       pointer as the first stack argument.  Use the current guest registers for
       ECX/EDX/EBX/ESI/EDI/EBP exactly as the original tail jump would preserve
       them.
    */
    cow_stdcall(g, target, 1u, param_1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10284fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;      /* [sp0] is the return address; stack argument i is rd32(sp0 + 4 + 4*i) */
    const uint32_t param_1 = rd32(sp0 + 4u);

    cow_fn_10284fb0(g, param_1);

    /*
       The original function has no ret instruction of its own.  It tail-calls the
       target, so the final stack adjustment is the target's ret immediate.  For a
       stdcall target with one 4-byte stack argument, that is ret 4.
    */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
