/* f_0x1018bd30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the signed 32-bit value pointed to by ecx divided by 0x4f1a00, using the original magic multiply/shift sequence.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018bd30(Guest* g, uint32_t self)
{
    (void)g;

    /* mov ecx, dword ptr [ecx] */
    uint32_t ecx = rd32(self);

    /* mov eax, 0x679024d1 ; imul ecx */
    int64_t p = (int64_t)(int32_t)0x679024D1u * (int64_t)(int32_t)ecx;
    uint32_t edx = (uint32_t)((uint64_t)p >> 32);

    /* mov eax, edx */
    uint32_t eax = edx;

    /* sar eax, 0x15 */
    {
        int32_t a = (int32_t)eax;
        int32_t r;

        if (a >= 0)
        {
            r = a >> 21;
        }
        else
        {
            int64_t x = -(int64_t)a;
            int64_t q = (x + ((int64_t)1 << 21) - 1) >> 21; /* ceil(x / 2^21) */
            r = (int32_t)(-q);
        }

        eax = (uint32_t)r;
    }

    /* mov ecx, eax ; shr ecx, 0x1f ; add eax, ecx */
    uint32_t ecx2 = eax >> 31;
    return eax + ecx2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018bd30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1018bd30(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
