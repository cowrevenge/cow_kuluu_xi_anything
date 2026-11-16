/* f_0x10125360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10125360(Guest* g)
{
    double d109;
    double d119;
    double d122;
    double d125;
    double d128;
    double d131;
    double d132;
    double d136;
    double d142;
    double d146;
    double d182;
    double d185;
    double d20;
    double d24;
    double d27;
    double d52;
    double d53;
    double d59;
    double d60;
    double d63;
    double d68;
    double d74;
    double d78;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_30;
    uint32_t loc_4;
    uint32_t loc_8;
    int64_t q82;
    int64_t q84;
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
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t123;
    uint32_t t124;
    uint32_t t126;
    uint32_t t127;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
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
    uint32_t t183;
    uint32_t t184;
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
    uint32_t t25;
    uint32_t t26;
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
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t6;
    uint32_t t61;
    uint32_t t62;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t83;
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
    double x0;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_call_regs(g, COW_IMG(0x101606f0u), in_eax, COW_IMG(0x10621838u), g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_1012538a;
    }
    eax = t1;
    edx = t2;
    wr32(sp0 - 0x2cu, 0u);
    wr8(self + 0x4du, 0u);
    g->esp = sp0 - 0x28u;
    cow_fastcall(g, COW_IMG(0x101252f0u), self, edx, 1, 0u);
    return;
L_1012538a: ;
    if (rd32(COW_IMG(0x10666e7cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10666e7cu));
        goto L_101253a6;
    }
    eax = rd32(COW_IMG(0x10666e7cu));
    wr32(sp0 - 0x2cu, 0u);
    wr8(self + 0x4du, 0u);
    g->esp = sp0 - 0x28u;
    cow_fastcall(g, COW_IMG(0x101252f0u), self, edx, 1, 0u);
    return;
L_101253a6: ;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t3 = cow_call_regs(g, COW_IMG(0x10125170u), eax, self, g->edx, 1, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_call_regs(g, COW_IMG(0x10125040u), t3, self, g->edx, 1, 0);
    t6 = g->edx;
    t7 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), t6, 0);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        eax = t7;
        edx = t8;
        if (rd8(self + 0x4du) == 3u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x4du);
            goto L_101253cb;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0x4du);
        if ((uint8_t)eax != 6u) goto L_101253d2;
L_101253cb: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t9 = cow_thiscall(g, COW_IMG(0x101252c0u), self, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
L_101253d2: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t11 = cow_thiscall(g, COW_IMG(0x10160c90u), COW_IMG(0x10621838u), 0);
    t12 = g->edx;
    wr32(sp0 - 0x18u, t11);
    wr8(sp0 - 0x19u, 0u);
    wr32(sp0 - 0x14u, 0u);
    if (t11 == 0u)
    {
        edx = t12;
        loc_18 = t11;
        loc_14 = 0u;
    }
    else
    {
        eax = t11;
        edx = t12;
        loc_18 = t11;
        t13 = rd32(eax + 0x88u);
        wr32(sp0 - 0x14u, t13);
        loc_14 = t13;
    }
    if (self != 0u)
    {
        t14 = rd32(self + 4u);
        wr32(sp0 - 8u, t14);
        t15 = rd32(self + 8u);
        wr32(sp0 - 4u, t15);
        edx = t15;
        loc_8 = t14;
        loc_4 = t15;
    }
    wr32(sp0 - 0x2cu, loc_4);
    wr32(sp0 - 0x30u, loc_8);
    g->eax = loc_4;
    g->edx = edx;
    t16 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x28u;
    t17 = cow_thiscall(g, COW_IMG(0x10157720u), t16, 2, loc_8, loc_4);
    t18 = g->ecx;
    t19 = g->edx;
    d20 = (double)rdf32(self + 0x48u);
    if ((cow_fsw(g, d20, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        edx = t19;
        t32 = rd32(self + 4u);
        t33 = rd32(self + 8u);
        wr32(self + 0xcu, t32);
        wr32(self + 0x10u, t33);
        eax = t32;
        ecx = t33;
    }
    else
    {
        eax = cow_fsw(g, d20, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        ecx = t18;
        edx = t19;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t21 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t22 = g->ecx;
        t23 = g->edx;
        d24 = cow_take_float(g);
        g->ecx = t22;
        fpush(g, d24);
        t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), t21, g->ecx, g->edx, 1, 0);
        t26 = g->ecx;
        wr32(sp0 - 0x10u, (uint32_t)(int16_t)t25);
        d27 = fr(g, (double)rdf32(self + 0x48u) - (double)(int32_t)(uint32_t)(int16_t)t25);
        wrf32(self + 0x48u, (float)d27);
        if ((cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
            ecx = t26;
            edx = (uint32_t)(int16_t)t25;
            wr32(self + 0x48u, 0u);
        }
        else
        {
            t28 = rd32(self + 0xcu) + (uint32_t)((int32_t)(rd32(self + 4u) - rd32(self + 0xcu) - (uint32_t)((int32_t)(rd32(self + 4u) - rd32(self + 0xcu)) >> 0x1fu)) >> 1u);
            t29 = rd32(self + 0x10u);
            wr32(self + 0xcu, t28);
            t30 = t29 + (uint32_t)((int32_t)(rd32(self + 8u) - t29 - (uint32_t)((int32_t)(rd32(self + 8u) - t29) >> 0x1fu)) >> 1u);
            t31 = rd32(self + 8u);
            wr32(self + 0x10u, t30);
            eax = t30;
            ecx = t29;
            edx = (uint32_t)((int32_t)(t31 - t29) >> 0x1fu);
        }
    }
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = rd32(self + 0x18u);
    g->edx = edx;
    t34 = rd32(self + 0x18u);
    t35 = rd32(self + 0x14u);
    g->esp = sp0 - 0x1cu;
    t36 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t37 = g->ecx;
    t38 = g->edx;
    if ((uint8_t)t36 != 1u)
    {
        eax = t36;
        ecx = t37;
        edx = t38;
        ebx = t34;
        edi = t35;
    }
    else
    {
        eax = t36;
        edx = t38;
        ebx = t34;
        edi = t35;
        g->eax = eax;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t39 = cow_stdcall(g, COW_IMG(0x10126290u), 0);
        t40 = g->ecx;
        t41 = g->edx;
        if ((uint8_t)t39 == 0u)
        {
            eax = t39;
            ecx = t40;
            edx = t41;
        }
        else
        {
            eax = t39;
            edx = t41;
            if (rd32(sp0 - 0x18u) == 0u)
            {
                ecx = rd32(sp0 - 0x18u);
            }
            else
            {
                ecx = rd32(sp0 - 0x18u);
                wr32(sp0 - 0x2cu, self + 4u);
                g->eax = eax;
                g->edx = self + 4u;
                g->esp = sp0 - 0x28u;
                t42 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, self + 4u);
                t43 = g->ecx;
                t44 = g->edx;
                if ((uint8_t)t42 == 0u)
                {
                    eax = t42;
                    ecx = t43;
                    edx = t44;
                }
                else
                {
                    eax = t42;
                    edx = t44;
                    g->eax = eax;
                    g->esp = sp0 - 0x28u;
                    t45 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
                    t46 = g->ecx;
                    t47 = g->edx;
                    if ((uint8_t)t45 != 0u)
                    {
                        eax = t45;
                        ecx = t46;
                        edx = t47;
                    }
                    else
                    {
                        eax = t45;
                        ecx = t46;
                        edx = t47;
                        wr8(self + 0x54u, 1u);
                    }
                }
            }
        }
    }
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t48 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t49 = g->ecx;
    t50 = g->edx;
    if ((uint8_t)t48 != 0u)
    {
        ecx = t49;
        edx = t50;
    }
    else
    {
        eax = t48;
        ecx = t49;
        edx = t50;
        wr8(self + 0x55u, (uint8_t)eax);
        wr8(self + 0x54u, (uint8_t)eax);
    }
    if (rd8(self + 0x4du) > 6u)
    {
        eax = rd8(self + 0x4du);
        goto L_10125d11;
    }
    eax = rd8(self + 0x4du);
    t51 = rd32(COW_IMG(0x10125f2cu) + eax * 4u);
    switch (t51 - RD)
    {
    case 0x10125512u: goto L_10125512;
    case 0x10125527u: goto L_10125527;
    case 0x101256aau: goto L_101256aa;
    case 0x101256cau: goto L_101256ca;
    case 0x10125888u: goto L_10125888;
    case 0x10125b19u: goto L_10125b19;
    default: rt_fatal(g, COW_IMG(0x1012550bu), "switch");
    }
    return;
L_10125512: ;
    if (edi != 0u) goto L_10125d0a;
    if (ebx == 0u) goto L_10125d11;
L_10125d0a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t195 = cow_thiscall(g, COW_IMG(0x101252c0u), self, 0);
    t196 = g->edx;
    eax = t195;
    edx = t196;
L_10125d11: ;
    if (rd8(self + 0x4du) != 2u) goto L_10125e16;
    if (rd8(self + 0x4eu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x4eu);
        goto L_10125e16;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x4eu);
    wr32(sp0 - 0x2cu, in_ebp);
    t197 = rd16(self + 0x50u);
    t198 = rd16(self + 0x52u);
    wr16(self + 0x50u, 0u);
    wr16(self + 0x52u, 0xffffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t199 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t200 = g->edx;
    if ((uint8_t)t199 == 0u)
    {
        eax = t199;
        edx = t200;
        ebx = (ebx & 0xffff0000u) | t197;
    }
    else
    {
        eax = t199;
        edx = t200;
        ebx = (ebx & 0xffff0000u) | t197;
        edi = (edi & 0xffff0000u) | t198;
        g->eax = eax;
        g->esp = sp0 - 0x2cu;
        t201 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
        t202 = g->edx;
        if ((uint8_t)t201 != 0u)
        {
            eax = t201;
            edx = t202;
        }
        else
        {
            edx = t202;
            if (rd32(sp0 - 0x18u) == 0u)
            {
                eax = rd32(sp0 - 0x18u);
            }
            else
            {
                if (rd32(sp0 - 0x14u) != 0u)
                {
                    ecx = rd32(sp0 - 0x14u);
                    t203 = rd32(sp0 - 4u);
                    wr32(sp0 - 0x30u, t203);
                    t204 = rd32(sp0 - 8u);
                    wr32(sp0 - 0x34u, t204);
                    g->esp = sp0 - 0x2cu;
                    t205 = cow_call_regs(g, COW_IMG(0x102347f0u), t204, ecx, g->edx, 0, 2, t204, t203);
                    wr8(rd32(sp0 - 0x14u) + 0x28u, (uint8_t)t205);
                }
                wr32(sp0 - 0x30u, sp0 - 0x19u);
                wr32(sp0 - 0x34u, self + 4u);
                t206 = rd32(sp0 - 0x18u);
                g->edx = sp0 - 0x19u;
                g->esp = sp0 - 0x2cu;
                t207 = cow_call_regs(g, COW_IMG(0x10118cb0u), self + 4u, t206, g->edx, 0, 2, self + 4u, sp0 - 0x19u);
                t208 = g->edx;
                wr16(self + 0x52u, (uint16_t)t207);
                if ((int16_t)t207 <= 0)
                {
                    eax = t207;
                    edx = t208;
                    ebp = t206;
                }
                else
                {
                    eax = t207;
                    edx = t208;
                    ebp = t206;
                    if ((uint16_t)eax != (uint16_t)edi)
                    {
                        wr32(sp0 - 0x30u, 0u);
                        wr32(sp0 - 0x34u, eax);
                        g->ebx = ebx;
                        g->edx = edx;
                        g->esp = sp0 - 0x2cu;
                        t209 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ebp, g->edx, 0, 2, eax, 0u);
                        t210 = g->edx;
                        eax = t209;
                        edx = t210;
                    }
                }
                if ((int16_t)ebx <= 0)
                {
                    edi = 1u;
                    zf = (uint16_t)ebx == 0u;
                }
                else
                {
                    edi = 0xffffffffu;
                    zf = (uint16_t)ebx == 0u;
                }
                if (zf) goto L_10125dd7;
L_10125dbf: ;
                if ((int32_t)edi <= 0)
                {
                    ecx = ebp;
                    ebx = ebx + edi;
                    wr32(sp0 - 0x30u, 0x16u);
                    loc_30 = 0x16u;
                }
                else
                {
                    ecx = ebp;
                    ebx = ebx + edi;
                    wr32(sp0 - 0x30u, 0x17u);
                    loc_30 = 0x17u;
                }
                g->ebx = ebx;
                g->edi = edi;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t211 = cow_call_regs(g, COW_IMG(0x10118260u), eax, ecx, g->edx, 0, 1, loc_30);
                t212 = g->edx;
                if ((uint16_t)ebx != 0u)
                {
                    eax = t211;
                    edx = t212;
                    goto L_10125dbf;
                }
                eax = t211;
                edx = t212;
            }
        }
    }
L_10125dd7: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t213 = cow_thiscall(g, COW_IMG(0x10126510u), COW_IMG(0x10621838u), 0);
    t214 = g->edx;
    wr32(sp0 - 0x10u, t213);
    if (t213 == 0u)
    {
        eax = t213;
        edx = t214;
        ebp = rd32(sp0 - 0x2cu);
        edi = rd32(sp0 - 0x18u);
        goto L_10125e1a;
    }
    eax = t213;
    edx = t214;
    ebp = rd32(sp0 - 0x2cu);
    edi = rd32(sp0 - 0x18u);
    loc_10 = t213;
L_10125dee: ;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t215 = cow_call_regs(g, COW_IMG(0x1015ee20u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x10u);
    t216 = g->edx;
    if (t215 == 0u)
    {
        edx = t216;
    }
    else
    {
        eax = t215;
        edx = t216;
        if (eax != edi)
        {
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            cow_stdcall(g, COW_IMG(0x10118520u), 0);
            t217 = g->edx;
            edx = t217;
        }
    }
    if (rd32(sp0 - 0x10u) != 0u)
    {
        eax = rd32(sp0 - 0x10u);
        goto L_10125dee;
    }
    eax = rd32(sp0 - 0x10u);
L_10125e1a: ;
    if (rd8(self + 0x4du) == 3u)
    {
        if (rd8(self + 0x4eu) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x4eu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t218 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
            t219 = g->edx;
            if ((uint8_t)t218 == 0u)
            {
                eax = t218;
                edx = t219;
                goto L_10125e62;
            }
            eax = t218;
            edx = t219;
            if (rd32(self) != edi) goto L_10125e62;
            if (rd32(sp0 - 0x14u) == 0u) goto L_10125e62;
            ecx = rd32(sp0 - 0x14u);
            t220 = rd32(self + 8u) - rd32(self + 0x20u);
            wr32(sp0 - 0x2cu, t220);
            t221 = rd32(self + 0x6cu);
            wr32(sp0 - 0x30u, t221);
            g->eax = t220;
            g->edx = t221;
            g->esp = sp0 - 0x28u;
            t222 = cow_thiscall(g, COW_IMG(0x10234a20u), ecx, 2, t221, t220);
            t223 = g->edx;
            if ((uint8_t)t222 == 0u)
            {
                edx = t223;
            }
            else
            {
                eax = t222;
                edx = t223;
                wr32(sp0 - 0x2cu, 0x1bu);
                g->ebx = ebx;
                g->edi = edi;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                cow_call_regs(g, COW_IMG(0x10118260u), eax, edi, g->edx, 0, 1, 0x1bu);
                t224 = g->edx;
                edx = t224;
            }
        }
    }
L_10125e6f: ;
    wr8(self + 0x4cu, 0u);
    if (rd8(self + 0x4du) > 6u) goto L_10125f02;
    eax = rd8(self + 0x4du);
    t226 = rd32(COW_IMG(0x10125f48u) + eax * 4u);
    switch (t226 - RD)
    {
    case 0x10125e88u: goto L_10125e88;
    case 0x10125e8eu: goto L_10125e8e;
    case 0x10125eb4u: goto L_10125eb4;
    case 0x10125ed0u: goto L_10125ed0;
    case 0x10125ee4u: goto L_10125ee4;
    case 0x10125eeau: goto L_10125eea;
    case 0x10125ef0u: goto L_10125ef0;
    default: rt_fatal(g, COW_IMG(0x10125e81u), "switch");
    }
    return;
L_10125527: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t158 = cow_thiscall(g, COW_IMG(0x101252c0u), self, 0);
    t159 = g->ecx;
    t160 = g->edx;
    wr32(sp0 - 0x2cu, 0xffffffffu);
    if (rd8(self + 0x4du) != 2u)
    {
        eax = (t158 & 0xffffff00u) | rd8(self + 0x4du);
        ecx = t159;
        edx = t160;
        goto L_1012564c;
    }
    eax = (t158 & 0xffffff00u) | rd8(self + 0x4du);
    ecx = t159;
    edx = t160;
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t161 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t162 = g->ecx;
    t163 = g->edx;
    if ((uint8_t)t161 != 1u)
    {
        eax = t161;
        ecx = t162;
        edx = t163;
        goto L_101255bc;
    }
    eax = t161;
    ecx = t162;
    edx = t163;
    if (rd32(sp0 - 0x14u) == 0u)
    {
        edi = rd32(sp0 - 0x14u);
        goto L_101255ae;
    }
    edi = rd32(sp0 - 0x14u);
    if ((int32_t)rd32(edi + 0xcu) >= (int32_t)rd32(edi + 0x10u))
    {
        eax = rd32(edi + 0xcu);
        ecx = rd32(edi + 0x10u);
        goto L_101255ae;
    }
    eax = rd32(edi + 0xcu);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t164 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t165 = g->ecx;
    t166 = g->edx;
    if ((uint8_t)t164 != 0u)
    {
        eax = t164;
        ecx = t165;
        edx = t166;
        goto L_101255ae;
    }
    eax = t164;
    t167 = rd32(self + 8u);
    wr32(sp0 - 0x2cu, t167);
    t168 = rd32(self + 4u);
    wr32(sp0 - 0x30u, t168);
    g->edx = t168;
    g->esp = sp0 - 0x28u;
    t169 = cow_call_regs(g, COW_IMG(0x102347f0u), eax, edi, g->edx, 0, 2, t168, t167);
    t170 = g->ecx;
    t171 = g->edx;
    if ((uint8_t)t169 == 0u)
    {
        eax = t169;
        ecx = t170;
        edx = t171;
        goto L_101255ae;
    }
    eax = t169;
    ecx = t170;
    edx = t171;
    if ((uint8_t)eax == 3u) goto L_10125590;
    wr8(self + 0x86u, 1u);
L_101255bc: ;
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 5u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t174 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 5u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t175 = g->ecx;
    t176 = g->edx;
    if ((uint8_t)t174 != 1u)
    {
        eax = t174;
        ecx = t175;
        edx = t176;
    }
    else
    {
        eax = t174;
        ecx = t175;
        edx = t176;
        wr8(self + 0x86u, 0u);
    }
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x96u);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t177 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x96u, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t178 = g->edx;
    if ((uint8_t)t177 != 1u)
    {
        eax = t177;
        edx = t178;
    }
    else
    {
        eax = t177;
        edx = t178;
        if (rd32(sp0 - 0x18u) == 0u)
        {
            edi = rd32(sp0 - 0x18u);
        }
        else
        {
            edi = rd32(sp0 - 0x18u);
            if (rd32(sp0 - 0x14u) == 0u)
            {
                eax = rd32(sp0 - 0x14u);
            }
            else
            {
                eax = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x2cu, self + 4u);
                g->eax = eax;
                g->edx = self + 4u;
                g->esp = sp0 - 0x28u;
                t179 = cow_thiscall(g, COW_IMG(0x10118c10u), edi, 1, self + 4u);
                t180 = g->ecx;
                t181 = g->edx;
                if ((uint8_t)t179 == 0u)
                {
                    eax = t179;
                    edx = t181;
                }
                else
                {
                    eax = t179;
                    ecx = t180;
                    edx = t181;
                    d182 = (double)rdf32(self + 0x80u);
                    wr8(self + 0x4du, 6u);
                    fpush(g, d182);
                    g->esp = sp0 - 0x28u;
                    t183 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    wr32(self, edi);
                    t184 = (t183 ^ (uint32_t)((int32_t)t183 >> 0x1fu)) - (uint32_t)((int32_t)t183 >> 0x1fu);
                    wr32(sp0 - 0x10u, t184);
                    d185 = fr(g, (double)(int32_t)t184 * (double)rdf32(COW_IMG(0x10329d38u)));
                    wrf32(self + 0x7cu, (float)d185);
                    eax = t184;
                    edx = (uint32_t)((int32_t)t183 >> 0x1fu);
                }
            }
        }
    }
    goto L_10125d11;
L_10125590: ;
    t172 = rd32(sp0 - 0x18u);
    wr8(self + 0x4du, 3u);
    t173 = rd32(edi + 0x14u);
    wr32(self, t172);
    wr32(self + 0x6cu, t173);
    wr8(self + 0x86u, 1u);
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    return;
L_101255ae: ;
    wr32(self + 0x74u, 0x41c80000u);
    wr8(self + 0x86u, 0u);
    goto L_101255bc;
L_1012564c: ;
    wr32(sp0 - 0x30u, 5u);
    wr32(sp0 - 0x34u, 0x8cu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t186 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8cu, 5u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t187 = g->edx;
    if ((uint8_t)t186 != 1u)
    {
        eax = t186;
        edx = t187;
    }
    else
    {
        eax = t186;
        edx = t187;
        if (rd32(COW_IMG(0x1057876cu)) == 0u) goto L_1012567c;
        ecx = rd32(COW_IMG(0x1057876cu));
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t188 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, ecx, g->edx, 1, 0);
        t189 = g->edx;
        if (t188 != 0u)
        {
            eax = t188;
            edx = t189;
            goto L_10125d11;
        }
        eax = t188;
        edx = t189;
L_1012567c: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t190 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t191 = g->ecx;
        t192 = g->edx;
        if (t190 == 0u)
        {
            eax = t190;
            edx = t192;
        }
        else
        {
            eax = t190;
            ecx = t191;
            edx = t192;
            if (rd8(COW_IMG(0x10487f81u)) != 0u)
            {
                wr32(sp0 - 0x2cu, 0u);
                g->ebx = ebx;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t193 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
                t194 = g->edx;
                eax = t193;
                edx = t194;
            }
        }
    }
    goto L_10125d11;
L_101256aa: ;
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t156 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t157 = g->edx;
    if ((uint8_t)t156 == 1u)
    {
        eax = t156;
        edx = t157;
        goto L_10125d11;
    }
    eax = t156;
    edx = t157;
    goto L_10125d0a;
L_101256ca: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t110 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t111 = g->ecx;
    t112 = g->edx;
    if ((uint8_t)t110 == 0u)
    {
        eax = t110;
        ecx = t111;
        edx = t112;
        edi = 0x8bu;
    }
    else
    {
        eax = t110;
        ecx = t111;
        edx = t112;
        edi = 0x96u;
    }
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t113 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, edi, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t114 = g->ecx;
    t115 = g->edx;
    if ((uint8_t)t113 != 1u)
    {
        eax = t113;
        edx = t115;
        goto L_10125d0a;
    }
    eax = t113;
    ecx = t114;
    edx = t115;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t116 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t117 = g->ecx;
    t118 = g->edx;
    if ((uint8_t)t116 == 0u)
    {
        eax = t116;
        edx = t118;
        goto L_1012573d;
    }
    eax = t116;
    ecx = t117;
    edx = t118;
    if (rd8(self + 0xacu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xacu);
        goto L_1012573d;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xacu);
    d119 = fr(g, -(double)rdf32(self + 0xa8u) - (double)rdf32(COW_IMG(0x1032d430u)));
    wrf32(COW_IMG(0x1036e5f4u), (float)d119);
    if (!(d119 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d119, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
        x0 = (double)rdf32(COW_IMG(0x1036e5f4u));
        goto L_10125816;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d119, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    x0 = (double)rdf32(COW_IMG(0x1036e5f4u));
    x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
L_10125831: ;
    wrf32(COW_IMG(0x1036e5f4u), (float)x0);
L_10125837: ;
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x8cu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t147 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8cu, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t148 = g->edx;
    if ((uint8_t)t147 != 1u)
    {
        eax = t147;
        edx = t148;
    }
    else
    {
        eax = t147;
        edx = t148;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t149 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t150 = g->ecx;
        t151 = g->edx;
        if (t149 == 0u)
        {
            eax = t149;
            edx = t151;
        }
        else
        {
            eax = t149;
            ecx = t150;
            edx = t151;
            if (rd8(COW_IMG(0x10487f81u)) == 0u)
            {
                ecx = eax;
                wr32(sp0 - 0x2cu, 1u);
                g->ebx = ebx;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t154 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 1u);
                t155 = g->edx;
                eax = t154;
                edx = t155;
            }
            else
            {
                ecx = eax;
                wr32(sp0 - 0x2cu, 0u);
                g->ebx = ebx;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t152 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
                t153 = g->edx;
                eax = t152;
                edx = t153;
            }
        }
    }
    goto L_10125d11;
L_1012573d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t120 = cow_thiscall(g, COW_IMG(0x101260e0u), self, 0);
    t121 = g->edx;
    d122 = cow_take_float(g);
    if (d122 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t120 & 0xffff0000u) | (uint16_t)cow_fsw(g, d122, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t121;
        goto L_10125765;
    }
    eax = (t120 & 0xffff0000u) | (uint16_t)cow_fsw(g, d122, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t121;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t123 = cow_thiscall(g, COW_IMG(0x101260f0u), self, 0);
    t124 = g->edx;
    d125 = cow_take_float(g);
    if (d125 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t123 & 0xffff0000u) | (uint16_t)cow_fsw(g, d125, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t124;
        goto L_101257c5;
    }
    eax = (t123 & 0xffff0000u) | (uint16_t)cow_fsw(g, d125, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t124;
L_10125765: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t126 = cow_thiscall_cdecl(g, COW_IMG(0x10126100u), self, 1, rd32(sp0 - 0x28u));
    t127 = g->edx;
    d128 = cow_take_float(g);
    wrf32(sp0 - 0x10u, (float)(double)(float)d128);
    g->edx = t127;
    t129 = cow_thiscall_cdecl(g, COW_IMG(0x10125fe0u), self, 1, rd32(sp0 - 0x28u));
    t130 = g->edx;
    d131 = cow_take_float(g);
    d132 = fr(g, fr(g, atan2(d131, (double)rdf32(sp0 - 0x10u))) - (double)rdf32(COW_IMG(0x1032d430u)));
    wrf32(COW_IMG(0x1036e5f4u), (float)d132);
    if (!(d132 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (t129 & 0xffff0000u) | (uint16_t)cow_fsw(g, d132, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
        edx = t130;
        x0 = (double)rdf32(COW_IMG(0x1036e5f4u));
        goto L_101257a4;
    }
    eax = (t129 & 0xffff0000u) | (uint16_t)cow_fsw(g, d132, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    edx = t130;
    x0 = (double)rdf32(COW_IMG(0x1036e5f4u));
    x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
L_101257bf: ;
    wrf32(COW_IMG(0x1036e5f4u), (float)x0);
L_101257c5: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t133 = cow_thiscall_cdecl(g, COW_IMG(0x10125fe0u), self, 1, rd32(sp0 - 0x28u));
    t134 = g->ecx;
    t135 = g->edx;
    d136 = cow_take_float(g);
    g->edx = t135;
    fpush(g, d136);
    g->esp = sp0 - 0x28u;
    t137 = cow_call_regs(g, COW_IMG(0x10311c6cu), t133, g->ecx, g->edx, 1, 0);
    t138 = g->edx;
    wr32(sp0 - 0xcu, t137);
    g->edx = t138;
    g->esp = sp0 - 0x24u;
    t139 = cow_thiscall_cdecl(g, COW_IMG(0x10126100u), self, 1, rd32(sp0 - 0x28u));
    t140 = g->ecx;
    t141 = g->edx;
    d142 = cow_take_float(g);
    g->ecx = t140;
    g->edx = t141;
    fpush(g, d142);
    g->esp = sp0 - 0x28u;
    t143 = cow_call_regs(g, COW_IMG(0x10311c6cu), t139, g->ecx, g->edx, 1, 0);
    t144 = g->ecx;
    t145 = g->edx;
    wr32(sp0 - 0x10u, t143);
    d146 = fr(g, fr(g, atan2((double)(int32_t)rd32(sp0 - 0xcu), (double)(int32_t)t143)) - (double)rdf32(COW_IMG(0x1032d430u)));
    wrf32(COW_IMG(0x1036e5f4u), (float)d146);
    if (!(d146 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (t143 & 0xffff0000u) | (uint16_t)cow_fsw(g, d146, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
        ecx = t144;
        edx = t145;
        x0 = (double)rdf32(COW_IMG(0x1036e5f4u));
        goto L_10125816;
    }
    eax = (t143 & 0xffff0000u) | (uint16_t)cow_fsw(g, d146, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    ecx = t144;
    edx = t145;
    x0 = (double)rdf32(COW_IMG(0x1036e5f4u));
    x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
    goto L_10125831;
L_101257a4: ;
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        goto L_101257c5;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    x0 = fr(g, (double)rdf32(COW_IMG(0x1036e5f4u)) - (double)rdf32(COW_IMG(0x10329d2cu)));
    goto L_101257bf;
L_10125816: ;
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        goto L_10125837;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    x0 = fr(g, (double)rdf32(COW_IMG(0x1036e5f4u)) - (double)rdf32(COW_IMG(0x10329d2cu)));
    goto L_10125831;
L_10125888: ;
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 0x8cu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t97 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8cu, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t98 = g->ecx;
    t99 = g->edx;
    g->ecx = t98;
    g->edx = t99;
    g->esp = sp0 - 0x28u;
    t100 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t101 = g->ecx;
    t102 = g->edx;
    if ((uint8_t)t100 == 0u)
    {
        eax = t100;
        edx = t102;
        ebx = (ebx & 0xffffff00u) | (uint8_t)t97;
        goto L_101258bf;
    }
    eax = t100;
    ecx = t101;
    edx = t102;
    ebx = (ebx & 0xffffff00u) | (uint8_t)t97;
    if ((uint8_t)ebx != 0u) goto L_101258c7;
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t103 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t104 = g->edx;
    eax = t103;
    edx = t104;
    ebx = (ebx & 0xffffff00u) | (uint8_t)t103;
L_101258bf: ;
    if ((uint8_t)ebx == 0u) goto L_10125d0a;
L_101258c7: ;
    t105 = rd32(self + 8u) - rd32(self + 0x3cu);
    wr32(sp0 - 0xcu, t105);
    t106 = rd32(self + 4u) - rd32(self + 0x38u);
    wr32(sp0 - 0x10u, t106);
    t107 = rd32(self + 0x38u);
    t108 = rd32(self + 0x3cu);
    d109 = fr(g, fr(g, atan2((double)(int32_t)t105, (double)(int32_t)t106)) - (double)rdf32(COW_IMG(0x1032d430u)));
    wrf32(COW_IMG(0x1036e634u), (float)d109);
    if (t106 != 0u)
    {
        eax = t106;
        ebx = t107;
        edi = t108;
        goto L_10125915;
    }
    eax = t106;
    ecx = t105;
    ebx = t107;
    edi = t108;
    if (ecx != 0u) goto L_10125915;
    wr32(COW_IMG(0x1036e634u), 0xbfc90e56u);
    wr16(self + 0xa6u, 0xcu);
    goto L_10125d11;
L_10125915: ;
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10329d28u)), 1u);
        x0 = (double)rdf32(COW_IMG(0x1036e634u));
        goto L_10125936;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    x0 = (double)rdf32(COW_IMG(0x1036e634u));
    x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
L_10125951: ;
    wrf32(COW_IMG(0x1036e634u), (float)x0);
L_10125957: ;
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332c0u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332c0u)), 0u);
        if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332c0u)), 0u) & 0x100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332c0u)), 0u) & 0x100u;
            goto L_101259ae;
        }
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332c0u)), 0u) & 0x100u;
        if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332bcu))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332bcu)), 0u);
            goto L_101259ae;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332bcu)), 0u);
        wr16(self + 0xa6u, 0xbu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332c0u)), 0u);
        wr16(self + 0xa6u, 0xau);
    }
    goto L_10125d11;
L_10125936: ;
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        goto L_10125957;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    x0 = fr(g, (double)rdf32(COW_IMG(0x1036e634u)) - (double)rdf32(COW_IMG(0x10329d2cu)));
    goto L_10125951;
L_101259ae: ;
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332bcu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332bcu)), 0u) & 0x100u;
        goto L_101259e4;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332bcu)), 0u) & 0x100u;
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332b8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b8u)), 0u);
        goto L_101259e4;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b8u)), 0u);
    wr16(self + 0xa6u, 0xcu);
    goto L_10125d11;
L_101259e4: ;
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b8u)), 0u) & 0x100u;
        goto L_10125a1a;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b8u)), 0u) & 0x100u;
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332b4u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b4u)), 0u);
        goto L_10125a1a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b4u)), 0u);
    wr16(self + 0xa6u, 0xdu);
    goto L_10125d11;
L_10125a1a: ;
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b4u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b4u)), 0u) & 0x100u;
        goto L_10125a50;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b4u)), 0u) & 0x100u;
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x10330274u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10330274u)), 0u);
        goto L_10125a50;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10330274u)), 0u);
    wr16(self + 0xa6u, 0xeu);
    goto L_10125d11;
L_10125a50: ;
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10330274u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10330274u)), 0u) & 0x100u;
        goto L_10125a86;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10330274u)), 0u) & 0x100u;
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332b0u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b0u)), 0u);
        goto L_10125a86;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b0u)), 0u);
    wr16(self + 0xa6u, 0xfu);
    goto L_10125d11;
L_10125a86: ;
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b0u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b0u)), 0u) & 0x100u;
        goto L_10125abc;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b0u)), 0u) & 0x100u;
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332acu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332acu)), 0u);
        goto L_10125abc;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332acu)), 0u);
    wr16(self + 0xa6u, 0x10u);
    goto L_10125d11;
L_10125abc: ;
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332acu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332acu)), 0u) & 0x100u;
        goto L_10125af2;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332acu)), 0u) & 0x100u;
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332a8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332a8u)), 0u);
        goto L_10125af2;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332a8u)), 0u);
    wr16(self + 0xa6u, 0x11u);
    goto L_10125d11;
L_10125af2: ;
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332a8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332a8u)), 0u) & 0x100u;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332a8u)), 0u) & 0x100u;
        wr16(self + 0xa6u, 0xau);
    }
    goto L_10125d11;
L_10125b19: ;
    d52 = (double)rdf32(self + 0x7cu);
    if (!(d52 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d52, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10125c00;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d52, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    g->ecx = ecx;
    d53 = (double)rdf32(self + 0x80u);
    fpush(g, d53);
    g->esp = sp0 - 0x28u;
    t54 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t55 = g->ecx;
    t56 = (t54 ^ (uint32_t)((int32_t)t54 >> 0x1fu)) - (uint32_t)((int32_t)t54 >> 0x1fu);
    wr32(sp0 - 0x10u, t56);
    if ((t54 ^ (uint32_t)((int32_t)t54 >> 0x1fu)) == (uint32_t)((int32_t)t54 >> 0x1fu))
    {
        eax = t56;
        ecx = t55;
        edx = (uint32_t)((int32_t)t54 >> 0x1fu);
        goto L_10125c00;
    }
    eax = t56;
    loc_10 = t56;
    wr16(self + 0x44u, (uint16_t)(rd16(self + 0x44u) + 1u));
    t57 = rd16(self + 0x44u);
    t58 = rd32(self + 0x40u);
    d59 = fr(g, (double)(int32_t)loc_10 * (double)rdf32(COW_IMG(0x10329d38u)));
    wrf32(self + 0x7cu, (float)d59);
    if (rd32(rd32(t58) + (uint32_t)(int16_t)t57 * 4u) != 0u)
    {
        edx = rd32(t58);
    }
    else
    {
        edx = rd32(t58);
        wr16(self + 0x44u, 0u);
    }
    d60 = (double)rdf32(self + 0x80u);
    if (eax != 8u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d60, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        if ((eax & 0x4100u) != 0u)
        {
            eax = eax & 0x4100u;
            d68 = (double)rdf32(self + 0x80u);
            if (!(d68 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d68, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d68, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                wr32(sp0 - 0x2cu, 0x16u);
                g->ebx = ebx;
                g->edi = edi;
                g->eax = eax;
                g->esp = sp0 - 0x28u;
                t69 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x16u);
                t70 = g->edx;
                eax = t69;
                edx = t70;
            }
        }
        else
        {
            eax = eax & 0x4100u;
            wr32(sp0 - 0x2cu, 0x17u);
            g->ebx = ebx;
            g->edi = edi;
            g->eax = eax;
            g->esp = sp0 - 0x28u;
            t66 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x17u);
            t67 = g->edx;
            eax = t66;
            edx = t67;
        }
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d60, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        if ((eax & 0x4100u) != 0u)
        {
            eax = eax & 0x4100u;
            d63 = (double)rdf32(self + 0x80u);
            if (!(d63 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                wr32(sp0 - 0x2cu, 0x18u);
                g->ebx = ebx;
                g->edi = edi;
                g->eax = eax;
                g->esp = sp0 - 0x28u;
                t64 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x18u);
                t65 = g->edx;
                eax = t64;
                edx = t65;
            }
        }
        else
        {
            eax = eax & 0x4100u;
            wr32(sp0 - 0x2cu, 0x19u);
            g->ebx = ebx;
            g->edi = edi;
            g->eax = eax;
            g->esp = sp0 - 0x28u;
            t61 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x19u);
            t62 = g->edx;
            eax = t61;
            edx = t62;
        }
    }
L_10125cb7: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t86 = cow_thiscall(g, COW_IMG(0x10160c90u), COW_IMG(0x10621838u), 0);
    t87 = g->ecx;
    t88 = g->edx;
    if (rd32(self) != t86)
    {
        eax = t86;
        edx = t88;
        goto L_10125d0a;
    }
    eax = t86;
    ecx = t87;
    edx = t88;
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t89 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t90 = g->ecx;
    t91 = g->edx;
    if ((uint8_t)t89 == 1u)
    {
        eax = t89;
        edx = t91;
        goto L_10125d0a;
    }
    eax = t89;
    ecx = t90;
    edx = t91;
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x8cu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t92 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8cu, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t93 = g->ecx;
    t94 = g->edx;
    if ((uint8_t)t92 == 1u)
    {
        eax = t92;
        edx = t94;
        goto L_10125d0a;
    }
    eax = t92;
    ecx = t93;
    edx = t94;
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x96u);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t95 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x96u, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t96 = g->edx;
    if ((uint8_t)t95 != 1u)
    {
        eax = t95;
        edx = t96;
        goto L_10125d11;
    }
    eax = t95;
    edx = t96;
    goto L_10125d0a;
L_10125c00: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t71 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t72 = g->ecx;
    t73 = g->edx;
    d74 = cow_take_float(g);
    fpush(g, d74);
    t75 = cow_call_regs(g, COW_IMG(0x10311c6cu), t71, g->ecx, g->edx, 1, 0);
    wr32(sp0 - 0x10u, (uint32_t)(int16_t)t75);
    t76 = rd32(self + 8u);
    t77 = rd32(self + 0x30u);
    d78 = fr(g, (double)rdf32(self + 0x7cu) - (double)(int32_t)(uint32_t)(int16_t)t75);
    wrf32(self + 0x7cu, (float)d78);
    if ((int32_t)(t76 - t77) >= 0)
    {
        eax = t76 - t77;
        ecx = t77;
        ebx = 1u;
    }
    else
    {
        eax = t76 - t77;
        ecx = t77;
        ebx = 0xffffffffu;
    }
    t79 = rd16(COW_IMG(0x106218bau));
    t80 = rd16(COW_IMG(0x106218b6u));
    wr32(self + 0x80u, 0u);
    t81 = (uint32_t)(int16_t)(t79 - t80);
    if ((int32_t)((eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu)) <= (int32_t)(uint32_t)((int32_t)(t81 + ((uint32_t)((int32_t)t81 >> 0x1fu) & 3u)) >> 2u))
    {
        ecx = (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu);
        edx = (uint32_t)((int32_t)t81 >> 0x1fu) & 3u;
        edi = t81;
        goto L_10125c6f;
    }
    eax = (uint32_t)((int32_t)(t81 + ((uint32_t)((int32_t)t81 >> 0x1fu) & 3u)) >> 2u);
    edi = t81;
    wr32(sp0 - 0x10u, ebx * 8u);
    edx = ebx * 8u;
    x0 = (double)(int32_t)(ebx * 8u);
L_10125cb1: ;
    wrf32(self + 0x80u, (float)x0);
    goto L_10125cb7;
L_10125c6f: ;
    q82 = (int64_t)cow_muls(0x66666667u, edi);
    t83 = (uint32_t)((int32_t)cow_qhi(q82) >> 2u);
    if ((int32_t)ecx <= (int32_t)(t83 + (t83 >> 0x1fu)))
    {
        edx = t83 + (t83 >> 0x1fu);
        goto L_10125c91;
    }
    eax = t83 >> 0x1fu;
    edx = t83 + (t83 >> 0x1fu);
    wr32(sp0 - 0x10u, ebx * 3u);
    x0 = (double)(int32_t)(ebx * 3u);
    goto L_10125cb1;
L_10125c91: ;
    q84 = (int64_t)cow_muls(0x66666667u, edi);
    t85 = (uint32_t)((int32_t)cow_qhi(q84) >> 3u);
    if ((int32_t)ecx <= (int32_t)(t85 + (t85 >> 0x1fu)))
    {
        eax = t85 >> 0x1fu;
        edx = t85 + (t85 >> 0x1fu);
        goto L_10125cb7;
    }
    eax = t85 >> 0x1fu;
    edx = t85 + (t85 >> 0x1fu);
    wr32(sp0 - 0x10u, ebx * 5u);
    x0 = (double)(int32_t)(ebx * 5u);
    goto L_10125cb1;
L_10125e16: ;
    ebp = in_ebp;
    edi = rd32(sp0 - 0x18u);
    goto L_10125e1a;
L_10125e62: ;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x101252c0u), self, 0);
    t225 = g->edx;
    wr32(self, 0u);
    edx = t225;
    goto L_10125e6f;
L_10125e88: ;
    wr8(self + 0x4cu, 0u);
L_10125f02: ;
    if (rd32(COW_IMG(0x10456bf8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456bf8u));
        goto L_10125f12;
    }
    eax = rd32(COW_IMG(0x10456bf8u));
    if (rd8(self + 0x4eu) != 0u) goto L_10125f23;
    eax = (eax & 0xffffff00u) | rd8(self + 0x4eu);
L_10125f12: ;
    if (rd32(COW_IMG(0x1045666cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1045666cu));
        wr32(sp0 - 0x2cu, 0u);
        g->esp = sp0 - 0x28u;
        cow_stdcall(g, COW_IMG(0x10009750u), 1, 0u);
    }
L_10125f23: ;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = ebp;
    return;
L_10125e8e: ;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t233 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t234 = g->edx;
    if ((uint8_t)t233 != 0u)
    {
        edx = t234;
    }
    else
    {
        eax = t233;
        edx = t234;
        if (rd8(self + 0x4eu) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x4eu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t235 = cow_stdcall(g, COW_IMG(0x10126270u), 0);
            t236 = g->edx;
            if ((uint8_t)t235 == 0u)
            {
                edx = t236;
            }
            else
            {
                edx = t236;
                wr8(self + 0x4cu, 2u);
            }
        }
    }
    goto L_10125f02;
L_10125eb4: ;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t231 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t232 = g->edx;
    if ((uint8_t)t231 != 0u)
    {
        edx = t232;
    }
    else
    {
        eax = t231;
        edx = t232;
        if (rd8(sp0 - 0x19u) != 0u)
        {
            wr8(self + 0x4cu, 1u);
        }
    }
    goto L_10125f02;
L_10125ed0: ;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t229 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t230 = g->edx;
    if ((uint8_t)t229 != 0u)
    {
        edx = t230;
    }
    else
    {
        edx = t230;
        wr8(self + 0x4cu, 3u);
    }
    goto L_10125f02;
L_10125ee4: ;
    wr8(self + 0x4cu, 4u);
    goto L_10125f02;
L_10125eea: ;
    wr8(self + 0x4cu, 5u);
    goto L_10125f02;
L_10125ef0: ;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t227 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t228 = g->edx;
    if ((uint8_t)t227 != 0u)
    {
        edx = t228;
    }
    else
    {
        edx = t228;
        wr8(self + 0x4cu, 6u);
    }
    goto L_10125f02;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10125360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10125360(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
