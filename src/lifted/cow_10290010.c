/* f_0x10290010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10290010(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    t1 = rd32(rd32(rd32(sp0 + 4u) + 0x18u) + rd32(rd32(sp0 + 8u) * 0x2cu + rd32(rd32(sp0 + 4u) + 0x48u) + 8u) * 0xcu);
    t2 = rd32(sp0 + 8u);
    t3 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10291200u), 1, t1);
    t4 = rd32(rd32(t3 + 0x18u) + rd32(t2 * 0x2cu + rd32(t3 + 0x48u) + 8u) * 0xcu + 4u);
    g->ecx = t4;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10283d80u), 1, t4);
    t5 = g->ecx;
    if (rd32(t2 * 0x2cu + rd32(t3 + 0x48u) + 4u) != 0u)
    {
        ecx = t5;
        edx = rd32(t3 + 0x48u);
        ebp = t2 * 0x2cu;
        esi = t3;
        loc_4 = t1;
        if ((int32_t)rd32(esi + 0x34u) <= 0) goto L_10290099;
        ebx = 0u;
        edi = 0u;
L_1029007a: ;
        if (rd32(ebx + rd32(esi + 0x40u) + 0x28u) == 4u)
        {
            eax = rd32(esi + 0x40u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_call_regs(g, COW_IMG(0x102a2550u), eax, g->ecx, g->edx, 1, 2, esi, edi);
            t6 = g->ecx;
            t7 = g->edx;
            ecx = t6;
            edx = t7;
        }
        if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 0x34u))
        {
            ebx = ebx + 0x30u;
            edi = edi + 1u;
            goto L_1029007a;
        }
L_10290099: ;
        if ((int32_t)rd32(ebp + rd32(esi + 0x48u) + 4u) <= 0) goto L_1029011e;
        eax = ebp + rd32(esi + 0x48u);
        ebx = 0u;
L_102900a9: ;
        if (rd8(rd32(eax + 0x28u) + rd32(ebx * 4u + rd32(eax + 0x24u)) * 0x90u + 0x1cu) != 0u)
        {
            edx = rd32(eax + 0x24u);
            edi = rd32(eax + 0x28u) + rd32(ebx * 4u + rd32(eax + 0x24u)) * 0x90u;
            if (rd32(edi + 0x10u) != 0u)
            {
                t8 = rd32(edi + 0xcu);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x102a2150u), 5, rd32(edi), t8, in_edi, in_esi, in_ebp);
                t9 = g->edx;
                edx = t9;
            }
            if (rd32(rd32(edi + 0x18u)) != 0xf0001u)
            {
                eax = rd32(edi + 0x18u);
                ecx = rd32(rd32(edi + 0x18u));
                goto L_102900ed;
            }
            eax = rd32(edi + 0x18u);
            ecx = rd32(rd32(edi + 0x18u));
            if ((rd8(eax + 0x84u) & 2u) != 0u) goto L_102900fe;
L_102900ed: ;
            if (ecx != 0xf0002u) goto L_1029010f;
            if ((rd8(eax + 0x164u) & 4u) == 0u) goto L_1029010f;
L_102900fe: ;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t10 = cow_cdecl(g, COW_IMG(0x1028f700u), 2, esi, edi);
            t11 = g->ecx;
            t12 = g->edx;
            cow_cdecl(g, COW_IMG(0x1028f4e0u), 4, esi, edi, esi, edi);
        }
L_1029010f: ;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(ebp + rd32(esi + 0x48u) + 4u))
        {
            eax = ebp + rd32(esi + 0x48u);
            ebx = ebx + 1u;
            goto L_102900a9;
        }
L_1029011e: ;
        t13 = rd32(esi + 0x48u);
        wr32(sp0 + 4u, 0u);
        if ((int32_t)rd32(ebp + t13 + 4u) <= 0)
        {
            edx = rd32(ebp + t13 + 4u);
            loc_8 = 0u;
            goto L_102901d9;
        }
        eax = ebp + t13;
        ecx = 0u;
        loc_8 = 0u;
L_10290134: ;
        if (rd8(rd32(eax + 0x28u) + rd32(ecx * 4u + rd32(eax + 0x24u)) * 0x90u + 0x1cu) != 0u)
        {
            edx = rd32(eax + 0x24u);
            edi = rd32(eax + 0x28u) + rd32(ecx * 4u + rd32(eax + 0x24u)) * 0x90u;
            if (rd32(rd32(edi + 0x18u)) != 0xf0001u)
            {
                eax = rd32(edi + 0x18u);
                ecx = rd32(rd32(edi + 0x18u));
                if (ecx == 0xf0002u)
                {
                    t15 = rd32(eax + 0x164u);
                    wr32(eax + 0x164u, t15 & 0xfffffffbu);
                    ecx = t15 & 0xfffffffbu;
                    loc_8 = t15;
                }
                ebx = loc_8;
            }
            else
            {
                eax = rd32(edi + 0x18u);
                t14 = rd32(eax + 0x84u);
                wr32(eax + 0x84u, t14 & 0xfffffffdu);
                ecx = t14 & 0xfffffffdu;
                ebx = t14;
                loc_8 = t14;
            }
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t16 = cow_cdecl(g, COW_IMG(0x1028f700u), 2, esi, edi);
            t17 = g->ecx;
            t18 = g->edx;
            cow_cdecl(g, COW_IMG(0x1028f4e0u), 4, esi, edi, esi, edi);
            if (rd32(rd32(edi + 0x18u)) != 0xf0001u)
            {
                eax = rd32(rd32(edi + 0x18u));
                edi = rd32(edi + 0x18u);
                if (eax == 0xf0002u)
                {
                    wr32(edi + 0x164u, ebx);
                }
            }
            else
            {
                edi = rd32(edi + 0x18u);
                wr32(edi + 0x84u, ebx);
            }
        }
        t19 = rd32(sp0 + 4u) + 1u;
        t20 = rd32(esi + 0x48u);
        wr32(sp0 + 4u, t19);
        if ((int32_t)t19 < (int32_t)rd32(ebp + t20 + 4u))
        {
            eax = ebp + t20;
            ecx = t19;
            goto L_10290134;
        }
        edx = t20;
L_102901d9: ;
        if ((int32_t)rd32(esi + 0x34u) > 0)
        {
            wr32(sp0 + 8u, 0u);
            ebx = 0u;
L_102901ea: ;
            if (rd32(rd32(esi + 0x40u) + rd32(sp0 + 8u) + 0x28u) != 0u)
            {
                edx = rd32(rd32(esi + 0x40u) + rd32(sp0 + 8u) + 0x28u);
            }
            else
            {
                eax = rd32(esi + 0x40u);
                ecx = rd32(sp0 + 8u);
                t21 = ebp + rd32(esi + 0x48u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = t21;
                g->esp = sp0 - 0x18u;
                t22 = cow_cdecl(g, COW_IMG(0x102a21b0u), 2, t21, ebx);
                t23 = g->ecx;
                t24 = g->edx;
                if (t22 == 0u)
                {
                    edx = t24;
                }
                else
                {
                    eax = t22;
                    ecx = t23;
                    edx = t24;
                    g->esp = sp0 - 0x18u;
                    cow_cdecl(g, COW_IMG(0x102a2740u), 2, esi, ebx);
                    t25 = rd32(esi + 0x48u);
                    wr32(sp0 + 4u, 0u);
                    if ((int32_t)rd32(ebp + t25 + 4u) <= 0)
                    {
                        edx = rd32(ebp + t25 + 4u);
                        goto L_1029029f;
                    }
                    eax = ebp + t25;
                    ecx = 0u;
L_10290230: ;
                    if (rd8(rd32(eax + 0x28u) + rd32(ecx * 4u + rd32(eax + 0x24u)) * 0x90u + 0x1cu) != 0u)
                    {
                        edx = rd32(eax + 0x24u);
                        edi = rd32(eax + 0x28u) + rd32(ecx * 4u + rd32(eax + 0x24u)) * 0x90u;
                        ecx = rd32(eax + 0x28u);
                        if (rd32(edi + 0x44u) != 0u)
                        {
                            eax = rd32(edi + 0x44u);
                            g->eax = eax;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x18u;
                            t26 = cow_cdecl(g, COW_IMG(0x102a2180u), 2, edi, ebx);
                            t27 = g->ecx;
                            t28 = g->edx;
                            if (t26 != 0u)
                            {
                                ecx = t27;
                                edx = t28;
                                g->esp = sp0 - 0x18u;
                                cow_cdecl(g, COW_IMG(0x10291200u), 1, loc_4);
                                t29 = rd32(rd32(esi + 0x18u) + rd32(ebp + rd32(esi + 0x48u) + 8u) * 0xcu + 4u);
                                g->eax = rd32(esi + 0x18u);
                                g->ecx = t29;
                                g->edx = rd32(ebp + rd32(esi + 0x48u) + 8u) * 3u;
                                t30 = rd32(esi + 0x18u);
                                t31 = rd32(ebp + rd32(esi + 0x48u) + 8u);
                                g->esp = sp0 - 0x1cu;
                                t32 = cow_cdecl(g, COW_IMG(0x10283d80u), 1, t29);
                                t33 = g->ecx;
                                t34 = g->edx;
                                g->esp = sp0 - 4u;
                                cow_cdecl(g, COW_IMG(0x102a2c20u), 11, esi, edi, ebx, 0u, t29, loc_4, in_edi, in_esi, in_ebp, in_ebx, loc_8);
                            }
                        }
                    }
                    t35 = rd32(sp0 + 4u) + 1u;
                    t36 = rd32(esi + 0x48u);
                    wr32(sp0 + 4u, t35);
                    if ((int32_t)t35 < (int32_t)rd32(ebp + t36 + 4u))
                    {
                        eax = ebp + t36;
                        ecx = t35;
                        goto L_10290230;
                    }
                    edx = t36;
                }
            }
L_1029029f: ;
            t37 = rd32(sp0 + 8u) + 0x30u;
            t38 = rd32(esi + 0x34u);
            wr32(sp0 + 8u, t37);
            if ((int32_t)(ebx + 1u) < (int32_t)t38)
            {
                ebx = ebx + 1u;
                goto L_102901ea;
            }
        }
        if (rd32(ebp + rd32(esi + 0x48u) + 0xcu) != 0u)
        {
            eax = rd32(esi + 0x48u);
            ecx = rd32(ebp + rd32(esi + 0x48u) + 0xcu);
            g->ebp = ebp;
            g->esp = sp0 - 0x14u;
            cow_call_regs(g, COW_IMG(0x1028ffa0u), g->eax, g->ecx, edx, 1, 1, esi);
        }
    }
    g->ebp = in_ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10290010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10290010(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
