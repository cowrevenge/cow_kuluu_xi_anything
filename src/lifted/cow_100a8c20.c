/* f_0x100a8c20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   obtains an object from FUN_10081550 and, if non-null, invokes its virtual method at vtable offset 0x33c with argument 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100a8c20(Guest* g)
{
    cow_thiscall_cdecl(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0u);

    const uint32_t eax = g->eax;
    if (eax == 0u)
    {
        return eax;
    }

    const uint32_t edx = rd32(eax);

    /* Preserve the original order: push 0, set ecx, then read the indirect target. */
    g->esp -= 4u;
    wr32(g->esp, 0u);
    g->ecx = eax;

    const uint32_t target = rd32(edx + 0x33cu);

    /* The argument has already been pushed; the callee pops it. */
    cow_thiscall(g, target, eax, 0u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a8c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100a8c20(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
