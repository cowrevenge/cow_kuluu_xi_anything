/* f_0x1016e7e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1016e7e0(Guest* g)
{
    double d1;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d3;
    double d6;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    double loc_4_f;
    double loc_8_f;
    double loc_c_f;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    d1 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 8u) + 4u) - (double)rdf32(rd32(sp0 + 4u) + 4u));
    wrf32(sp0 - 0x14u, (float)d1);
    d2 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 8u) + 8u) - (double)rdf32(rd32(sp0 + 4u) + 8u));
    wrf32(sp0 - 0x10u, (float)d2);
    d3 = fr(g, (double)rdf32(rd32(sp0 + 8u)) - (double)rdf32(rd32(sp0 + 4u)));
    g->edx = in_edx;
    t4 = rd32(sp0 + 4u);
    t5 = rd32(sp0 + 8u);
    d6 = fr(g, fr(g, sqrt(fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u) + 8u) - (double)rdf32(rd32(sp0 + 4u) + 8u)) * d2) + fr(g, d3 * d3)))) * (double)rdf32(COW_IMG(0x10336640u)));
    fpush(g, d6);
    g->esp = sp0 - 0x30u;
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    wr32(sp0 + 8u, 1u - t7);
    if ((int32_t)(1u - t7) >= 2)
    {
        esi = t4;
        edi = t5;
        x0 = d3;
        goto L_1016e848;
    }
    edx = t8;
    esi = t4;
    edi = t5;
    x0 = d3;
    wr32(sp0 - 0x34u, arg3);
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, esi);
    g->eax = arg3;
    g->esp = sp0 - 0x30u;
    t9 = cow_thiscall(g, COW_IMG(0x1016e930u), self, 3, esi, edi, arg3);
    return t9;
L_1016e848: ;
    wr32(sp0 - 0x24u, rd32(esi));
    t10 = rd32(esi + 4u);
    wr32(sp0 - 0x20u, t10);
    t11 = rd32(esi + 8u);
    wr32(sp0 - 0x1cu, t11);
    t12 = rd32(esi);
    d13 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int32_t)rd32(sp0 + 8u));
    wr32(sp0 + 4u, 0u);
    wrf32(sp0 + 8u, (float)d13);
    d14 = (double)(float)fr(g, d13 * x0);
    wrf32(sp0 - 0xcu, (float)d14);
    d15 = (double)(float)fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(sp0 + 8u));
    wrf32(sp0 - 8u, (float)d15);
    d16 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(sp0 - 0x10u));
    wrf32(sp0 - 4u, (float)d16);
    eax = t11;
    edx = t10;
    loc_24 = t12;
    loc_20 = t10;
    loc_1c = t11;
    loc_c_f = d14;
    loc_8_f = d15;
    loc_4_f = d16;
L_1016e896: ;
    wr32(sp0 - 0x34u, arg3);
    d17 = (double)(float)fr(g, cow_bits2f(loc_24) + loc_c_f);
    wrf32(sp0 - 0x18u, (float)d17);
    d18 = (double)(float)fr(g, cow_bits2f(loc_20) + loc_8_f);
    wrf32(sp0 - 0x14u, (float)d18);
    d19 = (double)(float)fr(g, cow_bits2f(loc_1c) + loc_4_f);
    wrf32(sp0 - 0x10u, (float)d19);
    d20 = fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 4u, (float)d20);
    if (!(d20 < (double)rdf32(COW_IMG(0x1032961cu)))) goto L_1016e90e;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    loc_18_f = d17;
    loc_14_f = d18;
    loc_10_f = d19;
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    wr32(sp0 - 0x3cu, sp0 - 0x24u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t21 = cow_thiscall(g, COW_IMG(0x1016e930u), self, 3, sp0 - 0x24u, sp0 - 0x18u, arg3);
    if ((uint8_t)t21 != 0u)
    {
        eax = t21;
        goto L_1016e903;
    }
    t22 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x24u, t22);
    t23 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x20u, t23);
    t24 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x1cu, t24);
    eax = t22;
    edx = t24;
    loc_24 = t22;
    loc_20 = t23;
    loc_1c = t24;
    goto L_1016e896;
L_1016e903: ;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    return (eax & 0xffffff00u) | 1u;
L_1016e90e: ;
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->esp = sp0 - 0x30u;
    t25 = cow_thiscall(g, COW_IMG(0x1016e930u), self, 3, sp0 - 0x24u, edi, arg3);
    return t25;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016e7e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1016e7e0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
