/* f_0x102d745b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102d745b(Guest* g)
{
    double d10;
    double d12;
    double d13;
    double d14;
    double d15;
    double d17;
    double d18;
    double d19;
    double d20;
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
    double d35;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d58;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_14_f;
    double loc_24_f;
    double loc_28_f;
    double loc_2c_f;
    double loc_30_f;
    double loc_34_f;
    double loc_38_f;
    double loc_40_f;
    double loc_44_f;
    double loc_48_f;
    double loc_4c_f;
    double loc_50_f;
    double loc_54_f;
    double loc_58_f;
    double loc_60_d;
    double loc_8_f;
    double loc_c_f;
    uint32_t t1;
    uint32_t t11;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t56;
    uint32_t t57;
    uint32_t t6;
    uint32_t t7;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d773bu: ecx = g->ecx; in_edx = g->edx; loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_14_f = rdf32(sp0 - 0x14u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); goto E_102d773b;
    case 0x102d773du: ecx = g->ecx; in_edx = g->edx; loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_14_f = rdf32(sp0 - 0x14u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); goto E_102d773d;
    case 0x102d7753u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_60_d = rdf64(sp0 - 0x60u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_14_f = rdf32(sp0 - 0x14u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); goto E_102d7753;
    case 0x102d775du: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_60_d = rdf64(sp0 - 0x60u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_14_f = rdf32(sp0 - 0x14u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); goto E_102d775d;
    case 0x102d77e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_60_d = rdf64(sp0 - 0x60u); loc_58_f = rdf32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_14_f = rdf32(sp0 - 0x14u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); goto E_102d77e4;
    default: break;
    }
#endif

    COW_AT(102d745b)
    t1 = rd32(rd32(sp0 + 0xcu) + 0x10u);
    t2 = rd32(rd32(sp0 + 0xcu) + 0x14u);
    t3 = rd32(rd32(sp0 + 0xcu) + 0x20u);
    t4 = rd32(rd32(sp0 + 0xcu) + 0x24u);
    t5 = rd32(rd32(sp0 + 0xcu) + 0x30u);
    t6 = rd32(rd32(sp0 + 0xcu) + 0x34u);
    t7 = rd32(sp0 + 0xcu);
    d8 = fr(g, fr(g, cow_bits2f(t2) * (double)rdf32(rd32(sp0 + 0xcu))) - fr(g, cow_bits2f(t1) * (double)rdf32(rd32(sp0 + 0xcu) + 4u)));
    d9 = (double)rdf32(rd32(sp0 + 0xcu) + 4u);
    d10 = (double)rdf32(rd32(sp0 + 0xcu));
    wr32(sp0 + 0xcu, t6);
    t11 = rd32(t7 + 0x38u);
    d12 = (double)(float)fr(g, fr(g, cow_bits2f(t4) * d10) - fr(g, cow_bits2f(t3) * d9));
    d13 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 0xcu) * d10) - fr(g, cow_bits2f(t5) * d9));
    d14 = (double)(float)fr(g, fr(g, cow_bits2f(t4) * cow_bits2f(t1)) - fr(g, cow_bits2f(t3) * cow_bits2f(t2)));
    d15 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 0xcu) * cow_bits2f(t1)) - fr(g, cow_bits2f(t5) * cow_bits2f(t2)));
    t16 = rd32(t7 + 0x3cu);
    d17 = (double)rdf32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t16);
    d18 = (double)(float)fr(g, fr(g, d17 * cow_bits2f(t3)) - fr(g, cow_bits2f(t5) * cow_bits2f(t4)));
    d19 = (double)(float)(double)rdf32(t7 + 0x18u);
    d20 = (double)(float)(double)rdf32(t7 + 0x1cu);
    d21 = (double)(float)(double)rdf32(t7 + 0x28u);
    d22 = (double)(float)(double)rdf32(t7 + 0x2cu);
    d23 = (double)rdf32(t7 + 8u);
    d24 = (double)rdf32(t7 + 0x18u);
    g->st[g->top & 7u] = fr(g, d24 * d12);
    d25 = (double)rdf32(t7 + 0x28u);
    g->st[g->top & 7u] = fr(g, d25 * (double)(float)d8);
    d26 = (double)(float)fr(g, cow_faddp(fr(g, fr(g, d23 * d14) - fr(g, d24 * d12)), fr(g, d25 * (double)(float)d8)));
    g->st[g->top & 7u] = fr(g, cow_bits2f(t11) * (double)(float)d8);
    g->st[g->top & 7u] = fr(g, d23 * d15);
    d27 = (double)(float)fr(g, fr(g, fr(g, d24 * d13) - fr(g, cow_bits2f(t11) * (double)(float)d8)) - fr(g, d23 * d15));
    g->st[g->top & 7u] = fr(g, d25 * d13);
    g->st[g->top & 7u] = fr(g, cow_bits2f(t11) * d12);
    d28 = (double)(float)fr(g, cow_faddp(fr(g, fr(g, d23 * d18) - fr(g, d25 * d13)), fr(g, cow_bits2f(t11) * d12)));
    g->st[g->top & 7u] = fr(g, cow_bits2f(t11) * d14);
    g->st[g->top & 7u] = fr(g, d24 * d18);
    d29 = (double)(float)fr(g, fr(g, fr(g, d25 * d15) - fr(g, cow_bits2f(t11) * d14)) - fr(g, d24 * d18));
    g->st[g->top & 7u] = fr(g, (double)(float)d8 * (double)rdf32(t7 + 0x2cu));
    g->st[g->top & 7u] = fr(g, d14 * (double)rdf32(t7 + 0xcu));
    d30 = (double)(float)fr(g, fr(g, fr(g, d12 * (double)rdf32(t7 + 0x1cu)) - fr(g, (double)(float)d8 * (double)rdf32(t7 + 0x2cu))) - fr(g, d14 * (double)rdf32(t7 + 0xcu)));
    g->st[g->top & 7u] = fr(g, d13 * (double)rdf32(t7 + 0x1cu));
    g->st[g->top & 7u] = fr(g, (double)(float)d8 * (double)rdf32(sp0 + 0xcu));
    d31 = (double)(float)fr(g, cow_faddp(fr(g, fr(g, d15 * (double)rdf32(t7 + 0xcu)) - fr(g, d13 * (double)rdf32(t7 + 0x1cu))), fr(g, (double)(float)d8 * (double)rdf32(sp0 + 0xcu))));
    g->st[g->top & 7u] = fr(g, d12 * (double)rdf32(sp0 + 0xcu));
    g->st[g->top & 7u] = fr(g, d18 * (double)rdf32(t7 + 0xcu));
    d32 = (double)(float)fr(g, fr(g, fr(g, d13 * (double)rdf32(t7 + 0x2cu)) - fr(g, d12 * (double)rdf32(sp0 + 0xcu))) - fr(g, d18 * (double)rdf32(t7 + 0xcu)));
    g->st[g->top & 7u] = fr(g, d15 * (double)rdf32(t7 + 0x2cu));
    g->st[g->top & 7u] = fr(g, d14 * (double)rdf32(sp0 + 0xcu));
    d33 = (double)(float)fr(g, cow_faddp(fr(g, fr(g, d18 * (double)rdf32(t7 + 0x1cu)) - fr(g, d15 * (double)rdf32(t7 + 0x2cu))), fr(g, d14 * (double)rdf32(sp0 + 0xcu))));
    d34 = (double)(float)fr(g, fr(g, d23 * (double)rdf32(t7 + 0x1cu)) - fr(g, d24 * (double)rdf32(t7 + 0xcu)));
    d35 = (double)(float)fr(g, fr(g, d23 * d22) - fr(g, d21 * (double)rdf32(t7 + 0xcu)));
    t36 = rd32(t7 + 0x10u);
    t37 = rd32(t7 + 0x20u);
    t38 = rd32(t7 + 0x24u);
    t39 = rd32(t7 + 0x30u);
    t40 = rd32(t7 + 0x34u);
    t41 = rd32(t7);
    d42 = (double)rdf32(t7 + 0x14u);
    d43 = (double)rdf32(t7 + 4u);
    d44 = fr(g, fr(g, d21 * (double)rdf32(sp0 + 0xcu)) - fr(g, cow_bits2f(t11) * d22));
    d45 = fr(g, fr(g, d19 * (double)rdf32(sp0 + 0xcu)) - fr(g, cow_bits2f(t11) * d20));
    d46 = fr(g, fr(g, d23 * (double)rdf32(sp0 + 0xcu)) - fr(g, cow_bits2f(t11) * (double)rdf32(t7 + 0xcu)));
    wr32(sp0 + 0xcu, t40);
    g->st[g->top & 7u] = fr(g, d34 * cow_bits2f(t38));
    d47 = fr(g, fr(g, d19 * d22) - fr(g, d21 * d20));
    g->st[g->top & 7u] = fr(g, d47 * d43);
    d48 = (double)(float)fr(g, fr(g, fr(g, d35 * d42) - fr(g, d34 * cow_bits2f(t38))) - fr(g, d47 * d43));
    g->st[g->top & 7u] = fr(g, d46 * d42);
    g->st[g->top & 7u] = fr(g, d34 * (double)rdf32(sp0 + 0xcu));
    d49 = (double)(float)fr(g, cow_faddp(fr(g, fr(g, d45 * d43) - fr(g, d46 * d42)), fr(g, d34 * (double)rdf32(sp0 + 0xcu))));
    g->st[g->top & 7u] = fr(g, d35 * (double)rdf32(sp0 + 0xcu));
    g->st[g->top & 7u] = fr(g, d44 * d43);
    d50 = (double)(float)fr(g, fr(g, fr(g, d46 * cow_bits2f(t38)) - fr(g, d35 * (double)rdf32(sp0 + 0xcu))) - fr(g, d44 * d43));
    g->st[g->top & 7u] = fr(g, d45 * cow_bits2f(t38));
    g->st[g->top & 7u] = fr(g, d47 * (double)rdf32(sp0 + 0xcu));
    d51 = (double)(float)fr(g, cow_faddp(fr(g, fr(g, d44 * d42) - fr(g, d45 * cow_bits2f(t38))), fr(g, d47 * (double)rdf32(sp0 + 0xcu))));
    wrf32(sp0 + 0xcu, (float)fr(g, cow_faddp(fr(g, fr(g, d47 * cow_bits2f(t41)) - fr(g, d35 * cow_bits2f(t36))), fr(g, d34 * cow_bits2f(t37)))));
    d52 = (double)(float)fr(g, fr(g, fr(g, d46 * cow_bits2f(t36)) - fr(g, d34 * cow_bits2f(t39))) - fr(g, d45 * cow_bits2f(t41)));
    d53 = (double)(float)fr(g, cow_faddp(fr(g, fr(g, cow_bits2f(t41) * d44) - fr(g, d46 * cow_bits2f(t37))), fr(g, d35 * cow_bits2f(t39))));
    d54 = (double)(float)fr(g, fr(g, fr(g, d45 * cow_bits2f(t37)) - fr(g, d47 * cow_bits2f(t39))) - fr(g, d44 * cow_bits2f(t36)));
    if (arg2 == 0u)
    {
        ecx = t39;
        loc_24_f = d53;
        loc_8_f = d52;
        loc_14_f = d48;
        loc_30_f = d33;
        loc_38_f = d51;
        loc_34_f = d54;
        loc_2c_f = d50;
        loc_28_f = d49;
        loc_58_f = d26;
        loc_54_f = d27;
        loc_50_f = d28;
        loc_4c_f = d29;
        loc_48_f = d30;
        loc_44_f = d31;
        loc_40_f = d32;
        x0 = fr(g, cow_faddp(fr(g, cow_faddp(fr(g, cow_faddp(fr(g, d48 * cow_bits2f(t39)), fr(g, d49 * cow_bits2f(t37)))), fr(g, d50 * cow_bits2f(t36)))), fr(g, d51 * cow_bits2f(t41))));
    }
    else
    {
        ecx = t39;
        loc_24_f = d53;
        loc_8_f = d52;
        loc_14_f = d48;
        loc_30_f = d33;
        loc_38_f = d51;
        loc_34_f = d54;
        loc_2c_f = d50;
        loc_28_f = d49;
        loc_58_f = d26;
        loc_54_f = d27;
        loc_50_f = d28;
        loc_4c_f = d29;
        loc_48_f = d30;
        loc_44_f = d31;
        loc_40_f = d32;
        x0 = fr(g, cow_faddp(fr(g, cow_faddp(fr(g, cow_faddp(fr(g, d48 * cow_bits2f(t39)), fr(g, d49 * cow_bits2f(t37)))), fr(g, d50 * cow_bits2f(t36)))), fr(g, d51 * cow_bits2f(t41))));
    COW_AT(102d773b)
        wrf32(arg2, (float)x0);
    }
    COW_AT(102d773d)
    d55 = (double)(float)fr(g, 1.0 / x0);
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    COW_RET(0x102d7753u);
    t56 = cow_cdecl(g, COW_IMG(0x10314508u), 3, cow_dlo(d55), cow_dhi(d55), cow_f2bits(loc_58_f));
    t57 = g->edx;
    eax = t56;
    edx = t57;
    loc_c_f = d55;
    loc_60_d = d55;
    COW_AT(102d7753)
    if (eax != 0u)
    {
    COW_AT(102d775d)
        wrf32(arg1, (float)fr(g, loc_38_f * loc_c_f));
        wrf32(arg1 + 4u, (float)fr(g, loc_2c_f * loc_c_f));
        wrf32(arg1 + 8u, (float)fr(g, loc_28_f * loc_c_f));
        wrf32(arg1 + 0xcu, (float)fr(g, loc_14_f * loc_c_f));
        wrf32(arg1 + 0x10u, (float)fr(g, loc_34_f * loc_c_f));
        wrf32(arg1 + 0x14u, (float)fr(g, loc_24_f * loc_c_f));
        wrf32(arg1 + 0x18u, (float)fr(g, loc_8_f * loc_c_f));
        d58 = fr(g, (double)rdf32(sp0 + 0xcu) * loc_c_f);
        wrf32(arg1 + 0x1cu, (float)d58);
        wrf32(arg1 + 0x20u, (float)fr(g, loc_30_f * loc_c_f));
        wrf32(arg1 + 0x24u, (float)fr(g, loc_40_f * loc_c_f));
        wrf32(arg1 + 0x28u, (float)fr(g, loc_44_f * loc_c_f));
        wrf32(arg1 + 0x2cu, (float)fr(g, loc_48_f * loc_c_f));
        wrf32(arg1 + 0x30u, (float)fr(g, loc_4c_f * loc_c_f));
        wrf32(arg1 + 0x34u, (float)fr(g, loc_50_f * loc_c_f));
        wrf32(arg1 + 0x38u, (float)fr(g, loc_54_f * loc_c_f));
        wrf32(arg1 + 0x3cu, (float)fr(g, loc_58_f * loc_c_f));
        eax = arg1;
    }
    COW_AT(102d77e4)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d745b(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d773bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        double loc_14_f;
        double loc_24_f;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_38_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        ecx = g->ecx;
        in_edx = g->edx;
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d773du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        double loc_14_f;
        double loc_24_f;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_38_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        ecx = g->ecx;
        in_edx = g->edx;
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d7753u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double loc_14_f;
        double loc_24_f;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_38_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_60_d;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_60_d = rdf64(sp0 - 0x60u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x60u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d775du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double loc_14_f;
        double loc_24_f;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_38_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_60_d;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_60_d = rdf64(sp0 - 0x60u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d77e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double loc_14_f;
        double loc_24_f;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        double loc_34_f;
        double loc_38_f;
        double loc_40_f;
        double loc_44_f;
        double loc_48_f;
        double loc_4c_f;
        double loc_50_f;
        double loc_54_f;
        double loc_58_f;
        double loc_60_d;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_60_d = rdf64(sp0 - 0x60u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d745b(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d745b(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
