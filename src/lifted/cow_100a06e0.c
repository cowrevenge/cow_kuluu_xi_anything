/* f_0x100a06e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a06e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    if (rd16(rd32(sp0 + 0xcu) + 0x10u) < 0x61u)
    {
        esi = rd32(sp0 + 0xcu);
        loc_24 = rd32(sp0 - 0x24u) & 0xff000000u;
        goto L_100a0709;
    }
    return in_eax & 0xffffff00u;
L_100a0709: ;
    t1 = (in_ebp & 0xffff0000u) | rd16(esi + 0xcu);
    wr32(sp0 - 0x34u, (uint16_t)t1);
    g->ecx = (uint16_t)t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, (uint16_t)t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        ebp = t1;
        goto L_100a0729;
    }
    eax = t2;
    edx = t4;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax;
L_100a0729: ;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_100a073f;
    }
    eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a073f: ;
    t5 = rd32(eax + 0x74u);
    wr32(sp0 - 8u, t5);
    if (rd32(eax + 0x78u) == rd32(esi + 4u))
    {
        eax = rd32(eax + 0x78u);
        goto L_100a0759;
    }
    eax = rd32(eax + 0x78u);
    edx = rd32(esi + 4u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a0759: ;
    if (rd32(esi + 8u) == 0u) goto L_100a07ac;
    edx = rd32(esi + 8u);
    t6 = rd16(esi + 0xeu);
    wr32(sp0 - 0x34u, t6);
    g->ecx = t6;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t7 = cow_call_regs(g, COW_IMG(0x10086fc0u), eax, g->ecx, g->edx, 1, 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        ecx = t8;
        edx = t9;
        goto L_100a077a;
    }
    eax = t7;
    edx = t9;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax;
L_100a077a: ;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_100a078e;
    }
    eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a078e: ;
    t10 = rd32(eax + 0x74u);
    wr32(sp0 - 8u, t10);
    if (rd32(eax + 0x78u) == edx)
    {
        ecx = rd32(eax + 0x78u);
        goto L_100a07a5;
    }
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a07a5: ;
    edi = 0u;
    loc_24 = (rd32(sp0 - 0x24u) & 0xffffff00u) | 0xfu;
L_100a07c8: ;
    wr16(COW_IMG(0x10482f40u), (uint16_t)ebp);
    t11 = rd16(esi + 0xeu);
    wr16(COW_IMG(0x104855aau), (uint16_t)t11);
    t12 = edi + ((edx & 0xffff0000u) | (uint16_t)(rd16(esi + 0x10u) * 2u));
    wr32(sp0 - 0x34u, t12);
    wr32(sp0 - 0x38u, 4u);
    g->esp = sp0 - 0x30u;
    t13 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, t12, 1, 2, 4u, t12);
    t14 = g->edx;
    wr32(sp0 - 8u, t13);
    if (t13 != 0u)
    {
        eax = t13;
        edx = t14;
        loc_8 = t13;
        goto L_100a07ff;
    }
    eax = t13;
    edx = t14;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a07ac: ;
    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    edi = 1u;
    loc_24 = (rd32(sp0 - 0x24u) & 0xffffff00u) | (uint8_t)(((eax & 0xffffff00u) | ecx != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au))) * 8u + 7u);
    goto L_100a07c8;
L_100a07ff: ;
    wr32(sp0 - 0x34u, 2u);
    t15 = (eax & 0xffff0000u) | rd16(esi + 0x10u);
    wr32(sp0 - 0x38u, t15);
    t16 = rd32(esi + 4u);
    wr32(sp0 - 0x3cu, t16);
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t17 = cow_thiscall_cdecl(g, COW_IMG(0x100a1770u), t16, 1, t16);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x3cu, t17);
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0x30u;
    t20 = cow_call_regs(g, COW_IMG(0x100a1a00u), t17, g->ecx, g->edx, 1, 3, t17, rd32(sp0 - 0x38u), 2u);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 != 0u)
    {
        eax = t20;
        edx = t22;
        ebx = in_ebx;
        goto L_100a0afb;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    wr32(sp0 - 0x34u, in_ebx);
    t23 = (edx & 0xffff0000u) | rd16(esi + 0x14u);
    wr32(sp0 - 0x38u, t23);
    t24 = (eax & 0xffff0000u) | rd16(esi + 0x12u);
    wr32(sp0 - 0x3cu, t24);
    t25 = (ecx & 0xffff0000u) | rd16(esi + 0x10u);
    wr32(sp0 - 0x40u, t25);
    g->esp = sp0 - 0x38u;
    t26 = cow_cdecl(g, COW_IMG(0x100a0b30u), 2, t25, t24);
    wr32(sp0 - 0x18u, t26);
    t27 = (ebp & 0xffff0000u) | rd16(esi + 0xcu);
    if (rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)t27 * 4u) + 0x1bcu) == 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t27 * 4u);
        edx = (t27 & 0xff00u) | rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)t27 * 4u) + 0xeeu);
        ebp = t27;
        edi = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)t27 * 4u) + 0x170u);
        loc_18 = t26;
        goto L_100a087e;
    }
    eax = (t26 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)t27 * 4u) + 0x1bcu);
    ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t27 * 4u);
    edx = (t27 & 0xff00u) | rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)t27 * 4u) + 0xeeu);
    ebp = t27;
    edi = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)t27 * 4u) + 0x170u);
    loc_18 = t26;
    if ((uint8_t)eax == 0x15u) goto L_100a087e;
    if ((uint8_t)eax != 0x18u) goto L_100a0a9b;
L_100a087e: ;
    t28 = rd32(ecx + 0x128u);
    wr32(sp0 + 0xcu, t28);
    if (!(t28 >> 2u & 1u))
    {
        eax = t28;
        ebx = t28 >> 2u;
        if (edi == 0u) goto L_100a08bb;
        if (edi == 4u) goto L_100a08bb;
        if (edi == 0x2fu) goto L_100a08bb;
        wr32(sp0 - 0x38u, edi);
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t29 = cow_thiscall(g, COW_IMG(0x10095790u), ecx, 1, edi);
        t30 = g->ecx;
        t31 = g->edx;
        if ((uint8_t)t29 != 0u)
        {
            ecx = t30;
            edx = t31;
            goto L_100a08b7;
        }
        ecx = t30;
        edx = t31;
        if (edi != 0x30u) goto L_100a0a9b;
L_100a08b7: ;
        eax = rd32(sp0 + 0xcu);
L_100a08bb: ;
        if ((uint8_t)edx == 0u) goto L_100a08d2;
        if ((uint8_t)edx == 1u) goto L_100a08d2;
        if ((uint8_t)edx == 6u) goto L_100a08d2;
        if ((uint8_t)edx != 7u) goto L_100a0a9b;
L_100a08d2: ;
        t32 = rd32(ecx + 0x120u);
        if (!(t32 >> 9u & 1u))
        {
            ecx = t32;
        }
        else
        {
            ecx = t32;
            edx = t32 >> 9u;
            if (!(eax >> 0x1cu & 1u))
            {
                eax = eax >> 0x1cu;
                if (rd8(esi + 0x16u) != 1u)
                {
                    if (ecx >> 7u & 1u)
                    {
                        ecx = ecx >> 7u;
                    }
                    else
                    {
                        ecx = ecx >> 7u;
                        if (loc_18 != 0xffffffffu)
                        {
                            wr16(sp0 + 0xcu, rd16(esi + 0xeu));
                            if (rd32(esi + 8u) != 0u)
                            {
                                eax = rd32(esi + 8u);
                            }
                            else
                            {
                                eax = rd32(esi + 8u);
                                wr32(sp0 + 0xcu, ebp);
                            }
                            wr32(sp0 - 0x38u, 0u);
                            t33 = (ecx & 0xffff0000u) | rd16(esi + 0x14u);
                            wr32(sp0 - 0x3cu, t33);
                            t34 = (edx & 0xffff0000u) | rd16(esi + 0x12u);
                            wr32(sp0 - 0x40u, t34);
                            t35 = (eax & 0xffff0000u) | rd16(esi + 0x10u);
                            wr32(sp0 - 0x44u, t35);
                            t36 = rd32(sp0 + 0xcu);
                            wr32(sp0 - 0x48u, t36);
                            wr32(sp0 - 0x4cu, ebp);
                            g->ebx = ebx;
                            g->ecx = t36;
                            g->edx = t34;
                            g->esp = sp0 - 0x34u;
                            t37 = cow_call_regs(g, COW_IMG(0x100a0b90u), t35, g->ecx, g->edx, 1, 6, ebp, t36, t35, t34, t33, 0u);
                            t38 = g->ecx;
                            t39 = g->edx;
                            wr32(sp0 - 0x18u, t37);
                            wr32(sp0 - 0x50u, 9u);
                            t40 = rd16(esi + 0x12u);
                            wr32(sp0 - 0x10u, t40);
                            g->eax = t40;
                            g->ecx = t38;
                            g->edx = t39;
                            g->esp = sp0 - 0x4cu;
                            t41 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 9u);
                            t42 = g->ecx;
                            t43 = g->edx;
                            if ((uint8_t)t41 != 0u)
                            {
                                ecx = t42;
                            }
                            else
                            {
                                eax = t41;
                                ecx = t42;
                                edx = t43;
                                t44 = (eax & 0xffff0000u) | rd16(esi + 0x10u);
                                wr32(sp0 - 0x38u, t44);
                                g->ecx = ecx;
                                g->esp = sp0 - 0x34u;
                                t45 = cow_cdecl(g, COW_IMG(0x100a0b10u), 1, t44);
                                t46 = g->ecx;
                                if (t45 == 0x7au)
                                {
                                    ecx = t46;
                                }
                                else
                                {
                                    eax = t45;
                                    ecx = t46;
                                    ebx = (uint16_t)t44;
                                    if (eax != 0x7cu)
                                    {
                                        if (ebx != 0xffffffffu)
                                        {
                                            wr32(sp0 - 0x1cu, esi + 0x18u);
                                            wr32(sp0 - 0x20u, esi + 0x2cu);
                                            wr32(sp0 - 0x14u, 5u);
                                            loc_1c = esi + 0x18u;
                                            loc_20 = esi + 0x2cu;
                                            loc_14 = 5u;
L_100a09a8: ;
                                            if (rd32(loc_1c) != 0u)
                                            {
                                                ebp = rd32(loc_1c);
                                                if (rd32(COW_IMG(0x10480af0u) + rd16(loc_20) * 4u) != 0u)
                                                {
                                                    ecx = rd32(COW_IMG(0x10480af0u) + rd16(loc_20) * 4u);
                                                    if (rd32(ecx + 0xa0u) != 0u)
                                                    {
                                                        edi = rd32(ecx + 0xa0u);
                                                        t47 = rd32(ecx + 0x120u);
                                                        if (t47 >> 9u & 1u)
                                                        {
                                                            eax = t47;
                                                            if (!(rd32(ecx + 0x128u) >> 2u & 1u))
                                                            {
                                                                if (!(rd32(ecx + 0x124u) >> 0xcu & 1u))
                                                                {
                                                                    if (!(eax >> 7u & 1u))
                                                                    {
                                                                        edx = eax >> 7u;
                                                                        if (!(eax >> 8u & 1u))
                                                                        {
                                                                            if (rd32(ecx + 0x78u) == ebp)
                                                                            {
                                                                                if (rd32(ecx + 0x12cu) >> 0x16u & 1u)
                                                                                {
                                                                                    wr32(sp0 - 0x38u, 0xffu);
                                                                                    g->esp = sp0 - 0x34u;
                                                                                    t48 = cow_thiscall(g, COW_IMG(0x10095820u), ecx, 1, 0xffu);
                                                                                    t49 = g->ecx;
                                                                                    if ((uint8_t)t48 == 0u)
                                                                                    {
                                                                                        ecx = t49;
                                                                                        t50 = rd32(ecx + 0x16cu);
                                                                                        wr32(sp0 - 0x38u, t50);
                                                                                        g->esp = sp0 - 0x34u;
                                                                                        t51 = cow_thiscall(g, COW_IMG(0x10095820u), ecx, 1, t50);
                                                                                        t52 = g->ecx;
                                                                                        if ((uint8_t)t51 == 0u)
                                                                                        {
                                                                                            ecx = t52;
                                                                                            if (rd32(edi + 0x8c4u) == 0u)
                                                                                            {
                                                                                                eax = rd32(edi + 0x8c4u);
                                                                                                wr32(sp0 - 0x38u, 0u);
                                                                                                t53 = (eax & 0xffff0000u) | rd16(esi + 0x14u);
                                                                                                wr32(sp0 - 0x3cu, t53);
                                                                                                t54 = rd32(sp0 - 0x10u);
                                                                                                wr32(sp0 - 0x40u, t54);
                                                                                                wr32(sp0 - 0x44u, ebx);
                                                                                                t55 = rd32(sp0 + 0xcu);
                                                                                                wr32(sp0 - 0x48u, t55);
                                                                                                t56 = (ecx & 0xffff0000u) | rd16(ecx + 0x74u);
                                                                                                wr32(sp0 - 0x4cu, t56);
                                                                                                g->ebx = ebx;
                                                                                                g->esp = sp0 - 0x34u;
                                                                                                cow_call_regs(g, COW_IMG(0x100a0b90u), t55, g->ecx, g->edx, 1, 6, t56, t55, ebx, t54, t53, 0u);
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
                                                    }
                                                }
                                            }
                                            wr32(sp0 - 0x20u, loc_20 + 2u);
                                            wr32(sp0 - 0x1cu, loc_1c + 4u);
                                            wr32(sp0 - 0x14u, loc_14 - 1u);
                                            if (loc_14 != 1u)
                                            {
                                                loc_1c = loc_1c + 4u;
                                                loc_20 = loc_20 + 2u;
                                                loc_14 = loc_14 - 1u;
                                                goto L_100a09a8;
                                            }
                                            ecx = loc_1c + 4u;
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
L_100a0a9b: ;
    wr32(sp0 - 0x38u, sp0 - 0xcu);
    g->ecx = ecx;
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x34u;
    t57 = cow_cdecl(g, COW_IMG(0x100e47a0u), 1, sp0 - 0xcu);
    t58 = g->ecx;
    t59 = g->edx;
    if ((uint8_t)t57 != 1u)
    {
        eax = t57;
        edx = t59;
        ebx = rd32(sp0 - 0x34u);
        goto L_100a0afb;
    }
    eax = t57;
    ecx = t58;
    edx = t59;
    ebx = rd32(sp0 - 0x34u);
    if (rd32(sp0 - 0x18u) != 0xffffffffu) goto L_100a0ac7;
    wr32(sp0 - 0x34u, 0x79u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t60 = cow_cdecl(g, COW_IMG(0x100767f0u), 1, 0x79u);
    t61 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = t61;
    return (t60 & 0xffffff00u) | 1u;
L_100a0ac7: ;
    if (rd8(esi + 0x16u) == 1u) goto L_100a0ad2;
    eax = (eax & 0xffffff00u) | rd8(esi + 0x16u);
    if ((uint8_t)eax != 0u) goto L_100a0afb;
L_100a0ad2: ;
    if ((rd8(rd32(sp0 - 0xcu) + 4u) & 8u) != 0u)
    {
        eax = rd32(sp0 - 0xcu);
    }
    else
    {
        eax = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        wr32(sp0 - 0x44u, 0u);
        t62 = rd32(sp0 - 8u);
        wr32(sp0 - 0x48u, t62);
        wr32(sp0 - 0x4cu, COW_IMG(0x103d3c84u));
        g->esp = sp0 - 0x30u;
        t63 = cow_call_regs(g, COW_IMG(0x100ad660u), eax, sp0 - 0x24u, t62, 1, 7, COW_IMG(0x103d3c84u), t62, 0u, sp0 - 0x24u, 0u, 0u, 0u);
        t64 = g->edx;
        eax = t63;
        edx = t64;
    }
L_100a0afb: ;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a06e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a06e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
