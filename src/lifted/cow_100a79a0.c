/* f_0x100a79a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a79a0(Guest* g)
{
    double d13;
    double d22;
    double d28;
    double d29;
    double d46;
    double d47;
    double d48;
    double d51;
    double d54;
    double d55;
    double d59;
    double d60;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_7c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
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
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t52;
    uint32_t t53;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t6;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 156u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a7a0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_100a7a0b;
    case 0x100a7a1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_100a7a1e;
    case 0x100a7a35u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_100a7a35;
    case 0x100a7a50u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100a7a50;
    case 0x100a7a94u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100a7a94;
    case 0x100a7aa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100a7aa5;
    case 0x100a7aaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100a7aae;
    case 0x100a7aceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100a7ace;
    case 0x100a7b52u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a7b52;
    case 0x100a7b60u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_100a7b60;
    default: break;
    }
#endif

    COW_AT(100a79a0)
    wr32(sp0 - 0x74u, in_ebx);
    wr32(sp0 - 0x78u, in_esi);
    wr32(sp0 - 0x7cu, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x7cu;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t5 = g->edx;
    t6 = rd32(t1 + 0x24u);
    wr32(sp0 - 0x6cu, t6);
    d7 = (double)(float)-(double)rdf32(t4 + 0x2cu);
    wrf32(sp0 - 0x70u, (float)d7);
    g->edx = t5;
    t8 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t11 = g->ecx;
    t12 = g->edx;
    d13 = fr(g, atan2((double)rdf32(sp0 - 0x70u), (double)rdf32(sp0 - 0x6cu)));
    wr32(sp0 - 0x80u, t11);
    wrf32(sp0 - 0x80u, (float)(double)(float)d13);
    g->edx = t12;
    t14 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, cow_f2bits((double)(float)d13));
    t15 = g->edx;
    wr32(sp0 - 0x80u, arg1);
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, arg1);
    t17 = g->ecx;
    t18 = g->edx;
    if (rd8(COW_IMG(0x10487f81u)) == 0u)
    {
        eax = (t16 & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
        edx = t18;
        loc_74 = in_ebx;
        loc_78 = in_esi;
        loc_7c = in_edi;
    }
    else
    {
        eax = (t16 & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
        ecx = t17;
        edx = t18;
    COW_AT(100a7a0b)
        if ((double)rdf32(COW_IMG(0x10487f64u)) != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            goto L_100a7a35;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a7a1e)
        if ((double)rdf32(COW_IMG(0x10487f6cu)) == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            loc_74 = in_ebx;
            loc_78 = in_esi;
            loc_7c = in_edi;
            goto L_100a7b60;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_100a7a35: ;
    COW_AT(100a7a35)
        wr32(sp0 - 0x80u, COW_IMG(0x10487f64u));
        wr32(sp0 - 0x84u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x7cu;
        t19 = cow_cdecl(g, COW_IMG(0x10027530u), 2, arg1, COW_IMG(0x10487f64u));
        t20 = g->ecx;
        t21 = g->edx;
        d22 = cow_take_float(g);
        if (!(d22 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (t19 & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            ecx = t20;
            edx = t21;
        }
        else
        {
            eax = (t19 & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            ecx = t20;
    COW_AT(100a7a50)
            wr32(sp0 - 0x80u, arg1);
            wr32(sp0 - 0x84u, sp0 - 0x50u);
            g->ecx = ecx;
            g->edx = sp0 - 0x50u;
            g->esp = sp0 - 0x78u;
            cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x50u, arg1, rd32(sp0 - 0x7cu));
            t23 = g->ecx;
            t24 = g->edx;
            wr32(sp0 - 0x88u, COW_IMG(0x10487f64u));
            wr32(sp0 - 0x8cu, sp0 - 0x5cu);
            g->esp = sp0 - 0x80u;
            cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x5cu, COW_IMG(0x10487f64u), sp0 - 0x50u);
            wr32(sp0 - 0x90u, sp0 - 0x5cu);
            wr32(sp0 - 0x94u, sp0 - 0x50u);
            wr32(sp0 - 0x98u, sp0 - 0x68u);
            g->eax = sp0 - 0x68u;
            g->ecx = sp0 - 0x5cu;
            g->edx = sp0 - 0x50u;
            g->esp = sp0 - 0x8cu;
            t25 = cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0x68u, sp0 - 0x50u, sp0 - 0x5cu);
            t26 = g->ecx;
            t27 = g->edx;
            d28 = (double)rdf32(sp0 - 0x64u);
            if ((cow_fsw(g, d28, (double)rdf32(COW_IMG(0x1032dfa0u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d28, (double)rdf32(COW_IMG(0x1032dfa0u)), 0u) & 0x4100u;
                ecx = t26;
                edx = t27;
            }
            else
            {
                eax = cow_fsw(g, d28, (double)rdf32(COW_IMG(0x1032dfa0u)), 0u) & 0x4100u;
                ecx = t26;
                edx = t27;
    COW_AT(100a7a94)
                d29 = (double)rdf32(sp0 - 0x64u);
                if (!(d29 < (double)rdf32(COW_IMG(0x1032df40u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x1032df40u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x1032df40u)), 0u);
    COW_AT(100a7aa5)
                    wr32(sp0 - 0x80u, 0u);
                    g->ebx = arg1;
                    g->ecx = self;
                    g->edx = edx;
                    g->esp = sp0 - 0x7cu;
                    t30 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
                    t31 = g->ecx;
                    t32 = g->edx;
                    eax = t30;
                    ecx = t31;
                    edx = t32;
                }
            }
        }
    COW_AT(100a7aae)
        wr32(sp0 - 0x80u, COW_IMG(0x10487f64u));
        wr32(sp0 - 0x84u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x7cu;
        t33 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, COW_IMG(0x10487f64u));
        t34 = g->edx;
        g->edx = t34;
        t35 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
        t36 = g->edx;
        if (t35 == 0u)
        {
            eax = t35;
            edx = t36;
            loc_74 = rd32(sp0 - 0x74u);
            loc_78 = rd32(sp0 - 0x78u);
            loc_7c = rd32(sp0 - 0x7cu);
        }
        else
        {
            eax = t35;
            edx = t36;
    COW_AT(100a7ace)
            g->eax = eax;
            g->esp = sp0 - 0x7cu;
            t37 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
            g->edx = rd32(self);
            t38 = rd32(self);
            t39 = cow_thiscall(g, rd32(t38 + 0x1bcu), self, 0);
            t40 = g->edx;
            wr32(sp0 - 0x80u, t39);
            g->eax = rd32(t37);
            g->edx = t40;
            t41 = rd32(t37);
            t42 = cow_thiscall_cdecl(g, rd32(t41 + 0x1bcu), t37, 1, t39);
            t43 = g->edx;
            wr32(sp0 - 0x84u, t42);
            wr32(sp0 - 0x88u, sp0 - 0x50u);
            g->edx = t43;
            t44 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x50u, t42, rd32(sp0 - 0x80u));
            t45 = g->edx;
            d46 = (double)rdf32(sp0 - 0x48u);
            d47 = (double)rdf32(sp0 - 0x50u);
            d48 = (double)(float)fr(g, fr(g, d46 * d46) + fr(g, d47 * d47));
            wrf32(sp0 - 0x6cu, (float)d48);
            g->edx = t45;
            t49 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
            t50 = g->edx;
            d51 = fr(g, sqrt((double)rdf32(sp0 - 0x6cu)));
            wr32(sp0 - 0x80u, self);
            wrf32(sp0 - 0x6cu, (float)(double)(float)d51);
            g->edx = t50;
            t52 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, self);
            t53 = g->edx;
            d54 = cow_take_float(g);
            d55 = fr(g, (double)rdf32(sp0 - 0x6cu) - d54);
            wr32(sp0 - 0x80u, t49);
            wrf32(sp0 - 0x6cu, (float)(double)(float)d55);
            g->ecx = self;
            g->edx = t53;
            t56 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, t49);
            t57 = g->ecx;
            t58 = g->edx;
            d59 = cow_take_float(g);
            d60 = fr(g, (double)rdf32(sp0 - 0x6cu) - d59);
            if (!(d60 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t56 & 0xffff0000u) | (uint16_t)cow_fsw(g, d60, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                edx = t58;
                loc_74 = rd32(sp0 - 0x74u);
                loc_78 = rd32(sp0 - 0x78u);
                loc_7c = rd32(sp0 - 0x7cu);
            }
            else
            {
                eax = (t56 & 0xffff0000u) | (uint16_t)cow_fsw(g, d60, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                ecx = t57;
                edx = t58;
    COW_AT(100a7b52)
                wr32(sp0 - 0x80u, COW_IMG(0x10487f8cu));
                wr32(sp0 - 0x84u, arg1);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x7cu;
                t61 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, COW_IMG(0x10487f8cu));
                t62 = g->edx;
                eax = t61;
                edx = t62;
                loc_74 = rd32(sp0 - 0x74u);
                loc_78 = rd32(sp0 - 0x78u);
                loc_7c = rd32(sp0 - 0x7cu);
            }
        }
    }
L_100a7b60: ;
    COW_AT(100a7b60)
    g->eax = eax;
    g->esp = sp0 - 0x7cu;
    t63 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0x74u);
    g->esi = rd32(sp0 - 0x78u);
    g->edi = rd32(sp0 - 0x7cu);
    return t63;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a79a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a7a0bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x7cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7a1eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x7cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7a35u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x7cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7a50u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x7cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7a94u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x7cu;
        g->ebx = arg1;
        wr32(sp0 - 0x98u, sp0 - 0x68u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        wr32(sp0 - 0x90u, sp0 - 0x5cu);
        wr32(sp0 - 0x8cu, sp0 - 0x5cu);
        wr32(sp0 - 0x84u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a7aa5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x7cu;
        g->ebx = arg1;
        wr32(sp0 - 0x98u, sp0 - 0x68u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        wr32(sp0 - 0x90u, sp0 - 0x5cu);
        wr32(sp0 - 0x8cu, sp0 - 0x5cu);
        wr32(sp0 - 0x84u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a7aaeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x7cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7aceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x7cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7b52u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x7cu;
        g->ebx = arg1;
        wr32(sp0 - 0x88u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100a7b60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a79a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a79a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
