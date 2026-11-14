/* f_0x1006cc50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Tail-dispatches through the object's vtable slot 0x2c, preserving the incoming stack arguments and register state.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1006cc50(Guest* g, uint32_t self)
{
    const uint32_t vtable = rd32(self);
    const uint32_t target = rd32(vtable + 0x2cu);

    /*
     * The original does:
     *   mov eax, [ecx]
     *   jmp  [eax + 0x2c]
     *
     * Therefore the callee is entered with:
     *   ecx = self              (unchanged from the thunk entry)
     *   eax = vtable            (from mov eax,[ecx])
     *   esp = incoming stack    (tail jump, no extra return address)
     *
     * Use the generic indirect call helper because this is a tail jump: it must
     * execute the target with the current guest state and let the target's own
     * ret determine the final esp.  Afterwards the compared eax/edx are exactly
     * what the target left behind.
     */
    g->eax = vtable;
    rt_call_indirect(g, target);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006cc50(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_1006cc50(g, g->ecx);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
