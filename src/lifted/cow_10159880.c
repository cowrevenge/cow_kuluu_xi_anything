/* f_0x10159880 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   conditionally advances the object pointer by 0x28, then calls FUN_10159d40 with the two stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10159880(Guest* g, uint32_t self, uint32_t arg0, uint32_t arg1, uint32_t flag)
{
    if (flag != 0u)
    {
        self += 0x28u;
    }

    g->ecx = self;
    g->edx = arg0;
    g->eax = arg1;

    cow_stdcall(g, COW_IMG(0x10159d40u), 2u, arg0, arg1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t flag = rd8(sp0 + 0xcu);

    g->esp = sp0;
    cow_fn_10159880(g, self, arg0, arg1, flag);

    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
