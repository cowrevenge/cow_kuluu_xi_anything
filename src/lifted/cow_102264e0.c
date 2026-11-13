/* f_0x102264e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100e61d0 with the stack argument, then calls FUN_10223390 with that result and the original stack argument, and returns 1 if the second call is nonzero, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_102264e0(Guest* g, uint32_t arg)
{
    uint32_t r1 = cow_cdecl(g, COW_IMG(0x100e61d0u), 1u, arg);
    uint32_t r2 = cow_cdecl(g, COW_IMG(0x10223390u), 2u, r1, arg);

    /*
       neg eax
       sbb eax, eax
       neg eax

       This is exactly:
         eax = (eax != 0) ? 1 : 0
    */
    return (r2 != 0u) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102264e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_102264e0(g, arg);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
