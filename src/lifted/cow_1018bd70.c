/* f_0x1018bd70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   computes a signed 32-bit multiply by 0x1B9DE7AF, takes the high 32 bits, arithmetic-shifts them right by 24, and adds the sign bit of that result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1018bd70(Guest* g, uint32_t self)
{
    const uint32_t v = rd32(self);

    /* imul ecx: signed eax * ecx -> 64-bit result in edx:eax */
    const int64_t p = (int64_t)(int32_t)0x1B9DE7AFu * (int64_t)(int32_t)v;
    const uint32_t edx = (uint32_t)((uint64_t)p >> 32);

    /* mov eax, edx */
    uint32_t eax = edx;

    /* sar eax, 0x18 (arithmetic right shift by 24) */
    if ((int32_t)eax < 0)
        eax = 0xFFFFFF00u | (eax >> 24);
    else
        eax = eax >> 24;

    /* mov ecx, eax */
    uint32_t ecx = eax;

    /* shr ecx, 0x1f */
    ecx = ecx >> 31;

    /* add eax, ecx */
    eax = eax + ecx;

    g->edx = edx;
    g->ecx = ecx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018bd70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1018bd70(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
