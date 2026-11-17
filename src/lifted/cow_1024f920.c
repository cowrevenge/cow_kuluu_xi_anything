/* f_0x1024f920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1024f920(Guest* g)
{
    double d15;
    double d16;
    double d17;
    double d23;
    double d24;
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
    double d36;
    double d37;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_110_f;
    double loc_114_f;
    double loc_118_f;
    uint32_t loc_138;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t25;
    uint32_t t3;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 376u);

    wr32(sp0 - 0x124u, in_ebx);
    wr32(sp0 - 0x128u, in_esi);
    wr32(sp0 - 0x12cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x12cu;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xccu, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0x130u, sp0 - 0x11cu);
    g->ecx = t1;
    g->edx = t2;
    cow_cdecl(g, COW_IMG(0x10271eb0u), 1, sp0 - 0x11cu);
    t3 = g->ecx;
    t4 = g->edx;
    if (!(rd32(sp0 - 0x11cu) >> 8u & 1u))
    {
        ecx = t3;
        wr32(sp0 - 0x130u, sp0 - 0x120u);
        wr32(sp0 - 0x134u, 0u);
        t5 = rd32(arg1 + 0x1cu);
        wr32(sp0 - 0x138u, t5);
        eax = t5;
        edx = sp0 - 0x120u;
        loc_138 = t5;
    }
    else
    {
        eax = rd32(sp0 - 0x11cu);
        edx = t4;
        wr32(sp0 - 0x130u, sp0 - 0x120u);
        wr32(sp0 - 0x134u, 0u);
        wr32(sp0 - 0x138u, 6u);
        ecx = sp0 - 0x120u;
        loc_138 = 6u;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x12cu;
    cow_cdecl(g, COW_IMG(0x10273390u), 3, loc_138, 0u, sp0 - 0x120u);
    t6 = g->ecx;
    t7 = g->edx;
    if (rd32(sp0 - 0x120u) == 0u)
    {
        eax = rd32(sp0 - 0x120u);
        edx = t7;
    }
    else
    {
        eax = rd32(sp0 - 0x120u);
        ecx = t6;
        edx = t7;
        g->eax = eax;
        g->esp = sp0 - 0x12cu;
        t8 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
        t9 = rd32(COW_IMG(0x1099d200u));
        esi = t8;
        edi = sp0 - 0xccu;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t10 = rd32(t9 + 0x2ecu);
        wr32(sp0 - 0xccu, t10);
        t11 = rd32(t9 + 0x300u);
        wr32(sp0 - 0xb8u, t11);
        esi = sp0 - 0xccu;
        edi = sp0 - 0x16cu;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->edx = t11;
        g->esp = sp0 - 0x16cu;
        cow_stdcall(g, COW_IMG(0x100151f0u), 0);
        t12 = g->edx;
        t13 = rd32(sp0 - 0x120u) + 0x1cu;
        wr32(sp0 - 0x170u, t13);
        wr32(sp0 - 0x174u, sp0 - 0x118u);
        g->cf = rd32(sp0 - 0x120u) + 0x1cu < rd32(sp0 - 0x120u);
        g->pf = PARITY((uint8_t)(rd32(sp0 - 0x120u) + 0x1cu));
        g->af = (rd32(sp0 - 0x120u) ^ 0x1cu ^ rd32(sp0 - 0x120u) + 0x1cu) >> 4u & 1u;
        g->zf = rd32(sp0 - 0x120u) + 0x1cu == 0u;
        g->sf = (int32_t)(rd32(sp0 - 0x120u) + 0x1cu) < 0;
        g->of = ((rd32(sp0 - 0x120u) ^ rd32(sp0 - 0x120u) + 0x1cu) & (rd32(sp0 - 0x120u) + 0x1cu ^ 0x1cu)) >> 0x1fu;
        g->ecx = sp0 - 0x118u;
        g->esp = sp0 - 0x160u;
        cow_cdecl(g, COW_IMG(0x1027eb30u), 5, sp0 - 0x118u, t13, rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u));
        t14 = g->ecx;
        wr32(sp0 - 0x10cu, 0u);
        wr32(sp0 - 0x130u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, 0u);
        wr32(sp0 - 0xecu, 0u);
        g->esp = sp0 - 0x12cu;
        cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x40u, sp0 - 0x118u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        wr32(sp0 - 0x13cu, sp0 - 0x40u);
        wr32(sp0 - 0x140u, sp0 - 0x80u);
        g->esp = sp0 - 0x134u;
        cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x80u, sp0 - 0x40u, sp0 - 0x118u);
        eax = sp0 - 0x114u;
        ecx = 3u;
        loc_118_f = (double)rdf32(sp0 - 0x118u);
        loc_114_f = (double)rdf32(sp0 - 0x114u);
        loc_110_f = (double)rdf32(sp0 - 0x110u);
        x2 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x58u));
        x1 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x6cu));
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x80u));
L_1024fa4e: ;
        d15 = fr(g, x0 * (double)rdf32(eax - 4u));
        wrf32(eax - 4u, (float)d15);
        d16 = fr(g, x1 * (double)rdf32(eax));
        wrf32(eax, (float)d16);
        d17 = fr(g, x2 * (double)rdf32(eax + 4u));
        wrf32(eax + 4u, (float)d17);
        if (ecx != 1u)
        {
            eax = eax + 0x10u;
            ecx = ecx - 1u;
            goto L_1024fa4e;
        }
        t18 = rd32(rd32(sp0 - 0x120u) + 0x28u);
        wr32(sp0 - 0xd8u, t18);
        t19 = rd32(rd32(sp0 - 0x120u) + 0x38u);
        wr32(sp0 - 0xd4u, t19);
        if ((rd8(arg1) & 0x20u) == 0u)
        {
            eax = rd32(sp0 - 0x120u);
            t21 = rd32(eax + 0x48u);
            wr32(sp0 - 0xd0u, t21);
            ecx = t21;
        }
        else
        {
            eax = rd32(sp0 - 0x120u);
            ecx = (t18 & 0xffffff00u) | rd8(arg1);
            t20 = rd32(eax + 0x48u);
            wr32(sp0 - 0xd0u, t20);
        }
        wr32(sp0 - 0x130u, sp0 - 0x118u);
        wr32(sp0 - 0x134u, sp0 - 0x40u);
        g->esp = sp0 - 0x12cu;
        cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x40u, sp0 - 0x118u);
        wr32(sp0 - 0x138u, sp0 - 0xd8u);
        wr32(sp0 - 0x13cu, sp0 - 0x40u);
        wr32(sp0 - 0x140u, sp0 - 0x8cu);
        g->esp = sp0 - 0x134u;
        cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x8cu, sp0 - 0x40u, sp0 - 0xd8u);
        t22 = rd32(sp0 - 0x118u);
        wr32(sp0 - 0xccu, t22);
        d23 = (double)(float)-fr(g, (double)rdf32(COW_IMG(0x103890e4u)) * (double)rdf32(sp0 - 0x8cu));
        wrf32(sp0 - 0xe8u, (float)d23);
        wr32(sp0 - 0xc0u, 0u);
        wr32(sp0 - 0xa0u, 0u);
        d24 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x103890e4u)) * (double)rdf32(sp0 - 0x88u));
        wrf32(sp0 - 0xe4u, (float)d24);
        wr32(sp0 - 0xb0u, 0u);
        t25 = rd32(sp0 - 0xdcu);
        wr32(sp0 - 0x90u, t25);
        d26 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x103890e4u)) * (double)rdf32(sp0 - 0x84u));
        wrf32(sp0 - 0xe0u, (float)d26);
        d27 = (double)(float)-(double)rdf32(sp0 - 0x114u);
        wrf32(sp0 - 0x114u, (float)d27);
        d28 = (double)(float)-(double)rdf32(sp0 - 0x110u);
        wrf32(sp0 - 0x110u, (float)d28);
        d29 = (double)(float)-(double)rdf32(sp0 - 0x108u);
        wrf32(sp0 - 0x108u, (float)d29);
        d30 = (double)(float)-(double)rdf32(sp0 - 0xf8u);
        wrf32(sp0 - 0xf8u, (float)d30);
        wrf32(sp0 - 0xc8u, (float)(double)(float)-d27);
        wrf32(sp0 - 0xc4u, (float)(double)(float)-d28);
        d31 = (double)(float)-(double)rdf32(sp0 - 0x108u);
        wrf32(sp0 - 0xbcu, (float)d31);
        d32 = (double)(float)-(double)rdf32(sp0 - 0x104u);
        wrf32(sp0 - 0xb8u, (float)d32);
        d33 = (double)(float)-(double)rdf32(sp0 - 0x100u);
        wrf32(sp0 - 0xb4u, (float)d33);
        d34 = (double)(float)-(double)rdf32(sp0 - 0xf8u);
        wrf32(sp0 - 0xacu, (float)d34);
        d35 = (double)(float)-(double)rdf32(sp0 - 0xf4u);
        wrf32(sp0 - 0xa8u, (float)d35);
        d36 = (double)(float)-(double)rdf32(sp0 - 0xf0u);
        wrf32(sp0 - 0xa4u, (float)d36);
        d37 = (double)(float)-fr(g, (double)rdf32(COW_IMG(0x103890e4u)) * (double)rdf32(sp0 - 0x8cu));
        wrf32(sp0 - 0x9cu, (float)d37);
        wrf32(sp0 - 0x98u, (float)(double)(float)-d24);
        wrf32(sp0 - 0x94u, (float)(double)(float)-d26);
        esi = sp0 - 0xccu;
        edi = sp0 - 0x16cu;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->ecx = ecx;
        g->edx = t25;
        g->esp = sp0 - 0x16cu;
        t38 = cow_stdcall(g, COW_IMG(0x100150d0u), 0);
        t39 = g->ecx;
        t40 = g->edx;
        g->edx = t40;
        g->esp = sp0 - 0x12cu;
        t41 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
        t42 = g->edx;
        wr32(sp0 - 0x130u, t41);
        wr32(sp0 - 0x134u, 2u);
        g->edx = t42;
        t43 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 2u, t41);
        t44 = g->edx;
        eax = t43;
        edx = t44;
    }
    g->esp = sp0 - 0x12cu;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x128u);
    g->edi = rd32(sp0 - 0x12cu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024f920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024f920(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
