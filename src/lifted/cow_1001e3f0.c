/* f_0x1001e3f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100270f0 with the stack argument, the object pointer, and the object pointer plus 0xc, then returns the callee's eax/edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1001e3f0(Guest* g, uint32_t self, uint32_t arg)
{
    uint32_t eax_after = cow_cdecl(g, COW_IMG(0x100270f0u), 3,
                                   arg,
                                   self,
                                   (uint32_t)(self + 0xCu));

    g->eax = eax_after;
    /* g->edx is whatever the callee left in edx after the call. */
    return eax_after;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e3f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1001e3f0(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
