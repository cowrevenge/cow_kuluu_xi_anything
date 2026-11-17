/* f_0x101d11c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d11c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t164;
    uint32_t t165;
    uint32_t t166;
    uint32_t t167;
    uint32_t t168;
    uint32_t t169;
    uint32_t t17;
    uint32_t t170;
    uint32_t t171;
    uint32_t t172;
    uint32_t t173;
    uint32_t t174;
    uint32_t t175;
    uint32_t t176;
    uint32_t t177;
    uint32_t t178;
    uint32_t t179;
    uint32_t t18;
    uint32_t t180;
    uint32_t t181;
    uint32_t t182;
    uint32_t t183;
    uint32_t t184;
    uint32_t t185;
    uint32_t t186;
    uint32_t t187;
    uint32_t t188;
    uint32_t t189;
    uint32_t t19;
    uint32_t t190;
    uint32_t t191;
    uint32_t t192;
    uint32_t t193;
    uint32_t t194;
    uint32_t t195;
    uint32_t t196;
    uint32_t t197;
    uint32_t t198;
    uint32_t t199;
    uint32_t t2;
    uint32_t t20;
    uint32_t t200;
    uint32_t t201;
    uint32_t t202;
    uint32_t t203;
    uint32_t t204;
    uint32_t t205;
    uint32_t t206;
    uint32_t t207;
    uint32_t t208;
    uint32_t t209;
    uint32_t t21;
    uint32_t t210;
    uint32_t t211;
    uint32_t t212;
    uint32_t t213;
    uint32_t t214;
    uint32_t t215;
    uint32_t t216;
    uint32_t t217;
    uint32_t t218;
    uint32_t t219;
    uint32_t t22;
    uint32_t t220;
    uint32_t t221;
    uint32_t t222;
    uint32_t t223;
    uint32_t t224;
    uint32_t t225;
    uint32_t t226;
    uint32_t t227;
    uint32_t t228;
    uint32_t t229;
    uint32_t t23;
    uint32_t t230;
    uint32_t t231;
    uint32_t t232;
    uint32_t t233;
    uint32_t t234;
    uint32_t t235;
    uint32_t t236;
    uint32_t t237;
    uint32_t t238;
    uint32_t t239;
    uint32_t t24;
    uint32_t t240;
    uint32_t t241;
    uint32_t t242;
    uint32_t t243;
    uint32_t t244;
    uint32_t t245;
    uint32_t t246;
    uint32_t t247;
    uint32_t t248;
    uint32_t t249;
    uint32_t t25;
    uint32_t t250;
    uint32_t t251;
    uint32_t t252;
    uint32_t t253;
    uint32_t t254;
    uint32_t t255;
    uint32_t t256;
    uint32_t t257;
    uint32_t t258;
    uint32_t t259;
    uint32_t t26;
    uint32_t t260;
    uint32_t t261;
    uint32_t t262;
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
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x101c8950u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(COW_IMG(0x10663888u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663888u));
        ecx = t1;
        edx = t2;
    }
    else
    {
        eax = rd32(COW_IMG(0x10663888u));
        ecx = t1;
        edx = t2;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xa54u, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x10663888u), 0u);
        }
        else
        {
            eax = t3;
            edx = t5;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t6 = cow_thiscall(g, COW_IMG(0x101f86c0u), eax, 0);
            t7 = g->ecx;
            t8 = g->edx;
            wr32(COW_IMG(0x10663888u), t6);
            eax = t6;
            ecx = t7;
            edx = t8;
        }
    }
    if (rd32(COW_IMG(0x10663648u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x178u, in_edi, in_esi);
        t10 = g->ecx;
        t11 = g->edx;
        if (t9 == 0u)
        {
            eax = t9;
            ecx = t10;
            edx = t11;
            wr32(COW_IMG(0x10663648u), 0u);
        }
        else
        {
            eax = t9;
            edx = t11;
            g->ebx = 0u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t12 = cow_thiscall(g, COW_IMG(0x101e6fb0u), eax, 0);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(COW_IMG(0x10663648u), t12);
            eax = t12;
            ecx = t13;
            edx = t14;
        }
    }
    if (rd32(COW_IMG(0x10663520u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x7cu, in_edi, in_esi);
        t16 = g->ecx;
        t17 = g->edx;
        if (t15 == 0u)
        {
            eax = t15;
            ecx = t16;
            edx = t17;
            wr32(COW_IMG(0x10663520u), 0u);
        }
        else
        {
            eax = t15;
            edx = t17;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t18 = cow_thiscall(g, COW_IMG(0x101e3f50u), eax, 0);
            t19 = g->ecx;
            t20 = g->edx;
            wr32(COW_IMG(0x10663520u), t18);
            eax = t18;
            ecx = t19;
            edx = t20;
        }
    }
    if (rd32(COW_IMG(0x10663524u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t21 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x898u, in_edi, in_esi);
        t22 = g->ecx;
        t23 = g->edx;
        if (t21 == 0u)
        {
            eax = t21;
            ecx = t22;
            edx = t23;
            wr32(COW_IMG(0x10663524u), 0u);
        }
        else
        {
            eax = t21;
            edx = t23;
            g->ebx = 0u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t24 = cow_thiscall(g, COW_IMG(0x101e4a20u), eax, 0);
            t25 = g->ecx;
            t26 = g->edx;
            wr32(COW_IMG(0x10663524u), t24);
            eax = t24;
            ecx = t25;
            edx = t26;
        }
    }
    if (rd32(COW_IMG(0x10663684u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t27 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xacu, in_edi, in_esi);
        t28 = g->ecx;
        t29 = g->edx;
        if (t27 == 0u)
        {
            eax = t27;
            ecx = t28;
            edx = t29;
            wr32(COW_IMG(0x10663684u), 0u);
        }
        else
        {
            eax = t27;
            edx = t29;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t30 = cow_thiscall(g, COW_IMG(0x101eb390u), eax, 0);
            t31 = g->ecx;
            t32 = g->edx;
            wr32(COW_IMG(0x10663684u), t30);
            eax = t30;
            ecx = t31;
            edx = t32;
        }
    }
    if (rd32(COW_IMG(0x10663494u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t33 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x5cu, in_edi, in_esi);
        t34 = g->ecx;
        t35 = g->edx;
        if (t33 == 0u)
        {
            eax = t33;
            ecx = t34;
            edx = t35;
            wr32(COW_IMG(0x10663494u), 0u);
        }
        else
        {
            eax = t33;
            edx = t35;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t36 = cow_thiscall(g, COW_IMG(0x101dedc0u), eax, 0);
            t37 = g->ecx;
            t38 = g->edx;
            wr32(COW_IMG(0x10663494u), t36);
            eax = t36;
            ecx = t37;
            edx = t38;
        }
    }
    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t39 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x928u, in_edi, in_esi);
        t40 = g->ecx;
        t41 = g->edx;
        if (t39 == 0u)
        {
            ecx = t40;
            edx = t41;
            wr32(COW_IMG(0x10664494u), 0u);
        }
        else
        {
            eax = t39;
            edx = t41;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t42 = cow_thiscall(g, COW_IMG(0x1020b500u), eax, 0);
            t43 = g->ecx;
            t44 = g->edx;
            wr32(COW_IMG(0x10664494u), t42);
            ecx = t43;
            edx = t44;
        }
    }
    if (rd32(COW_IMG(0x10663accu)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663accu));
    }
    else
    {
        eax = rd32(COW_IMG(0x10663accu));
        g->eax = eax;
        g->esp = sp0 - 4u;
        t45 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x7cu, in_edi, in_esi);
        t46 = g->ecx;
        t47 = g->edx;
        if (t45 == 0u)
        {
            eax = t45;
            ecx = t46;
            edx = t47;
            wr32(COW_IMG(0x10663accu), 0u);
        }
        else
        {
            eax = t45;
            edx = t47;
            esi = t45;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t48 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t49 = g->edx;
            wr32(esi, COW_IMG(0x10333360u));
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            g->edx = t49;
            t50 = cow_thiscall(g, COW_IMG(0x10201020u), esi + 0x1cu, 0);
            t51 = g->edx;
            g->edx = t51;
            t52 = cow_thiscall(g, COW_IMG(0x10201130u), esi + 0x44u, 0);
            t53 = g->ecx;
            t54 = g->edx;
            wr32(esi, COW_IMG(0x10338368u));
            wr32(esi + 0x14u, 1u);
            wr32(esi + 0x18u, 0u);
            wr32(COW_IMG(0x10663accu), esi);
            eax = t52;
            ecx = t53;
            edx = t54;
        }
    }
    if (rd32(COW_IMG(0x10663ab8u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t55 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x210u, in_edi, in_esi);
        t56 = g->ecx;
        t57 = g->edx;
        if (t55 == 0u)
        {
            eax = t55;
            ecx = t56;
            edx = t57;
            wr32(COW_IMG(0x10663ab8u), 0u);
        }
        else
        {
            eax = t55;
            edx = t57;
            g->edi = 0xffffffffu;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t58 = cow_thiscall(g, COW_IMG(0x101ff000u), eax, 0);
            t59 = g->ecx;
            t60 = g->edx;
            wr32(COW_IMG(0x10663ab8u), t58);
            eax = t58;
            ecx = t59;
            edx = t60;
        }
    }
    if (rd32(COW_IMG(0x10664520u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t61 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x44u, in_edi, in_esi);
        t62 = g->ecx;
        t63 = g->edx;
        if (t61 == 0u)
        {
            eax = t61;
            ecx = t62;
            edx = t63;
            wr32(COW_IMG(0x10664520u), 0u);
        }
        else
        {
            eax = t61;
            edx = t63;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t64 = cow_thiscall(g, COW_IMG(0x10210da0u), eax, 2, COW_IMG(0x1037e8e0u), 1u);
            t65 = g->ecx;
            t66 = g->edx;
            wr32(COW_IMG(0x10664520u), t64);
            eax = t64;
            ecx = t65;
            edx = t66;
        }
    }
    if (rd32(COW_IMG(0x10664524u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t67 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x44u, in_edi, in_esi);
        t68 = g->ecx;
        t69 = g->edx;
        if (t67 == 0u)
        {
            eax = t67;
            ecx = t68;
            edx = t69;
            wr32(COW_IMG(0x10664524u), 0u);
        }
        else
        {
            eax = t67;
            ecx = t68;
            edx = t69;
            esi = t67;
            g->ebx = 0u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t70 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 2u);
            t71 = g->edx;
            g->edx = t71;
            g->esp = sp0 - 0xcu;
            t72 = cow_thiscall(g, COW_IMG(0x10210da0u), esi, 2, t70, 0u);
            t73 = g->ecx;
            t74 = g->edx;
            wr32(COW_IMG(0x10664524u), t72);
            eax = t72;
            ecx = t73;
            edx = t74;
        }
    }
    if (rd32(COW_IMG(0x10664404u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t75 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x3cu, in_edi, in_esi);
        t76 = g->ecx;
        t77 = g->edx;
        if (t75 == 0u)
        {
            eax = t75;
            ecx = t76;
            edx = t77;
            wr32(COW_IMG(0x10664404u), 0u);
        }
        else
        {
            eax = t75;
            edx = t77;
            esi = t75;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t78 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t79 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10338320u));
            g->edx = t79;
            t80 = cow_thiscall(g, COW_IMG(0x10206420u), esi, 0);
            t81 = g->ecx;
            t82 = g->edx;
            wr32(esi + 0x38u, 0u);
            wr32(COW_IMG(0x10664404u), esi);
            eax = t80;
            ecx = t81;
            edx = t82;
        }
    }
    if (rd32(COW_IMG(0x106634acu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t83 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x78u, in_edi, in_esi);
        t84 = g->ecx;
        t85 = g->edx;
        if (t83 == 0u)
        {
            eax = t83;
            ecx = t84;
            edx = t85;
            wr32(COW_IMG(0x106634acu), 0u);
        }
        else
        {
            eax = t83;
            edx = t85;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t86 = cow_thiscall(g, COW_IMG(0x101e0a90u), eax, 0);
            t87 = g->ecx;
            t88 = g->edx;
            wr32(COW_IMG(0x106634acu), t86);
            eax = t86;
            ecx = t87;
            edx = t88;
        }
    }
    if (rd32(COW_IMG(0x10663468u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t89 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x74u, in_edi, in_esi);
        t90 = g->ecx;
        t91 = g->edx;
        if (t89 == 0u)
        {
            eax = t89;
            ecx = t90;
            edx = t91;
            wr32(COW_IMG(0x10663468u), 0u);
        }
        else
        {
            eax = t89;
            edx = t91;
            g->edi = 0xffffffffu;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t92 = cow_thiscall(g, COW_IMG(0x101dc460u), eax, 0);
            t93 = g->ecx;
            t94 = g->edx;
            wr32(COW_IMG(0x10663468u), t92);
            eax = t92;
            ecx = t93;
            edx = t94;
        }
    }
    if (rd32(COW_IMG(0x10663740u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t95 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x9cu, in_edi, in_esi);
        t96 = g->ecx;
        t97 = g->edx;
        if (t95 == 0u)
        {
            eax = t95;
            ecx = t96;
            edx = t97;
            wr32(COW_IMG(0x10663740u), 0u);
        }
        else
        {
            eax = t95;
            edx = t97;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t98 = cow_thiscall(g, COW_IMG(0x101f17c0u), eax, 0);
            t99 = g->ecx;
            t100 = g->edx;
            wr32(COW_IMG(0x10663740u), t98);
            eax = t98;
            ecx = t99;
            edx = t100;
        }
    }
    if (rd32(COW_IMG(0x10664508u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t101 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x58u, in_edi, in_esi);
        t102 = g->ecx;
        t103 = g->edx;
        if (t101 == 0u)
        {
            eax = t101;
            ecx = t102;
            edx = t103;
            wr32(COW_IMG(0x10664508u), 0u);
        }
        else
        {
            eax = t101;
            edx = t103;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t104 = cow_thiscall(g, COW_IMG(0x10210310u), eax, 0);
            t105 = g->ecx;
            t106 = g->edx;
            wr32(COW_IMG(0x10664508u), t104);
            eax = t104;
            ecx = t105;
            edx = t106;
        }
    }
    if (rd32(COW_IMG(0x10663480u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t107 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t108 = g->ecx;
        t109 = g->edx;
        if (t107 == 0u)
        {
            eax = t107;
            ecx = t108;
            edx = t109;
            wr32(COW_IMG(0x10663480u), 0u);
        }
        else
        {
            eax = t107;
            edx = t109;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t110 = cow_thiscall(g, COW_IMG(0x101dce20u), eax, 0);
            t111 = g->ecx;
            t112 = g->edx;
            wr32(COW_IMG(0x10663480u), t110);
            eax = t110;
            ecx = t111;
            edx = t112;
        }
    }
    if (rd32(COW_IMG(0x106636acu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t113 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, in_edi, in_esi);
        t114 = g->ecx;
        t115 = g->edx;
        if (t113 == 0u)
        {
            eax = t113;
            ecx = t114;
            edx = t115;
            wr32(COW_IMG(0x106636acu), 0u);
        }
        else
        {
            eax = t113;
            edx = t115;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t116 = cow_thiscall(g, COW_IMG(0x101ed450u), eax, 0);
            t117 = g->ecx;
            t118 = g->edx;
            wr32(COW_IMG(0x106636acu), t116);
            eax = t116;
            ecx = t117;
            edx = t118;
        }
    }
    if (rd32(COW_IMG(0x10663400u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t119 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, in_edi, in_esi);
        t120 = g->ecx;
        t121 = g->edx;
        if (t119 == 0u)
        {
            eax = t119;
            ecx = t120;
            edx = t121;
            wr32(COW_IMG(0x10663400u), 0u);
        }
        else
        {
            eax = t119;
            edx = t121;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t122 = cow_thiscall(g, COW_IMG(0x101d9b10u), eax, 0);
            t123 = g->ecx;
            t124 = g->edx;
            wr32(COW_IMG(0x10663400u), t122);
            eax = t122;
            ecx = t123;
            edx = t124;
        }
    }
    if (rd32(COW_IMG(0x10664444u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t125 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x64u, in_edi, in_esi);
        t126 = g->ecx;
        t127 = g->edx;
        if (t125 == 0u)
        {
            eax = t125;
            ecx = t126;
            edx = t127;
            wr32(COW_IMG(0x10664444u), 0u);
        }
        else
        {
            eax = t125;
            edx = t127;
            g->edi = 0xffffffffu;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t128 = cow_thiscall(g, COW_IMG(0x10209b90u), eax, 0);
            t129 = g->ecx;
            t130 = g->edx;
            wr32(COW_IMG(0x10664444u), t128);
            eax = t128;
            ecx = t129;
            edx = t130;
        }
    }
    if (rd32(COW_IMG(0x1066369cu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t131 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x5cu, in_edi, in_esi);
        t132 = g->ecx;
        t133 = g->edx;
        if (t131 == 0u)
        {
            eax = t131;
            ecx = t132;
            edx = t133;
            wr32(COW_IMG(0x1066369cu), 0u);
        }
        else
        {
            eax = t131;
            edx = t133;
            g->edi = 0xffffffffu;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t134 = cow_thiscall(g, COW_IMG(0x101ebe00u), eax, 0);
            t135 = g->ecx;
            t136 = g->edx;
            wr32(COW_IMG(0x1066369cu), t134);
            eax = t134;
            ecx = t135;
            edx = t136;
        }
    }
    if (rd32(COW_IMG(0x1066349cu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t137 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xa0u, in_edi, in_esi);
        t138 = g->ecx;
        t139 = g->edx;
        if (t137 == 0u)
        {
            eax = t137;
            ecx = t138;
            edx = t139;
            wr32(COW_IMG(0x1066349cu), 0u);
        }
        else
        {
            eax = t137;
            edx = t139;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t140 = cow_thiscall(g, COW_IMG(0x101df210u), eax, 0);
            t141 = g->ecx;
            t142 = g->edx;
            wr32(COW_IMG(0x1066349cu), t140);
            eax = t140;
            ecx = t141;
            edx = t142;
        }
    }
    if (rd32(COW_IMG(0x1066442cu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t143 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x30u, in_edi, in_esi);
        t144 = g->ecx;
        t145 = g->edx;
        if (t143 == 0u)
        {
            eax = t143;
            ecx = t144;
            edx = t145;
            wr32(COW_IMG(0x1066442cu), 0u);
        }
        else
        {
            eax = t143;
            edx = t145;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t146 = cow_thiscall(g, COW_IMG(0x10207730u), eax, 0);
            t147 = g->ecx;
            t148 = g->edx;
            wr32(COW_IMG(0x1066442cu), t146);
            eax = t146;
            ecx = t147;
            edx = t148;
        }
    }
    if (rd32(COW_IMG(0x1066443cu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t149 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x88u, in_edi, in_esi);
        t150 = g->ecx;
        t151 = g->edx;
        if (t149 == 0u)
        {
            eax = t149;
            ecx = t150;
            edx = t151;
            wr32(COW_IMG(0x1066443cu), 0u);
        }
        else
        {
            eax = t149;
            edx = t151;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t152 = cow_thiscall(g, COW_IMG(0x10209300u), eax, 0);
            t153 = g->ecx;
            t154 = g->edx;
            wr32(COW_IMG(0x1066443cu), t152);
            eax = t152;
            ecx = t153;
            edx = t154;
        }
    }
    if (rd32(COW_IMG(0x10663aacu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t155 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x118u, in_edi, in_esi);
        t156 = g->ecx;
        t157 = g->edx;
        if (t155 == 0u)
        {
            eax = t155;
            ecx = t156;
            edx = t157;
            wr32(COW_IMG(0x10663aacu), 0u);
        }
        else
        {
            eax = t155;
            edx = t157;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t158 = cow_thiscall(g, COW_IMG(0x101fd000u), eax, 0);
            t159 = g->ecx;
            t160 = g->edx;
            wr32(COW_IMG(0x10663aacu), t158);
            eax = t158;
            ecx = t159;
            edx = t160;
        }
    }
    if (rd32(COW_IMG(0x10663698u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t161 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t162 = g->ecx;
        t163 = g->edx;
        if (t161 == 0u)
        {
            eax = t161;
            ecx = t162;
            edx = t163;
            wr32(COW_IMG(0x10663698u), 0u);
        }
        else
        {
            eax = t161;
            edx = t163;
            esi = t161;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t164 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t165 = g->ecx;
            t166 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103382d8u));
            wr32(COW_IMG(0x10663698u), esi);
            eax = t164;
            ecx = t165;
            edx = t166;
        }
    }
    if (rd32(COW_IMG(0x10663784u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t167 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t168 = g->ecx;
        t169 = g->edx;
        if (t167 == 0u)
        {
            eax = t167;
            ecx = t168;
            edx = t169;
            wr32(COW_IMG(0x10663784u), 0u);
        }
        else
        {
            eax = t167;
            edx = t169;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t170 = cow_thiscall(g, COW_IMG(0x101f43f0u), eax, 0);
            t171 = g->ecx;
            t172 = g->edx;
            wr32(COW_IMG(0x10663784u), t170);
            eax = t170;
            ecx = t171;
            edx = t172;
        }
    }
    if (rd32(COW_IMG(0x10663788u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t173 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t174 = g->ecx;
        t175 = g->edx;
        if (t173 == 0u)
        {
            eax = t173;
            ecx = t174;
            edx = t175;
            wr32(COW_IMG(0x10663788u), 0u);
        }
        else
        {
            eax = t173;
            edx = t175;
            esi = t173;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t176 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t177 = g->ecx;
            t178 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10338290u));
            wr32(COW_IMG(0x10663788u), esi);
            eax = t176;
            ecx = t177;
            edx = t178;
        }
    }
    if (rd32(COW_IMG(0x1066378cu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t179 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t180 = g->ecx;
        t181 = g->edx;
        if (t179 == 0u)
        {
            eax = t179;
            ecx = t180;
            edx = t181;
            wr32(COW_IMG(0x1066378cu), 0u);
        }
        else
        {
            eax = t179;
            edx = t181;
            esi = t179;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t182 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t183 = g->ecx;
            t184 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10338248u));
            wr32(COW_IMG(0x1066378cu), esi);
            eax = t182;
            ecx = t183;
            edx = t184;
        }
    }
    if (rd32(COW_IMG(0x10664408u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t185 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t186 = g->ecx;
        t187 = g->edx;
        if (t185 == 0u)
        {
            eax = t185;
            ecx = t186;
            edx = t187;
            wr32(COW_IMG(0x10664408u), 0u);
        }
        else
        {
            eax = t185;
            edx = t187;
            esi = t185;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t188 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t189 = g->ecx;
            t190 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10338200u));
            wr32(COW_IMG(0x10664408u), esi);
            eax = t188;
            ecx = t189;
            edx = t190;
        }
    }
    if (rd32(COW_IMG(0x1066440cu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t191 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t192 = g->ecx;
        t193 = g->edx;
        if (t191 == 0u)
        {
            eax = t191;
            ecx = t192;
            edx = t193;
            wr32(COW_IMG(0x1066440cu), 0u);
        }
        else
        {
            eax = t191;
            edx = t193;
            esi = t191;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t194 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t195 = g->ecx;
            t196 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103381b8u));
            wr32(COW_IMG(0x1066440cu), esi);
            eax = t194;
            ecx = t195;
            edx = t196;
        }
    }
    if (rd32(COW_IMG(0x10664410u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t197 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t198 = g->ecx;
        t199 = g->edx;
        if (t197 == 0u)
        {
            eax = t197;
            ecx = t198;
            edx = t199;
            wr32(COW_IMG(0x10664410u), 0u);
        }
        else
        {
            eax = t197;
            edx = t199;
            esi = t197;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t200 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t201 = g->ecx;
            t202 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10338170u));
            wr32(COW_IMG(0x10664410u), esi);
            eax = t200;
            ecx = t201;
            edx = t202;
        }
    }
    if (rd32(COW_IMG(0x10664414u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t203 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t204 = g->ecx;
        t205 = g->edx;
        if (t203 == 0u)
        {
            eax = t203;
            ecx = t204;
            edx = t205;
            wr32(COW_IMG(0x10664414u), 0u);
        }
        else
        {
            eax = t203;
            edx = t205;
            esi = t203;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t206 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t207 = g->ecx;
            t208 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10338128u));
            wr32(COW_IMG(0x10664414u), esi);
            eax = t206;
            ecx = t207;
            edx = t208;
        }
    }
    if (rd32(COW_IMG(0x10664418u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t209 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t210 = g->ecx;
        t211 = g->edx;
        if (t209 == 0u)
        {
            eax = t209;
            ecx = t210;
            edx = t211;
            wr32(COW_IMG(0x10664418u), 0u);
        }
        else
        {
            eax = t209;
            edx = t211;
            esi = t209;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t212 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t213 = g->ecx;
            t214 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103380e0u));
            wr32(COW_IMG(0x10664418u), esi);
            eax = t212;
            ecx = t213;
            edx = t214;
        }
    }
    if (rd32(COW_IMG(0x1066441cu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t215 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t216 = g->ecx;
        t217 = g->edx;
        if (t215 == 0u)
        {
            eax = t215;
            ecx = t216;
            edx = t217;
            wr32(COW_IMG(0x1066441cu), 0u);
        }
        else
        {
            eax = t215;
            edx = t217;
            esi = t215;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t218 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t219 = g->ecx;
            t220 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10338098u));
            wr32(COW_IMG(0x1066441cu), esi);
            eax = t218;
            ecx = t219;
            edx = t220;
        }
    }
    if (rd32(COW_IMG(0x10664420u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t221 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x10u, in_edi, in_esi);
        t222 = g->ecx;
        t223 = g->edx;
        if (t221 == 0u)
        {
            eax = t221;
            ecx = t222;
            edx = t223;
            wr32(COW_IMG(0x10664420u), 0u);
        }
        else
        {
            eax = t221;
            ecx = t222;
            edx = t223;
            wr32(eax, COW_IMG(0x10338030u));
            wr32(eax + 4u, 1u);
            wr32(eax + 0xcu, 0u);
            wr8(eax + 8u, 0u);
            wr16(eax + 0xau, 0u);
            wr32(COW_IMG(0x10664420u), eax);
        }
    }
    if (rd32(COW_IMG(0x10664428u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t224 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xcu, in_edi, in_esi);
        t225 = g->ecx;
        t226 = g->edx;
        if (t224 == 0u)
        {
            eax = t224;
            ecx = t225;
            edx = t226;
            wr32(COW_IMG(0x10664428u), 0u);
        }
        else
        {
            eax = t224;
            ecx = t225;
            edx = t226;
            wr32(eax, COW_IMG(0x10337fc8u));
            wr32(eax + 4u, 1u);
            wr16(eax + 8u, 0u);
            wr32(COW_IMG(0x10664428u), eax);
        }
    }
    if (rd32(COW_IMG(0x10664424u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t227 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xcu, in_edi, in_esi);
        t228 = g->ecx;
        t229 = g->edx;
        if (t227 == 0u)
        {
            eax = t227;
            ecx = t228;
            edx = t229;
            wr32(COW_IMG(0x10664424u), 0u);
        }
        else
        {
            eax = t227;
            ecx = t228;
            edx = t229;
            wr32(eax, COW_IMG(0x10337f60u));
            wr32(eax + 4u, 1u);
            wr16(eax + 8u, 0u);
            wr32(COW_IMG(0x10664424u), eax);
        }
    }
    g->edi = 0xffffffffu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x102017a0u), 0);
    t230 = g->ecx;
    t231 = g->edx;
    if (rd32(COW_IMG(0x10663180u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663180u));
        edx = t231;
    }
    else
    {
        eax = rd32(COW_IMG(0x10663180u));
        ecx = t230;
        edx = t231;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t232 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x68u, in_edi, in_esi);
        t233 = g->edx;
        if (t232 == 0u)
        {
            edx = t233;
            eax = 0u;
        }
        else
        {
            eax = t232;
            edx = t233;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t234 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
            t235 = g->edx;
            eax = t234;
            edx = t235;
        }
        wr32(COW_IMG(0x10663180u), eax);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t236 = cow_thiscall(g, COW_IMG(0x101c8290u), eax, 1, 0xau);
    t237 = g->ecx;
    t238 = g->edx;
    t239 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t238, 1, 1, 0x21u);
    t240 = g->edx;
    g->edx = t240;
    t241 = rd32(COW_IMG(0x10663180u));
    cow_thiscall(g, COW_IMG(0x101c8380u), t241, 1, t239);
    t242 = g->ecx;
    t243 = g->edx;
    if (rd32(COW_IMG(0x10663184u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663184u));
        edx = t243;
    }
    else
    {
        eax = rd32(COW_IMG(0x10663184u));
        ecx = t242;
        edx = t243;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t244 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x68u, in_edi, in_esi);
        t245 = g->edx;
        if (t244 == 0u)
        {
            edx = t245;
            eax = 0u;
        }
        else
        {
            eax = t244;
            edx = t245;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t246 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
            t247 = g->edx;
            eax = t246;
            edx = t247;
        }
        wr32(COW_IMG(0x10663184u), eax);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t248 = cow_thiscall(g, COW_IMG(0x101c8290u), eax, 1, 0x10u);
    t249 = g->edx;
    g->edx = t249;
    t250 = rd32(COW_IMG(0x10663184u));
    t251 = cow_thiscall(g, COW_IMG(0x101c8380u), t250, 1, 0xd8b1u);
    t252 = g->ecx;
    t253 = g->edx;
    if (rd32(COW_IMG(0x106634bcu)) != 0u)
    {
        eax = t251;
        ecx = t252;
        edx = t253;
    }
    else
    {
        eax = t251;
        ecx = t252;
        edx = t253;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t254 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t255 = g->ecx;
        t256 = g->edx;
        if (t254 == 0u)
        {
            eax = t254;
            ecx = t255;
            edx = t256;
            wr32(COW_IMG(0x106634bcu), 0u);
        }
        else
        {
            eax = t254;
            edx = t256;
            esi = t254;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t257 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t258 = g->ecx;
            t259 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10337f18u));
            wr32(COW_IMG(0x106634bcu), esi);
            eax = t257;
            ecx = t258;
            edx = t259;
        }
    }
    if (rd32(COW_IMG(0x106634ccu)) != 0u) goto L_101d1a7e;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t260 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
    t261 = g->edx;
    if (t260 == 0u)
    {
        eax = t260;
        goto L_101d1a78;
    }
    eax = t260;
    edx = t261;
    esi = t260;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t262 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
    wr16(esi + 0xeu, 0xffffu);
    wr32(esi + 8u, 0u);
    wr8(esi + 0xcu, 1u);
    wr32(esi, COW_IMG(0x10337ed0u));
    wr32(COW_IMG(0x106634ccu), esi);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return t262;
L_101d1a78: ;
    wr32(COW_IMG(0x106634ccu), 0u);
L_101d1a7e: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d11c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d11c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
