/* f_0x100fdb40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 0 for a 16-bit argument <= 10000, 1 for 10001..20000, and 2 for > 20000.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100fdb40(Guest* g, uint32_t param_1)
{
    const uint16_t ax = (uint16_t)param_1;

    /* cmp ax, 0x2710 / ja: unsigned greater-than */
    if (ax <= 0x2710u)
    {
        /* xor eax, eax */
        return 0u;
    }

    /* mov cx, 0x4e20 */
    g->ecx = (g->ecx & 0xFFFF0000u) | 0x4E20u;

    /*
     * cmp cx, ax sets CF = (0x4E20 < ax).
     * sbb eax, eax yields 0 if CF=0, 0xFFFFFFFF if CF=1.
     * neg eax then inc eax yields 1 if CF=0, 2 if CF=1.
     */
    return (0x4E20u < ax) ? 2u : 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fdb40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100fdb40(g, rd16(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
