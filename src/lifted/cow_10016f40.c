/* f_0x10016f40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If both global pointers are non-null, calls the second one with argument 1 using a caller-popped convention.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10016f40(Guest* g)
{
    if (rd32(COW_IMG(0x10456A34u)) == 0u)
    {
        return;
    }

    const uint32_t target = rd32(COW_IMG(0x10456A40u));
    if (target == 0u)
    {
        return;
    }

    /* Original has eax = target at the call site. */
    g->eax = target;

    /* push 1; call eax; pop ecx  -> cdecl with one stack argument */
    cow_cdecl(g, target, 1u, 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10016f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10016f40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
