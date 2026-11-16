/* f_0x1013b9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1013b9c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), self, 3, arg1, 0x7bu, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_1013bbdf;
    }
    ecx = t2;
    edx = t3;
    esi = t1;
L_1013b9da: ;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 3, esi, COW_IMG(0x1036fe58u), 5u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        t9 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 3, esi, COW_IMG(0x1036fe50u), 5u);
        t10 = g->ecx;
        t11 = g->edx;
        if (t9 != 0u)
        {
            ecx = t10;
            edx = t11;
            g->ecx = ecx;
            g->esp = sp0 - 4u;
            t14 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 3, esi, COW_IMG(0x1036fe48u), 5u);
            t15 = g->ecx;
            t16 = g->edx;
            if (t14 != 0u)
            {
                ecx = t15;
                edx = t16;
                g->ecx = ecx;
                g->esp = sp0 - 4u;
                t19 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 3, esi, COW_IMG(0x1036fe40u), 5u);
                t20 = g->ecx;
                t21 = g->edx;
                if (t19 != 0u)
                {
                    ecx = t20;
                    edx = t21;
                    g->ecx = ecx;
                    g->esp = sp0 - 4u;
                    t24 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 3, esi, COW_IMG(0x1036fe38u), 5u);
                    t25 = g->ecx;
                    t26 = g->edx;
                    if (t24 != 0u)
                    {
                        ecx = t25;
                        edx = t26;
                        g->ecx = ecx;
                        g->esp = sp0 - 4u;
                        t29 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 3, esi, COW_IMG(0x1036fe30u), 5u);
                        t30 = g->ecx;
                        t31 = g->edx;
                        if (t29 != 0u)
                        {
                            ecx = t30;
                            edx = t31;
                            g->ecx = ecx;
                            g->esp = sp0 - 4u;
                            t34 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 3, esi, COW_IMG(0x1036fe28u), 5u);
                            t35 = g->ecx;
                            t36 = g->edx;
                            if (t34 != 0u)
                            {
                                ecx = t35;
                                edx = t36;
                                g->ecx = ecx;
                                g->esp = sp0 - 4u;
                                t39 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 3, esi, COW_IMG(0x1036fe20u), 5u);
                                t40 = g->ecx;
                                t41 = g->edx;
                                if (t39 != 0u)
                                {
                                    ecx = t40;
                                    edx = t41;
                                    esi = esi + 1u;
                                }
                                else
                                {
                                    eax = t39;
                                    ecx = rd32(COW_IMG(0x1036fd44u));
                                    edx = esi;
L_1013bba9: ;
                                    t42 = rd8(ecx);
                                    wr8(edx, (uint8_t)t42);
                                    if ((uint8_t)t42 != 0u)
                                    {
                                        eax = (eax & 0xffffff00u) | t42;
                                        ecx = ecx + 1u;
                                        edx = edx + 1u;
                                        goto L_1013bba9;
                                    }
                                    ecx = ecx + 1u;
                                    eax = esi + 5u;
L_1013bbbd: ;
                                    t43 = rd8(eax);
                                    wr8(eax - 3u, (uint8_t)t43);
                                    if ((uint8_t)t43 != 0u)
                                    {
                                        eax = eax + 1u;
                                        ecx = (ecx & 0xffffff00u) | t43;
                                        goto L_1013bbbd;
                                    }
                                    ecx = (ecx & 0xffffff00u) | t43;
                                    edx = 0xfffffffdu;
                                }
                            }
                            else
                            {
                                eax = t34;
                                ecx = rd32(COW_IMG(0x1036fd40u));
                                edx = esi;
L_1013bb6d: ;
                                t37 = rd8(ecx);
                                wr8(edx, (uint8_t)t37);
                                if ((uint8_t)t37 != 0u)
                                {
                                    eax = (eax & 0xffffff00u) | t37;
                                    ecx = ecx + 1u;
                                    edx = edx + 1u;
                                    goto L_1013bb6d;
                                }
                                eax = esi + 5u;
                                ecx = 0xfffffffbu;
L_1013bb81: ;
                                t38 = rd8(eax);
                                wr8(eax - 3u, (uint8_t)t38);
                                if ((uint8_t)t38 != 0u)
                                {
                                    eax = eax + 1u;
                                    ecx = (ecx & 0xffffff00u) | t38;
                                    goto L_1013bb81;
                                }
                                ecx = (ecx & 0xffffff00u) | t38;
                                edx = 0xfffffffdu;
                            }
                        }
                        else
                        {
                            eax = t29;
                            ecx = rd32(COW_IMG(0x1036fd3cu));
                            edx = esi;
L_1013bb31: ;
                            t32 = rd8(ecx);
                            wr8(edx, (uint8_t)t32);
                            if ((uint8_t)t32 != 0u)
                            {
                                eax = (eax & 0xffffff00u) | t32;
                                ecx = ecx + 1u;
                                edx = edx + 1u;
                                goto L_1013bb31;
                            }
                            ecx = ecx + 1u;
                            eax = esi + 5u;
L_1013bb45: ;
                            t33 = rd8(eax);
                            wr8(eax - 3u, (uint8_t)t33);
                            if ((uint8_t)t33 != 0u)
                            {
                                eax = eax + 1u;
                                ecx = (ecx & 0xffffff00u) | t33;
                                goto L_1013bb45;
                            }
                            ecx = (ecx & 0xffffff00u) | t33;
                            edx = 0xfffffffdu;
                        }
                    }
                    else
                    {
                        eax = t24;
                        ecx = rd32(COW_IMG(0x1036fd38u));
                        edx = esi;
L_1013baf2: ;
                        t27 = rd8(ecx);
                        wr8(edx, (uint8_t)t27);
                        if ((uint8_t)t27 != 0u)
                        {
                            eax = (eax & 0xffffff00u) | t27;
                            ecx = ecx + 1u;
                            edx = edx + 1u;
                            goto L_1013baf2;
                        }
                        eax = esi + 5u;
                        ecx = 0xfffffffbu;
L_1013bb06: ;
                        t28 = rd8(eax);
                        wr8(eax - 3u, (uint8_t)t28);
                        if ((uint8_t)t28 != 0u)
                        {
                            eax = eax + 1u;
                            ecx = (ecx & 0xffffff00u) | t28;
                            goto L_1013bb06;
                        }
                        ecx = (ecx & 0xffffff00u) | t28;
                        edx = 0xfffffffdu;
                    }
                }
                else
                {
                    eax = t19;
                    ecx = rd32(COW_IMG(0x1036fd34u));
                    edx = esi;
L_1013bab3: ;
                    t22 = rd8(ecx);
                    wr8(edx, (uint8_t)t22);
                    if ((uint8_t)t22 != 0u)
                    {
                        eax = (eax & 0xffffff00u) | t22;
                        ecx = ecx + 1u;
                        edx = edx + 1u;
                        goto L_1013bab3;
                    }
                    ecx = ecx + 1u;
                    eax = esi + 5u;
L_1013bac7: ;
                    t23 = rd8(eax);
                    wr8(eax - 3u, (uint8_t)t23);
                    if ((uint8_t)t23 != 0u)
                    {
                        eax = eax + 1u;
                        ecx = (ecx & 0xffffff00u) | t23;
                        goto L_1013bac7;
                    }
                    ecx = (ecx & 0xffffff00u) | t23;
                    edx = 0xfffffffdu;
                }
            }
            else
            {
                eax = t14;
                ecx = rd32(COW_IMG(0x1036fd30u));
                edx = esi;
L_1013ba74: ;
                t17 = rd8(ecx);
                wr8(edx, (uint8_t)t17);
                if ((uint8_t)t17 != 0u)
                {
                    eax = (eax & 0xffffff00u) | t17;
                    ecx = ecx + 1u;
                    edx = edx + 1u;
                    goto L_1013ba74;
                }
                eax = esi + 5u;
                ecx = 0xfffffffbu;
L_1013ba88: ;
                t18 = rd8(eax);
                wr8(eax - 3u, (uint8_t)t18);
                if ((uint8_t)t18 != 0u)
                {
                    eax = eax + 1u;
                    ecx = (ecx & 0xffffff00u) | t18;
                    goto L_1013ba88;
                }
                ecx = (ecx & 0xffffff00u) | t18;
                edx = 0xfffffffdu;
            }
        }
        else
        {
            eax = t9;
            ecx = rd32(COW_IMG(0x1036fd2cu));
            edx = esi;
L_1013ba35: ;
            t12 = rd8(ecx);
            wr8(edx, (uint8_t)t12);
            if ((uint8_t)t12 != 0u)
            {
                eax = (eax & 0xffffff00u) | t12;
                ecx = ecx + 1u;
                edx = edx + 1u;
                goto L_1013ba35;
            }
            ecx = ecx + 1u;
            eax = esi + 5u;
L_1013ba49: ;
            t13 = rd8(eax);
            wr8(eax - 3u, (uint8_t)t13);
            if ((uint8_t)t13 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t13;
                goto L_1013ba49;
            }
            ecx = (ecx & 0xffffff00u) | t13;
            edx = 0xfffffffdu;
        }
    }
    else
    {
        eax = t4;
        ecx = rd32(COW_IMG(0x1036fd28u));
        edx = esi;
L_1013b9f6: ;
        t7 = rd8(ecx);
        wr8(edx, (uint8_t)t7);
        if ((uint8_t)t7 != 0u)
        {
            eax = (eax & 0xffffff00u) | t7;
            ecx = ecx + 1u;
            edx = edx + 1u;
            goto L_1013b9f6;
        }
        eax = esi + 5u;
        ecx = 0xfffffffbu;
L_1013ba0a: ;
        t8 = rd8(eax);
        wr8(eax - 3u, (uint8_t)t8);
        if ((uint8_t)t8 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t8;
            goto L_1013ba0a;
        }
        ecx = (ecx & 0xffffff00u) | t8;
        edx = 0xfffffffdu;
    }
    g->edx = edx;
    g->esp = sp0;
    t44 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, esi, 0x7bu, in_esi);
    t45 = g->ecx;
    t46 = g->edx;
    if (t44 != 0u)
    {
        ecx = t45;
        edx = t46;
        esi = t44;
        goto L_1013b9da;
    }
    eax = t44;
L_1013bbdf: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013b9c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013b9c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
