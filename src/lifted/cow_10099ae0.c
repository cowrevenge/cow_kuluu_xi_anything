/* f_0x10099ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_10099ae0(Guest* g)
{
    double d164;
    double d50;
    double d51;
    double d60;
    double d61;
    double d63;
    double d64;
    double d68;
    double d72;
    double d75;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t165;
    uint32_t t166;
    uint32_t t167;
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
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t62;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t73;
    uint32_t t74;
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
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x34u, in_esi);
    t1 = rd16(rd32(sp0 + 0xcu) + 8u);
    wr32(sp0 - 0x38u, t1);
    g->edx = in_edx;
    t2 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x34u;
    t3 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t1);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        edx = t4;
        esi = t2;
        goto L_10099b00;
    }
    eax = t3;
    return eax;
L_10099b00: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd16(esi + 8u);
        wr32(sp0 - 0x38u, 0x2acu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t5 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x2acu);
        t6 = g->edx;
        if (t5 == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = t5;
            edx = t6;
            g->esp = sp0 - 0x34u;
            t7 = cow_thiscall(g, COW_IMG(0x1008a120u), eax, 0);
            eax = t7;
        }
        wr32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u, eax);
    }
    t8 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x74u);
    wr32(sp0 - 0x28u, t8);
    if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x78u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x78u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        loc_28 = t8;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x78u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        edx = t8;
        loc_28 = t8;
        if (eax != rd32(esi + 4u))
        {
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            cow_call_regs(g, COW_IMG(0x1008ee30u), eax, ecx, g->edx, 1, 0);
            t9 = g->edx;
            g->eax = rd16(esi + 8u);
            t10 = rd16(esi + 8u);
            t11 = cow_fastcall(g, COW_IMG(0x10092900u), rd32(COW_IMG(0x10480af0u) + t10 * 4u), t9, 0);
            t12 = g->edx;
            wr32(sp0 - 0x38u, 0u);
            t13 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
            t14 = cow_thiscall(g, COW_IMG(0x1008a350u), t13, 1, 0u);
            t15 = g->ecx;
            t16 = rd32(esi + 4u);
            wr32(sp0 - 0x38u, t16);
            t17 = (t14 & 0xffff0000u) | rd16(esi + 8u);
            wr32(sp0 - 0x3cu, t17);
            g->eax = t17;
            g->ecx = t15;
            g->esp = sp0 - 0x20u;
            t18 = cow_cdecl(g, COW_IMG(0x10099a40u), 7, t17, t16, in_esi, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
            t19 = g->ecx;
            eax = t18;
            ecx = t19;
        }
    }
    if ((rd8(esi + 0xau) & 0x1fu) == 0x1fu)
    {
        ecx = (ecx & 0xffffff00u) | (rd8(esi + 0xau) & 0x1fu);
        t20 = rd32(esi + 4u);
        wr32(sp0 - 0x38u, t20);
        t21 = (eax & 0xffff0000u) | rd16(esi + 8u);
        wr32(sp0 - 0x3cu, t21);
        g->eax = t21;
        g->esp = sp0 - 0x20u;
        t22 = cow_cdecl(g, COW_IMG(0x10099a40u), 7, t21, t20, in_esi, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), loc_28, rd32(sp0 - 0x24u));
        wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u, rd8(esi + 0xau));
        wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x1feu, 0u);
    }
    t23 = rd16(esi + 8u);
    t24 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    t25 = rd32(esi + 4u);
    wr32(t24 + 0x74u, t23);
    wr32(t24 + 0x78u, t25);
    t26 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xffff00ffu) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) >> 8u & 0xefu) << 8u;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t26);
    if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) >> 5u & 1u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd16(esi + 8u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd16(esi + 8u);
        if (rd16(eax + 0x210u) == 0u)
        {
            wr8(eax + 0xeeu, 0u);
        }
    }
    if ((rd8(esi + 0xau) & 0x20u) == 0u) goto L_10099cba;
    wr16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x1fau, 0u);
    t27 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xffff00ffu) | (uint8_t)(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) >> 8u | 0x10u) << 8u;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t27);
    wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u, 0u);
    if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) >> 8u & 1u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        goto L_1009aac1;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    t28 = (rd32(eax + 0x120u) & 0xffff00ffu) | (uint8_t)(rd32(eax + 0x120u) >> 8u | 0x40u) << 8u;
    wr32(eax + 0x120u, t28);
    return (eax & 0xffffff00u) | 1u;
L_10099cba: ;
    t29 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    wr16(t29 + 0x1fau, rd16(esi + 0x3cu));
    if (rd16(esi + 0x30u) == rd16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x166u))
    {
        edx = rd16(esi + 8u);
    }
    else
    {
        eax = (t29 & 0xffff0000u) | rd16(esi + 0x30u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        edx = rd16(esi + 8u);
        wr32(sp0 - 0x38u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        cow_call_regs(g, COW_IMG(0x1008cce0u), eax, ecx, g->edx, 0, 1, eax);
        t30 = g->edx;
        edx = t30;
    }
    wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x294u, rd8(esi + 0x32u));
    t31 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ ((rd8(esi + 0x33u) << 0x19u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x2000000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t31);
    t32 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ ((rd8(esi + 0x33u) << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x4000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t32);
    t33 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu) ^ ((rd8(esi + 0x33u) * 2u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu)) & 0x80u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu, t33);
    t34 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) & 0xfffffff7u;
    t35 = rd16(esi + 8u);
    wr32(rd32(COW_IMG(0x10480af0u) + t35 * 4u) + 0x128u, t34);
    if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u) != 0u)
    {
        eax = (rd16(esi + 8u) & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        edx = t35;
        goto L_10099e1a;
    }
    eax = (rd16(esi + 8u) & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u);
    ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    edx = t35;
    if ((rd8(esi + 0xau) & 0x1fu) == 0x1fu)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0xau);
        edx = (edx & 0xffffff00u) | (rd8(esi + 0xau) & 0x1fu);
        goto L_10099e14;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 0xau);
    edx = (edx & 0xffffff00u) | (rd8(esi + 0xau) & 0x1fu);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x1008ee30u), eax, ecx, g->edx, 1, 0);
    t36 = g->edx;
    g->eax = rd16(esi + 8u);
    t37 = rd16(esi + 8u);
    t38 = cow_fastcall(g, COW_IMG(0x10092900u), rd32(COW_IMG(0x10480af0u) + t37 * 4u), t36, 0);
    t39 = g->edx;
    wr32(sp0 - 0x38u, 0u);
    cow_thiscall(g, COW_IMG(0x1008a350u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), 1, 0u);
    t40 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) & 0xffff00ffu) | (uint8_t)(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) >> 8u | 0x80u) << 8u;
    t41 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    wr32(t41 + 0x12cu, t40);
    return t41 & 0xffffff00u;
L_10099e14: ;
    wr8(ecx + 0x145u, (uint8_t)eax);
L_10099e1a: ;
    if ((rd8(esi + 0xau) & 8u) != 0u)
    {
        t42 = rd16(esi) >> 9u;
        wr32(sp0 - 0x38u, t42);
        wr32(sp0 - 0x3cu, 0x5cu);
        wr32(sp0 - 0x40u, esi + 0x5au);
        wr32(sp0 - 0x44u, 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x100dde40u), 6, sp0 - 0x10u, 0x10u, esi + 0x5au, 0x5cu, t42, in_esi);
        t43 = g->edx;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        g->edx = t43;
        t44 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        g->esp = sp0 - 0x34u;
        t45 = cow_thiscall(g, COW_IMG(0x10093430u), t44, 1, sp0 - 0x10u);
        t46 = g->ecx;
        t47 = g->edx;
        eax = t45;
        ecx = t46;
        edx = t47;
    }
    if (rd8(esi + 0xau) & 1u)
    {
        t48 = rd32(esi + 0x14u);
        wr32(sp0 - 0x18u, t48);
        t49 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        d50 = (double)rdf32(esi + 0xcu);
        d51 = (double)rdf32(esi + 0x10u);
        wr32(t49 + 0x4cu, t48);
        wrf32(t49 + 0x44u, (float)d50);
        wrf32(t49 + 0x48u, (float)d51);
        if (rd8(COW_IMG(0x10489900u)) == 0u) goto L_10099ebf;
        eax = (t49 + 0x44u & 0xffffff00u) | rd8(COW_IMG(0x10489900u));
        ecx = t48;
        edx = t48;
        g->eax = eax;
        g->esp = sp0 - 0x34u;
        t52 = cow_stdcall(g, COW_IMG(0x10087060u), 0);
        if ((uint8_t)t52 == 0u) goto L_10099ebf;
        t53 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u);
        if (t53 >> 7u & 1u) goto L_10099ebf;
        eax = t53;
        if (!(eax >> 8u & 1u)) goto L_10099f03;
L_10099ebf: ;
        t54 = rd32(esi + 0x14u);
        t55 = rd32(esi + 0x10u);
        t56 = rd32(esi + 0xcu);
        wr32(sp0 + 0xcu, t54);
        wr32(sp0 - 0x30u, t55);
        wr32(sp0 - 0x2cu, t56);
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, 0x42480000u);
        t57 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x40u, t57);
        wr32(sp0 - 0x44u, t55);
        wr32(sp0 - 0x48u, t56);
        g->eax = t57;
        g->esp = sp0 - 0x34u;
        t58 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, t56, t55, t57, 0x42480000u, sp0 - 0x28u);
        if ((uint8_t)t58 == 1u)
        {
            t59 = rd32(sp0 - 0x28u);
            wr32(esi + 0x10u, t59);
        }
L_10099f03: ;
        d60 = (double)(float)(double)rdf32(esi + 0x14u);
        wrf32(sp0 - 0x18u, (float)d60);
        d61 = (double)rdf32(esi + 0xcu);
        t62 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        d63 = (double)rdf32(esi + 0x14u);
        d64 = (double)rdf32(esi + 0x10u);
        wrf32(t62 + 0x24u, (float)d61);
        wrf32(t62 + 0x28u, (float)d64);
        wrf32(t62 + 0x2cu, (float)d63);
        t65 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        t66 = rd16(esi + 8u);
        wrf32(t65 + 4u, (float)d61);
        wrf32(t65 + 8u, (float)d64);
        wr32(t65 + 0xcu, cow_f2bits(d60));
        t67 = (t66 & 0xffffff00u) | rd8(esi + 0xbu);
        wr32(sp0 - 0x38u, t67);
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x100dd990u), 1, t67);
        d68 = cow_take_float(g);
        t69 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        wr32(t69 + 0x34u, 0u);
        wrf32(t69 + 0x38u, (float)d68);
        wr32(t69 + 0x3cu, 0u);
        t70 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        wr32(t70 + 0x14u, 0u);
        wrf32(t70 + 0x18u, (float)d68);
        wr32(t70 + 0x1cu, 0u);
        t71 = rd8(esi + 0x1cu);
        wr32(sp0 + 0xcu, t71);
        d72 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a378u)));
        wrf32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x15cu, (float)d72);
        t73 = rd8(esi + 0x1du);
        t74 = rd16(esi + 8u);
        wr32(sp0 + 0xcu, t73);
        d75 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a378u)));
        wrf32(rd32(COW_IMG(0x10480af0u) + t74 * 4u) + 0x9cu, (float)d75);
        t76 = rd16(esi + 0x18u) & 0x1fffu;
        wr32(sp0 - 0x38u, t76);
        cow_thiscall(g, COW_IMG(0x1008cd20u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), 1, t76);
        t77 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x18u) >> 0xdu << 0x13u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x80000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t77);
        t78 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x18u) >> 0xeu << 0x12u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x40000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t78);
        t79 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x18u) >> 0xfu << 0x14u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x100000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t79);
        t80 = rd16(esi + 8u);
        t81 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        t82 = rd32(esi + 0x18u);
        wr16(t81 + 0x1f8u, t82 >> 0x11u);
        eax = t80;
        ecx = t81;
        edx = t82 >> 0x11u;
    }
    if ((rd8(esi + 0xau) & 2u) != 0u)
    {
        t83 = rd32(esi + 0x2cu);
        t84 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        t85 = rd16(esi + 8u);
        wr32(t84 + 0x188u, t83);
        eax = t84;
        ecx = t83;
        edx = t85;
    }
    if ((rd8(esi + 0xau) & 0x10u) != 0u)
    {
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, esi + 0x48u);
        t86 = (eax & 0xffff0000u) | rd16(esi + 8u);
        wr32(sp0 - 0x40u, t86);
        g->edx = esi + 0x48u;
        g->esp = sp0 - 0x24u;
        cow_thiscall_cdecl(g, COW_IMG(0x1009afe0u), ecx, 7, t86, esi + 0x48u, 0u, in_esi, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), loc_28);
        t87 = g->edx;
        edx = t87;
    }
    if ((rd8(esi + 0xau) & 4u) != 0u)
    {
        t88 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd8(esi + 0x20u) << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x2000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t88);
        t89 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x20u) >> 1u << 0xeu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x4000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t89);
        t90 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x20u) >> 2u << 0x12u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x40000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t90);
        if (rd16(esi + 0x3eu) == 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
            ecx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) & 0xfffffffbu;
        }
        else
        {
            t91 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd8(esi + 0x2au) * 2u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0xeu);
            wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t91);
            eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
            ecx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) | 4u;
        }
        wr32(eax + 0x130u, ecx);
        t92 = rd32(esi + 0x20u) >> 5u & 7u;
        wr32(sp0 - 0x38u, t92);
        g->edx = rd16(esi + 8u);
        t93 = rd16(esi + 8u);
        g->esp = sp0 - 0x34u;
        cow_thiscall(g, COW_IMG(0x10097a20u), rd32(COW_IMG(0x10480af0u) + t93 * 4u), 1, t92);
        t94 = g->edx;
        wr32(sp0 - 0x38u, esi + 0x34u);
        cow_thiscall(g, COW_IMG(0x1009ab40u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), 1, esi + 0x34u);
        t95 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x20u) >> 8u << 0x16u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x400000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t95);
        t96 = rd16(esi + 8u);
        wr8(sp0 + 0xcu, rd32(esi + 0x20u) >> 9u & 3u);
        t97 = (rd32(rd32(COW_IMG(0x10480af0u) + t96 * 4u) + 0x120u) & 0x3fffffffu) ^ (uint8_t)rd32(sp0 + 0xcu) << 0x1eu;
        wr32(rd32(COW_IMG(0x10480af0u) + t96 * 4u) + 0x120u, t97);
        t98 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x20u) >> 0xbu << 0x14u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x100000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t98);
        t99 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x24u) >> 0x1fu << 0x15u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x200000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t99);
        t100 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x20u) >> 0xcu << 0x17u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x800000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t100);
        t101 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x20u) >> 0xdu << 0x18u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x1000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t101);
        t102 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x20u) >> 0xeu << 0x16u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x400000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t102);
        t103 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ (((uint32_t)(int8_t)(rd32(esi + 0x20u) >> 0xfu) << 0x19u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x2000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t103);
        t104 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd8(esi + 0x22u) << 0x1au ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x4000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t104);
        t105 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x20u) >> 0x11u << 0x1bu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x8000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t105);
        t106 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x20u) >> 0x12u << 0x1cu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x10000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t106);
        t107 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x140u) ^ ((rd32(esi + 0x28u) >> 1u << 3u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x140u)) & 8u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x140u, t107);
        t108 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ (((uint32_t)(int8_t)(rd32(esi + 0x20u) >> 0x13u) << 4u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x10u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t108);
        t109 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ (((uint32_t)(int8_t)(rd32(esi + 0x20u) >> 0x14u) << 5u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x20u);
        t110 = rd32(esi + 0x20u);
        t111 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t109);
        wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xecu, rd8(esi + 0x1eu));
        if (!(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) >> 1u & 1u))
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
            t112 = rd8(esi + 0x1fu);
            wr32(eax + 0x16cu, t112);
        }
        t113 = rd8(esi + 0x24u) + rd8(esi + 0x25u) * 0x100u + rd8(esi + 0x26u) * 0x10000u;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x1d4u, t113);
        t114 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd32(esi + 0x20u) >> 0x1bu << 0xeu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x4000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t114);
        t115 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd8(esi + 0x23u) << 0xbu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x3800u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t115);
        t116 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd32(esi + 0x20u) >> 0x1cu << 0x10u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x10000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t116);
        t117 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd32(esi + 0x20u) >> 0x1du << 6u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x40u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t117);
        t118 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ (((uint32_t)(int8_t)(rd32(esi + 0x28u) >> 0x15u) << 8u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x100u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t118);
        t119 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x20u) >> 0x1eu << 2u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 4u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t119);
        t120 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ ((rd8(esi + 0x27u) << 8u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x100u);
        t121 = rd8(esi + 0x27u);
        t122 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t120);
        wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x1ffu, rd8(esi + 0x29u));
        t123 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) & 0xffff00ffu) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) >> 8u & 0xfbu) << 8u;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t123);
        t124 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd32(esi + 0x20u) >> 0x1fu << 9u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x200u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t124);
        t125 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x24u) >> 0x19u << 0xau ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x400u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t125);
        t126 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x24u) >> 0x1bu << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x2000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t126);
        t127 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x24u) >> 0x1cu << 0x12u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x40000u);
        t128 = rd32(esi + 0x24u);
        t129 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t127);
        t130 = rd32(esi + 0x24u) >> 0x1du & 1u;
        wr32(sp0 - 0x38u, t130);
        t131 = rd16(esi + 8u);
        wr32(sp0 - 0x3cu, t131);
        g->eax = t131;
        g->esp = sp0 - 0x34u;
        t132 = cow_call_regs(g, COW_IMG(0x1008a9e0u), g->eax, g->ecx, t130, 1, 2, t131, t130);
        t133 = rd32(esi + 0x24u) >> 0x1eu & 1u;
        wr32(sp0 - 0x40u, t133);
        t134 = rd16(esi + 8u);
        wr32(sp0 - 0x44u, t134);
        g->esp = sp0 - 0x3cu;
        cow_call_regs(g, COW_IMG(0x1008aa30u), g->eax, g->ecx, t134, 1, 2, t134, t133);
        t135 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x28u) >> 2u << 0x17u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x800000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t135);
        t136 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x28u) >> 3u << 0x18u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x1000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t136);
        t137 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x28u) >> 4u << 0x19u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x2000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t137);
        t138 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x28u) >> 5u << 0x1bu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x8000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t138);
        t139 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ (((uint32_t)(int8_t)(rd32(esi + 0x28u) >> 6u) << 0x1eu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x40000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t139);
        t140 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) & 0x7fffffffu) ^ (uint32_t)(int8_t)(rd32(esi + 0x28u) >> 0x19u & 1u) << 0x1fu;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t140);
        t141 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ (((uint32_t)(int8_t)rd8(esi + 0x28u) << 0x16u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x400000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t141);
        t142 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) & 0xfffffffeu;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t142);
        if ((rd32(esi + 0x20u) & 8u) == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
        }
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x18cu, eax);
        t143 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ ((rd8(esi + 0x2bu) << 0xcu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x1000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t143);
        t144 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ ((rd32(esi + 0x28u) >> 0x17u << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x2000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t144);
        t145 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) & 0xfffbffffu;
        t146 = rd16(esi + 8u);
        wr32(rd32(COW_IMG(0x10480af0u) + t146 * 4u) + 0x130u, t145);
        t147 = (t145 & 0xffff0000u) | rd16(esi + 0x3eu);
        wr32(sp0 - 0x38u, t147);
        g->edx = t146;
        g->esp = sp0 - 0x34u;
        cow_call_regs(g, COW_IMG(0x1009acb0u), t147, rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), g->edx, 0, 1, t147);
        t148 = g->edx;
        t149 = (t148 & 0xffffff00u) | rd8(esi + 0x40u);
        wr32(sp0 - 0x38u, t149);
        wr32(sp0 - 0x3cu, 0u);
        g->eax = rd16(esi + 8u);
        t150 = rd16(esi + 8u);
        t151 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        t152 = cow_fastcall(g, COW_IMG(0x1009ace0u), t151, t149, 2, 0u, t149);
        t153 = g->ecx;
        t154 = (t153 & 0xffffff00u) | rd8(esi + 0x41u);
        wr32(sp0 - 0x38u, t154);
        wr32(sp0 - 0x3cu, 1u);
        cow_fastcall(g, COW_IMG(0x1009ace0u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), rd16(esi + 8u), 2, 1u, t154);
        t155 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu) ^ ((rd8(esi + 0x33u) << 2u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu)) & 0x30u);
        t156 = rd8(esi + 0x33u);
        t157 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu, t155);
        t158 = (rd8(esi + 0x33u) >> 2u & 0xcu) ^ (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu) & 0xfffffff3u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu, t158);
        t159 = rd8(esi + 0x42u);
        t160 = t159 >> 6u & 1u;
        wr32(sp0 - 0x38u, t160);
        t161 = t159 >> 4u & 3u;
        wr32(sp0 - 0x3cu, t161);
        wr32(sp0 - 0x40u, t159 & 0xfu);
        cow_fastcall(g, COW_IMG(0x1009ad20u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), t161, 3, t159 & 0xfu, t161, t160);
        t162 = rd8(esi + 0x43u);
        t163 = rd16(esi + 8u);
        wr32(sp0 + 0xcu, t162);
        d164 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a378u)));
        wrf32(rd32(COW_IMG(0x10480af0u) + t163 * 4u) + 0x208u, (float)d164);
        t165 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu) ^ ((rd8(esi + 0x44u) << 0x18u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu)) & 0xf000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu, t165);
        t166 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        wr8(t166 + 0x1dbu, (uint8_t)(rd32(esi + 0x44u) >> 4u));
        edx = t166;
    }
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) != rd16(esi + 8u))
    {
        eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        ecx = rd16(esi + 8u);
        wr32(sp0 - 0x38u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x34u;
        t167 = cow_cdecl(g, COW_IMG(0x1008a0e0u), 1, 2u);
        eax = t167;
    }
L_1009aac1: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10099ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10099ae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
