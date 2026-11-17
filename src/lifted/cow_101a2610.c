/* f_0x101a2610 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10312031 with either a 5-argument or 6-argument form, selected by whether the second stack argument is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101a2610(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    if (arg1 == 0u)
    {
        cow_cdecl(g, COW_IMG(0x10312031u), 5u,
                  arg0,
                  COW_IMG(0x10360244u),
                  arg2,
                  COW_IMG(0x1037aa70u),
                  COW_IMG(0x1037aa74u));
    }
    else
    {
        cow_cdecl(g, COW_IMG(0x10312031u), 6u,
                  arg0,
                  COW_IMG(0x1037aa64u),
                  arg2,
                  COW_IMG(0x1037aa70u),
                  arg1,
                  COW_IMG(0x1037aa74u));
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);

    cow_fn_101a2610(g, arg0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
