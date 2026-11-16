/* f_0x10225220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10225220(Guest* g)
{
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    int64_t q11;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u) goto L_102252e7;
    if ((int32_t)arg1 < 0) goto L_102252e7;
    if ((int32_t)arg1 >= 2816) goto L_102252e7;
    if (rd32(COW_IMG(0x1066714cu)) == 0u) goto L_102252e7;
    ecx = rd32(COW_IMG(0x1066714cu));
    t1 = rd16(arg1 * 0x30u + ecx + 8u);
    g->edx = t1;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10225090u), self, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0xffu) goto L_102252e7;
    eax = t2;
    ecx = t3;
    edx = t4;
    esi = t2;
    if (rd16(esi * 8u + self + 4u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi * 8u + self + 4u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(esi * 8u + self + 4u);
        t5 = (uint32_t)(int16_t)eax + rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t5);
        eax = (uint32_t)(int16_t)eax;
        ecx = t5;
    }
    t6 = rd8(esi * 8u + self + 2u) & 0x3fu;
    t7 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t6);
    g->edx = edx;
    d8 = fr(g, (double)(int32_t)t7 - fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032b160u))) * (double)(int32_t)t7));
    fpush(g, d8);
    g->esp = sp0 - 0x10u;
    t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t10 = g->edx;
    q11 = (int64_t)cow_muls(0x88888889u, rd32(esi * 4u + self + 0xf8u) + 0x3bu);
    t12 = (uint32_t)((int32_t)(cow_qhi(q11) + rd32(esi * 4u + self + 0xf8u) + 0x3bu) >> 5u);
    t13 = cow_divs(g, t9, arg2);
    t14 = cow_mods(g, t9, arg2);
    t15 = t9 - (t12 + (t12 >> 0x1fu));
    t16 = cow_divs(g, t15, t13);
    t17 = cow_mods(g, t15, t13);
    return t16;
L_102252e7: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10225220(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
