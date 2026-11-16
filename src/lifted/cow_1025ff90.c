/* f_0x1025ff90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1025ff90(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q1;
    int64_t q13;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    q1 = (int64_t)cow_muls(0x68db8badu, arg1);
    t2 = (uint32_t)((int32_t)cow_qhi(q1) >> 0xcu);
    t3 = t2 + (t2 >> 0x1fu);
    if ((int32_t)t3 > 1000)
    {
        eax = t2 >> 0x1fu;
        edx = t3;
        esi = t3;
        goto L_1025ffba;
    }
    eax = t2 >> 0x1fu;
    edx = t3;
    esi = t3;
    if ((int32_t)esi >= -1000) goto L_1025ffdd;
L_1025ffba: ;
    if ((int32_t)rd32(self + 0x124u) > 1)
    {
        t4 = (((int32_t)esi <= 0) - 1u & 0x7d0u) - 0x3e8u;
        edx = t4;
        esi = t4;
    }
    else
    {
        esi = 0u;
    }
L_1025ffdd: ;
    if ((int32_t)rd32(self + 0x124u) <= 1)
    {
        edi = rd32(self + 0x124u);
    }
    else
    {
        edi = rd32(self + 0x124u);
        t5 = esi + rd32(self + 0x128u);
        t6 = rd32(self + 0x12cu);
        t7 = rd32(self + 0x128u);
        wr32(self + 0x128u, t5);
        t8 = (uint32_t)((int32_t)esi >> 0x1fu) + t6 + (esi + t7 < t7);
        wr32(self + 0x12cu, t8);
        t9 = esi * esi + rd32(self + 0x130u);
        t10 = rd32(self + 0x134u);
        t11 = rd32(self + 0x130u);
        wr32(self + 0x130u, t9);
        t12 = t10 + (uint32_t)((int32_t)(esi * esi) >> 0x1fu) + (esi * esi + t11 < t11);
        wr32(self + 0x134u, t12);
        eax = t12;
        edx = (uint32_t)((int32_t)(esi * esi) >> 0x1fu);
    }
    if ((int32_t)edi > 2)
    {
        q13 = (int64_t)cow_muls(0x68db8badu, arg2);
        t14 = (uint32_t)((int32_t)cow_qhi(q13) >> 0xcu);
        t15 = t14 + (t14 >> 0x1fu);
        if ((int32_t)t15 > 1000) goto L_10260051;
        esi = t15;
        if ((int32_t)esi >= 0) goto L_10260056;
L_10260051: ;
        esi = 0x3e8u;
L_10260056: ;
        t16 = esi * esi + rd32(self + 0x140u);
        t17 = rd32(self + 0x148u);
        t18 = rd32(self + 0x140u);
        wr32(self + 0x140u, t16);
        t19 = rd32(self + 0x144u) + (uint32_t)((int32_t)(esi * esi) >> 0x1fu) + (esi * esi + t18 < t18);
        t20 = rd32(self + 0x14cu);
        wr32(self + 0x144u, t19);
        wr32(self + 0x148u, esi + t17);
        t21 = (uint32_t)((int32_t)esi >> 0x1fu) + t20 + (esi + t17 < t17);
        wr32(self + 0x14cu, t21);
        eax = t21;
        edx = (uint32_t)((int32_t)esi >> 0x1fu);
    }
    wr32(self + 0x124u, edi + 1u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025ff90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025ff90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
