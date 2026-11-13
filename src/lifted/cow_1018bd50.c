/* f_0x1018bd50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns a signed 32-bit value scaled by 0x679024d1, rounded toward zero after a 24-bit arithmetic shift.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1018bd50(Guest* g, uint32_t self)
{
    const uint32_t val = rd32(self);

    int64_t p = (int64_t)(int32_t)0x679024D1u * (int64_t)(int32_t)val;
    uint32_t high = (uint32_t)((uint64_t)p >> 32);

    g->edx = high;

    int32_t s = (int32_t)high;
    int32_t q;
    if (s >= 0)
    {
        q = (int32_t)(high >> 24);
    }
    else
    {
        int64_t ns = -(int64_t)s;
        int64_t mag = (ns + ((int64_t)1 << 24) - 1) >> 24;
        q = (int32_t)(-mag);
    }

    uint32_t add = ((uint32_t)q) >> 31;
    g->ecx = add;

    return (uint32_t)q + add;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018bd50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1018bd50(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
