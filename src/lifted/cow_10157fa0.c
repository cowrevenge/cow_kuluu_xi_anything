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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 172u);

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
    }
    else
    {
        eax = t1;
        edx = t3;
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
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            if (rd32(eax + 0x70u) == 0u)
            {
                eax = rd32(eax + 0x70u);
                ebx = in_ebx & 0xffffff00u;
            }
            else
            {
                eax = rd32(eax + 0x70u);
                if (rd32(eax + 0x170u) == 0x21u) goto L_10157fe9;
                if (self == 0u) goto L_10157fe9;
                if (rd8(self + 0x20u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0x20u);
                    ebx = in_ebx & 0xffffff00u;
                    goto L_10157feb;
                }
                eax = (eax & 0xffffff00u) | rd8(self + 0x20u);
L_10157fe9: ;
                ebx = (in_ebx & 0xffffff00u) | 1u;
            }
        }
    }
L_10157feb: ;
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
    d19 = (double)rdf32(sp0 - 0x84u);
    if (d19 < (double)rdf32(COW_IMG(0x1032a3d0u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u);
        goto L_1015806b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u);
    if ((cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u) & 0x4100u;
        goto L_1015806b;
    }
    eax = cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u) & 0x4100u;
    if (loc_88_f < (double)rdf32(COW_IMG(0x1032a3d0u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u);
        goto L_1015806b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u);
    wr8(self + 0x57u, 0u);
L_10158151: ;
    if ((uint8_t)ebx != 1u) goto L_10158175;
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
    if (rd8(self + 0x57u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x57u);
        goto L_1015814d;
    }
    ecx = (ecx & 0xffffff00u) | rd8(self + 0x57u);
    if (rd32(eax + 0x70u) == 0u)
    {
        eax = rd32(eax + 0x70u);
        goto L_1015814d;
    }
    eax = rd32(eax + 0x70u);
    if (rd32(eax + 0x170u) - 7u > 0x4cu)
    {
        eax = rd32(eax + 0x170u) - 7u;
        goto L_1015814d;
    }
    eax = rd32(eax + 0x170u) - 7u;
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
    wr32(sp0 - 0x94u, COW_IMG(0x1034f488u));
    wr32(sp0 - 0x98u, COW_IMG(0x1036e3a4u));
    wr32(sp0 - 0x9cu, COW_IMG(0x10358098u));
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
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
    wr32(sp0 - 0x94u, COW_IMG(0x1034f488u));
    wr32(sp0 - 0x98u, COW_IMG(0x10372138u));
    wr32(sp0 - 0x9cu, COW_IMG(0x10358098u));
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
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
    wr32(sp0 - 0x94u, COW_IMG(0x1034f488u));
    wr32(sp0 - 0x98u, COW_IMG(0x1037212cu));
    wr32(sp0 - 0x9cu, COW_IMG(0x10358098u));
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
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
    wr8(self + 0x57u, 1u);
    goto L_10158151;
L_10158175: ;
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10157fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
