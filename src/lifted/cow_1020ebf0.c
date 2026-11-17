/* f_0x1020ebf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020ebf0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    g->esi = self;
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x101f7020u), self, in_edx, 3, 0u, 0u, 1u);
    t2 = g->edx;
    cow_fastcall(g, COW_IMG(0x1020e530u), self, t2, 0);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd32(self + 0x60u);
    wr32(self + 0x50u, 0x102u);
    if (t5 != 0u)
    {
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t5;
        ecx = t3;
        edx = t4;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x54a8u, in_ebp, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 == 0u)
        {
            ecx = t7;
            edx = t8;
            ebp = 0u;
        }
        else
        {
            eax = t6;
            edx = t8;
            ebp = t6;
            ebx = 0x102u;
            edi = ebp;
L_1020ec2c: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
            t10 = g->ecx;
            t11 = g->edx;
            if (ebx != 1u)
            {
                eax = t9;
                edx = t11;
                ebx = ebx - 1u;
                edi = edi + 0x54u;
                goto L_1020ec2c;
            }
            ecx = t10;
            edx = t11;
        }
        wr32(self + 0x60u, ebp);
    }
    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
    }
    else
    {
        t12 = rd32(self + 0x50u) << 3u;
        g->eax = t12;
        g->esp = sp0 - 4u;
        t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t12, in_edi, in_esi);
        t14 = g->edx;
        wr32(self + 0x64u, t13);
        eax = t13;
        edx = t14;
    }
    t15 = rd8(self + 0x5cu);
    wr32(self + 0x54u, 0u);
    if ((uint8_t)t15 == 0u)
    {
        eax = (eax & 0xffffff00u) | t15;
        goto L_1020ecc2;
    }
    eax = (eax & 0xffffff00u) | t15;
    if (rd8(self + 0x6cu) == 2u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x6cu);
        goto L_1020ecc2;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x6cu);
    if ((uint8_t)eax == 3u) goto L_1020ecc2;
    if ((int16_t)rd16(self + 0x58u) <= 0)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x58u);
        goto L_1020eca6;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x58u);
    g->ecx = (uint32_t)(int16_t)eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x1020a400u), eax, g->ecx, g->edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((int32_t)t17 >= (int32_t)((uint16_t)t16 + 2u))
    {
        eax = (uint16_t)t16 + 2u;
        edx = t18;
        goto L_1020eca6;
    }
    eax = (uint16_t)t16 + 2u;
    ecx = t17;
    edx = t18;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_cdecl(g, COW_IMG(0x1020a3e0u), 1, ecx - 2u);
    t20 = g->edx;
    t21 = cow_thiscall(g, COW_IMG(0x1020ea30u), self, 1, t19);
    g->esi = in_esi;
    return t21;
L_1020e890: ;
    g->ecx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t26 = cow_call_regs(g, COW_IMG(0x1020a400u), eax, g->ecx, g->edx, 1, 0);
    t27 = g->ecx;
    t28 = g->edx;
    if ((int32_t)(uint16_t)t26 <= 0)
    {
        eax = (uint16_t)t26;
    }
    else
    {
        eax = (uint16_t)t26;
        ecx = t27;
        edx = t28;
        loc_4 = (uint16_t)t26;
        loc_c = 0xfffffffeu;
        loc_10 = 0u;
L_1020e8bb: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t29 = cow_cdecl(g, COW_IMG(0x1020a3e0u), 1, ecx);
        t30 = g->ecx;
        t31 = g->edx;
        if (rd16(t29) != 0u)
        {
            eax = t29;
            ecx = t30;
            edx = t31;
            edi = rd16(t29);
            ebp = 0u;
            loc_8 = eax;
L_1020e8d7: ;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t32 = cow_cdecl(g, COW_IMG(0x100fc6e0u), 1, edi);
            t33 = g->ecx;
            t34 = g->edx;
            if ((uint8_t)t32 == 0u)
            {
                ecx = t33;
                edx = t34;
            }
            else
            {
                eax = t32;
                ecx = t33;
                edx = t34;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t35 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, edi);
                t36 = g->ecx;
                t37 = g->edx;
                if (t35 == 0u)
                {
                    ecx = t36;
                    edx = t37;
                }
                else
                {
                    eax = t35;
                    ecx = t36;
                    edx = t37;
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    t38 = cow_cdecl(g, COW_IMG(0x101070f0u), 1, edi);
                    t39 = g->ecx;
                    t40 = g->edx;
                    if ((t38 & 2u) == 0u)
                    {
                        ecx = t39;
                        edx = t40;
                    }
                    else
                    {
                        eax = t38;
                        ecx = t39;
                        edx = t40;
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t41 = cow_cdecl(g, COW_IMG(0x101070f0u), 1, edi);
                        t42 = g->ecx;
                        t43 = g->edx;
                        if (!(t41 & 1u))
                        {
                            ecx = t42;
                            edx = t43;
                        }
                        else
                        {
                            eax = t41;
                            edx = t43;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t44 = cow_call_regs(g, COW_IMG(0x1020f230u), eax, self, g->edx, 1, 0);
                            t45 = g->ecx;
                            t46 = g->edx;
                            if ((uint8_t)t44 == 0u)
                            {
                                eax = t44;
                                edx = t46;
                                goto L_1020e929;
                            }
                            eax = t44;
                            ecx = t45;
                            edx = t46;
                            t47 = (eax & 0xffffff00u) | rd8(self + 0x70u);
                            g->eax = t47;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t48 = cow_cdecl(g, COW_IMG(0x1020e7d0u), 2, edi, t47);
                            t49 = g->ecx;
                            t50 = g->edx;
                            if ((uint8_t)t48 == 0u)
                            {
                                ecx = t49;
                                edx = t50;
                                goto L_1020e95f;
                            }
                            eax = t48;
                            edx = t50;
L_1020e929: ;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t51 = cow_call_regs(g, COW_IMG(0x1020f250u), eax, self, g->edx, 1, 0);
                            t52 = g->ecx;
                            t53 = g->edx;
                            if ((uint8_t)t51 == 0u)
                            {
                                eax = t51;
                                edx = t53;
                                goto L_1020e946;
                            }
                            eax = t51;
                            ecx = t52;
                            edx = t53;
                            g->eax = eax;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t54 = cow_cdecl(g, COW_IMG(0x1020e7d0u), 2, edi, 0xffu);
                            t55 = g->ecx;
                            t56 = g->edx;
                            if ((uint8_t)t54 == 0u)
                            {
                                ecx = t55;
                                edx = t56;
                                goto L_1020e95f;
                            }
                            eax = t54;
                            edx = t56;
L_1020e946: ;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t57 = cow_call_regs(g, COW_IMG(0x1020f260u), eax, self, g->edx, 1, 0);
                            t58 = g->ecx;
                            t59 = g->edx;
                            if ((uint8_t)t57 == 0u)
                            {
                                ecx = t58;
                                edx = t59;
                                goto L_1020e95e;
                            }
                            eax = t57;
                            ecx = t58;
                            edx = t59;
                            g->eax = eax;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t60 = cow_cdecl(g, COW_IMG(0x1020e800u), 1, edi);
                            t61 = g->ecx;
                            t62 = g->edx;
                            if ((uint8_t)t60 == 0u)
                            {
                                ecx = t61;
                                edx = t62;
                                goto L_1020e95f;
                            }
                            ecx = t61;
                            edx = t62;
L_1020e95e: ;
                            ebp = ebp + 1u;
                        }
                    }
                }
            }
L_1020e95f: ;
            if (rd16(loc_8 + 2u) != 0u)
            {
                eax = loc_8 + 2u;
                edi = rd16(loc_8 + 2u);
                loc_8 = loc_8 + 2u;
                goto L_1020e8d7;
            }
            if (ebp != 0u)
            {
                t63 = rd32(self + 0x64u);
                t64 = rd32(self + 0x54u);
                t65 = rd32(self + 0x60u);
                wr32(t63 + t64 * 8u, loc_c);
                g->eax = loc_c;
                g->ecx = loc_10;
                g->edx = t63;
                g->esp = sp0 - 0x24u;
                t66 = cow_cdecl(g, COW_IMG(0x1020a3f0u), 1, loc_10);
                t67 = g->ecx;
                t68 = g->edx;
                g->eax = (uint8_t)t66;
                g->edx = t68;
                g->esp = sp0 - 0x28u;
                t69 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x13u, (uint8_t)t66);
                t70 = g->edx;
                t71 = t64 * 0x54u + t65;
                g->esp = sp0 - 0x20u;
                t72 = cow_fastcall(g, COW_IMG(0x101f4b20u), t71, t70, 4, 0u, 1u, t69, 0x80808080u);
                t73 = g->edx;
                t74 = cow_fastcall(g, COW_IMG(0x101f4b20u), t71, t73, 4, 1u, 9u, ebp, 0x80808080u);
                t75 = g->ecx;
                t76 = g->edx;
                t77 = t63 + t64 * 8u;
                wr32(t71 + 0x48u, t77);
                g->edx = t76;
                t78 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x14u);
                t79 = g->edx;
                wr32(t71 + 0x4cu, t78);
                t80 = (t79 & 0xffff0000u) | (uint16_t)(rd32(self + 0x54u) + 1u);
                t81 = rd32(self + 0x60u);
                t82 = rd32(self + 0x54u) + 1u;
                wr32(self + 0x54u, t82);
                g->esi = self;
                g->edi = t71;
                cow_fastcall(g, COW_IMG(0x101f7020u), self, t80, 3, t81, t80, 1u);
            }
        }
        if ((int32_t)(loc_10 + 1u) < (int32_t)loc_4)
        {
            eax = loc_4;
            ecx = loc_10 + 1u;
            edx = loc_c - 1u;
            loc_c = loc_c - 1u;
            loc_10 = loc_10 + 1u;
            goto L_1020e8bb;
        }
        eax = loc_4;
    }
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
L_1020eca6: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_call_regs(g, COW_IMG(0x1020f230u), eax, self, g->edx, 1, 0);
    t23 = g->edx;
    if ((uint8_t)t22 != 0u)
    {
        eax = t22;
        edx = t23;
    }
    else
    {
        eax = t22;
        edx = t23;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t24 = cow_thiscall(g, COW_IMG(0x1020e570u), self, 0);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
    goto L_1020e890;
L_1020ecc2: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t83 = cow_call_regs(g, COW_IMG(0x1020f230u), eax, self, g->edx, 1, 0);
    t84 = g->ecx;
    t85 = g->edx;
    if ((uint8_t)t83 != 0u)
    {
        eax = t83;
        ecx = t84;
        edx = t85;
    }
    else
    {
        eax = t83;
        edx = t85;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t86 = cow_thiscall(g, COW_IMG(0x1020e570u), self, 0);
        t87 = g->ecx;
        t88 = g->edx;
        eax = t86;
        ecx = t87;
        edx = t88;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t89 = cow_call_regs(g, COW_IMG(0x1020a400u), eax, g->ecx, g->edx, 1, 0);
    t90 = g->ecx;
    t91 = g->edx;
    if ((int32_t)(uint16_t)t89 <= 0)
    {
        eax = t89;
        goto L_1020ecf9;
    }
    eax = t89;
    ecx = t90;
    edx = t91;
    ebx = (uint16_t)t89;
    edi = 0u;
L_1020ece3: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t92 = cow_cdecl(g, COW_IMG(0x1020a3e0u), 1, edi);
    t93 = g->edx;
    g->edx = t93;
    t94 = cow_thiscall(g, COW_IMG(0x1020ea30u), self, 1, t92);
    t95 = g->ecx;
    t96 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)ebx)
    {
        eax = t94;
        ecx = t95;
        edx = t96;
        edi = edi + 1u;
        goto L_1020ece3;
    }
    eax = t94;
L_1020ecf9: ;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020ebf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020ebf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
