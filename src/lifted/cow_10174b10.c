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
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d21;
    double d22;
    double d23;
    double d25;
    double d26;
    double d27;
    double d28;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
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
    uint32_t t14;
    uint32_t t2;
    uint32_t t20;
    uint32_t t24;
    uint32_t t29;
    uint32_t t3;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 152u);

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
            wr32(sp0 - 0x74u, 0u);
            ebp = 0u;
            loc_74 = 0u;
L_10174c2d: ;
            wr32(sp0 - 0x88u, 0x1cu);
            wr32(sp0 - 0x68u, 0x3a83126fu);
            wr32(sp0 - 0x64u, 0x3f800000u);
            wr32(sp0 - 0x60u, 0x80800000u);
            wr32(sp0 - 0x58u, 0u);
            d12 = fr(g, fr(g, (double)rdf32(loc_74 + rd32(self + 0xcu)) * (double)rdf32(COW_IMG(0x10336694u))) + (double)rdf32(COW_IMG(0x1032a344u)));
            wr32(sp0 - 0x5cu, 0u);
            wrf32(sp0 - 0x70u, (float)(double)(float)d12);
            d13 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a344u)) - fr(g, (double)rdf32(loc_74 + rd32(self + 0xcu) + 8u) * (double)rdf32(COW_IMG(0x10336694u)))) - (double)rdf32(COW_IMG(0x1032a3a0u)));
            wrf32(sp0 - 0x6cu, (float)d13);
            t14 = rd32(self + 0xcu);
            d15 = fr(g, d12 + (double)rdf32(COW_IMG(0x1032a3a0u)));
            d16 = fr(g, (double)rdf32(COW_IMG(0x1032a344u)) - fr(g, (double)rdf32(loc_74 + rd32(self + 0xcu) + 8u) * (double)rdf32(COW_IMG(0x10336694u))));
            esi = sp0 - 0x70u;
            edi = sp0 - 0x54u;
            ecx = 7u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            esi = sp0 - 0x70u;
            edi = sp0 - 0x38u;
            ecx = 7u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wrf32(sp0 - 0x54u, (float)(double)(float)d15);
            d17 = (double)(float)fr(g, d16 + (double)rdf32(COW_IMG(0x1032a3a0u)));
            wrf32(sp0 - 0x50u, (float)d17);
            d18 = (double)(float)fr(g, d12 - (double)rdf32(COW_IMG(0x1032a3a0u)));
            wrf32(sp0 - 0x38u, (float)d18);
            d19 = (double)(float)fr(g, d16 + (double)rdf32(COW_IMG(0x1032a3a0u)));
            wrf32(sp0 - 0x34u, (float)d19);
            wr32(sp0 - 0x8cu, sp0 - 0x70u);
            wr32(sp0 - 0x90u, 1u);
            wr32(sp0 - 0x94u, 4u);
            g->ebx = self;
            g->esp = sp0 - 0x84u;
            cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 4u, 1u, sp0 - 0x70u, 0x1cu);
            t20 = rd32(sp0 - 0x74u) + 0x40u;
            wr32(sp0 - 0x74u, t20);
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(self + 0x10u))
            {
                ebp = ebp + 1u;
                loc_74 = t20;
                goto L_10174c2d;
            }
        }
        if ((int32_t)rd32(self + 8u) > 0)
        {
            wr32(sp0 - 0x74u, 0u);
            ebp = 0u;
            loc_74 = 0u;
L_10174d0f: ;
            wr32(sp0 - 0x88u, 0x1cu);
            wr32(sp0 - 0x68u, 0x3a83126fu);
            wr32(sp0 - 0x64u, 0x3f800000u);
            wr32(sp0 - 0x60u, 0x80808000u);
            wr32(sp0 - 0x58u, 0u);
            d21 = fr(g, fr(g, (double)rdf32(loc_74 + rd32(self + 4u)) * (double)rdf32(COW_IMG(0x10336694u))) + (double)rdf32(COW_IMG(0x1032a344u)));
            wr32(sp0 - 0x5cu, 0u);
            d22 = (double)(float)fr(g, d21 - (double)rdf32(COW_IMG(0x10329990u)));
            wrf32(sp0 - 0x70u, (float)d22);
            d23 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a344u)) - fr(g, (double)rdf32(loc_74 + rd32(self + 4u) + 8u) * (double)rdf32(COW_IMG(0x10336694u)))) - (double)rdf32(COW_IMG(0x10329990u)));
            wrf32(sp0 - 0x6cu, (float)d23);
            t24 = rd32(self + 4u);
            d25 = fr(g, d21 + (double)rdf32(COW_IMG(0x10329990u)));
            d26 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a344u)) - fr(g, (double)rdf32(loc_74 + rd32(self + 4u) + 8u) * (double)rdf32(COW_IMG(0x10336694u)))) - (double)rdf32(COW_IMG(0x10329990u)));
            d27 = fr(g, (double)rdf32(COW_IMG(0x1032a344u)) - fr(g, (double)rdf32(loc_74 + rd32(self + 4u) + 8u) * (double)rdf32(COW_IMG(0x10336694u))));
            esi = sp0 - 0x70u;
            edi = sp0 - 0x54u;
            ecx = 7u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            esi = sp0 - 0x70u;
            edi = sp0 - 0x38u;
            ecx = 7u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wrf32(sp0 - 0x54u, (float)(double)(float)d25);
            wrf32(sp0 - 0x50u, (float)(double)(float)d26);
            wrf32(sp0 - 0x38u, (float)(double)(float)d21);
            d28 = (double)(float)fr(g, d27 + (double)rdf32(COW_IMG(0x10329990u)));
            wrf32(sp0 - 0x34u, (float)d28);
            wr32(sp0 - 0x8cu, sp0 - 0x70u);
            wr32(sp0 - 0x90u, 1u);
            wr32(sp0 - 0x94u, 4u);
            g->ebx = self;
            g->esp = sp0 - 0x84u;
            cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 4u, 1u, sp0 - 0x70u, 0x1cu);
            t29 = rd32(sp0 - 0x74u) + 0x40u;
            wr32(sp0 - 0x74u, t29);
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(self + 8u))
            {
                ebp = ebp + 1u;
                loc_74 = t29;
                goto L_10174d0f;
            }
        }
        wr32(sp0 - 0x68u, 0x3a83126fu);
        wr32(sp0 - 0x64u, 0x3f800000u);
        wr32(sp0 - 0x60u, 0x80008080u);
        wr32(sp0 - 0x58u, 0u);
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x88u, 0x1cu);
        wr32(sp0 - 0x8cu, sp0 - 0x70u);
        d30 = fr(g, fr(g, (double)rdf32(arg1) * (double)rdf32(COW_IMG(0x10336694u))) + (double)rdf32(COW_IMG(0x1032a344u)));
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x94u, 5u);
        wrf32(sp0 - 0x70u, (float)(double)(float)d30);
        d31 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a344u)) - fr(g, (double)rdf32(arg1 + 8u) * (double)rdf32(COW_IMG(0x10336694u)))) - (double)rdf32(COW_IMG(0x10329d38u)));
        wrf32(sp0 - 0x6cu, (float)d31);
        d32 = fr(g, (double)rdf32(COW_IMG(0x1032a344u)) - fr(g, (double)rdf32(arg1 + 8u) * (double)rdf32(COW_IMG(0x10336694u))));
        esi = sp0 - 0x70u;
        edi = sp0 - 0x54u;
        ecx = 7u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        d33 = fr(g, d30 + (double)rdf32(COW_IMG(0x10329d38u)));
        esi = sp0 - 0x70u;
        edi = sp0 - 0x38u;
        ecx = 7u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        esi = sp0 - 0x70u;
        edi = sp0 - 0x1cu;
        ecx = 7u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wrf32(sp0 - 0x54u, (float)(double)(float)d33);
        wrf32(sp0 - 0x50u, (float)(double)(float)d32);
        d34 = (double)(float)fr(g, d30 - (double)rdf32(COW_IMG(0x10329d38u)));
        wrf32(sp0 - 0x38u, (float)d34);
        wrf32(sp0 - 0x34u, (float)(double)(float)d32);
        wrf32(sp0 - 0x1cu, (float)(double)(float)d30);
        d35 = (double)(float)fr(g, d32 + (double)rdf32(COW_IMG(0x10329d38u)));
        wrf32(sp0 - 0x18u, (float)d35);
        g->ebx = self;
        g->eax = arg1;
        g->edx = sp0 - 0x70u;
        g->esp = sp0 - 0x84u;
        t36 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x70u, 0x1cu);
        t37 = g->edx;
        eax = t36;
        edx = t37;
        esi = rd32(sp0 - 0x80u);
        edi = rd32(sp0 - 0x84u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_7c = rd32(sp0 - 0x7cu);
    }
    g->ebx = loc_78;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_7c;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10174b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10174b10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
