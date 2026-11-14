/* f_0x1023da40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   tail-calls FUN_10238a10 with thiscall self from 0x10668fcc and the two caller stack arguments, preserving eax's upper bits for the callee's al-only return.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1023da40(Guest* g, uint32_t sp0)
{
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    wr32(sp0 + 4u, arg0);
    const uint32_t self = rd32(COW_IMG(0x10668FCCu));
    wr32(sp0 + 8u, arg1);

    /* The original sets eax to [esp+8] before the tail jump.  The callee may
       write only al, so the upper bits must be those of arg1, not the entry eax. */
    g->eax = arg1;

    const uint32_t result = cow_thiscall(g, COW_IMG(0x10238A10u), self, 2u, arg0, arg1);

    /* edx is whatever the tail-called function leaves there. */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023da40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1023da40(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 8u);   /* target ends in ret 8 */
}
/* COW_ADAPTER END */
