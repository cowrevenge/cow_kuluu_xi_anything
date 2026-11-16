/* f_0x1009e090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1009e090(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    g->edx = in_edx;
    t1 = rd32(sp0 - 0x20u);
    g->esp = sp0 - 0x30u;
    t2 = cow_thiscall(g, COW_IMG(0x1018c890u), arg1, 0);
    t3 = g->edx;
    t4 = rd32(sp0 + 8u);
    wr32(sp0 - 0x34u, t4);
    g->edx = t3;
    t5 = cow_thiscall(g, COW_IMG(0x1018c8c0u), arg1, 1, t4);
    t6 = g->edx;
    if (t2 == 0u)
    {
        eax = t5;
        edx = t6;
    }
    else
    {
        eax = t5;
        edx = t6;
        ebp = t2;
        edi = t4;
        if (eax != 0u)
        {
            if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
            {
                t7 = rd32(ebp + 0x74u);
                wr32(sp0 - 8u, t7);
                t8 = rd32(ebp + 0x78u);
                wr32(sp0 - 4u, t8);
                t9 = rd32(eax + 0x74u);
                wr32(sp0 - 0x10u, t9);
                t10 = rd32(eax + 0x78u);
                wr32(sp0 - 0xcu, t10);
                wr16(COW_IMG(0x10482f40u), (uint16_t)t7);
                wr16(COW_IMG(0x104855aau), (uint16_t)t9);
                g->esp = sp0 - 0x30u;
                t11 = cow_call_regs(g, COW_IMG(0x101cc4f0u), t10, g->ecx, g->edx, 1, 0);
                t12 = rd32(COW_IMG(0x10480af0u) + rd32(sp0 - 0x10u) * 4u);
                wr32(sp0 - 0x34u, t12);
                t13 = rd32(COW_IMG(0x10480af0u) + rd32(sp0 - 8u) * 4u);
                wr32(sp0 - 0x38u, t13);
                wr32(sp0 - 0x3cu, t11);
                t14 = cow_call_regs(g, COW_IMG(0x1009e370u), g->eax, g->ecx, t13, 1, 3, t11, t13, t12);
                t15 = g->edx;
                if ((uint8_t)t14 != 0u)
                {
                    eax = t14;
                    edx = t15;
                }
                else
                {
                    t16 = rd32(rd32(arg1 + 0xcu) + 0x10u);
                    wr32(COW_IMG(0x10487020u), t16);
                    t17 = rd32(edi * 0x34u + rd32(rd32(arg1 + 0xcu) + 0x20u) + 0x14u);
                    wr32(COW_IMG(0x10487024u), t17);
                    t18 = rd32(edi * 0x34u + rd32(rd32(arg1 + 0xcu) + 0x20u) + 0x24u);
                    wr32(COW_IMG(0x10487028u), t18);
                    t19 = rd16(edi * 0x34u + rd32(rd32(arg1 + 0xcu) + 0x20u) + 0x2eu);
                    wr32(COW_IMG(0x1048702cu), t19);
                    t20 = rd32(edi * 0x34u + rd32(rd32(arg1 + 0xcu) + 0x20u) + 0x1cu);
                    wr32(COW_IMG(0x10487030u), t20);
                    if (arg3 == 0u)
                    {
                        eax = edi * 0x34u;
                        ebp = t17;
                        goto L_1009e1c7;
                    }
                    eax = edi * 0x34u;
                    ecx = t19;
                    ebx = t18;
                    if (arg3 == 1u) goto L_1009e1b4;
                    if (arg3 != 2u)
                    {
                        edx = arg3 - 2u;
                        goto L_1009e365;
                    }
                    wr32(sp0 + 8u, ecx);
                    ecx = rd32(arg1 + 0xcu);
                    edx = rd32(rd32(arg1 + 0xcu) + 0x20u);
                    ebp = rd16(eax + rd32(rd32(arg1 + 0xcu) + 0x20u) + 0x30u);
L_1009e1d5: ;
                    if (ebp != 0u)
                    {
                        wr32(sp0 - 0x34u, ebp);
                        wr32(sp0 - 0x38u, 5u);
                        g->ecx = ecx;
                        g->esp = sp0 - 0x30u;
                        t23 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, 5u, ebp);
                        t24 = g->ecx;
                        t25 = g->edx;
                        wr32(sp0 - 0x14u, t23);
                        if (t23 == 0u)
                        {
                            eax = t23;
                            edx = t25;
                        }
                        else
                        {
                            eax = t23;
                            ecx = t24;
                            edx = t25;
                            loc_14 = t23;
                            wr32(sp0 - 0x34u, ebp);
                            t26 = (eax & 0xffff0000u) | rd16(COW_IMG(0x104855aau));
                            wr32(sp0 - 0x38u, t26);
                            t27 = (ecx & 0xffff0000u) | rd16(COW_IMG(0x10482f40u));
                            wr32(sp0 - 0x3cu, t27);
                            g->esp = sp0 - 0x10u;
                            t28 = cow_cdecl(g, COW_IMG(0x1009e700u), 11, t27, t26, ebp, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), loc_14);
                            wr32(sp0 - 0x40u, sp0 - 0x18u);
                            wr32(sp0 - 0x44u, 1u);
                            wr32(sp0 - 0x48u, ebp);
                            wr32(sp0 - 0x4cu, sp0 - 0x10u);
                            wr32(sp0 - 0x50u, sp0 - 8u);
                            g->eax = sp0 - 0x10u;
                            g->edx = sp0 - 0x18u;
                            t29 = rd32(sp0 - 0x20u);
                            g->esp = sp0 - 0x3cu;
                            t30 = cow_cdecl(g, COW_IMG(0x100ad950u), 5, sp0 - 8u, sp0 - 0x10u, ebp, 1u, sp0 - 0x18u);
                            t31 = g->edx;
                            if ((uint8_t)t30 == 0u)
                            {
                                edx = t31;
                                g->edx = edx;
                                g->esp = sp0 - 0x30u;
                                t32 = cow_thiscall(g, COW_IMG(0x1018c940u), arg1, 0);
                                t33 = g->edx;
                                if (t32 != 0u)
                                {
                                    edx = t33;
                                    wr32(sp0 - 0x34u, edi);
                                    g->edx = edx;
                                    g->esp = sp0 - 0x30u;
                                    t34 = cow_thiscall(g, COW_IMG(0x1018c980u), arg1, 1, edi);
                                    t35 = g->edx;
                                    if (t34 != 0u)
                                    {
                                        edx = t35;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x30u;
                                        t36 = cow_thiscall(g, COW_IMG(0x1018c940u), arg1, 0);
                                        t37 = g->edx;
                                        wr32(sp0 - 0x34u, edi);
                                        wr32(sp0 - 0x1cu, t36);
                                        g->edx = t37;
                                        t38 = cow_thiscall(g, COW_IMG(0x1018c980u), arg1, 1, edi);
                                        t39 = g->edx;
                                        if (arg3 != 2u)
                                        {
                                            edx = t39;
                                            ebx = t38;
                                            eax = rd32(sp0 - 0x1cu);
                                        }
                                        else
                                        {
                                            edx = t39;
                                            g->edx = edx;
                                            g->esp = sp0 - 0x30u;
                                            t40 = cow_thiscall(g, COW_IMG(0x1018c940u), arg1, 0);
                                            t41 = g->edx;
                                            wr32(sp0 - 0x34u, edi);
                                            g->edx = t41;
                                            t42 = cow_thiscall(g, COW_IMG(0x1018c980u), arg1, 1, edi);
                                            t43 = g->edx;
                                            eax = t42;
                                            edx = t43;
                                            ebx = t40;
                                        }
                                        if ((uint8_t)rd32(sp0 - 0x18u) == 1u) goto L_1009e2cc;
                                        ecx = (uint8_t)rd32(sp0 - 0x18u) - 1u;
                                        if (ecx == 1u) goto L_1009e2b1;
                                        ecx = ecx - 1u;
                                        if (ecx != 1u)
                                        {
                                            ecx = ecx - 1u;
                                            goto L_1009e2f6;
                                        }
                                        if (rd32(COW_IMG(0x1047d120u)) == 0u) goto L_1009e2e7;
                                        ecx = rd32(COW_IMG(0x1047d120u));
                                        wr32(sp0 - 0x34u, 0u);
                                        wr32(sp0 - 0x38u, 0u);
                                        wr32(sp0 - 0x3cu, ebx);
                                        wr32(sp0 - 0x40u, eax);
                                        t44 = rd32(ecx);
                                        g->esp = sp0 - 0x30u;
                                        t45 = cow_call_regs(g, COW_IMG(0x10056c70u), eax, t44, g->edx, 0, 4, eax, ebx, 0u, 0u);
                                        t46 = g->ecx;
                                        ecx = t46;
                                        esi = t45;
L_1009e2fa: ;
                                        wr32(sp0 - 0x34u, ebp);
                                        t55 = rd32(sp0 - 0x10u);
                                        wr32(sp0 - 0x38u, t55);
                                        t56 = rd32(sp0 - 8u);
                                        wr32(sp0 - 0x3cu, t56);
                                        g->ecx = ecx;
                                        g->edx = t55;
                                        g->esp = sp0 - 0x10u;
                                        t57 = cow_cdecl(g, COW_IMG(0x1009e700u), 11, t56, t55, ebp, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
                                        t58 = g->ecx;
                                        t59 = g->edx;
                                        wr32(sp0 - 0x40u, t57);
                                        g->esp = sp0 - 0x3cu;
                                        t60 = cow_call_regs(g, COW_IMG(0x10129c70u), g->eax, g->ecx, t59, 1, 1, t57);
                                        t61 = rd32(sp0 + 8u);
                                        wr32(esi + 0xa8u, t61);
                                        wr32(esi + 0xa4u, t60 & 0xffffffu);
                                    }
                                }
                            }
                            wr32(sp0 - 0x34u, sp0 + 4u);
                            wr32(sp0 - 0x38u, 0u);
                            wr32(sp0 - 0x3cu, ebp);
                            wr32(sp0 - 0x40u, sp0 - 0x10u);
                            wr32(sp0 - 0x44u, sp0 - 8u);
                            g->eax = sp0 - 0x10u;
                            g->ecx = sp0 - 8u;
                            g->edx = sp0 + 4u;
                            g->esp = sp0 - 0x30u;
                            t62 = cow_cdecl(g, COW_IMG(0x100ad950u), 5, sp0 - 8u, sp0 - 0x10u, ebp, 0u, sp0 + 4u);
                            t63 = g->ecx;
                            t64 = g->edx;
                            if ((uint8_t)t62 != 0u)
                            {
                                eax = t62;
                                edx = t64;
                            }
                            else
                            {
                                ecx = t63;
                                wr32(sp0 - 0x34u, 0u);
                                wr32(sp0 - 0x38u, 0u);
                                wr32(sp0 - 0x3cu, 0u);
                                wr32(sp0 - 0x40u, sp0 - 0x20u);
                                wr32(sp0 - 0x44u, 1u);
                                t65 = rd32(sp0 - 0x14u);
                                wr32(sp0 - 0x48u, t65);
                                wr32(sp0 - 0x4cu, COW_IMG(0x103d3c84u));
                                g->esp = sp0 - 0x30u;
                                t66 = cow_call_regs(g, COW_IMG(0x100ad660u), t65, ecx, sp0 - 0x20u, 1, 7, COW_IMG(0x103d3c84u), t65, 1u, sp0 - 0x20u, 0u, 0u, 0u);
                                t67 = g->edx;
                                eax = t66;
                                edx = t67;
                            }
                        }
                    }
                }
            }
        }
    }
L_1009e365: ;
    g->edx = edx;
    return eax;
L_1009e1b4: ;
    t21 = rd32(arg1 + 0xcu);
    wr32(sp0 + 8u, ebx);
    ecx = t21;
    edx = rd32(t21 + 0x20u);
    ebp = rd16(eax + rd32(t21 + 0x20u) + 0x28u);
    goto L_1009e1d5;
L_1009e1c7: ;
    t22 = rd32(arg1 + 0xcu);
    wr32(sp0 + 8u, ebp);
    ecx = t22;
    edx = rd32(t22 + 0x20u);
    ebp = rd32(eax + rd32(t22 + 0x20u) + 0x18u);
    goto L_1009e1d5;
L_1009e2b1: ;
    if (rd32(COW_IMG(0x1047d11cu)) == 0u) goto L_1009e2e7;
    ecx = rd32(COW_IMG(0x1047d11cu));
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, ebx);
    wr32(sp0 - 0x40u, eax);
    t47 = rd32(ecx);
    g->esp = sp0 - 0x30u;
    t48 = cow_call_regs(g, COW_IMG(0x10056c70u), eax, t47, g->edx, 0, 4, eax, ebx, 0u, 0u);
    t49 = g->ecx;
    ecx = t49;
    esi = t48;
    goto L_1009e2fa;
L_1009e2cc: ;
    if (rd32(COW_IMG(0x1047d108u)) == 0u) goto L_1009e2e7;
    ecx = rd32(COW_IMG(0x1047d108u));
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, ebx);
    wr32(sp0 - 0x40u, eax);
    t50 = rd32(ecx);
    g->esp = sp0 - 0x30u;
    t51 = cow_call_regs(g, COW_IMG(0x10056c70u), eax, t50, g->edx, 0, 4, eax, ebx, 0u, 0u);
    t52 = g->ecx;
    ecx = t52;
    esi = t51;
    goto L_1009e2fa;
L_1009e2e7: ;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, ebx);
    wr32(sp0 - 0x40u, eax);
    g->esp = sp0 - 0x30u;
    t53 = cow_call_regs(g, COW_IMG(0x10056c70u), eax, 0u, g->edx, 0, 4, eax, ebx, 0u, 0u);
    t54 = g->ecx;
    ecx = t54;
    esi = t53;
    goto L_1009e2fa;
L_1009e2f6: ;
    esi = arg3;
    goto L_1009e2fa;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009e090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009e090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
