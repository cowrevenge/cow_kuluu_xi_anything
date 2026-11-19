/* f_0x10169140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10169140(Guest* g)
{
    double d1;
    double d10;
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
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    double loc_4_f;
    double loc_8_f;
    double loc_c_f;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1016918fu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); x0 = ST(0); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1016918f;
    case 0x101691a8u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); x0 = ST(0); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_101691a8;
    case 0x101691f6u: eax = g->eax; edx = g->edx; self = g->ebx; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_101691f6;
    case 0x10169234u: eax = g->eax; edx = g->edx; self = g->ebx; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_10169234;
    case 0x10169249u: eax = g->eax; edx = g->edx; self = g->ebx; edi = g->edi; goto E_10169249;
    case 0x10169263u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10169263;
    case 0x1016926eu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_1016926e;
    default: break;
    }
#endif

    COW_AT(10169140)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    d1 = fr(g, (double)rdf32(rd32(sp0 + 8u) + 4u) - (double)rdf32(rd32(sp0 + 4u) + 4u));
    d2 = fr(g, (double)rdf32(rd32(sp0 + 8u)) - (double)rdf32(rd32(sp0 + 4u)));
    wrf32(sp0 - 0x14u, (float)(double)(float)d1);
    d3 = fr(g, (double)rdf32(rd32(sp0 + 8u) + 8u) - (double)rdf32(rd32(sp0 + 4u) + 8u));
    wrf32(sp0 - 0x10u, (float)(double)(float)d3);
    g->edx = in_edx;
    t4 = rd32(sp0 + 4u);
    t5 = rd32(sp0 + 8u);
    d6 = fr(g, fr(g, sqrt(fr(g, fr(g, d3 * (double)(float)d3) + fr(g, d2 * d2)))) * (double)rdf32(COW_IMG(0x10336640u)));
    fpush(g, d6);
    g->esp = sp0 - 0x30u;
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    wr32(sp0 + 8u, 1u - t7);
    if ((int32_t)(1u - t7) >= 2)
    {
        esi = t4;
        edi = t5;
        x0 = d2;
        goto L_101691a8;
    }
    edx = t8;
    esi = t4;
    edi = t5;
    x0 = d2;
    COW_AT(1016918f)
    wr32(sp0 - 0x34u, arg3);
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, esi);
    g->eax = arg3;
    g->esp = sp0 - 0x30u;
    t9 = cow_thiscall(g, COW_IMG(0x1016b1d0u), self, 3, esi, edi, arg3);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return t9;
L_101691a8: ;
    COW_AT(101691a8)
    d10 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int32_t)rd32(sp0 + 8u));
    wr32(sp0 - 0x24u, rd32(esi));
    t11 = rd32(esi + 4u);
    wr32(sp0 - 0x20u, t11);
    t12 = rd32(esi + 8u);
    wr32(sp0 - 0x1cu, t12);
    t13 = rd32(esi);
    wr32(sp0 + 4u, 0u);
    wrf32(sp0 + 8u, (float)d10);
    d14 = (double)(float)fr(g, d10 * x0);
    wrf32(sp0 - 0xcu, (float)d14);
    d15 = fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(sp0 + 8u));
    wrf32(sp0 - 8u, (float)(double)(float)d15);
    d16 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(sp0 - 0x10u));
    wrf32(sp0 - 4u, (float)(double)(float)d16);
    eax = t12;
    edx = t11;
    loc_28 = in_ebx;
    loc_2c = in_esi;
    loc_30 = in_edi;
    loc_24 = t13;
    loc_20 = t11;
    loc_1c = t12;
    loc_c_f = d14;
    loc_8_f = (double)(float)d15;
    loc_4_f = (double)(float)d16;
L_101691f6: ;
    COW_AT(101691f6)
    wr32(sp0 - 0x34u, arg3);
    d17 = (double)(float)fr(g, cow_bits2f(loc_24) + loc_c_f);
    wrf32(sp0 - 0x18u, (float)d17);
    d18 = (double)(float)fr(g, cow_bits2f(loc_20) + loc_8_f);
    wrf32(sp0 - 0x14u, (float)d18);
    d19 = (double)(float)fr(g, cow_bits2f(loc_1c) + loc_4_f);
    wrf32(sp0 - 0x10u, (float)d19);
    d20 = fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 4u, (float)d20);
    if (!(d20 < (double)rdf32(COW_IMG(0x1032961cu)))) goto L_1016926e;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    loc_18_f = d17;
    loc_14_f = d18;
    loc_10_f = d19;
    COW_AT(10169234)
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    wr32(sp0 - 0x3cu, sp0 - 0x24u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t21 = cow_thiscall(g, COW_IMG(0x1016b1d0u), self, 3, sp0 - 0x24u, sp0 - 0x18u, arg3);
    if ((uint8_t)t21 != 0u)
    {
        eax = t21;
        goto L_10169263;
    }
    COW_AT(10169249)
    t22 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x24u, t22);
    t23 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x20u, t23);
    t24 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x1cu, t24);
    eax = t22;
    edx = t24;
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_24 = t22;
    loc_20 = t23;
    loc_1c = t24;
    loc_c_f = (double)rdf32(sp0 - 0xcu);
    loc_8_f = (double)rdf32(sp0 - 8u);
    loc_4_f = (double)rdf32(sp0 - 4u);
    goto L_101691f6;
L_10169263: ;
    COW_AT(10169263)
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    return (eax & 0xffffff00u) | 1u;
L_1016926e: ;
    COW_AT(1016926e)
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->esp = sp0 - 0x30u;
    t25 = cow_thiscall(g, COW_IMG(0x1016b1d0u), self, 3, sp0 - 0x24u, edi, arg3);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    return t25;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10169140(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1016918fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101691a8u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101691f6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10169234u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->esi = arg3;
        wr32(sp0 - 0x34u, arg3);
        (void)sp0;
        return 1;
    }
    case 0x10169249u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->esi = arg3;
        wr32(sp0 - 0x3cu, sp0 - 0x24u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10169263u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x24u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1016926eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x34u, arg3);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10169140(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10169140(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
