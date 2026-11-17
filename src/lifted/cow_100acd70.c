/* f_0x100acd70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Lowercases ASCII A-Z bytes in the 32-bit value at self+0x86c, returning -1 if that value is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100acd70(Guest* g, uint32_t self)
{
    (void)g;

    uint32_t v = rd32(self + 0x86Cu);
    if (v == 0u)
    {
        return 0xFFFFFFFFu;
    }

    for (uint32_t i = 0u; i < 4u; ++i)
    {
        const uint32_t shift = i * 8u;
        uint8_t b = (uint8_t)(v >> shift);

        if ((int8_t)b >= 0x41 && (int8_t)b <= 0x5a)
        {
            b = (uint8_t)(b + 0x20u);
        }

        v = (v & ~(0xFFu << shift)) | ((uint32_t)b << shift);
    }

    return v;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100acd70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100acd70(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
