/* f_0x10233b00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   forwards the four stack arguments to FUN_10233b20 as a thiscall with the first argument as self.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_10233b00(Guest* g, uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    /* At the call site the original has:
       eax = arg3, edx = arg1, ecx = self.
       The callee receives ecx=self and stack args arg1, arg2, arg3. */
    g->eax = arg3;
    g->edx = arg1;

    cow_thiscall(g, COW_IMG(0x10233b20u), self, 3u, arg1, arg2, arg3);

    /* Preserve whatever the callee left in eax/edx. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10233b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);
    const uint32_t arg3 = rd32(sp0 + 16u);

    const uint32_t result = cow_fn_10233b00(g, self, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
