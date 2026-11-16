/* f_0x1027c210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1027c210(Guest* g)
{
    uint32_t al_m80;
    uint32_t al_m94;
    uint32_t al_m9c;
    uint32_t al_ma0;
    double d27;
    double d28;
    double d29;
    double d31;
    double d32;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t30;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 320u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0xa8u, in_ebx);
    wr32(sp1 - 0xacu, in_esi);
    wr32(sp1 - 0xb0u, in_edi);
    if (arg2 != 0u) goto L_1027c24e;
    wr32(sp1 - 0xb4u, 0x218u);
    wr32(sp1 - 0xb8u, COW_IMG(0x103b40ecu));
    wr32(sp1 - 0xbcu, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp1 - 0xb4u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp1 - 0xc0u, COW_IMG(0x103b43e4u));
    g->esp = sp1 - 0xb8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b43e4u), COW_IMG(0x103b379cu));
    return;
L_1027c24e: ;
    wr32(sp1 - 0xb4u, arg2);
    wr32(sp1 - 0xb8u, 1u);
    wr32(sp1 - 0xbcu, 4u);
    wr32(sp1 - 0xc0u, sp1 - 0x98u);
    wr32(sp1 - 0x98u, 4u);
    g->esp = sp1 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp1 - 0x98u, 4u, 1u, arg2);
    edi = sp1 - 0x50u;
    eax = 0u;
    ecx = 0x14u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t4 = rd32(arg1 + 0x28u);
    wr32(sp1 - 0xc4u, t4);
    wr32(sp1 - 0xc8u, 4u);
    wr32(sp1 - 0xccu, COW_IMG(0x103b43bcu));
    wr32(sp1 - 0xd0u, sp1 - 0x50u);
    g->edx = 4u;
    g->esp = sp1 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x50u, COW_IMG(0x103b43bcu), 4u, t4, rd32(sp1 - 0xc0u));
    t5 = g->edx;
    wr32(sp1 - 0xd4u, arg2);
    wr32(sp1 - 0xd8u, 0x50u);
    wr32(sp1 - 0xdcu, 1u);
    wr32(sp1 - 0xe0u, sp1 - 0x50u);
    g->ecx = sp1 - 0x50u;
    g->esp = sp1 - 0xd0u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp1 - 0x50u, 1u, 0x50u, arg2);
    t6 = g->ecx;
    t7 = rd32(arg1 + 0x28u);
    wr32(sp1 - 0xe4u, t7);
    wr32(sp1 - 0xe8u, COW_IMG(0x103b41ccu));
    wr32(sp1 - 0xecu, arg2);
    g->esp = sp1 - 0xd8u;
    cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103b41ccu), t7, rd32(sp1 - 0xe0u), 1u);
    if ((int32_t)rd32(arg1 + 0x28u) <= 0) goto L_1027c4ce;
    wr32(sp1 - 0x9cu, 0u);
    wr32(sp1 - 0xa0u, 0u);
    ebx = 0u;
    al_m9c = 0u;
    al_ma0 = 0u;
L_1027c2d0: ;
    if (rd32(COW_IMG(0x1099d20cu)) == 0u)
    {
        eax = al_ma0 + rd32(arg1 + 0x20u);
        ecx = rd32(COW_IMG(0x1099d20cu));
        wr32(sp1 - 0x94u, COW_IMG(0x103b448cu));
        al_m94 = COW_IMG(0x103b448cu);
    }
    else
    {
        eax = al_ma0 + rd32(arg1 + 0x20u);
        ecx = rd32(COW_IMG(0x1099d20cu));
        t8 = rd32(ebx * 4u + ecx);
        wr32(sp1 - 0x94u, t8);
        ecx = t8;
        al_m94 = t8;
    }
    wr32(sp1 - 0xb4u, eax);
    wr32(sp1 - 0xb8u, arg1);
    g->ecx = ecx;
    g->edx = al_m9c;
    t9 = rd32(arg1 + 0x24u);
    g->esp = sp1 - 0xb0u;
    t10 = cow_cdecl(g, COW_IMG(0x1027c970u), 2, arg1, eax);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp1 - 0x80u, t10);
    if (t10 != 0xffffffffu)
    {
        eax = t10;
        ecx = t11;
        esi = al_m9c + t9;
        al_m80 = t10;
        goto L_1027c31c;
    }
    ecx = t11;
    edx = t12;
    esi = al_m9c + t9;
    al_m80 = t10;
    if (rd32(sp1 - 0xa0u) != 0u)
    {
        eax = rd32(sp1 - 0xa0u);
        goto L_1027c4ac;
    }
    eax = rd32(sp1 - 0xa0u);
L_1027c31c: ;
    wr32(sp1 - 0xb4u, sp1 - 0x8cu);
    wr32(sp1 - 0xb8u, esi);
    g->ecx = ecx;
    g->edx = sp1 - 0x8cu;
    g->esp = sp1 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x10291620u), 2, esi, sp1 - 0x8cu);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp1 - 0xbcu, sp1 - 0x6cu);
    wr32(sp1 - 0xc0u, esi);
    g->eax = sp1 - 0x6cu;
    g->edx = t17;
    g->esp = sp1 - 0xb8u;
    t18 = cow_cdecl(g, COW_IMG(0x102916b0u), 2, esi, sp1 - 0x6cu);
    t19 = g->edx;
    wr32(sp1 - 0xc4u, sp1 - 0x78u);
    wr32(sp1 - 0xc8u, esi);
    g->ecx = sp1 - 0x78u;
    g->esp = sp1 - 0xc0u;
    t20 = cow_cdecl(g, COW_IMG(0x102916d0u), 2, esi, sp1 - 0x78u);
    t21 = g->ecx;
    wr32(sp1 - 0xccu, sp1 - 0x5cu);
    wr32(sp1 - 0xd0u, esi);
    g->ecx = t21;
    g->edx = sp1 - 0x5cu;
    g->esp = sp1 - 0xc8u;
    cow_cdecl(g, COW_IMG(0x10291730u), 2, esi, sp1 - 0x5cu);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp1 - 0xd4u, sp1 - 0x7cu);
    wr32(sp1 - 0xd8u, esi);
    g->eax = sp1 - 0x7cu;
    g->edx = t23;
    g->esp = sp1 - 0xd0u;
    t24 = cow_cdecl(g, COW_IMG(0x102917c0u), 2, esi, sp1 - 0x7cu);
    t25 = g->edx;
    wr32(sp1 - 0xdcu, sp1 - 0x90u);
    wr32(sp1 - 0xe0u, esi);
    g->esp = sp1 - 0xd8u;
    t26 = cow_cdecl(g, COW_IMG(0x102917e0u), 2, esi, sp1 - 0x90u);
    eax = t26;
    ecx = 0u;
L_1027c365: ;
    d27 = fabs(fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(ecx * 4u + sp1 - 0x78u)));
    if (!(d27 < rdf64(COW_IMG(0x10340b18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, rdf64(COW_IMG(0x10340b18u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, rdf64(COW_IMG(0x10340b18u)), 0u);
        wr32(ecx * 4u + sp1 - 0x78u, 0x3f800000u);
    }
    if ((int32_t)(ecx + 1u) < 3)
    {
        ecx = ecx + 1u;
        goto L_1027c365;
    }
    ecx = 0u;
L_1027c38e: ;
    d28 = fabs((double)rdf32(ecx * 4u + sp1 - 0x8cu));
    if (!(d28 < rdf64(COW_IMG(0x10340b18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, rdf64(COW_IMG(0x10340b18u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, rdf64(COW_IMG(0x10340b18u)), 0u);
        wr32(ecx * 4u + sp1 - 0x8cu, 0u);
    }
    if ((int32_t)(ecx + 1u) < 3)
    {
        ecx = ecx + 1u;
        goto L_1027c38e;
    }
    ecx = 0u;
L_1027c3ad: ;
    d29 = fabs((double)rdf32(ecx * 4u + sp1 - 0x6cu));
    if (!(d29 < rdf64(COW_IMG(0x10340b18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, rdf64(COW_IMG(0x10340b18u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, rdf64(COW_IMG(0x10340b18u)), 0u);
        wr32(ecx * 4u + sp1 - 0x6cu, 0u);
    }
    if ((int32_t)(ecx + 1u) < 4)
    {
        ecx = ecx + 1u;
        goto L_1027c3ad;
    }
    t30 = rd32(sp1 - 0x80u);
    wr32(sp1 - 0xb4u, t30);
    d31 = (double)rdf32(sp1 - 0x90u);
    wrf64(sp1 - 0xbcu, d31);
    d32 = (double)rdf32(sp1 - 0x7cu);
    wrf64(sp1 - 0xc4u, d32);
    t33 = rd32(sp1 - 0x54u);
    wr32(sp1 - 0xc8u, t33);
    t34 = rd32(sp1 - 0x58u);
    wr32(sp1 - 0xccu, t34);
    t35 = rd32(sp1 - 0x5cu);
    wr32(sp1 - 0xd0u, t35);
    d36 = (double)rdf32(sp1 - 0x70u);
    wrf64(sp1 - 0xd8u, d36);
    d37 = (double)rdf32(sp1 - 0x74u);
    wrf64(sp1 - 0xe0u, d37);
    d38 = (double)rdf32(sp1 - 0x78u);
    wrf64(sp1 - 0xe8u, d38);
    d39 = (double)rdf32(sp1 - 0x60u);
    wrf64(sp1 - 0xf0u, d39);
    d40 = (double)rdf32(sp1 - 0x64u);
    wrf64(sp1 - 0xf8u, d40);
    d41 = (double)rdf32(sp1 - 0x68u);
    wrf64(sp1 - 0x100u, d41);
    d42 = (double)rdf32(sp1 - 0x6cu);
    wrf64(sp1 - 0x108u, d42);
    d43 = (double)rdf32(sp1 - 0x84u);
    wrf64(sp1 - 0x110u, d43);
    d44 = (double)rdf32(sp1 - 0x88u);
    wrf64(sp1 - 0x118u, d44);
    d45 = (double)rdf32(sp1 - 0x8cu);
    wrf64(sp1 - 0x120u, d45);
    t46 = rd32(sp1 - 0x94u);
    wr32(sp1 - 0x124u, t46);
    wr32(sp1 - 0x128u, ebx);
    wr32(sp1 - 0x12cu, COW_IMG(0x103b4438u));
    wr32(sp1 - 0x130u, arg2);
    g->esp = sp1 - 0x11cu;
    cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103b4438u), ebx, t46, cow_dlo(d45));
    t47 = rd32(sp1 - 0xa0u) + 0xf8u;
    wr32(sp1 - 0xa0u, t47);
    t48 = rd32(sp1 - 0x9cu) + 0x9cu;
    wr32(sp1 - 0x9cu, t48);
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x28u))
    {
        ebx = ebx + 1u;
        al_m9c = t48;
        al_ma0 = t47;
        goto L_1027c2d0;
    }
    g->ebx = rd32(sp1 - 0xa8u);
    g->esi = rd32(sp1 - 0xacu);
    g->edi = rd32(sp1 - 0xb0u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_1027c4ac: ;
    wr32(sp1 - 0xb4u, 0x235u);
    wr32(sp1 - 0xb8u, COW_IMG(0x103b40ecu));
    wr32(sp1 - 0xbcu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0xb4u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp1 - 0xc0u, ebx);
    wr32(sp1 - 0xc4u, COW_IMG(0x103b4404u));
    g->esp = sp1 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4404u), ebx);
L_1027c4ce: ;
    g->ebx = rd32(sp1 - 0xa8u);
    g->esi = rd32(sp1 - 0xacu);
    g->edi = rd32(sp1 - 0xb0u);
    g->ebp = rd32(sp0 - 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027c210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027c210(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
