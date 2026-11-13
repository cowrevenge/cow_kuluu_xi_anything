/* f_0x10291e90 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the argument is non-null, tail-calls FUN_1027ebf0 with argument + 0x24; otherwise returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10291e90(Guest* g, uint32_t param)
{
    if (param == 0u)
    {
        /* Original: eax = 0, edx unchanged. */
        return 0u;
    }

    /* Original: eax = param + 0x24, store it into [esp+4], then tail-jmp to 0x1027ebf0. */
    const uint32_t arg = param + 0x24u;

    /*
     * The tail callee is cdecl and ends in a bare ret, so it pops 0 bytes itself.
     * The helper call returns the callee's eax and leaves callee-written registers
     * (including edx) in g.
     */
    const uint32_t eax = cow_cdecl(g, COW_IMG(0x1027ebf0u), 1u, arg);

    /* Preserve the callee's edx for the judge. */
    g->edx = g->edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10291e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10291e90(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
