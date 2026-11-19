/* f_0x10083750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10083750(Guest* g)
{
    double d33;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d47;
    double d48;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_74;
    uint32_t loc_7c;
    uint32_t loc_84;
    uint32_t loc_88;
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
    uint32_t t34;
    uint32_t t4;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 160u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008375cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1008375c;
    case 0x10083760u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10083760;
    case 0x100837c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100837c6;
    case 0x100837deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); goto E_100837de;
    case 0x10083805u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10083805;
    case 0x10083826u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10083826;
    case 0x1008383eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1008383e;
    case 0x1008384du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1008384d;
    case 0x1008385bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1008385b;
    case 0x1008386bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1008386b;
    case 0x1008387cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1008387c;
    case 0x1008388fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1008388f;
    case 0x100838a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100838a3;
    case 0x100838b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100838b4;
    case 0x100838c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); goto E_100838c0;
    case 0x100838d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100838d1;
    case 0x100838d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); loc_7c = rd32(sp0 - 0x7cu); loc_74 = rd32(sp0 - 0x74u); goto E_100838d3;
    default: break;
    }
#endif

    COW_AT(10083750)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x7cu;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10083760;
    }
    eax = t1;
    COW_AT(1008375c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
L_10083760: ;
    COW_AT(10083760)
    wr32(sp0 - 0x80u, in_esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    t4 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x84u, t4 + 0x44u);
    wr32(sp0 - 0x88u, sp0 - 0x6cu);
    g->eax = sp0 - 0x6cu;
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x6cu, t4 + 0x44u);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t10 = g->ecx;
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t13 = g->edx;
    wr32(sp0 - 0x84u, t12);
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, t12);
    t15 = g->ecx;
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t18 = g->edx;
    wr32(sp0 - 0x84u, t17);
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0x40u, 1, t17);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x7cu, 0x4e6e6b28u);
    g->ecx = t20;
    g->edx = t21;
    t22 = cow_call_regs(g, COW_IMG(0x101cc510u), t19, g->ecx, g->edx, 1, 0);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x70u, t22);
    t25 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, t24, 1, 0);
    t26 = g->edx;
    if (t25 == 0u)
    {
        eax = t25;
        edx = t26;
        ebx = in_ebx;
        edi = in_edi;
        loc_74 = 0u;
    }
    else
    {
        esi = t25;
    COW_AT(100837c6)
        wr32(sp0 - 0x84u, in_ebx);
        wr32(sp0 - 0x88u, in_edi);
        ebx = (arg2 >> 9u & 0xffffff00u) | (~(uint8_t)(arg2 >> 9u) & 1u);
        loc_88 = in_edi;
        loc_74 = 0u;
        loc_7c = 0x4e6e6b28u;
        loc_84 = in_ebx;
L_100837de: ;
    COW_AT(100837de)
        wr32(sp0 - 0x8cu, ebx);
        wr32(sp0 - 0x90u, arg3);
        wr32(sp0 - 0x94u, arg2);
        t27 = rd32(sp0 - 0x70u);
        wr32(sp0 - 0x98u, t27);
        wr32(sp0 - 0x9cu, esi);
        g->eax = t27;
        g->edx = arg2;
        g->esp = sp0 - 0x88u;
        t28 = cow_cdecl(g, COW_IMG(0x10083430u), 5, esi, t27, arg2, arg3, ebx);
        t29 = g->edx;
        if ((uint8_t)t28 == 0u)
        {
            eax = t28;
            edx = t29;
            loc_74 = rd32(sp0 - 0x74u);
            loc_7c = rd32(sp0 - 0x7cu);
        }
        else
        {
    COW_AT(10083805)
            wr32(sp0 - 0x8cu, sp0 - 0x40u);
            wr32(sp0 - 0x90u, sp0 - 0x50u);
            wr32(sp0 - 0x94u, sp0 - 0x60u);
            g->eax = sp0 - 0x60u;
            g->edx = rd32(esi);
            t30 = rd32(esi);
            g->esp = sp0 - 0x88u;
            t31 = cow_thiscall(g, rd32(t30 + 0x3d0u), esi, 3, sp0 - 0x60u, sp0 - 0x50u, sp0 - 0x40u);
            t32 = g->edx;
            if ((uint8_t)t31 == 0u)
            {
                eax = t31;
                edx = t32;
                loc_74 = rd32(sp0 - 0x74u);
                loc_7c = rd32(sp0 - 0x7cu);
            }
            else
            {
                eax = t31;
                edx = t32;
    COW_AT(10083826)
                d33 = (double)rdf32(sp0 - 0x60u);
                t34 = rd32(sp0 - 0x54u);
                d35 = (double)rdf32(arg1);
                wr32(arg1 + 0xcu, t34);
                if (!(d33 <= d35))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, d35, 0u);
                    loc_74 = rd32(sp0 - 0x74u);
                    loc_7c = rd32(sp0 - 0x7cu);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, d35, 0u);
    COW_AT(1008383e)
                    d36 = (double)rdf32(sp0 - 0x50u);
                    if ((cow_fsw(g, d36, (double)rdf32(arg1), 0u) & 0x100u) != 0u)
                    {
                        eax = cow_fsw(g, d36, (double)rdf32(arg1), 0u) & 0x100u;
                        loc_74 = rd32(sp0 - 0x74u);
                        loc_7c = rd32(sp0 - 0x7cu);
                    }
                    else
                    {
                        eax = cow_fsw(g, d36, (double)rdf32(arg1), 0u) & 0x100u;
    COW_AT(1008384d)
                        d37 = (double)rdf32(sp0 - 0x5cu);
                        d38 = (double)rdf32(arg1 + 4u);
                        if (!(d37 <= d38))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, d38, 0u);
                            loc_74 = rd32(sp0 - 0x74u);
                            loc_7c = rd32(sp0 - 0x7cu);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, d38, 0u);
    COW_AT(1008385b)
                            d39 = (double)rdf32(sp0 - 0x4cu);
                            d40 = (double)rdf32(arg1 + 4u);
                            if ((cow_fsw(g, d39, d40, 0u) & 0x100u) != 0u)
                            {
                                eax = cow_fsw(g, d39, d40, 0u) & 0x100u;
                                loc_74 = rd32(sp0 - 0x74u);
                                loc_7c = rd32(sp0 - 0x7cu);
                            }
                            else
                            {
                                eax = cow_fsw(g, d39, d40, 0u) & 0x100u;
    COW_AT(1008386b)
                                d41 = (double)rdf32(sp0 - 0x7cu);
                                d42 = (double)rdf32(sp0 - 0x54u);
                                if ((cow_fsw(g, d41, d42, 0u) & 0x4100u) != 0u)
                                {
                                    eax = cow_fsw(g, d41, d42, 0u) & 0x4100u;
                                    loc_74 = rd32(sp0 - 0x74u);
                                    loc_7c = rd32(sp0 - 0x7cu);
                                }
                                else
                                {
                                    eax = cow_fsw(g, d41, d42, 0u) & 0x4100u;
    COW_AT(1008387c)
                                    d43 = (double)rdf32(sp0 - 0x54u);
                                    if ((cow_fsw(g, d43, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                                    {
                                        eax = cow_fsw(g, d43, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                                        loc_74 = rd32(sp0 - 0x74u);
                                        loc_7c = rd32(sp0 - 0x7cu);
                                    }
                                    else
                                    {
    COW_AT(1008388f)
                                        wr32(sp0 - 0x8cu, sp0 - 0x78u);
                                        wr32(sp0 - 0x90u, arg1);
                                        g->eax = sp0 - 0x78u;
                                        g->edx = rd32(esi);
                                        t44 = rd32(esi);
                                        g->esp = sp0 - 0x88u;
                                        t45 = cow_thiscall(g, rd32(t44 + 0x3d4u), esi, 2, arg1, sp0 - 0x78u);
                                        t46 = g->edx;
                                        if ((uint8_t)t45 != 1u)
                                        {
                                            eax = t45;
                                            edx = t46;
                                            loc_74 = rd32(sp0 - 0x74u);
                                            loc_7c = rd32(sp0 - 0x7cu);
                                        }
                                        else
                                        {
                                            eax = t45;
                                            edx = t46;
    COW_AT(100838a3)
                                            d47 = (double)rdf32(sp0 - 0x7cu);
                                            d48 = (double)rdf32(sp0 - 0x78u);
                                            if ((cow_fsw(g, d47, d48, 0u) & 0x4100u) != 0u)
                                            {
                                                eax = cow_fsw(g, d47, d48, 0u) & 0x4100u;
                                                loc_74 = rd32(sp0 - 0x74u);
                                                loc_7c = rd32(sp0 - 0x7cu);
                                            }
                                            else
                                            {
                                                eax = cow_fsw(g, d47, d48, 0u) & 0x4100u;
    COW_AT(100838b4)
                                                wr32(sp0 - 0x74u, esi);
                                                t49 = rd32(sp0 - 0x78u);
                                                wr32(sp0 - 0x7cu, t49);
                                                loc_74 = esi;
                                                loc_7c = t49;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    COW_AT(100838c0)
        g->eax = eax;
        g->esp = sp0 - 0x88u;
        t50 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
        t51 = g->edx;
        if (t50 != 0u)
        {
            esi = t50;
            loc_88 = rd32(sp0 - 0x88u);
            loc_74 = rd32(sp0 - 0x74u);
            loc_7c = rd32(sp0 - 0x7cu);
            loc_84 = rd32(sp0 - 0x84u);
            goto L_100837de;
        }
        eax = t50;
        edx = t51;
    COW_AT(100838d1)
        ebx = rd32(sp0 - 0x84u);
        edi = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
    }
    COW_AT(100838d3)
    g->esp = sp0 - 0x80u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x80u);
    g->edi = edi;
    return rd32(sp0 - 0x74u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10083750(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1008375cu:
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
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10083760u:
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
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x100837c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x88u, sp0 - 0x6cu);
        wr32(sp0 - 0x7cu, 0x4e6e6b28u);
        wr32(sp0 - 0x74u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100837deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_84;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10083805u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10083826u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x60u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1008383eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x60u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1008384du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x60u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1008385bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x60u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1008386bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x60u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1008387cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x60u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1008388fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x60u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100838a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x60u);
        wr32(sp0 - 0x8cu, sp0 - 0x78u);
        (void)sp0;
        return 1;
    }
    case 0x100838b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x60u);
        wr32(sp0 - 0x8cu, sp0 - 0x78u);
        (void)sp0;
        return 1;
    }
    case 0x100838c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_74;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100838d1u:
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
        g->esp = sp0 - 0x88u;
        (void)sp0;
        return 1;
    }
    case 0x100838d3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_74;
        uint32_t loc_7c;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10083750(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10083750(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
