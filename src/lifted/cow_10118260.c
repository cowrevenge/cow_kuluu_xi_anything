/* f_0x10118260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10118260(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x10u) != 0xeu) goto L_10118275;
    return 0u;
L_10118275: ;
    if ((int16_t)rd16(self + 0x56u) <= 0) goto L_1011828d;
    return 0u;
L_1011828d: ;
    t1 = (in_eax & 0xffff0000u) | rd16(self + 0x4cu);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, t1);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_101182ac;
    }
    eax = t2;
    edx = t3;
    if (rd32(eax + 0x10u) != 0x10u) goto L_101182ac;
    return 0u;
L_101182ac: ;
    if (rd8(self + 0x5cu) == 0u)
    {
        loc_4 = 0u;
        goto L_101184a0;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x5cu);
    if (rd8(self + 0x5du) == 0u) goto L_101182d1;
    if ((uint16_t)arg1 == 6u) goto L_101182d1;
    return 0u;
L_101182d1: ;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1cu)
    {
        loc_4 = 0u;
        goto L_101184a0;
    }
    t4 = rd32(COW_IMG(0x101184e0u) + rd8(COW_IMG(0x101184fcu) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t4 - RD)
    {
    case 0x101182edu: goto L_101182ed;
    case 0x1011836bu: goto L_1011836b;
    case 0x10118395u: ecx = rd8(COW_IMG(0x101184fcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10118395;
    case 0x101183f9u: goto L_101183f9;
    case 0x1011843eu: ecx = rd8(COW_IMG(0x101184fcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_1011843e;
    case 0x10118469u: ecx = rd8(COW_IMG(0x101184fcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10118469;
    case 0x101184a0u: loc_4 = 0u; goto L_101184a0;
    default: rt_fatal(g, COW_IMG(0x101182e6u), "switch");
    }
    return 0;
L_101182ed: ;
    if (rd8(self + 0x61u) == 0u)
    {
        loc_4 = 0u;
    }
    else
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(self + 0x61u);
        if ((int16_t)rd16(self + 0x58u) <= 0)
        {
            loc_4 = 0u;
        }
        else
        {
            t34 = (edx & 0xffff0000u) | rd16(self + 0x4cu);
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t35 = cow_fastcall(g, COW_IMG(0x1011b220u), rd32(self + 4u), t34, 2, t34, arg1);
            t36 = g->edx;
            if ((int16_t)t35 < 0)
            {
                edx = t36;
                loc_4 = 0u;
            }
            else
            {
                eax = t35;
                edx = t36;
                edi = t35;
                g->edi = edi;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t37 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, edi);
                t38 = g->edx;
                if (t37 == 0u)
                {
                    eax = t37;
                    edx = t38;
                    goto L_10118332;
                }
                eax = t37;
                edx = t38;
                if (rd32(eax + 0x10u) == 0x10u)
                {
                    loc_4 = 0u;
                    goto L_101184a0;
                }
L_10118332: ;
                if ((uint16_t)edi != rd16(self + 0x4cu))
                {
                    wr16(self + 0x5au, 0u);
                }
                else
                {
                    wr16(self + 0x5au, (uint16_t)arg1);
                }
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t39 = cow_call_regs(g, COW_IMG(0x10118e90u), eax, self, g->edx, 0, 1, edi);
                t40 = g->ecx;
                t41 = g->edx;
                if (rd8(self + 0x85u) == 0u)
                {
                    edx = t41;
                }
                else
                {
                    eax = (t39 & 0xffffff00u) | rd8(self + 0x85u);
                    ecx = t40;
                    edx = t41;
                    if (rd16(self + 0x5au) == 0u)
                    {
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
                        t42 = g->edx;
                        edx = t42;
                    }
                }
                wr16(self + 0x4cu, (uint16_t)edi);
                loc_4 = 0u;
            }
        }
    }
L_101184a0: ;
    if (rd32(self + 0xcu) != 0u)
    {
        if (rd32(self + 0x10u) != 0xeu)
        {
            if (rd32(self + 4u) != 0u)
            {
                eax = rd32(self + 4u);
                g->eax = eax + 0x46u;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t43 = cow_thiscall(g, COW_IMG(0x1015e0f0u), COW_IMG(0x10621838u), 1, eax + 0x46u);
                t44 = g->edx;
                if ((uint8_t)t43 != 0u)
                {
                    edx = t44;
                    t45 = (edx & 0xffff0000u) | rd16(self + 0x4cu);
                    g->esp = sp0 - 0x10u;
                    cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x18u), rd32(self + 0xcu), 2, arg1, t45);
                }
            }
        }
    }
    g->edi = in_edi;
    return loc_4;
L_1011836b: ;
    t31 = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(self + 0x4cu);
    g->eax = t31;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t32 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, t31);
    t33 = g->edx;
    if (t32 == 0u)
    {
        edx = t33;
        loc_4 = 0u;
    }
    else
    {
        eax = t32;
        edx = t33;
        if (rd32(eax + 0x10u) == 5u)
        {
            loc_4 = 0u;
        }
        else
        {
            wr32(eax + 0x10u, 2u);
            loc_4 = 0u;
        }
    }
    goto L_101184a0;
L_10118395: ;
    t20 = (ecx & 0xffff0000u) | rd16(self + 0x4cu);
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, t20);
    t22 = g->ecx;
    t23 = g->edx;
    if (rd8(self + 0x86u) == 0u)
    {
        eax = (t21 & 0xffffff00u) | rd8(self + 0x86u);
        edx = t23;
        edi = t21;
    }
    else
    {
        eax = (t21 & 0xffffff00u) | rd8(self + 0x86u);
        ecx = t22;
        edx = t23;
        edi = t21;
        if (edi == 0u) goto L_101183be;
        if (rd32(edi + 0x10u) != 5u) goto L_101183be;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t24 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
L_101183c3: ;
    if (edi == 0u)
    {
        loc_4 = 0u;
        goto L_101184a0;
    }
    if (rd32(edi + 0x10u) != 5u) goto L_101183da;
    return 0u;
L_101183be: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t26 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t27 = g->edx;
    eax = t26;
    edx = t27;
    goto L_101183c3;
L_101183da: ;
    wr32(edi + 0x10u, 1u);
    t28 = (edx & 0xffff0000u) | rd16(self + 0x4cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t29 = cow_fastcall(g, COW_IMG(0x1011b2a0u), rd32(self + 4u), t28, 1, t28);
    t30 = g->edx;
    wr16(self + 0x5eu, 9u);
    eax = t29;
    edx = t30;
L_1011849c: ;
    loc_4 = eax;
    goto L_101184a0;
L_101183f9: ;
    t13 = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(self + 0x4cu);
    g->eax = t13;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, t13);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 0u)
    {
        edx = t16;
        loc_4 = 0u;
        goto L_101184a0;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    edi = t14;
    if (rd8(self + 0x85u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x85u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x85u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t17 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    }
    if (rd32(edi + 0x10u) != 5u) goto L_1011842d;
    return 0u;
L_1011842d: ;
    wr16(edi + 0x28u, 0xffffu);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10119970u), 1, 1u);
    t19 = g->edx;
    edx = t19;
    loc_4 = 0u;
    goto L_101184a0;
L_1011843e: ;
    if (rd8(self + 0x84u) == 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(self + 0x84u);
    }
    else
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(self + 0x84u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    if ((rd8(self + 0x34u) & 2u) != 0u)
    {
        loc_4 = 0u;
        goto L_101184a0;
    }
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, self, 1u);
    return 0u;
L_10118469: ;
    t5 = (ecx & 0xffff0000u) | rd16(self + 0x4cu);
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, t5);
    t7 = g->edx;
    if (t6 == 0u)
    {
        edx = t7;
        loc_4 = 0u;
        goto L_101184a0;
    }
    eax = t6;
    edx = t7;
    if (rd32(eax + 0x10u) != 5u) goto L_10118488;
    return 0u;
L_10118488: ;
    wr32(eax + 0x10u, 1u);
    t8 = (edx & 0xffff0000u) | rd16(self + 0x4cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t9 = cow_fastcall(g, COW_IMG(0x1011b2a0u), rd32(self + 4u), t8, 1, t8);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    goto L_1011849c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118260(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
