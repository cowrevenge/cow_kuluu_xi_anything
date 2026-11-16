/* f_0x10226f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10226f20(Guest* g)
{
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    int64_t q10;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        edx = in_edx;
        goto L_10226fc1;
    }
    if ((int32_t)arg1 < 0)
    {
        edx = in_edx;
        goto L_10226fc1;
    }
    if ((int32_t)arg1 >= 64)
    {
        edx = in_edx;
        goto L_10226fc1;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x10226e00u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0xffu)
    {
        edx = t3;
        goto L_10226fc1;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    if (rd16(esi * 8u + self + 4u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi * 8u + self + 4u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(esi * 8u + self + 4u);
        t4 = (uint32_t)(int16_t)eax + rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t4);
        eax = (uint32_t)(int16_t)eax;
        ecx = t4;
    }
    t5 = rd8(esi * 8u + self + 2u) & 0x3fu;
    t6 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t5);
    g->edx = edx;
    d7 = fr(g, (double)(int32_t)t6 - fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032b160u))) * (double)(int32_t)t6));
    fpush(g, d7);
    g->esp = sp0 - 0x10u;
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t9 = g->edx;
    q10 = (int64_t)cow_muls(0x88888889u, rd32(esi * 4u + self + 8u) + 0x3bu);
    t11 = (uint32_t)((int32_t)(cow_qhi(q10) + rd32(esi * 4u + self + 8u) + 0x3bu) >> 5u);
    t12 = cow_divs(g, t8, arg2);
    t13 = cow_mods(g, t8, arg2);
    t14 = t8 - (t11 + (t11 >> 0x1fu));
    t15 = cow_divs(g, t14, t12);
    t16 = cow_mods(g, t14, t12);
    g->edx = t16;
    return t15;
L_10226fc1: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10226f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10226f20(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
