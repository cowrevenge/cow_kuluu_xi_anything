/* f_0x1016f0e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1016f0e0(Guest* g)
{
    double d1;
    double d12;
    double d13;
    double d14;
    double d15;
    double d2;
    double d5;
    double d6;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    double loc_1c_f;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    double loc_4_f;
    double loc_8_f;
    uint32_t t10;
    uint32_t t11;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x10u, 0u);
    d1 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 8u)) * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x1cu, (float)d1);
    d2 = (double)rdf32(rd32(sp0 + 8u) + 8u);
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x103295d8u)), d2, 0u) & 0x4100u) != 0u)
    {
        loc_10 = 0u;
        loc_1c_f = d1;
    }
    else
    {
        ecx = rd32(sp0 + 8u);
        loc_1c_f = d1;
        t3 = rd32(ecx + 8u);
        wr32(sp0 - 0x10u, t3);
        loc_10 = t3;
    }
    t4 = rd32(self + 0x34120u);
    wr8(self + 0x34124u, 1u);
    wr8(self + 0x34125u, 0u);
    wr8(self + 0x34126u, 0u);
    wr32(self + 0x3412cu, 0x3e800000u);
    wr32(sp0 - 0x20u, self + 0x341acu);
    ecx = t4;
    edx = self + 0x341acu;
    loc_24 = in_ebx;
    loc_28 = in_ebp;
    loc_2c = in_esi;
    loc_30 = in_edi;
    loc_20 = self + 0x341acu;
L_1016f149: ;
    d5 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(self + 0x3416cu) + (double)rdf32(self + 0x3417cu)) * (double)rdf32(COW_IMG(0x103295d8u))) + fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(self + 0x3418cu))) + (double)rdf32(self + 0x3419cu));
    wrf32(sp0 - 0xcu, (float)d5);
    d6 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(self + 0x34170u) + (double)rdf32(self + 0x34180u)) * (double)rdf32(COW_IMG(0x103295d8u))) + fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(self + 0x34190u))) + (double)rdf32(self + 0x341a0u));
    wrf32(sp0 - 8u, (float)d6);
    d7 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(self + 0x34184u) + (double)rdf32(self + 0x34174u)) * (double)rdf32(COW_IMG(0x103295d8u))) + fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(self + 0x34194u))) + (double)rdf32(self + 0x341a4u));
    d8 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(self + 0x3416cu) + (double)rdf32(self + 0x3417cu)) * (double)rdf32(COW_IMG(0x103295d8u))) + fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(self + 0x3418cu))) + (double)rdf32(self + 0x3419cu));
    wr32(self + 0x34134u, 0x4b18967fu);
    wr32(self + 0x34130u, 0x4b18967fu);
    wrf32(sp0 - 4u, (float)(double)(float)d7);
    t9 = rd8(self + 0x34126u);
    wrf32(edx, (float)d8);
    if ((uint8_t)t9 != 0u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_4_f = (double)(float)d7;
    }
    else
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_8_f = d6;
        loc_4_f = (double)(float)d7;
        wr32(self + 0x341b0u, cow_f2bits(loc_8_f));
    }
    wr32(self + 0x341b4u, cow_f2bits(loc_4_f));
    if ((int32_t)ecx <= 0)
    {
        eax = cow_f2bits(loc_4_f);
        goto L_1016f21b;
    }
    eax = cow_f2bits(loc_4_f);
    ebp = self + 0x1a120u;
    edi = 0u;
L_1016f1fc: ;
    wr32(sp0 - 0x34u, sp0 - 0xcu);
    wr32(sp0 - 0x38u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t10 = cow_thiscall(g, COW_IMG(0x1016f320u), self, 2, ebp, sp0 - 0xcu);
    t11 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x34120u))
    {
        eax = t10;
        edx = t11;
        ebp = ebp + 0x68u;
        edi = edi + 1u;
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_1c_f = (double)rdf32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_1016f1fc;
    }
    eax = t10;
    ecx = rd32(self + 0x34120u);
    edx = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_1c_f = (double)rdf32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
L_1016f21b: ;
    d12 = (double)rdf32(rd32(sp0 + 8u) + 8u);
    if ((cow_fsw(g, cow_bits2f(loc_10), d12, 0u) & 0x100u) == 0u) goto L_1016f261;
    eax = cow_fsw(g, cow_bits2f(loc_10), d12, 0u) & 0x100u;
    edi = rd32(sp0 + 8u);
    if (rd8(self + 0x34125u) != 0u) goto L_1016f261;
    d13 = (double)(float)fr(g, loc_1c_f + cow_bits2f(loc_10));
    wrf32(sp0 - 0x10u, (float)d13);
    d14 = fr(g, loc_1c_f + cow_bits2f(loc_10));
    d15 = (double)rdf32(edi + 8u);
    if ((cow_fsw(g, d14, d15, 0u) & 0x4100u) == 0u)
    {
        t16 = rd32(edi + 8u);
        wr32(sp0 - 0x10u, t16);
    }
    goto L_1016f149;
L_1016f261: ;
    t17 = rd32(self + 0x34120u);
    wr8(self + 0x34124u, 0u);
    wr32(sp0 + 8u, 0u);
    eax = t17;
L_1016f271: ;
    wr8(self + 0x34125u, 0u);
    wr8(self + 0x34126u, 0u);
    wr32(sp0 - 0xcu, rd32(edx));
    t18 = rd32(edx + 4u);
    wr32(sp0 - 8u, t18);
    t19 = rd32(edx + 8u);
    wr32(sp0 - 4u, t19);
    wr32(self + 0x34130u, 0x4b18967fu);
    wr32(self + 0x34134u, 0x4b18967fu);
    if ((int32_t)eax <= 0) goto L_1016f2ff;
    ebp = self + 0x1a120u;
    edi = 0u;
L_1016f2b0: ;
    wr32(sp0 - 0x34u, sp0 - 0xcu);
    wr32(sp0 - 0x38u, ebp);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x1016f320u), self, 2, ebp, sp0 - 0xcu);
    if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x34120u))
    {
        eax = rd32(self + 0x34120u);
        ebp = ebp + 0x68u;
        edi = edi + 1u;
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_1016f2b0;
    }
    eax = rd32(self + 0x34120u);
    if (rd8(self + 0x34125u) != 0u) goto L_1016f2db;
    if (rd8(self + 0x34126u) == 0u) goto L_1016f2fb;
L_1016f2db: ;
    if ((int32_t)rd32(sp0 + 8u) > 2) goto L_1016f2ef;
    ecx = rd32(sp0 + 8u);
    t20 = rd32(sp0 - 0x20u);
    wr32(sp0 + 8u, ecx + 1u);
    edx = t20;
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_20 = rd32(sp0 - 0x20u);
    goto L_1016f271;
L_1016f2ef: ;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return eax & 0xffffff00u;
L_1016f2fb: ;
    edx = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
L_1016f2ff: ;
    wr32(arg1, rd32(edx));
    t21 = rd32(edx + 4u);
    wr32(arg1 + 4u, t21);
    t22 = rd32(edx + 8u);
    wr32(arg1 + 8u, t22);
    g->ebx = loc_24;
    g->esi = loc_2c;
    g->edi = loc_30;
    g->ebp = loc_28;
    return (arg1 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016f0e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1016f0e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
