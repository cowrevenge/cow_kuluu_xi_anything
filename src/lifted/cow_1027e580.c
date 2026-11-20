/* f_0x1027e580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1027e580(Guest* g)
{
    double d29;
    double d4;
    double d5;
    double d6;
    double d8;
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t7;
    uint32_t t9;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 152u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027e5b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_1027e5b4;
    case 0x1027e5c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_1027e5c7;
    case 0x1027e5cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_1027e5cf;
    case 0x1027e5d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x4cu); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_1027e5d3;
    case 0x1027e5f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e5f8;
    case 0x1027e609u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e609;
    case 0x1027e618u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e618;
    case 0x1027e622u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e622;
    case 0x1027e631u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e631;
    case 0x1027e637u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e637;
    case 0x1027e643u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e643;
    case 0x1027e64eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e64e;
    case 0x1027e665u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e665;
    case 0x1027e66fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e66f;
    case 0x1027e67cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e67c;
    case 0x1027e696u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e696;
    case 0x1027e69du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e69d;
    case 0x1027e6adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e6ad;
    case 0x1027e6c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e6c4;
    case 0x1027e6e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e6e7;
    case 0x1027e6f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e6f6;
    case 0x1027e705u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e705;
    case 0x1027e70bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e70b;
    case 0x1027e715u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e715;
    case 0x1027e723u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e723;
    case 0x1027e726u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027e726;
    default: break;
    }
#endif

    COW_AT(1027e580)
    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_ebp);
    wr32(sp0 - 0x50u, in_esi);
    t1 = rd32(rd32(sp0 + 8u) + 0x2cu);
    t2 = rd32(sp0 + 0xcu);
    t3 = rd32(sp0 + 8u);
    d4 = (double)rdf32(rd32(sp0 + 0xcu) + 0x10u);
    wrf32(sp0 + 8u, (float)d4);
    wr32(sp0 - 0x54u, in_edi);
    d5 = (double)rdf32(rd32(rd32(t1 + 0x20u)) + 0x24u);
    if ((cow_fsw(g, d4, d5, 2u) & 0x4100u) != 0u)
    {
        ecx = t2;
        edx = rd32(t3 + 0x28u);
        ebx = t3;
        esi = rd32(rd32(t1 + 0x20u));
        edi = rd32(rd32(t1 + 0x20u) + 4u);
        x1 = (double)rdf32(rd32(rd32(t1 + 0x20u)) + 0x24u);
        x0 = d4;
        goto L_1027e5cf;
    }
    eax = cow_fsw(g, d4, d5, 2u) & 0x4100u;
    ecx = t2;
    edx = rd32(t3 + 0x28u);
    ebx = t3;
    esi = rd32(rd32(t1 + 0x20u));
    edi = rd32(rd32(t1 + 0x20u) + 4u);
    x1 = (double)rdf32(rd32(rd32(t1 + 0x20u)) + 0x24u);
    x0 = d4;
L_1027e5b4: ;
    COW_AT(1027e5b4)
    d6 = fr(g, x0 - x1);
    if ((cow_fsw(g, d6, x1, 2u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d6, x1, 2u) & 0x4100u;
        x0 = d6;
        goto L_1027e5b4;
    }
    x0 = d6;
    COW_AT(1027e5c7)
    wrf32(sp0 + 8u, (float)x0);
L_1027e5d3: ;
    COW_AT(1027e5d3)
    t7 = rd32(rd32(ecx + 0x18u) + 0xacu);
    d8 = fr(g, fr(g, (double)rdf32(ecx + 0x10u) - (double)rdf32(ecx + 8u)) / (double)rdf32(ebx + 0x24u));
    wr32(sp0 - 0x44u, t7);
    wrf32(sp0 + 0xcu, (float)d8);
    t9 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x58u, t9);
    wr32(sp0 - 0x5cu, edx);
    g->eax = t7;
    g->ecx = t9;
    g->esp = sp0 - 0x50u;
    t10 = cow_call_regs(g, COW_IMG(0x10284f70u), g->eax, g->ecx, edx, 1, 3, edx, t9, in_edi);
    t11 = g->ecx;
    eax = t10;
    ecx = t11;
    COW_AT(1027e5f8)
    t12 = rd32(sp0 + 8u);
    wr32(sp0 - 0x60u, t12);
    wr32(sp0 - 0x64u, esi);
    wr32(sp0 - 0x40u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t12;
    g->esp = sp0 - 0x64u;
    t13 = cow_stdcall(g, COW_IMG(0x1028d910u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    ecx = t14;
    edx = t15;
    ebp = eax;
    eax = t13;
    COW_AT(1027e609)
    wr32(sp0 - 0x38u, eax);
    t16 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x68u, t16);
    wr32(sp0 - 0x6cu, edi);
    g->eax = t16;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    t17 = cow_stdcall(g, COW_IMG(0x1028d910u), 0);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(1027e618)
    wr32(sp0 - 0x70u, esi);
    wr32(sp0 - 0x34u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t20 = cow_stdcall(g, COW_IMG(0x1028d990u), 0);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(1027e622)
    wr32(sp0 + 0xcu, eax);
    if (eax != 0u)
    {
    COW_AT(1027e631)
        wr32(sp0 - 0x58u, esi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t23 = cow_stdcall(g, COW_IMG(0x1028d9a0u), 0);
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    COW_AT(1027e637)
        wr32(sp0 - 0x5cu, edi);
        wr32(sp0 + 8u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t26 = cow_stdcall(g, COW_IMG(0x1028d9a0u), 0);
        t27 = g->edx;
        edx = t27;
        esi = eax;
        eax = t26;
    COW_AT(1027e643)
        if (esi == eax)
        {
    COW_AT(1027e64e)
            edi = rd32(ebx + 0x30u);
            eax = 0u;
            ecx = esi;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            if ((int32_t)rd32(sp0 + 8u) <= 0) goto L_1027e715;
            esi = 0u;
L_1027e665: ;
    COW_AT(1027e665)
            if (rd32(esi * 4u + rd32(sp0 + 0xcu)) == 1u)
            {
                ecx = rd32(sp0 + 0xcu);
    COW_AT(1027e69d)
                wr32(sp0 - 0x58u, esi);
                t30 = rd32(sp0 - 0x38u);
                wr32(sp0 - 0x5cu, t30);
                wr32(sp0 - 0x60u, sp0 - 0x30u);
                g->esp = sp0 - 0x54u;
                cow_cdecl(g, COW_IMG(0x1027d0d0u), 3, sp0 - 0x30u, t30, esi);
    COW_AT(1027e6ad)
                wr32(sp0 - 0x64u, esi);
                t31 = rd32(sp0 - 0x34u);
                wr32(sp0 - 0x68u, t31);
                wr32(sp0 - 0x6cu, sp0 - 0x20u);
                wr32(sp0 - 0x3cu, rd32(ebp));
                t32 = rd32(ebp);
                g->esp = sp0 - 0x60u;
                cow_cdecl(g, COW_IMG(0x1027d0d0u), 3, sp0 - 0x20u, t31, esi);
    COW_AT(1027e6c4)
                t33 = rd32(ebp + 4u);
                wr32(sp0 - 0x44u, t33);
                wr32(sp0 - 0x70u, t33);
                t34 = rd32(sp0 - 0x3cu);
                wr32(sp0 - 0x74u, t34);
                wr32(sp0 - 0x78u, sp0 - 0x20u);
                wr32(sp0 - 0x7cu, sp0 - 0x30u);
                wr32(sp0 - 0x80u, sp0 - 0x10u);
                g->esp = sp0 - 0x64u;
                t35 = cow_call_regs(g, COW_IMG(0x1027e730u), sp0 - 0x10u, sp0 - 0x20u, g->edx, 1, 7, sp0 - 0x10u, sp0 - 0x30u, sp0 - 0x20u, t34, t33, sp0 - 0x20u, rd32(sp0 - 0x68u));
                eax = t35;
    COW_AT(1027e6e7)
                wr32(sp0 - 0x84u, sp0 - 0x10u);
                wr32(sp0 - 0x88u, sp0 - 0x30u);
                g->edx = sp0 - 0x30u;
                g->esp = sp0 - 0x80u;
                cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0x30u, sp0 - 0x10u);
                t36 = g->edx;
                edx = t36;
    COW_AT(1027e6f6)
                wr32(sp0 - 0x8cu, esi);
                t37 = rd32(ebx + 0x30u);
                wr32(sp0 - 0x90u, t37);
                wr32(sp0 - 0x94u, sp0 - 0x30u);
                g->ecx = sp0 - 0x30u;
                g->esp = sp0 - 0x88u;
                cow_cdecl(g, COW_IMG(0x1027d0a0u), 3, sp0 - 0x30u, t37, esi);
                t38 = g->ecx;
                ecx = t38;
    COW_AT(1027e705)
                esi = esi + 4u;
            }
            else
            {
    COW_AT(1027e66f)
                eax = ebp;
                edx = sp0 - 0x38u - ebp;
                edi = 2u;
L_1027e67c: ;
    COW_AT(1027e67c)
                t28 = rd32(ebx + 0x30u);
                d29 = fr(g, fr(g, (double)rdf32(esi * 4u + rd32(eax + edx)) * (double)rdf32(eax)) + (double)rdf32(esi * 4u + rd32(ebx + 0x30u)));
                wrf32(esi * 4u + t28, (float)d29);
                if (edi != 1u)
                {
                    eax = eax + 4u;
                    edi = edi - 1u;
                    goto L_1027e67c;
                }
                ecx = esi * 4u + t28;
    COW_AT(1027e696)
                ebp = rd32(sp0 - 0x40u);
                esi = esi + 1u;
            }
    COW_AT(1027e70b)
            if ((int32_t)esi < (int32_t)rd32(sp0 + 8u)) goto L_1027e665;
L_1027e715: ;
    COW_AT(1027e715)
            t39 = rd32(ebx + 0x30u);
            wr32(sp0 - 0x58u, t39);
            wr32(sp0 - 0x5cu, arg1);
            g->ebx = ebx;
            g->ebp = ebp;
            g->eax = arg1;
            g->edx = t39;
            g->esp = sp0 - 0x54u;
            t40 = cow_cdecl(g, COW_IMG(0x1027ca10u), 2, arg1, t39);
            t41 = g->edx;
            eax = t40;
            edx = t41;
    COW_AT(1027e723)
        }
    }
    COW_AT(1027e726)
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    g->edx = edx;
    return eax;
L_1027e5cf: ;
    COW_AT(1027e5cf)
    goto L_1027e5d3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027e580(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027e5b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e5c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e5cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e5d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e5f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1027e609u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1027e618u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1027e622u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1027e631u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e637u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x1027e643u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1027e64eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e665u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e66fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e67cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e696u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e69du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e6adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1027e6c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1027e6e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x30u);
        wr32(sp0 - 0x78u, sp0 - 0x20u);
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1027e6f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x88u;
        wr32(sp0 - 0x88u, sp0 - 0x30u);
        wr32(sp0 - 0x84u, sp0 - 0x10u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x30u);
        wr32(sp0 - 0x78u, sp0 - 0x20u);
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1027e705u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x94u, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x30u);
        wr32(sp0 - 0x84u, sp0 - 0x10u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x30u);
        wr32(sp0 - 0x78u, sp0 - 0x20u);
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1027e70bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e715u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1027e723u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1027e726u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027e580(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1027e580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
