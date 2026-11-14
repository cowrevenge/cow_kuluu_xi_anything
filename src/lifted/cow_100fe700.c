/* f_0x100fe700 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100fe6b0 with the first two stack arguments, then returns the third stack argument if the callee's low return byte is nonzero, otherwise zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_100fe700(Guest* g, uint32_t sp0, uint32_t arg1, uint32_t arg2)
{
    uint32_t callee_result;
    uint32_t param3;
    uint32_t mask;

    cow_cdecl(g, COW_IMG(0x100fe6b0u), 2u, arg1, arg2);

    callee_result = g->eax;
    param3 = rd32(sp0 + 12u);

    /*
       neg al:
         CF = (al != 0)
       sbb eax, eax:
         eax = 0 if CF == 0, else 0xFFFFFFFF
    */
    mask = ((callee_result & 0xFFu) != 0u) ? 0xFFFFFFFFu : 0u;

    g->edx = g->edx;
    g->ecx = param3;

    return mask & param3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fe700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_100fe700(g, sp0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
