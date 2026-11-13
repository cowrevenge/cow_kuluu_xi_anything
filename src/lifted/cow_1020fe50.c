/* f_0x1020fe50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Searches the first 0x51 16-bit entries at [ecx] for the stack argument's low word, returning its index or -1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1020fe50(Guest* g, uint32_t self, uint32_t needle)
{
    const uint16_t want = (uint16_t)needle;

    /* mov dx, word ptr [esp + 4]: low 16 bits of edx are replaced, high 16 bits preserved. */
    g->edx = (g->edx & 0xFFFF0000u) | (uint32_t)want;

    uint32_t eax = 0u;

    for (;;)
    {
        /* cmp word ptr [ecx + eax*2], dx */
        const uint32_t addr = (uint32_t)(self + (uint32_t)(eax * 2u));
        if (rd16(addr) == want)
        {
            return eax;
        }

        /* inc eax */
        eax = (uint32_t)(eax + 1u);

        /* cmp eax, 0x51 / jl: signed comparison */
        if ((int32_t)eax >= 0x51)
        {
            break;
        }
    }

    /* or eax, 0xffffffff */
    return 0xFFFFFFFFu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020fe50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t needle = rd16(sp0 + 4u);
    const uint32_t result = cow_fn_1020fe50(g, g->ecx, needle);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
