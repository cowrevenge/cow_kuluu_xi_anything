/* f_0x10157fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10157fa0(Guest* g)
{
    double d13;
    double d17;
    double d18;
    double d19;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    double loc_88_f;
    uint32_t loc_8c;
    uint32_t loc_90;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    uint32_t t36;
    uint32_t t4;
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
    cow_frame(g, sp0, 172u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10157fc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x90u); goto E_10157fc0;
    case 0x10157febu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); goto E_10157feb;
    case 0x10157ffdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10157ffd;
    case 0x1015802du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_88_f = rdf32(sp0 - 0x88u); goto E_1015802d;
    case 0x1015803eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_88_f = rdf32(sp0 - 0x88u); goto E_1015803e;
    case 0x10158051u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_88_f = rdf32(sp0 - 0x88u); goto E_10158051;
    case 0x10158062u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_88_f = rdf32(sp0 - 0x88u); goto E_10158062;
    case 0x1015806bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_88_f = rdf32(sp0 - 0x88u); goto E_1015806b;
    case 0x1015807du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1015807d;
    case 0x10158088u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10158088;
    case 0x10158093u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10158093;
    case 0x101580a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101580a5;
    case 0x101580b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_101580b4;
    case 0x101580e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_101580e7;
    case 0x1015811au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1015811a;
    case 0x1015814du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1015814d;
    case 0x10158151u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_88_f = rdf32(sp0 - 0x88u); goto E_10158151;
    case 0x10158156u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_88_f = rdf32(sp0 - 0x88u); goto E_10158156;
    case 0x10158175u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_88_f = rdf32(sp0 - 0x88u); goto E_10158175;
    default: break;
    }
#endif

    COW_AT(10157fa0)
    wr32(sp0 - 0x8cu, in_ebx);
    wr32(sp0 - 0x90u, in_esi);
    wr32(sp0 - 0x94u, 0xffffffffu);
    wr32(sp0 - 0x98u, 1u);
    wr32(sp0 - 0x9cu, 0x44u);
    wr32(sp0 - 0xa0u, 0x3fu);
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = in_edx;
    g->esp = sp0 - 0x84u;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), in_eax, self, g->edx, 1, 7, 0x3fu, 0x44u, 1u, 0xffffffffu, in_esi, in_ebx, rd32(sp0 - 0x88u));
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = in_ebx & 0xffffff00u;
        loc_8c = in_ebx;
        loc_90 = in_esi;
    }
    else
    {
        eax = t1;
        edx = t3;
    COW_AT(10157fc0)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x90u;
        t4 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 == 0u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            ebx = in_ebx & 0xffffff00u;
            loc_8c = in_ebx;
            loc_90 = in_esi;
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
    COW_AT(10157fce)
            if (rd32(eax + 0x70u) == 0u)
            {
                eax = rd32(eax + 0x70u);
                ebx = in_ebx & 0xffffff00u;
                loc_8c = rd32(sp0 - 0x8cu);
                loc_90 = rd32(sp0 - 0x90u);
            }
            else
            {
                eax = rd32(eax + 0x70u);
    COW_AT(10157fd5)
                if (rd32(eax + 0x170u) == 0x21u) goto L_10157fe9;
    COW_AT(10157fde)
                if (self == 0u) goto L_10157fe9;
    COW_AT(10157fe2)
                if (rd8(self + 0x20u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0x20u);
                    ebx = in_ebx & 0xffffff00u;
                    loc_8c = rd32(sp0 - 0x8cu);
                    loc_90 = rd32(sp0 - 0x90u);
                    goto L_10157feb;
                }
                eax = (eax & 0xffffff00u) | rd8(self + 0x20u);
L_10157fe9: ;
    COW_AT(10157fe9)
                ebx = (in_ebx & 0xffffff00u) | 1u;
                loc_8c = rd32(sp0 - 0x8cu);
                loc_90 = rd32(sp0 - 0x90u);
            }
        }
    }
L_10157feb: ;
    COW_AT(10157feb)
    wr32(sp0 - 0x94u, 0x46u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t7 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x46u);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_10158151;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(10157ffd)
    wr32(sp0 - 0x94u, 5u);
    wr32(sp0 - 0x98u, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88u;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 5u, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu));
    t11 = g->ecx;
    t12 = g->edx;
    d13 = cow_take_float(g);
    wrf32(sp0 - 0x84u, (float)(double)(float)d13);
    wr32(sp0 - 0x9cu, 4u);
    wr32(sp0 - 0xa0u, 0x3fu);
    g->edx = t12;
    g->esp = sp0 - 0x90u;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t11, 4, 0x3fu, 4u, 0x3fu, 5u);
    t15 = g->ecx;
    t16 = g->edx;
    d17 = cow_take_float(g);
    wrf32(sp0 - 0x88u, (float)(double)(float)d17);
    d18 = (double)rdf32(sp0 - 0x84u);
    if ((cow_fsw(g, d18, (double)rdf32(COW_IMG(0x10329a08u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d18, (double)rdf32(COW_IMG(0x10329a08u)), 0u) & 0x4100u;
        edx = t16;
        goto L_1015806b;
    }
    eax = cow_fsw(g, d18, (double)rdf32(COW_IMG(0x10329a08u)), 0u) & 0x4100u;
    ecx = t15;
    edx = t16;
    loc_88_f = (double)(float)d17;
    COW_AT(1015802d)
    d19 = (double)rdf32(sp0 - 0x84u);
    if (d19 < (double)rdf32(COW_IMG(0x1032a3d0u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u);
        goto L_1015806b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u);
    COW_AT(1015803e)
    if ((cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u) & 0x4100u;
        goto L_1015806b;
    }
    eax = cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u) & 0x4100u;
    COW_AT(10158051)
    if (loc_88_f < (double)rdf32(COW_IMG(0x1032a3d0u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u);
        goto L_1015806b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u);
    COW_AT(10158062)
    wr8(self + 0x57u, 0u);
L_10158151: ;
    COW_AT(10158151)
    if ((uint8_t)ebx != 1u) goto L_10158175;
    COW_AT(10158156)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t33 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t34 = g->ecx;
    t35 = g->edx;
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x98u, COW_IMG(0x1036e3a4u));
    g->ebx = ebx;
    t36 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x1036e3a4u), 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x90u);
    return (t36 & 0xffffff00u) | (uint8_t)ebx;
L_1015806b: ;
    COW_AT(1015806b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t20 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        goto L_1015814d;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(1015807d)
    if (rd8(self + 0x57u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x57u);
        goto L_1015814d;
    }
    ecx = (ecx & 0xffffff00u) | rd8(self + 0x57u);
    COW_AT(10158088)
    if (rd32(eax + 0x70u) == 0u)
    {
        eax = rd32(eax + 0x70u);
        goto L_1015814d;
    }
    eax = rd32(eax + 0x70u);
    COW_AT(10158093)
    if (rd32(eax + 0x170u) - 7u > 0x4cu)
    {
        eax = rd32(eax + 0x170u) - 7u;
        goto L_1015814d;
    }
    eax = rd32(eax + 0x170u) - 7u;
    COW_AT(101580a5)
    t23 = rd32(COW_IMG(0x10158180u) + rd8(COW_IMG(0x10158190u) + eax) * 4u);
    switch (t23 - RD)
    {
    case 0x101580b4u: ecx = rd8(COW_IMG(0x10158190u) + eax); goto L_101580b4;
    case 0x101580e7u: goto L_101580e7;
    case 0x1015811au: ecx = rd8(COW_IMG(0x10158190u) + eax); goto L_1015811a;
    case 0x1015814du: ecx = rd8(COW_IMG(0x10158190u) + eax); goto L_1015814d;
    default: rt_fatal(g, COW_IMG(0x101580adu), "switch");
    }
    return 0;
L_101580b4: ;
    COW_AT(101580b4)
    wr32(sp0 - 0x94u, COW_IMG(0x1034f488u));
    wr32(sp0 - 0x98u, COW_IMG(0x1036e3a4u));
    wr32(sp0 - 0x9cu, COW_IMG(0x10358098u));
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10358098u), COW_IMG(0x1036e3a4u), COW_IMG(0x1034f488u), rd32(sp0 - 0x90u));
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    g->ebx = ebx;
    g->eax = sp0 - 0x80u;
    g->esp = sp0 - 0xa0u;
    t32 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x80u, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x90u);
    return (t32 & 0xffffff00u) | 1u;
L_101580e7: ;
    COW_AT(101580e7)
    wr32(sp0 - 0x94u, COW_IMG(0x1034f488u));
    wr32(sp0 - 0x98u, COW_IMG(0x10372138u));
    wr32(sp0 - 0x9cu, COW_IMG(0x10358098u));
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = sp0 - 0x80u;
    g->esp = sp0 - 0x8cu;
    t27 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10358098u), COW_IMG(0x10372138u), COW_IMG(0x1034f488u), rd32(sp0 - 0x90u));
    t28 = g->ecx;
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    g->ebx = ebx;
    g->esp = sp0 - 0xa0u;
    t29 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x80u, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x90u);
    return (t29 & 0xffffff00u) | 1u;
L_1015811a: ;
    COW_AT(1015811a)
    wr32(sp0 - 0x94u, COW_IMG(0x1034f488u));
    wr32(sp0 - 0x98u, COW_IMG(0x1037212cu));
    wr32(sp0 - 0x9cu, COW_IMG(0x10358098u));
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
    g->ebx = ebx;
    g->eax = sp0 - 0x80u;
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    t24 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10358098u), COW_IMG(0x1037212cu), COW_IMG(0x1034f488u), rd32(sp0 - 0x90u));
    t25 = g->edx;
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    g->ebx = ebx;
    g->esp = sp0 - 0xa0u;
    t26 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x80u, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x90u);
    return (t26 & 0xffffff00u) | 1u;
L_1015814d: ;
    COW_AT(1015814d)
    wr8(self + 0x57u, 1u);
    goto L_10158151;
L_10158175: ;
    COW_AT(10158175)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10157fa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10157fc0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x10157febu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8c;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x10157ffdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x1015802du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_88_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x1015803eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_88_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x10158051u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_88_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x10158062u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_88_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x1015806bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_88_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x1015807du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x10158088u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x10158093u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101580a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101580b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101580e7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x1015811au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x1015814du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x10158151u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double loc_88_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x10158156u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double loc_88_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x10158175u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double loc_88_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     10157fce: holds in_ebx, which no location here says
     10157fd5: holds in_ebx, which no location here says
     10157fde: holds in_ebx, which no location here says
     10157fe2: holds in_ebx, which no location here says
     10157fe9: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10157fa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10157fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
