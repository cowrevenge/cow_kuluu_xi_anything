/* f_0x10181580 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts `this` by adding 0x34330 and tail-calls FUN_101739d0 with the same arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10181580(Guest* g, uint32_t self, uint32_t param_2)
{
    const uint32_t new_self = self + 0x34330u;
    /* Tail call: jmp 0x101739d0. The callee is __thiscall with one stack arg (param_2), ret 4. */
    cow_thiscall(g, COW_IMG(0x101739d0u), new_self, 1, param_2);
    /* After the tail call returns, eax and edx hold whatever the callee left in them. */
    g->edx = g->edx; /* preserve edx as set by callee (already in g) */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10181580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10181580(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);   /* target pops 4 bytes */
}
/* COW_ADAPTER END */
