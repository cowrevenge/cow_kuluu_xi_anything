/* f_0x10225120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10225120(Guest* g)
{
    double d10;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    int64_t q13;
    int64_t q6;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 < 0) goto L_1022520e;
    if ((int32_t)arg1 >= 2816) goto L_1022520e;
    if (rd32(COW_IMG(0x1066714cu)) == 0u) goto L_1022520e;
    ecx = rd32(COW_IMG(0x1066714cu));
    t1 = rd16(arg1 * 0x30u + ecx + 8u);
    g->edx = t1;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10225090u), self, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0xffu) goto L_1022520e;
    eax = t2;
    ecx = t3;
    edx = t4;
    esi = t2;
    if (rd16(esi * 8u + self + 4u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi * 8u + self + 4u);
        t5 = (uint32_t)(int16_t)eax + rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t5);
        ecx = t5;
    }
    if (arg2 != 0u) goto L_102251af;
    q6 = (int64_t)cow_muls(0x88888889u, rd32(esi * 4u + self + 0xf8u) + 0x3bu);
    t7 = (uint32_t)((int32_t)(cow_qhi(q6) + rd32(esi * 4u + self + 0xf8u) + 0x3bu) >> 5u);
    return t7 + (t7 >> 0x1fu);
L_102251af: ;
    t8 = rd8(esi * 8u + self + 2u) & 0x3fu;
    t9 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t8);
    g->edx = t8;
    d10 = fr(g, fr(g, (double)(int32_t)t9 - fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032b160u))) * (double)(int32_t)t9)) / (double)(int32_t)arg2);
    fpush(g, d10);
    g->esp = sp0 - 0xcu;
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), arg2, g->ecx, g->edx, 1, 0);
    t12 = g->edx;
    q13 = (int64_t)cow_muls(0x88888889u, rd32(esi * 4u + self + 0xf8u) + 0x3bu);
    t14 = (uint32_t)((int32_t)(cow_qhi(q13) + rd32(esi * 4u + self + 0xf8u) + 0x3bu) >> 5u);
    t15 = cow_divs(g, t14 + (t14 >> 0x1fu), t11);
    t16 = cow_mods(g, t14 + (t14 >> 0x1fu), t11);
    if (t16 != 0u)
    {
        eax = t16;
    }
    else
    {
        eax = t16;
        ebx = t11;
        esi = rd32(esi * 4u + self + 0xf8u);
        if (esi != 0u)
        {
            eax = ebx;
        }
    }
    return eax;
L_1022520e: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10225120(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
