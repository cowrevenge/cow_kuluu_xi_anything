/* f_0x10034090 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10032a40 on each of 256 consecutive 0x34-byte objects starting at 0x1045f030.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10034090(Guest* g)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    uint32_t ptr = COW_IMG(0x1045F030u);
    uint32_t count = 0x100u;

    while (count != 0u)
    {
        g->esi = ptr;
        g->edi = count;

        cow_thiscall_cdecl(g, COW_IMG(0x10032a40u), ptr, 0u);

        ptr += 0x34u;
        --count;
    }

    g->esi = saved_esi;
    g->edi = saved_edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10034090(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_10034090(g);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
