/* f_0x10150cd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   tail-call thunk that adjusts the this pointer by 0xa4 and jumps to FUN_10221030.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10150cd0(Guest* g, uint32_t self, uint32_t sp0)
{
    /* add ecx, 0xa4 */
    const uint32_t adjusted_self = self + 0xa4u;

    /*
     * jmp 0x10221030:
     * tail call to a thiscall target that pops 8 bytes (two stack arguments).
     * Pass the caller's original stack arguments through unchanged.
     */
    cow_thiscall(g,
                 COW_IMG(0x10221030u),
                 adjusted_self,
                 2u,
                 rd32(sp0 + 4u),
                 rd32(sp0 + 8u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_10150cd0(g, self, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 8u);   /* target ends in ret 8 */
}
/* COW_ADAPTER END */
