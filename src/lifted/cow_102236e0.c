/* f_0x102236e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102236e0(Guest* g)
{
    uint32_t eax;
    int64_t q1;
    int64_t q4;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 >= 1000) goto L_102236f3;
    eax = 0x3e8u;
L_10223733: ;
    q1 = (int64_t)cow_muls(0x10624dd3u, ((uint32_t)(int16_t)rd16(arg2 + 2u) - (uint32_t)(int16_t)rd16(arg2)) * (eax - 0x3e8u));
    t2 = (uint32_t)((int32_t)cow_qhi(q1) >> 6u);
    t3 = t2 + (t2 >> 0x1fu) + (uint32_t)(int16_t)rd16(arg2);
    return t3;
L_102236f3: ;
    if ((int32_t)arg1 <= 3000) goto L_1022372c;
    eax = 0xbb8u;
L_102236ff: ;
    q4 = (int64_t)cow_muls(0x10624dd3u, ((uint32_t)(int16_t)rd16(arg2 + 4u) - (uint32_t)(int16_t)rd16(arg2 + 2u)) * (eax - 0x7d0u));
    t5 = (uint32_t)((int32_t)cow_qhi(q4) >> 6u);
    t6 = t5 + (t5 >> 0x1fu) + (uint32_t)(int16_t)rd16(arg2 + 2u);
    return t6;
L_1022372c: ;
    if ((int32_t)arg1 >= 2000)
    {
        eax = arg1;
        goto L_102236ff;
    }
    eax = arg1;
    goto L_10223733;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102236e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102236e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
