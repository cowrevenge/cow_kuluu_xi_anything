/* f_0x1025df70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears the byte at self + index*4 when the signed 16-bit stack argument is in [0, 255].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1025df70(Guest* g, uint32_t self, uint32_t arg)
{
    const uint32_t entry_eax = g->eax;
    const uint16_t ax = (uint16_t)arg;
    const int16_t v = (int16_t)ax;

    if (v >= 0 && v < 256)
    {
        const uint32_t idx = (uint32_t)v;
        wr8((uint32_t)(self + idx * 4u), 0u);
        return idx;
    }

    return (entry_eax & 0xFFFF0000u) | (uint32_t)ax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025df70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd16(sp0 + 4u);
    const uint32_t result = cow_fn_1025df70(g, g->ecx, arg);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
