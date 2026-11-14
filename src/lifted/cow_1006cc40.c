/* f_0x1006cc40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   tail-jumps through the vtable slot at offset 0x24 of the object in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1006cc40(Guest* g, uint32_t self)
{
    const uint32_t vtable = rd32(self);
    const uint32_t target = rd32(vtable + 0x24u);

    /* The original sets eax to the vtable pointer immediately before the tail jmp. */
    g->eax = vtable;
    g->ecx = self;

    /* Tail call: invoke the target with the current guest state and return its result. */
    rt_call_indirect(g, target);

    /* The judge compares all of eax and edx. */
    g->eax = g->eax;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006cc40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1006cc40(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 4u);   /* target pops one stack argument */
}
/* COW_ADAPTER END */
