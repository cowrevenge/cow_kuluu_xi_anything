/* f_0x100441a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Gets an index from FUN_10043de0, uses it to fetch a pointer from an array based at ecx, and if non-null calls the object's vtable slot 0x30 with that pointer as the sole stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100441a0(Guest* g, uint32_t self)
{
    uint32_t idx = cow_cdecl(g, COW_IMG(0x10043de0u), 0u);
    uint32_t obj = rd32((idx << 5) + self + 4u);

    if (obj != 0u)
    {
        uint32_t vtable = rd32(obj);
        uint32_t target = rd32(vtable + 0x30u);
        cow_stdcall(g, target, 1u, obj);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100441a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100441a0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
