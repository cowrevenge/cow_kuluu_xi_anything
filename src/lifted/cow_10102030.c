/* f_0x10102030 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 32-bit signed product of the two stack arguments divided by 100, incrementing the quotient when the signed remainder is nonzero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10102030(Guest* g, uint32_t a, uint32_t b)
{
    (void)g;

    /* imul eax, dword ptr [esp + 8] keeps only the low 32 bits. */
    const uint32_t product = (uint32_t)((uint64_t)a * (uint64_t)b);

    /* cdq sign-extends eax into edx:eax, so the dividend is the signed 32-bit product. */
    int64_t dividend = (int64_t)product;
    if (product & 0x80000000u)
    {
        dividend -= 0x100000000LL;
    }

    /* idiv ecx with ecx = 100: signed division, quotient truncates toward zero. */
    const int64_t quotient = dividend / 100;
    const int64_t remainder = dividend % 100;

    uint32_t result = (uint32_t)(int32_t)quotient;

    /* test edx, edx / je / inc eax */
    if (remainder != 0)
    {
        result += 1u;
    }

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10102030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10102030(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
