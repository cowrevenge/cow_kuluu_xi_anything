/* f_0x10174b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10174b10(Guest* g)
{
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d18;
    double d19;
    double d20;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d29;
    double d30;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_7c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t17;
    uint32_t t2;
    uint32_t t21;
    uint32_t t28;
    uint32_t t3;
    uint32_t t31;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 152u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10174b22u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x7cu); in_ebx = rd32(sp0 - 0x78u); g->ebp = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x78u); goto E_10174b22;
    case 0x10174c29u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_10174c29;
    case 0x10174c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); goto E_10174c2d;
    case 0x10174cfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); goto E_10174cfe;
    case 0x10174d0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); goto E_10174d0b;
    case 0x10174d0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); goto E_10174d0f;
    case 0x10174de0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); goto E_10174de0;
    case 0x10174eb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); goto E_10174eb3;
    default: break;
    }
#endif

    COW_AT(10174b10)
    wr32(sp0 - 0x78u, in_ebx);
    wr32(sp0 - 0x7cu, in_ebp);
    if (rd32(self + 0x10u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        esi = in_esi;
        edi = in_edi;
        loc_78 = in_ebx;
        loc_7c = in_ebp;
    }
    else
    {
    COW_AT(10174b22)
        wr32(sp0 - 0x80u, in_esi);
        wr32(sp0 - 0x84u, in_edi);
        wr32(sp0 - 0x88u, 0u);
        wr32(sp0 - 0x8cu, 0u);
        t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x90u, t1);
        g->esp = sp0 - 0x84u;
        cow_thiscall(g, rd32(rd32(t1) + 0xf4u), rd32(t1), 3, t1, 0u, 0u);
        wr32(sp0 - 0x88u, 5u);
        wr32(sp0 - 0x8cu, 1u);
        wr32(sp0 - 0x90u, 0u);
        t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x94u, t2);
        cow_thiscall(g, rd32(rd32(t2) + 0xfcu), rd32(t2), 4, t2, 0u, 1u, 5u);
        wr32(sp0 - 0x88u, 2u);
        wr32(sp0 - 0x8cu, 2u);
        wr32(sp0 - 0x90u, 0u);
        t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x94u, t3);
        cow_thiscall(g, rd32(rd32(t3) + 0xfcu), rd32(t3), 4, t3, 0u, 2u, 2u);
        wr32(sp0 - 0x88u, 1u);
        wr32(sp0 - 0x8cu, 3u);
        wr32(sp0 - 0x90u, 0u);
        t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x94u, t4);
        cow_thiscall(g, rd32(rd32(t4) + 0xfcu), rd32(t4), 4, t4, 0u, 3u, 1u);
        wr32(sp0 - 0x88u, 6u);
        wr32(sp0 - 0x8cu, 4u);
        wr32(sp0 - 0x90u, 0u);
        t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x94u, t5);
        cow_thiscall(g, rd32(rd32(t5) + 0xfcu), rd32(t5), 4, t5, 0u, 4u, 6u);
        wr32(sp0 - 0x88u, 2u);
        wr32(sp0 - 0x8cu, 5u);
        wr32(sp0 - 0x90u, 0u);
        t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x94u, t6);
        cow_thiscall(g, rd32(rd32(t6) + 0xfcu), rd32(t6), 4, t6, 0u, 5u, 2u);
        wr32(sp0 - 0x88u, 1u);
        wr32(sp0 - 0x8cu, 6u);
        wr32(sp0 - 0x90u, 0u);
        t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x94u, t7);
        cow_thiscall(g, rd32(rd32(t7) + 0xfcu), rd32(t7), 4, t7, 0u, 6u, 1u);
        wr32(sp0 - 0x88u, 1u);
        wr32(sp0 - 0x8cu, 4u);
        wr32(sp0 - 0x90u, 1u);
        t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x94u, t8);
        cow_thiscall(g, rd32(rd32(t8) + 0xfcu), rd32(t8), 4, t8, 1u, 4u, 1u);
        wr32(sp0 - 0x88u, 1u);
        wr32(sp0 - 0x8cu, 1u);
        wr32(sp0 - 0x90u, 1u);
        t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x94u, t9);
        cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 4, t9, 1u, 1u, 1u);
        wr32(sp0 - 0x88u, 0u);
        wr32(sp0 - 0x8cu, 0x89u);
        t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x90u, t10);
        cow_thiscall(g, rd32(rd32(t10) + 0xc8u), rd32(t10), 3, t10, 0x89u, 0u);
        wr32(sp0 - 0x88u, 0x144u);
        t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x8cu, t11);
        cow_thiscall(g, rd32(rd32(t11) + 0x130u), rd32(t11), 2, t11, 0x144u);
        if ((int32_t)rd32(self + 0x10u) > 0)
        {
    COW_AT(10174c29)
            wr32(sp0 - 0x74u, 0u);
            ebp = 0u;
            loc_74 = 0u;
L_10174c2d: ;
    COW_AT(10174c2d)
            d12 = fr(g, (double)rdf32(loc_74 + rd32(self + 0xcu)) * (double)rdf32(COW_IMG(0x10336694u)));
            wr32(sp0 - 0x88u, 0x1cu);
            d13 = fr(g, (double)rdf32(loc_74 + rd32(self + 0xcu) + 8u) * (double)rdf32(COW_IMG(0x10336694u)));
            d14 = fr(g, d12 + (double)rdf32(COW_IMG(0x1032a344u)));
            wr32(sp0 - 0x68u, 0x3a83126fu);
            wr32(sp0 - 0x64u, 0x3f800000u);
            wr32(sp0 - 0x60u, 0x80800000u);
            wr32(sp0 - 0x58u, 0u);
            d15 = fr(g, (double)rdf32(COW_IMG(0x1032a344u)) - d13);
            wr32(sp0 - 0x5cu, 0u);
            wrf32(sp0 - 0x70u, (float)(double)(float)d14);
            d16 = fr(g, d15 - (double)rdf32(COW_IMG(0x1032a3a0u)));
            wrf32(sp0 - 0x6cu, (float)(double)(float)d16);
            t17 = rd32(self + 0xcu);
            d18 = fr(g, d14 + (double)rdf32(COW_IMG(0x1032a3a0u)));
            esi = sp0 - 0x70u;
            edi = sp0 - 0x54u;
            ecx = 7u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            esi = sp0 - 0x70u;
            edi = sp0 - 0x38u;
            ecx = 7u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wrf32(sp0 - 0x54u, (float)(double)(float)d18);
            d19 = fr(g, d15 + (double)rdf32(COW_IMG(0x1032a3a0u)));
            wrf32(sp0 - 0x50u, (float)(double)(float)d19);
            d20 = fr(g, d14 - (double)rdf32(COW_IMG(0x1032a3a0u)));
            wrf32(sp0 - 0x38u, (float)(double)(float)d20);
            wrf32(sp0 - 0x34u, (float)(double)(float)d19);
            wr32(sp0 - 0x8cu, sp0 - 0x70u);
            wr32(sp0 - 0x90u, 1u);
            wr32(sp0 - 0x94u, 4u);
            g->ebx = self;
            g->esp = sp0 - 0x84u;
            cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 4u, 1u, sp0 - 0x70u, 0x1cu);
            t21 = rd32(sp0 - 0x74u) + 0x40u;
            wr32(sp0 - 0x74u, t21);
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(self + 0x10u))
            {
                ebp = ebp + 1u;
                loc_74 = t21;
                goto L_10174c2d;
            }
        }
    COW_AT(10174cfe)
        if ((int32_t)rd32(self + 8u) > 0)
        {
    COW_AT(10174d0b)
            wr32(sp0 - 0x74u, 0u);
            ebp = 0u;
            loc_74 = 0u;
L_10174d0f: ;
    COW_AT(10174d0f)
            d22 = fr(g, (double)rdf32(loc_74 + rd32(self + 4u)) * (double)rdf32(COW_IMG(0x10336694u)));
            wr32(sp0 - 0x88u, 0x1cu);
            d23 = fr(g, (double)rdf32(loc_74 + rd32(self + 4u) + 8u) * (double)rdf32(COW_IMG(0x10336694u)));
            d24 = fr(g, d22 + (double)rdf32(COW_IMG(0x1032a344u)));
            wr32(sp0 - 0x68u, 0x3a83126fu);
            wr32(sp0 - 0x64u, 0x3f800000u);
            wr32(sp0 - 0x60u, 0x80808000u);
            wr32(sp0 - 0x58u, 0u);
            d25 = fr(g, d24 - (double)rdf32(COW_IMG(0x10329990u)));
            d26 = fr(g, (double)rdf32(COW_IMG(0x1032a344u)) - d23);
            wr32(sp0 - 0x5cu, 0u);
            wrf32(sp0 - 0x70u, (float)(double)(float)d25);
            d27 = fr(g, d26 - (double)rdf32(COW_IMG(0x10329990u)));
            wrf32(sp0 - 0x6cu, (float)(double)(float)d27);
            t28 = rd32(self + 4u);
            d29 = fr(g, d24 + (double)rdf32(COW_IMG(0x10329990u)));
            esi = sp0 - 0x70u;
            edi = sp0 - 0x54u;
            ecx = 7u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            esi = sp0 - 0x70u;
            edi = sp0 - 0x38u;
            ecx = 7u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wrf32(sp0 - 0x54u, (float)(double)(float)d29);
            wrf32(sp0 - 0x50u, (float)(double)(float)d27);
            wrf32(sp0 - 0x38u, (float)(double)(float)d24);
            d30 = fr(g, d26 + (double)rdf32(COW_IMG(0x10329990u)));
            wrf32(sp0 - 0x34u, (float)(double)(float)d30);
            wr32(sp0 - 0x8cu, sp0 - 0x70u);
            wr32(sp0 - 0x90u, 1u);
            wr32(sp0 - 0x94u, 4u);
            g->ebx = self;
            g->esp = sp0 - 0x84u;
            cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 4u, 1u, sp0 - 0x70u, 0x1cu);
            t31 = rd32(sp0 - 0x74u) + 0x40u;
            wr32(sp0 - 0x74u, t31);
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(self + 8u))
            {
                ebp = ebp + 1u;
                loc_74 = t31;
                goto L_10174d0f;
            }
        }
    COW_AT(10174de0)
        d32 = fr(g, (double)rdf32(arg1) * (double)rdf32(COW_IMG(0x10336694u)));
        wr32(sp0 - 0x68u, 0x3a83126fu);
        wr32(sp0 - 0x64u, 0x3f800000u);
        wr32(sp0 - 0x60u, 0x80008080u);
        wr32(sp0 - 0x58u, 0u);
        d33 = fr(g, (double)rdf32(arg1 + 8u) * (double)rdf32(COW_IMG(0x10336694u)));
        d34 = fr(g, d32 + (double)rdf32(COW_IMG(0x1032a344u)));
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x88u, 0x1cu);
        wr32(sp0 - 0x8cu, sp0 - 0x70u);
        d35 = fr(g, (double)rdf32(COW_IMG(0x1032a344u)) - d33);
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x94u, 5u);
        wrf32(sp0 - 0x70u, (float)(double)(float)d34);
        d36 = fr(g, d35 - (double)rdf32(COW_IMG(0x10329d38u)));
        wrf32(sp0 - 0x6cu, (float)(double)(float)d36);
        esi = sp0 - 0x70u;
        edi = sp0 - 0x54u;
        ecx = 7u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        d37 = fr(g, d34 + (double)rdf32(COW_IMG(0x10329d38u)));
        esi = sp0 - 0x70u;
        edi = sp0 - 0x38u;
        ecx = 7u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        esi = sp0 - 0x70u;
        edi = sp0 - 0x1cu;
        ecx = 7u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wrf32(sp0 - 0x54u, (float)(double)(float)d37);
        wrf32(sp0 - 0x50u, (float)(double)(float)d35);
        d38 = fr(g, d34 - (double)rdf32(COW_IMG(0x10329d38u)));
        wrf32(sp0 - 0x38u, (float)(double)(float)d38);
        wrf32(sp0 - 0x34u, (float)(double)(float)d35);
        wrf32(sp0 - 0x1cu, (float)(double)(float)d34);
        d39 = fr(g, d35 + (double)rdf32(COW_IMG(0x10329d38u)));
        wrf32(sp0 - 0x18u, (float)(double)(float)d39);
        g->ebx = self;
        g->eax = arg1;
        g->edx = sp0 - 0x70u;
        g->esp = sp0 - 0x84u;
        t40 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x70u, 0x1cu);
        t41 = g->edx;
        eax = t40;
        edx = t41;
        esi = rd32(sp0 - 0x80u);
        edi = rd32(sp0 - 0x84u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_7c = rd32(sp0 - 0x7cu);
    }
    COW_AT(10174eb3)
    g->ebx = loc_78;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_7c;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10174b10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10174b22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x7cu);
        in_ebx = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x7cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10174c29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10174c2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x10174cfeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x10174d0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x84u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10174d0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x10174de0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x10174eb3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_78;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10174b10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10174b10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
