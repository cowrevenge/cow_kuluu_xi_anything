/* f_0x102d1570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102d1570(Guest* g)
{
    double d20;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_ebp);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    t1 = rd32(sp0 + 4u);
    t2 = rd32(sp0 + 0xcu);
    edi = rd32(sp0 + 0xcu) + 0x110u;
    eax = 0u;
    ecx = 0x86u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(t2 + 0x124u, 3u);
    wr32(t2 + 0x120u, 3u);
    wr32(sp0 - 0x3cu, 8u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x40u, 0u);
    if (t1 >= 0x44cu)
    {
        ebx = t2;
        ebp = 0u;
        loc_44 = 0u;
    }
    else
    {
        ebx = t2;
        wr32(sp0 - 0x44u, 8u);
        ebp = 8u;
        loc_44 = 8u;
    }
    t3 = ebp * 4u + ebx + 0x80u;
    wr32(sp0 - 0x34u, t3);
    t4 = rd32(sp0 + 8u) - COW_IMG(0x10344dc8u);
    wr32(sp0 - 0x2cu, t4);
    eax = 0u;
    esi = t3;
    loc_3c = 8u;
    loc_48 = 0u;
    loc_40 = 0u;
    loc_34 = t3;
    loc_2c = t4;
L_102d15e3: ;
    t5 = rd32(COW_IMG(0x10344ac0u) + ebp * 4u);
    wr32(sp0 + 8u, t5);
    if ((int32_t)eax > (int32_t)(0x40u - (uint32_t)((int32_t)t5 >> 4u)))
    {
        ecx = (uint32_t)((int32_t)t5 >> 4u);
        edx = 0x40u - (uint32_t)((int32_t)t5 >> 4u);
        goto L_102d18e0;
    }
    if ((int32_t)(eax * 0x18u + loc_3c) > (int32_t)(rd32(sp0 + 4u) - 0x258u))
    {
        ecx = rd32(sp0 + 4u) - 0x258u;
        edx = eax * 0x18u + loc_3c;
        goto L_102d18e0;
    }
    edx = eax * 0x18u + loc_3c;
    edi = eax * 0x18u;
    if (rd32(esi - 0x80u) != 0u)
    {
        ecx = rd32(esi - 0x80u);
        if ((int32_t)rd32(COW_IMG(0x10344dc8u) + ebp * 4u + loc_2c) >= 1280)
        {
            ebp = COW_IMG(0x10344dc8u) + ebp * 4u;
        }
        else
        {
            ebp = COW_IMG(0x10344dc8u) + ebp * 4u;
            ecx = 0u;
        }
        wr32(sp0 - 0x30u, rd32(ebp));
        if (rd32(sp0 + 8u) != 0x20u)
        {
            loc_30 = rd32(ebp);
            ebp = (uint32_t)((int32_t)rd32(ebp) >> 8u);
        }
        else
        {
            loc_30 = rd32(ebp);
            ebp = 1u;
        }
        t6 = rd32(esi) - rd32(COW_IMG(0x10344d30u) + ebp * 0x20u + ecx * 4u);
        t7 = rd32(esi);
        t8 = rd32(COW_IMG(0x10344d30u) + ebp * 0x20u + ecx * 4u);
        wr32(sp0 + 8u, t6);
        if ((int32_t)(t7 - t8) >= 0)
        {
            edx = t7;
        }
        else
        {
            edx = t7;
            wr32(sp0 + 8u, 0u);
        }
        if ((int32_t)eax <= 0)
        {
            ecx = loc_30;
        }
        else
        {
            ecx = loc_30;
            if ((int32_t)(rd32(ebx + edi + 0x538u) + 4u) > (int32_t)ecx)
            {
                wr32(esi, -edx);
                t9 = rd32(ebx + edi + 0x538u) - ecx + 4u;
                t10 = rd32(esi - 0x84u);
                wr32(esi - 0x80u, t9);
                t11 = t10 + t9 - 4u;
                wr32(esi - 0x84u, t11);
                ecx = rd32(ebx + edi + 0x538u) + 4u;
            }
        }
        wr32(sp0 - 0x5cu, ebx);
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        t12 = (uint32_t)((int32_t)(rd32(COW_IMG(0x10344ac0u) + loc_44 * 4u) + 8u) >> 4u);
        wr32(sp0 - 0x64u, t12);
        t13 = rd32(COW_IMG(0x10344dccu) + loc_44 * 4u);
        wr32(sp0 - 0x68u, t13);
        wr32(sp0 - 0x6cu, ecx);
        t14 = rd32(sp0 + 8u);
        wr32(sp0 - 0x70u, t14);
        g->edx = t13;
        g->esp = sp0 - 0x44u;
        t15 = cow_cdecl(g, COW_IMG(0x102d1cd0u), 11, t14, ecx, t13, t12, sp0 - 0x24u, ebx, in_edi, in_esi, in_ebp, in_ebx, loc_48);
        t16 = g->edx;
        if ((int32_t)t15 <= 0)
        {
            edx = t16;
            ebp = loc_44;
        }
        else
        {
            eax = t15;
            if ((int32_t)rd32(esi) >= 0)
            {
                ecx = rd32(esi);
                wr32(esi, -ecx);
                wr32(esi - 0x80u, 0u);
            }
            wr32(sp0 - 0x30u, sp0 - 0x24u);
            t17 = rd32(sp0 + 0xcu);
            wr32(eax * 4u + sp0 - 0x24u, 0xffffffffu);
            t18 = ebx + t17 * 0x18u + 0x540u;
            wr32(sp0 - 0x38u, t18);
            t19 = ebx + edi + 0x538u;
            wr32(sp0 + 8u, t19);
            eax = sp0 - 0x24u;
            edx = t17;
            loc_30 = sp0 - 0x24u;
            loc_38 = t18;
L_102d1730: ;
            if ((int32_t)rd32(eax) <= 1020)
            {
                ecx = rd32(eax);
            }
            else
            {
                ecx = 0x3fcu;
            }
            if ((int32_t)edx <= 0)
            {
                ebp = 4u;
            }
            else
            {
                if (rd32(rd32(sp0 + 8u)) + 4u != ecx)
                {
                    ebp = 4u;
                }
                else
                {
                    eax = rd32(rd32(sp0 + 8u)) + 4u;
                    edx = ebx + ecx * 4u + 0xc8cu;
                    ebp = 4u;
L_102d175b: ;
                    d20 = fabs((double)rdf32(edx - 0x10u));
                    if ((cow_fsw(g, fabs((double)rdf32(edx)), d20, 0u) & 0x4100u) == 0u) goto L_102d1779;
                    eax = cow_fsw(g, fabs((double)rdf32(edx)), d20, 0u) & 0x4100u;
                    if ((int32_t)(ebp - 1u) > 1)
                    {
                        ecx = ecx - 1u;
                        edx = edx - 4u;
                        ebp = ebp - 1u;
                        goto L_102d175b;
                    }
                    ecx = ecx - 1u;
                    ebp = ebp - 1u;
                }
            }
L_102d1779: ;
            t21 = rd32(sp0 + 0xcu) + 1u;
            wr32(sp0 + 0xcu, t21);
            t22 = rd32(sp0 + 8u) + 0x18u;
            wr32(sp0 + 8u, t22);
            wr32(sp0 - 0x38u, loc_38 + 0x18u);
            if ((int32_t)rd32(ebx + (uint32_t)((int32_t)ecx >> 6u) * 0x20u + 0x128u) < 7)
            {
                esi = (uint32_t)((int32_t)ecx >> 6u);
                edi = loc_38;
                loc_38 = loc_38 + 0x18u;
                goto L_102d17d4;
            }
            loc_38 = loc_38 + 0x18u;
            t23 = rd32(sp0 + 0xcu) - 1u;
            t24 = rd32(sp0 + 8u);
            wr32(sp0 + 0xcu, t23);
            wr32(sp0 + 8u, t24 - 0x18u);
            wr32(sp0 - 0x38u, loc_38 - 0x18u);
            edx = 0x18u;
            loc_38 = loc_38 - 0x18u;
L_102d188a: ;
            wr32(sp0 - 0x30u, loc_30 + 4u);
            if ((int32_t)rd32(loc_30 + 4u) < 0) goto L_102d18ba;
            eax = loc_30 + 4u;
            loc_30 = loc_30 + 4u;
            edx = rd32(sp0 + 0xcu);
            goto L_102d1730;
        }
L_102d18c2: ;
        eax = rd32(sp0 + 0xcu);
    }
    wr32(sp0 - 0x44u, ebp + 1u);
    wr32(sp0 - 0x34u, esi + 4u);
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(ebx + 0x100u))
    {
        loc_44 = ebp + 1u;
        ebp = ebp + 1u;
        loc_34 = esi + 4u;
        esi = esi + 4u;
        goto L_102d15e3;
    }
    ecx = rd32(ebx + 0x100u);
    loc_44 = ebp + 1u;
L_102d18e0: ;
    if (eax != 0u) goto L_102d18ec;
    return eax;
L_102d17d4: ;
    wr32(edi + 0x10u, ecx);
    wr32(sp0 - 0x5cu, 4u);
    wr32(sp0 - 0x60u, 3u);
    wr32(sp0 - 0x64u, edi);
    t25 = ebx + ecx * 4u + 0xc80u;
    wr32(sp0 - 0x68u, t25);
    g->ecx = t25;
    g->esp = sp0 - 0x38u;
    t26 = cow_cdecl(g, COW_IMG(0x102d1200u), 12, t25, edi, 3u, 4u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), loc_48, rd32(sp0 - 0x44u), loc_40, loc_3c);
    t27 = g->ecx;
    wr32(sp0 - 0x28u, t26);
    if (rd32(edi) != 0u)
    {
        loc_28 = t26;
        goto L_102d181b;
    }
    ecx = t27;
    loc_28 = t26;
    if ((int32_t)rd32(edi + 0x10u) > 1020) goto L_102d181b;
    t28 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x5cu, t28);
    wr32(sp0 - 0x60u, edi);
    g->ecx = ecx;
    g->edx = t28;
    g->esp = sp0 - 0x58u;
    t29 = cow_cdecl(g, COW_IMG(0x102d1c50u), 2, edi, t28);
    t30 = g->ecx;
    t31 = g->edx;
    if ((int32_t)t29 < 0)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
        goto L_102d18a3;
    }
    esi = (uint32_t)((int32_t)rd32(edi + 0x10u) >> 6u);
L_102d181b: ;
    t34 = loc_28 + rd32(sp0 - 0x48u);
    wr32(sp0 - 0x48u, t34);
    t35 = ebp + rd32(rd32(sp0 - 0x34u) - 0x80u);
    wr32(rd32(sp0 - 0x34u) - 0x80u, t35);
    if (rd32(ebx + (uint32_t)((int32_t)esi >> 2u) * 4u + 0x110u) != 0u)
    {
        loc_48 = t34;
    }
    else
    {
        eax = ebx + (uint32_t)((int32_t)esi >> 2u) * 4u + 0x110u;
        loc_48 = t34;
        wr32(eax, 1u);
        t36 = rd32(sp0 - 0x3cu) + 0xcu;
        wr32(sp0 - 0x3cu, t36);
        loc_3c = t36;
    }
    t37 = rd32(ebx + esi * 0x20u + 0x128u);
    wr32(ebx + esi * 0x20u + t37 * 4u + 0x12cu, edi);
    t38 = rd32(ebx + esi * 0x20u + 0x128u) + 1u;
    wr32(ebx + esi * 0x20u + 0x128u, t38);
    if (rd32(edi + 0xcu) != 0u)
    {
        edx = esi * 8u + t37;
    }
    else
    {
        edx = esi * 8u + t37;
        t39 = rd32(sp0 - 0x40u) + 1u;
        wr32(sp0 - 0x40u, t39);
        loc_40 = t39;
    }
    goto L_102d188a;
L_102d18a3: ;
    wr32(sp0 - 0x5cu, ebx);
    wr32(sp0 - 0x60u, 3u);
    wr32(sp0 - 0x64u, 3u);
    wr32(sp0 - 0x68u, edi);
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x102d14d0u), 11, edi, 3u, 3u, ebx, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t32 = g->edx;
    t33 = rd32(sp0 + 0xcu) - 1u;
    wr32(sp0 + 0xcu, t33);
    edx = t32;
L_102d18ba: ;
    ebp = rd32(sp0 - 0x44u);
    esi = rd32(sp0 - 0x34u);
    goto L_102d18c2;
L_102d18ec: ;
    if (eax != 1u) goto L_102d1925;
    if ((int32_t)rd32(ebx + 0x550u) < 128) goto L_102d1907;
    if (rd32(sp0 + 4u) >= 0x44cu) goto L_102d1925;
L_102d1907: ;
    wr32(sp0 - 0x5cu, ebx);
    wr32(sp0 - 0x60u, 3u);
    wr32(sp0 - 0x64u, 3u);
    wr32(sp0 - 0x68u, ebx + 0x540u);
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x102d14d0u), 11, ebx + 0x540u, 3u, 3u, ebx, in_edi, in_esi, in_ebp, in_ebx, loc_48, loc_44, loc_40);
    return 0u;
L_102d1925: ;
    t40 = loc_3c + rd32(ebx + 0x104u);
    wr32(sp0 - 0x3cu, t40);
    t41 = rd32(ebx + 0x104u);
    wr32(ebx + 0x10cu, 1u);
    if (loc_40 == eax)
    {
        ecx = t41;
        edx = loc_40;
        esi = eax * 0x18u;
        loc_3c = t40;
        goto L_102d19fb;
    }
    edx = loc_40;
    esi = eax * 0x18u;
    loc_3c = t40;
    t42 = eax * 2u - edx * 3u;
    t43 = rd32(ebx + 0x120u);
    wr32(sp0 + 4u, t42);
    if ((int32_t)loc_48 < (int32_t)esi)
    {
        ecx = loc_48;
        ebp = eax * 0xcu + esi + rd32(rd32(COW_IMG(0x103cc0ccu) + t43 * 8u) + 4u) * rd32(sp0 + 4u) - edx * 0xcu;
        edi = eax * 0xcu + loc_48 + rd32(rd32(COW_IMG(0x103cc0c8u) + t43 * 8u) + 4u) * t42 - edx * 0xcu;
    }
    else
    {
        ebp = eax * 0xcu + esi + rd32(rd32(COW_IMG(0x103cc0ccu) + t43 * 8u) + 4u) * rd32(sp0 + 4u) - edx * 0xcu;
        edi = eax * 0xcu + loc_48 + rd32(rd32(COW_IMG(0x103cc0c8u) + t43 * 8u) + 4u) * t42 - edx * 0xcu;
        ecx = esi;
    }
    if ((int32_t)edi < (int32_t)ebp)
    {
        edx = edi;
    }
    else
    {
        edx = ebp;
    }
    if ((int32_t)ecx <= (int32_t)edx) goto L_102d19f5;
    wr32(sp0 - 0x5cu, eax);
    wr32(sp0 - 0x60u, ebx);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t44 = cow_cdecl(g, COW_IMG(0x102d1b10u), 10, ebx, eax, in_edi, in_esi, in_ebp, in_ebx, loc_48, loc_44, loc_40, loc_3c);
    t45 = g->ecx;
    t46 = g->edx;
    wr32(sp0 - 0x40u, t44);
    if (t44 == 0u)
    {
        ecx = t45;
        edx = t46;
        loc_40 = t44;
        goto L_102d19f1;
    }
    eax = t44;
    t47 = rd32(ebx + 0x120u);
    wr32(sp0 + 0xcu, eax);
    t48 = edi + rd32(rd32(COW_IMG(0x103cc0c8u) + t47 * 8u) + 4u) * eax;
    wr32(sp0 - 0x48u, t48);
    ecx = rd32(COW_IMG(0x103cc0ccu) + t47 * 8u);
    edx = eax;
    esi = ebp + rd32(rd32(COW_IMG(0x103cc0ccu) + t47 * 8u) + 4u) * eax;
    loc_48 = t48;
L_102d19fb: ;
    wr32(sp0 - 0x5cu, eax);
    wr32(sp0 - 0x60u, ebx);
    g->esp = sp0 - 0x58u;
    t49 = cow_cdecl(g, COW_IMG(0x102d1a70u), 2, ebx, eax);
    t50 = rd32(sp0 - 0x48u) - rd32(rd32(COW_IMG(0x103cc0c8u) + rd32(ebx + 0x120u) * 8u) + 4u) * t49 * rd32(sp0 + 0xcu);
    wr32(sp0 - 0x48u, t50);
    esi = esi - rd32(rd32(COW_IMG(0x103cc0ccu) + rd32(ebx + 0x120u) * 8u) + 4u) * t49 * rd32(sp0 + 0xcu);
    loc_48 = t50;
L_102d1a37: ;
    if ((int32_t)loc_48 <= (int32_t)esi)
    {
        eax = 0u;
    }
    else
    {
        wr32(sp0 - 0x48u, esi);
        eax = 1u;
        loc_48 = esi;
    }
    wr32(ebx + 0x108u, eax);
    return loc_3c + loc_48;
L_102d19f1: ;
    eax = rd32(sp0 + 0xcu);
L_102d19f5: ;
    if (loc_40 != eax) goto L_102d1a37;
    goto L_102d19fb;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d1570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d1570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
