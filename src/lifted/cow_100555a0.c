/* f_0x100555a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls the virtual function at vtable offset 0x2C of the object passed as the first stack argument, passing that object as `this`.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100555a0(Guest* g, uint32_t self)
{
    const uint32_t vtable = rd32(self);
    const uint32_t target = rd32(vtable + 0x2Cu);
    return cow_thiscall(g, target, self, 1u, self);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100555a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_100555a0(g, arg0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
