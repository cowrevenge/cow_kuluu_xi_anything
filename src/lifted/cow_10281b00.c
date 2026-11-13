/* f_0x10281b00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Looks up an object in a table indexed by the argument and, if present, calls its vtable slot at offset 8 with the object as a stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10281b00(Guest* g, uint32_t param)
{
    uint32_t idx = (uint32_t)(param + param * 4u);
    uint32_t obj = rd32((uint32_t)(idx * 8u + COW_IMG(0x1099d63cu)));

    if (obj != 0u)
    {
        uint32_t vtable = rd32(obj);
        uint32_t target = rd32(vtable + 8u);

        g->eax = obj;
        g->ecx = vtable;

        cow_stdcall(g, target, 1u, obj);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10281b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_10281b00(g, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
