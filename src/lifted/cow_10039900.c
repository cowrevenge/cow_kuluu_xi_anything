/* f_0x10039900 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_100397a0 with this adjusted by +0xc and the same stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10039900(Guest* g, uint32_t self, uint32_t param2)
{
    (void)g;
    /* The original is just: add ecx, 0xc ; jmp FUN_100397a0 */
    /* FUN_100397a0 is a __thiscall that ends in ret 4. */
    cow_thiscall(g, COW_IMG(0x100397a0u), self + 0xCu, 1, param2);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10039900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10039900(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);   /* target pops 4 bytes */
}
/* COW_ADAPTER END */
