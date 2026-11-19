/* f_0x10083620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10083620(Guest* g)
{
    double d36;
    double d39;
    double d40;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_50;
    double loc_54_f;
    uint32_t loc_60;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 120u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008362du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1008362d;
    case 0x10083631u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10083631;
    case 0x10083635u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10083635;
    case 0x10083640u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083640;
    case 0x10083649u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083649;
    case 0x10083653u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083653;
    case 0x1008365du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1008365d;
    case 0x1008366au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1008366a;
    case 0x10083674u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083674;
    case 0x1008367eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1008367e;
    case 0x10083688u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083688;
    case 0x10083691u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083691;
    case 0x100836a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100836a6;
    case 0x100836adu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100836ad;
    case 0x100836b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100836b3;
    case 0x100836b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_100836b8;
    case 0x100836c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100836c7;
    case 0x100836ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100836ce;
    case 0x100836d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100836d8;
    case 0x100836e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100836e7;
    case 0x100836f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100836f8;
    case 0x10083707u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083707;
    case 0x10083717u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083717;
    case 0x10083721u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083721;
    case 0x10083723u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); goto E_10083723;
    case 0x1008372au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1008372a;
    case 0x10083730u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083730;
    case 0x10083731u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083731;
    case 0x1008373au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1008373a;
    default: break;
    }
#endif

    COW_AT(10083620)
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(1008362d)
    if (eax != 0u) goto L_10083635;
    COW_AT(10083631)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
L_10083635: ;
    COW_AT(10083635)
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t3 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(10083640)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t5 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(10083649)
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t7 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    eax = t7;
    COW_AT(10083653)
    g->eax = eax;
    g->edx = rd32(eax);
    t8 = rd32(eax);
    g->esp = sp0 - 0x5cu;
    t9 = cow_thiscall(g, rd32(t8 + 0x1c0u), eax, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(1008365d)
    t11 = rd32(eax + 4u);
    wr32(sp0 - 0x60u, t11);
    g->eax = t11;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t12 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t11);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(1008366a)
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t14 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    eax = t14;
    COW_AT(10083674)
    g->eax = eax;
    g->edx = rd32(eax);
    t15 = rd32(eax);
    g->esp = sp0 - 0x5cu;
    t16 = cow_thiscall(g, rd32(t15 + 0x1bcu), eax, 0);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    COW_AT(1008367e)
    wr32(sp0 - 0x60u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t18 = cow_thiscall(g, COW_IMG(0x10027cd0u), sp0 - 0x40u, 1, eax);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(10083688)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t20 = cow_thiscall(g, COW_IMG(0x100283c0u), sp0 - 0x40u, 0);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(10083691)
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0x451c4000u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t23 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(100836a6)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x5cu;
    t26 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, edx, 1, 0);
    t27 = g->ecx;
    t28 = g->edx;
    ecx = t27;
    edx = t28;
    edi = eax;
    eax = t26;
    COW_AT(100836ad)
    if (eax == 0u)
    {
        ebx = in_ebx;
    }
    else
    {
        esi = eax;
    COW_AT(100836b3)
        wr32(sp0 - 0x60u, in_ebx);
        loc_60 = in_ebx;
L_100836b8: ;
    COW_AT(100836b8)
        wr32(sp0 - 0x64u, 1u);
        wr32(sp0 - 0x68u, arg2);
        wr32(sp0 - 0x6cu, arg1);
        wr32(sp0 - 0x70u, edi);
        wr32(sp0 - 0x74u, esi);
        g->eax = arg1;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t29 = cow_cdecl(g, COW_IMG(0x10083430u), 5, esi, edi, arg1, arg2, 1u);
        t30 = g->edx;
        eax = t29;
        edx = t30;
    COW_AT(100836c7)
        if ((uint8_t)eax == 0u)
        {
            loc_54_f = (double)rdf32(sp0 - 0x54u);
            loc_50 = rd32(sp0 - 0x50u);
        }
        else
        {
    COW_AT(100836ce)
            g->eax = eax;
            g->edx = rd32(esi);
            t31 = rd32(esi);
            g->esp = sp0 - 0x60u;
            t32 = cow_thiscall(g, rd32(t31 + 0x1bcu), esi, 0);
            t33 = g->edx;
            eax = t32;
            edx = t33;
    COW_AT(100836d8)
            wr32(sp0 - 0x64u, eax);
            wr32(sp0 - 0x68u, sp0 - 0x4cu);
            g->eax = sp0 - 0x4cu;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t34 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x4cu, eax);
            t35 = g->edx;
            eax = t34;
            edx = t35;
    COW_AT(100836e7)
            d36 = (double)rdf32(sp0 - 0x4cu);
            if (d36 < (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                loc_54_f = (double)rdf32(sp0 - 0x54u);
                loc_50 = rd32(sp0 - 0x50u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100836f8)
                wr32(sp0 - 0x64u, sp0 - 0x4cu);
                wr32(sp0 - 0x68u, sp0 - 0x4cu);
                g->eax = eax;
                g->edx = sp0 - 0x4cu;
                g->esp = sp0 - 0x60u;
                t37 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x4cu, sp0 - 0x4cu);
                t38 = g->edx;
                d39 = cow_take_float(g);
                eax = t37;
                edx = t38;
                x0 = d39;
    COW_AT(10083707)
                d40 = (double)rdf32(sp0 - 0x54u);
                if (!(x0 < d40))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d40, 1u);
    COW_AT(10083721)
                    loc_54_f = (double)rdf32(sp0 - 0x54u);
                    loc_50 = rd32(sp0 - 0x50u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d40, 1u);
    COW_AT(10083717)
                    wrf32(sp0 - 0x54u, (float)(double)(float)x0);
                    wr32(sp0 - 0x50u, esi);
                    loc_54_f = (double)(float)x0;
                    loc_50 = esi;
                }
            }
        }
    COW_AT(10083723)
        g->eax = eax;
        g->esp = sp0 - 0x60u;
        t41 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
        t42 = g->ecx;
        t43 = g->edx;
        eax = t41;
        ecx = t42;
        edx = t43;
    COW_AT(1008372a)
        if (eax != 0u)
        {
            esi = eax;
            loc_60 = rd32(sp0 - 0x60u);
            goto L_100836b8;
        }
    COW_AT(10083730)
        ebx = rd32(sp0 - 0x60u);
    }
    COW_AT(10083731)
    g->esp = sp0 - 0x5cu;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    COW_AT(1008373a)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return rd32(sp0 - 0x50u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10083620(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1008362du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10083631u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10083635u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10083640u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10083649u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10083653u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1008365du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1008366au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10083674u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1008367eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10083688u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10083691u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100836a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x54u, 0x451c4000u);
        wr32(sp0 - 0x50u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100836adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100836b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100836b8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x60u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100836c7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100836ceu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100836d8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100836e7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        g->ebx = arg2;
        wr32(sp0 - 0x68u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x100836f8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        g->ebx = arg2;
        wr32(sp0 - 0x68u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10083707u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x68u;
        g->ebx = arg2;
        wr32(sp0 - 0x68u, sp0 - 0x4cu);
        wr32(sp0 - 0x64u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10083717u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x60u;
        g->ebx = arg2;
        wr32(sp0 - 0x68u, sp0 - 0x4cu);
        wr32(sp0 - 0x64u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10083721u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x60u;
        g->ebx = arg2;
        wr32(sp0 - 0x68u, sp0 - 0x4cu);
        wr32(sp0 - 0x64u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10083723u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        double loc_54_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x60u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1008372au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10083730u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10083731u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1008373au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10083620(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10083620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
