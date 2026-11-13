/* f_0x1018c080 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Computes a scaled index from the stack argument and the first dword of the object, stores it into the first stack argument slot, and tail-calls the target routine.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1018c080(Guest* g, uint32_t self, uint32_t arg)
{
    uint32_t eax = arg;
    uint32_t edx = rd32(self);

    /* lea eax, [eax + eax*2] */
    eax = (uint32_t)(eax + eax * 2u);

    /* lea eax, [eax + eax*4] */
    eax = (uint32_t)(eax + eax * 4u);

    /* lea eax, [edx + eax*4] */
    eax = (uint32_t)(edx + eax * 4u);

    /*
     * The original tail-jump preserves the current esp and all registers.
     * At the jmp, eax and edx contain the values computed above, and the
     * first stack argument slot has been overwritten with eax.
     */
    g->eax = eax;
    g->edx = edx;

    /*
     * The target is reached as a thiscall with ecx = self and one stack
     * argument.  Since the original has already written the computed value
     * into [esp + 4], pass that same value as the callee's stack argument.
     */
    const uint32_t result = cow_thiscall(g, COW_IMG(0x1018bc40u), self, 1u, eax);

    /*
     * eax and edx are compared after return.  The target's final values are
     * what the original leaves; cow_thiscall returns eax and leaves edx in
     * the guest state.
     */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1018c080(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);   /* target ends in ret 4 */
}
/* COW_ADAPTER END */
