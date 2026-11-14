/* f_0x10311ecf - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the number of 16-bit elements in a null-terminated word string, excluding the terminator.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10311ecf(Guest* g, uint32_t str)
{
    (void)g;

    uint32_t ecx = str;
    uint32_t eax = ecx + 2u;

    if (rd16(ecx) != 0u)
    {
        uint16_t dx;
        do
        {
            dx = rd16(eax);
            eax += 2u;
        } while (dx != 0u);
    }

    uint32_t diff = eax - ecx;

    /* sar eax, 1 */
    if (diff & 0x80000000u)
        diff = (diff >> 1) | 0x80000000u;
    else
        diff >>= 1;

    /* dec eax */
    return diff - 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10311ecf(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t str = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10311ecf(g, str);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
