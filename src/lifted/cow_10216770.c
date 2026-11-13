/* f_0x10216770 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If self->field_0x14 is non-null, calls FUN_10212640 with that value as this; otherwise returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10216770(Guest* g, uint32_t self)
{
    uint32_t target = rd32(self + 0x14u);
    if (target == 0) {
        return g->eax;
    }
    /* jmp to 0x10212640 which is thiscall with ecx=target, bare ret */
    uint32_t result = cow_thiscall(g, COW_IMG(0x10212640u), target, 0);
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10216770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t result = cow_fn_10216770(g, self);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
