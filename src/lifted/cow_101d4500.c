/* f_0x101d4500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101d4500(Guest* g)
{
    double d10;
    double d11;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_18;
    double loc_1c_f;
    double loc_28_f;
    double loc_30_f;
    uint32_t t1;
    uint32_t t12;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    if (arg1 == 0u) goto L_101d4748;
    if (rd32(self + (arg2 == 9u) * 0x144u + rd8(arg1 + 2u) * 4u + 0x4cu) == 0u) goto L_101d4748;
    eax = (arg2 == 9u) * 0x51u + rd8(arg1 + 2u);
    ecx = rd32(self + (arg2 == 9u) * 0x144u + rd8(arg1 + 2u) * 4u + 0x4cu);
    g->esp = sp0 - 0x40u;
    t1 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
    if (t1 == 0u) goto L_101d4723;
    eax = t1;
    esi = t1;
    edi = rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u);
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t2 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    wr32(sp0 - 0x20u, rd32(t2));
    g->eax = rd32(t2);
    t3 = rd32(t2);
    t4 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t5 = rd32(t4 + 4u);
    wr32(sp0 - 0x1cu, t5);
    g->eax = t5;
    t6 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t7 = rd32(t6 + 8u);
    wr32(sp0 - 0x18u, t7);
    d8 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(COW_IMG(0x1032df40u)));
    wrf32(sp0 - 0x1cu, (float)d8);
    d9 = (double)(float)-(double)rdf32(sp0 - 0x20u);
    wrf32(sp0 - 0x30u, (float)d9);
    d10 = (double)(float)-cow_bits2f(t7);
    wrf32(sp0 - 0x28u, (float)d10);
    d11 = fr(g, sqrt(fr(g, fr(g, fr(g, -cow_bits2f(t7) * d10) + fr(g, (double)rdf32(COW_IMG(0x103295d8u)) * (double)rdf32(COW_IMG(0x103295d8u)))) + fr(g, d9 * d9))));
    if (d11 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        x1 = d11;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        goto L_101d4744;
    }
    loc_18 = t7;
    loc_1c_f = d8;
    loc_30_f = d9;
    loc_28_f = d10;
    x1 = d11;
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
    t12 = rd32(edi + 0x58u);
    wr32(sp0 - 8u, t12);
    d13 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1);
    d14 = (double)(float)fr(g, d13 * x0);
    wrf32(sp0 - 0x2cu, (float)d14);
    d15 = (double)(float)fr(g, d13 * loc_28_f);
    wrf32(sp0 - 0x28u, (float)d15);
    d16 = (double)(float)fr(g, d15 * (double)rdf32(COW_IMG(0x1032a3acu)));
    wrf32(sp0 - 0x28u, (float)d16);
    d17 = (double)(float)fr(g, fr(g, fr(g, loc_30_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1)) * (double)rdf32(COW_IMG(0x1032a3acu))) + (double)rdf32(sp0 - 0x20u));
    wrf32(sp0 - 0x30u, (float)d17);
    d18 = (double)(float)fr(g, (double)rdf32(sp0 - 0x20u) - (double)rdf32(edi + 0x50u));
    wrf32(sp0 - 0x20u, (float)d18);
    d19 = (double)(float)fr(g, loc_1c_f - (double)rdf32(edi + 0x54u));
    wrf32(sp0 - 0x1cu, (float)d19);
    t20 = rd32(edi + 0x4cu);
    wr32(sp0 - 8u, t20);
    d21 = (double)(float)fr(g, cow_bits2f(loc_18) - cow_bits2f(t12));
    wrf32(sp0 - 0x18u, (float)d21);
    d22 = (double)(float)fr(g, d17 - (double)rdf32(edi + 0x44u));
    wrf32(sp0 - 0x30u, (float)d22);
    d23 = (double)(float)fr(g, fr(g, fr(g, d14 * (double)rdf32(COW_IMG(0x1032a3acu))) + loc_1c_f) - (double)rdf32(edi + 0x48u));
    wrf32(sp0 - 0x2cu, (float)d23);
    d24 = (double)(float)fr(g, d19 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x1cu, (float)d24);
    d25 = (double)(float)fr(g, d21 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x18u, (float)d25);
    d26 = (double)(float)fr(g, d22 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x30u, (float)d26);
    d27 = (double)(float)fr(g, d23 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x2cu, (float)d27);
    d28 = (double)(float)fr(g, fr(g, fr(g, d16 + cow_bits2f(loc_18)) - cow_bits2f(t20)) * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x28u, (float)d28);
    d29 = (double)(float)fr(g, fr(g, d18 * (double)rdf32(COW_IMG(0x1032b15cu))) + (double)rdf32(edi + 0x50u));
    wrf32(sp0 - 0x20u, (float)d29);
    d30 = (double)(float)fr(g, d24 + (double)rdf32(edi + 0x54u));
    wrf32(sp0 - 0x1cu, (float)d30);
    d31 = (double)(float)fr(g, d25 + (double)rdf32(edi + 0x58u));
    wrf32(sp0 - 0x18u, (float)d31);
    d32 = (double)(float)fr(g, d26 + (double)rdf32(edi + 0x44u));
    wrf32(sp0 - 0x30u, (float)d32);
    d33 = (double)(float)fr(g, d27 + (double)rdf32(edi + 0x48u));
    wrf32(sp0 - 0x2cu, (float)d33);
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    d34 = (double)(float)fr(g, d28 + (double)rdf32(edi + 0x4cu));
    wrf32(sp0 - 0x28u, (float)d34);
    g->eax = sp0 - 0x20u;
    g->edx = t20;
    g->esp = sp0 - 0x40u;
    t35 = cow_thiscall(g, COW_IMG(0x1001e780u), edi, 1, sp0 - 0x20u);
    t36 = g->edx;
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x30u);
L_101d4723: ;
    t37 = rd32(self + (arg2 == 9u) * 0x144u + rd8(arg1 + 2u) * 4u + 0x4cu);
    wr32(sp0 - 0x44u, t37);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x101d4310u), self, 1, t37);
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    return;
L_101d4744: ;
L_101d4748: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d4500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d4500(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
