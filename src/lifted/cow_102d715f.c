/* f_0x102d715f - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   calls FUN_102e7670(1), then tail-jumps to the indirect target at [0x103cc4a4].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102d715f(Guest* g, uint32_t sp0)
{
    /*
     * Original stack behaviour:
     *
     *   push 1
     *   call 0x102e7670        ; callee ends in ret 4, so the argument and return
     *                          ; address are both removed by the callee
     *   jmp  [0x103cc4a4]      ; tail call; the target's own ret returns to our caller
     *
     * After the stdcall call/cleanup, esp is back at the entry esp (sp0).  The
     * imported tail target is entered with that stack.  The observed original
     * final esp is sp0 + 12, so the tail target's ret removes its return address
     * plus 8 bytes of arguments.
     */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    /* Ensure the tail jump sees the same stack pointer as the original does. */
    g->esp = sp0;

    rt_call_indirect(g, rd32(COW_IMG(0x103cc4a4u)));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d715f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102d715f(g, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
