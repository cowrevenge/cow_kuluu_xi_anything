/* f_0x101ef0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101ef0a0(Guest* g)
{
    double d101;
    double d102;
    double d108;
    double d112;
    double d113;
    double d119;
    double d123;
    double d124;
    double d125;
    double d129;
    double d130;
    double d134;
    double d138;
    double d142;
    double d143;
    double d146;
    double d149;
    double d156;
    double d157;
    double d158;
    double d162;
    double d166;
    double d167;
    double d168;
    double d172;
    double d173;
    double d177;
    double d178;
    double d179;
    double d180;
    double d181;
    double d184;
    double d185;
    double d189;
    double d19;
    double d190;
    double d191;
    double d192;
    double d193;
    double d217;
    double d218;
    double d23;
    double d24;
    double d27;
    double d28;
    double d29;
    double d47;
    double d48;
    double d52;
    double d53;
    double d54;
    double d64;
    double d70;
    double d71;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d87;
    double d88;
    double d89;
    double d92;
    double d93;
    double d94;
    double d96;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_14_f;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t13;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t144;
    uint32_t t145;
    uint32_t t147;
    uint32_t t148;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
    uint32_t t163;
    uint32_t t164;
    uint32_t t165;
    uint32_t t169;
    uint32_t t17;
    uint32_t t170;
    uint32_t t171;
    uint32_t t174;
    uint32_t t175;
    uint32_t t176;
    uint32_t t18;
    uint32_t t182;
    uint32_t t183;
    uint32_t t186;
    uint32_t t187;
    uint32_t t188;
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
    uint32_t t219;
    uint32_t t22;
    uint32_t t220;
    uint32_t t25;
    uint32_t t26;
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
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
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
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t72;
    uint32_t t73;
    uint32_t t8;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t95;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, 0xffffffffu);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, 0x9au);
    wr32(sp0 - 0x2cu, 0x26u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), in_eax, self, g->edx, 1, 7, 0x26u, 0x9au, 4u, 0xffffffffu, in_esi, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr8(self + 0x15u, rd8(self + 0x15u) & 0xfdu);
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr8(self + 0x15u, rd8(self + 0x15u) | 2u);
    }
    t4 = rd16(self + 0x14u);
    wr8(sp0 - 0x15u, 0u);
    if ((t4 & 0x40u) == 0u)
    {
        eax = (eax & 0xffff0000u) | t4;
        g->eax = eax;
        g->edx = edx;
        t8 = rd32(COW_IMG(0x10578478u));
        g->esp = sp0 - 0x1cu;
        t9 = cow_thiscall(g, COW_IMG(0x1011ba40u), t8, 0);
        t10 = g->ecx;
        t11 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            eax = t9;
            ecx = t10;
            edx = t11;
            loc_1c = in_esi;
        }
        else
        {
            edx = t11;
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 1u);
            wr32(sp0 - 0x2cu, 1u);
            t12 = rd32(rd32(COW_IMG(0x10578478u)) + 8u);
            wr32(sp0 - 0x30u, t12);
            g->eax = rd32(COW_IMG(0x10578478u));
            g->edx = edx;
            t13 = rd32(COW_IMG(0x10578478u));
            g->esp = sp0 - 0x1cu;
            t14 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t12, 1u, 1u, 0u, 0u);
            t15 = g->ecx;
            t16 = g->edx;
            eax = t14;
            ecx = t15;
            edx = t16;
            loc_1c = rd32(sp0 - 0x1cu);
        }
    }
    else
    {
        eax = (eax & 0xffff0000u) | t4;
        if ((eax & 0x38u) == 0u) goto L_101ef0e5;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t5 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t6 = g->ecx;
        t7 = g->edx;
        if (t5 < rd32(self + 0xb0u))
        {
            eax = t5;
            ecx = t6;
            edx = t7;
            loc_1c = in_esi;
            goto L_101ef124;
        }
        eax = t5;
        ecx = t6;
        edx = t7;
L_101ef0e5: ;
        if ((int8_t)rd16(self + 0x14u) < 0)
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
            loc_1c = in_esi;
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
            wr8(sp0 - 0x15u, 1u);
            wr16(self + 0x14u, (uint16_t)((eax & 0xffffff00u) | (uint8_t)(eax | 0x80u)));
            eax = (eax & 0xffffff00u) | (uint8_t)(eax | 0x80u);
            loc_1c = in_esi;
        }
    }
L_101ef124: ;
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_edi);
    if ((rd16(self + 0x14u) & 0x20u) == 0u)
    {
        ebx = (in_ebx & 0xffff0000u) | rd16(self + 0x14u);
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        ebx = (in_ebx & 0xffff0000u) | rd16(self + 0x14u);
        t17 = (uint32_t)(int16_t)rd16(self + 0xa6u);
        if ((int32_t)(t17 - (uint32_t)(int16_t)rd16(self + 0xa8u)) >= 0)
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0xa6u);
            edx = t17;
            ebp = (in_ebp & 0xffff0000u) | rd16(self + 0xa8u);
            edi = t17 - (uint32_t)(int16_t)rd16(self + 0xa8u);
            ecx = edi;
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0xa6u);
            ecx = (uint32_t)(int16_t)rd16(self + 0xa8u);
            edx = t17;
            ebp = (in_ebp & 0xffff0000u) | rd16(self + 0xa8u);
            ecx = ecx - edx;
        }
        t18 = (edx & 0xffffff00u) | rd8(self + 0xa4u);
        if ((int32_t)ecx >= (int32_t)(uint8_t)t18)
        {
            edx = t18;
            edi = (uint8_t)t18;
            if ((int16_t)eax <= (int16_t)ebp)
            {
                wr16(self + 0xa6u, (uint16_t)(eax + ((ecx & 0xffff0000u) | (uint8_t)edx)));
                ecx = eax + ((ecx & 0xffff0000u) | (uint8_t)edx);
            }
            else
            {
                wr16(self + 0xa6u, (uint16_t)(eax - ((edx & 0xffff0000u) | (uint8_t)edx)));
                eax = eax - ((edx & 0xffff0000u) | (uint8_t)edx);
                edx = (edx & 0xffff0000u) | (uint8_t)edx;
            }
        }
        else
        {
            edx = t18;
            edi = (uint8_t)t18;
            wr16(self + 0xa6u, (uint16_t)ebp);
            wr16(self + 0x14u, ebx & 0xffdfu);
            ebx = ebx & 0xffffffdfu;
        }
    }
    if ((rd16(self + 0x14u) & 0x10u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
        if ((eax & 2u) == 0u)
        {
            loc_20 = in_ebx;
            loc_24 = in_ebp;
            loc_28 = in_edi;
        }
        else
        {
            wr32(sp0 - 0x2cu, 0xffffffffu);
            wr32(sp0 - 0x30u, 1u);
            wr32(sp0 - 0x34u, 0x7du);
            wr32(sp0 - 0x38u, 0x26u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t35 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x26u, 0x7du, 1u, 0xffffffffu, in_edi, in_ebp, in_ebx);
            t36 = g->ecx;
            t37 = g->edx;
            if ((uint8_t)t35 != 0u)
            {
                eax = t35;
                goto L_101ef2ac;
            }
            eax = t35;
            ecx = t36;
            edx = t37;
            wr32(sp0 - 0x2cu, 0xffffffffu);
            wr32(sp0 - 0x30u, 4u);
            wr32(sp0 - 0x34u, 0xa4u);
            wr32(sp0 - 0x38u, 0x26u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t38 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x26u, 0xa4u, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t39 = g->ecx;
            t40 = g->edx;
            if ((uint8_t)t38 == 0u)
            {
                eax = t38;
                ecx = t39;
                edx = t40;
                goto L_101ef259;
            }
            eax = t38;
            ecx = t39;
            edx = t40;
            wr32(sp0 - 0x2cu, 0xffffffffu);
            wr32(sp0 - 0x30u, 4u);
            wr32(sp0 - 0x34u, 0xa5u);
            wr32(sp0 - 0x38u, 0x26u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t41 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x26u, 0xa5u, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t42 = g->ecx;
            t43 = g->edx;
            if ((uint8_t)t41 != 0u)
            {
                eax = t41;
                goto L_101ef2ac;
            }
            eax = t41;
            ecx = t42;
            edx = t43;
L_101ef259: ;
            wr32(sp0 - 0x2cu, 0x7cu);
            wr32(sp0 - 0x30u, 0x26u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t44 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x26u, 0x7cu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
            t45 = g->ecx;
            t46 = g->edx;
            d47 = cow_take_float(g);
            wrf32(sp0 - 0x14u, (float)(double)(float)d47);
            if ((rd16(self + 0x14u) & 0x200u) == 0u)
            {
                eax = t44;
                ecx = rd16(self + 0x14u) & 0x200u;
                edx = t46;
                loc_14_f = (double)(float)d47;
            }
            else
            {
                eax = t44;
                ecx = rd16(self + 0x14u) & 0x200u;
                edx = t46;
                loc_14_f = (double)(float)d47;
                d48 = (double)(float)fr(g, loc_14_f + loc_14_f);
                wrf32(sp0 - 0x14u, (float)d48);
                loc_14_f = d48;
            }
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t49 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t50 = g->ecx;
            t51 = g->edx;
            d52 = cow_take_float(g);
            wr32(sp0 - 0x2cu, t50);
            d53 = (double)(float)fr(g, fr(g, d52 * (double)rdf32(COW_IMG(0x10329a08u))) * fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(COW_IMG(0x1033a060u))));
            wrf32(sp0 - 0x14u, (float)d53);
            d54 = (double)(float)-fr(g, fr(g, d52 * (double)rdf32(COW_IMG(0x10329a08u))) * fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(COW_IMG(0x1033a060u))));
            wrf32(sp0 - 0x2cu, (float)d54);
            g->ebx = ebx;
            g->ebp = ebp;
            g->edx = t51;
            t55 = cow_thiscall(g, COW_IMG(0x101ede30u), self, 1, cow_f2bits(d54));
            t56 = g->ecx;
            t57 = g->edx;
            eax = t55;
            ecx = t56;
            edx = t57;
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
        d19 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x5cu) - (double)rdf32(self + 0x58u)) * (double)rdf32(COW_IMG(0x1032a39cu)));
        wrf32(sp0 - 0x14u, (float)d19);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t20 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t21 = g->ecx;
        t22 = g->edx;
        d23 = cow_take_float(g);
        d24 = fr(g, fr(g, d23 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 - 0x14u));
        wrf32(sp0 - 0x14u, (float)(double)(float)d24);
        if (!(d24 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (t20 & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            ecx = t21;
            edx = t22;
            loc_14_f = (double)(float)d24;
            x0 = d24;
        }
        else
        {
            eax = (t20 & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            ecx = t21;
            edx = t22;
            loc_14_f = (double)(float)d24;
            x0 = d24;
            x0 = -x0;
        }
        wrf32(sp0 - 0x10u, (float)(double)(float)x0);
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t25 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t26 = g->edx;
        d27 = cow_take_float(g);
        d28 = fr(g, fr(g, d27 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x1033a064u)));
        d29 = (double)rdf32(sp0 - 0x10u);
        if ((cow_fsw(g, d28, d29, 0u) & 0x4100u) != 0u)
        {
            edx = t26;
        }
        else
        {
            t30 = rd32(self + 0x5cu);
            wr8(self + 0x14u, rd8(self + 0x14u) & 0xefu);
            wr32(self + 0x58u, t30);
            edx = t30;
        }
        t31 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x2cu, t31);
        g->ebx = ebx;
        g->ebp = ebp;
        g->eax = t31;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t32 = cow_thiscall(g, COW_IMG(0x101ede30u), self, 1, t31);
        t33 = g->ecx;
        t34 = g->edx;
        eax = t32;
        ecx = t33;
        edx = t34;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
    }
L_101ef2b7: ;
    if ((rd16(self + 0x14u) & 8u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
        ebx = (ebx & 0xffffff00u) | rd8(sp0 + 4u);
        if (!(eax & 1u))
        {
            if ((eax & 0x400u) == 0u)
            {
                eax = eax & 0x400u;
            }
            else
            {
                eax = eax & 0x400u;
                g->esp = sp0 - 0x28u;
                t203 = cow_call_regs(g, COW_IMG(0x101edee0u), eax, self, edx, 1, 0);
                t204 = g->edx;
                eax = t203;
                edx = t204;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
        else
        {
            if ((eax & 0x100u) == 0u)
            {
                eax = eax & 0x100u;
                goto L_101ef69e;
            }
            eax = eax & 0x100u;
            wr32(sp0 - 0x2cu, 0x9du);
            wr32(sp0 - 0x30u, 0x26u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t116 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x26u, 0x9du, loc_28, loc_24);
            t117 = g->ecx;
            t118 = g->edx;
            d119 = cow_take_float(g);
            wrf32(sp0 + 4u, (float)d119);
            wr32(sp0 - 0x34u, 0x9eu);
            wr32(sp0 - 0x38u, 0x26u);
            g->edx = t118;
            g->esp = sp0 - 0x28u;
            t120 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t117, 4, 0x26u, 0x9eu, 0x26u, 0x9du);
            t121 = g->ecx;
            t122 = g->edx;
            d123 = cow_take_float(g);
            if ((rd16(self + 0x14u) & 0x200u) == 0u)
            {
                eax = rd16(self + 0x14u) & 0x200u;
                ecx = t121;
                edx = t122;
                x1 = (double)rdf32(sp0 + 4u);
                x0 = d123;
            }
            else
            {
                eax = rd16(self + 0x14u) & 0x200u;
                ecx = t121;
                edx = t122;
                x1 = (double)rdf32(sp0 + 4u);
                x0 = d123;
                x1 = fr(g, x1 + x1);
                x0 = fr(g, x0 + x0);
            }
            d124 = fr(g, x1 * (double)rdf32(self + 0x70u));
            wrf32(sp0 + 4u, (float)d124);
            d125 = (double)(float)fr(g, x0 * (double)rdf32(self + 0x70u));
            wrf32(sp0 - 0x14u, (float)d125);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t126 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t127 = g->ecx;
            t128 = g->edx;
            d129 = cow_take_float(g);
            d130 = fr(g, fr(g, d129 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 + 4u));
            if (!(d130 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t126 & 0xffff0000u) | (uint16_t)cow_fsw(g, d130, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                ecx = t127;
                edx = t128;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t135 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t136 = g->ecx;
                t137 = g->edx;
                d138 = cow_take_float(g);
                eax = t135;
                ecx = t136;
                edx = t137;
                x0 = fr(g, fr(g, d138 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 + 4u));
            }
            else
            {
                eax = (t126 & 0xffff0000u) | (uint16_t)cow_fsw(g, d130, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                ecx = t127;
                edx = t128;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t131 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t132 = g->ecx;
                t133 = g->edx;
                d134 = cow_take_float(g);
                eax = t131;
                ecx = t132;
                edx = t133;
                x0 = -fr(g, fr(g, d134 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 + 4u));
            }
            if (!(x0 < (double)rdf32(COW_IMG(0x10329990u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
                loc_14_f = (double)rdf32(sp0 - 0x14u);
                goto L_101ef6e6;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t139 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t140 = g->ecx;
            t141 = g->edx;
            d142 = cow_take_float(g);
            d143 = fr(g, fr(g, d142 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 - 0x14u));
            if (!(d143 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t139 & 0xffff0000u) | (uint16_t)cow_fsw(g, d143, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                ecx = t140;
                edx = t141;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t147 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t148 = g->edx;
                d149 = cow_take_float(g);
                eax = t147;
                edx = t148;
                x0 = fr(g, fr(g, d149 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 - 0x14u));
            }
            else
            {
                eax = (t139 & 0xffff0000u) | (uint16_t)cow_fsw(g, d143, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                ecx = t140;
                edx = t141;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t144 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t145 = g->edx;
                d146 = cow_take_float(g);
                eax = t144;
                edx = t145;
                x0 = -fr(g, fr(g, d146 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 - 0x14u));
            }
            if (!(x0 < (double)rdf32(COW_IMG(0x10329990u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
                loc_14_f = (double)rdf32(sp0 - 0x14u);
                goto L_101ef6e6;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
            if (rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4eu) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4eu);
                loc_14_f = (double)rdf32(sp0 - 0x14u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4eu);
                ecx = rd32(COW_IMG(0x104e1d4cu));
                if ((uint8_t)ebx == 0u)
                {
                    loc_14_f = (double)rdf32(sp0 - 0x14u);
                }
                else
                {
                    t150 = rd32(ecx + 4u) - (uint32_t)(int16_t)rd16(self + 0x1cu);
                    t151 = rd32(ecx + 8u);
                    t152 = rd16(self + 0x1cu);
                    wr32(sp0 + 4u, t150);
                    t153 = rd16(self + 0x1eu);
                    t154 = rd32(sp0 + 4u);
                    wrf32(sp0 + 4u, (float)(double)(int32_t)t154);
                    t155 = t151 - (uint32_t)(int16_t)t153;
                    wr32(sp0 - 8u, t155);
                    wrf32(sp0 - 0x14u, (float)(double)(float)(double)(int32_t)t155);
                    eax = (uint32_t)(int16_t)t153;
                    edx = (uint32_t)(int16_t)t152;
                    loc_14_f = (double)(float)(double)(int32_t)t155;
                }
            }
            if (rd32(COW_IMG(0x10456a7cu)) == 0u)
            {
                ecx = rd32(COW_IMG(0x10456a7cu));
                goto L_101ef62d;
            }
            ecx = rd32(COW_IMG(0x10456a7cu));
            if (ecx != 3u) goto L_101ef6ec;
L_101ef62d: ;
            if (rd32(COW_IMG(0x10456bf8u)) != 0u)
            {
                eax = rd32(COW_IMG(0x10456bf8u));
            }
            else
            {
                eax = rd32(COW_IMG(0x10456bf8u));
                d156 = (double)rdf32(sp0 + 4u);
                if (!(d156 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d156, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = (double)rdf32(sp0 + 4u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d156, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = (double)rdf32(sp0 + 4u);
                    x0 = -x0;
                }
                if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u) == 0u)
                {
                    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u;
                    goto L_101ef686;
                }
                eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u;
                if (!(loc_14_f < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = loc_14_f;
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = loc_14_f;
                    x0 = -x0;
                }
                if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u) != 0u)
                {
                    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u;
                    goto L_101ef6ec;
                }
                eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u;
L_101ef686: ;
                d157 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(self + 0x58u));
                wrf32(sp0 + 4u, (float)d157);
                d158 = (double)(float)fr(g, loc_14_f * (double)rdf32(self + 0x58u));
                wrf32(sp0 - 0x14u, (float)d158);
                loc_14_f = d158;
            }
L_101ef6ec: ;
            if (ecx == 0u) goto L_101ef6f5;
            if (ecx != 3u) goto L_101ef724;
L_101ef6f5: ;
            if (rd32(COW_IMG(0x10456bf8u)) != 0u)
            {
                eax = rd32(COW_IMG(0x10456bf8u));
            }
            else
            {
                eax = rd32(COW_IMG(0x10456bf8u));
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t169 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t170 = g->ecx;
                t171 = g->edx;
                d172 = cow_take_float(g);
                d173 = fr(g, fr(g, d172 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 + 4u));
                wrf32(sp0 + 4u, (float)d173);
                g->ecx = t170;
                g->edx = t171;
                t174 = cow_call_regs(g, COW_IMG(0x10014cf0u), t169, g->ecx, g->edx, 1, 0);
                t175 = g->ecx;
                t176 = g->edx;
                d177 = cow_take_float(g);
                d178 = (double)(float)fr(g, fr(g, d177 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 - 0x14u));
                wrf32(sp0 - 0x14u, (float)d178);
                eax = t174;
                ecx = t175;
                edx = t176;
                loc_14_f = d178;
            }
L_101ef724: ;
            d179 = (double)rdf32(sp0 + 4u);
            if (!(d179 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d179, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = (double)rdf32(sp0 + 4u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d179, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = (double)rdf32(sp0 + 4u);
                x0 = -x0;
            }
            if (!(x0 < (double)rdf32(COW_IMG(0x10329990u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
                wr32(sp0 + 4u, 0u);
            }
            if (!(loc_14_f < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = loc_14_f;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = loc_14_f;
                x0 = -x0;
            }
            if (!(x0 < (double)rdf32(COW_IMG(0x10329990u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
                wr32(sp0 - 0x14u, 0u);
            }
            d180 = (double)rdf32(sp0 + 4u);
            if (d180 != (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d180, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                goto L_101ef79e;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d180, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            d181 = (double)rdf32(sp0 - 0x14u);
            if (d181 == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d181, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                goto L_101ef7d3;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d181, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_101ef79e: ;
            wr32(sp0 - 0x2cu, 0u);
            if (rd8(self + 0xa2u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0xa2u);
                d184 = (double)(float)-(double)rdf32(sp0 - 0x14u);
                wrf32(sp0 - 0x30u, (float)d184);
                d185 = (double)(float)-(double)rdf32(sp0 + 4u);
                wrf32(sp0 - 0x34u, (float)d185);
            }
            else
            {
                t182 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x30u, t182);
                t183 = rd32(sp0 + 4u);
                wr32(sp0 - 0x34u, t183);
                eax = t183;
                edx = t182;
            }
            g->ebx = ebx;
            g->ebp = ebp;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t186 = cow_call_regs(g, COW_IMG(0x101edaf0u), eax, self, g->edx, 0, 3, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), 0u);
            t187 = g->ecx;
            t188 = g->edx;
            eax = t186;
            ecx = t187;
            edx = t188;
L_101ef7d3: ;
            d189 = (double)rdf32(sp0 + 4u);
            if (!(d189 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d189, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d189, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                d190 = (double)rdf32(sp0 + 4u);
                wrf32(sp0 + 4u, (float)-d190);
            }
            d191 = (double)rdf32(sp0 - 0x14u);
            if (!(d191 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d191, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                loc_14_f = (double)rdf32(sp0 - 0x14u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d191, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                d192 = (double)(float)-(double)rdf32(sp0 - 0x14u);
                wrf32(sp0 - 0x14u, (float)d192);
                loc_14_f = d192;
            }
            if ((rd8(self + 0x14u) & 4u) != 0u)
            {
                d193 = (double)rdf32(sp0 + 4u);
                if (!(d193 < (double)rdf32(COW_IMG(0x1033a05cu))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d193, (double)rdf32(COW_IMG(0x1033a05cu)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d193, (double)rdf32(COW_IMG(0x1033a05cu)), 0u);
                    if (!(loc_14_f < (double)rdf32(COW_IMG(0x1033a05cu))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x1033a05cu)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x1033a05cu)), 0u);
                        wr32(sp0 - 0x2cu, 0x41000000u);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x28u;
                        t194 = cow_thiscall(g, COW_IMG(0x101ed9e0u), self, 1, 0x41000000u);
                        t195 = g->ecx;
                        t196 = g->edx;
                        eax = t194;
                        ecx = t195;
                        edx = t196;
                        loc_14_f = (double)rdf32(sp0 - 0x14u);
                    }
                }
            }
            wr32(sp0 - 0x2cu, 0xffffffffu);
            wr32(sp0 - 0x30u, 1u);
            wr32(sp0 - 0x34u, 0x7eu);
            wr32(sp0 - 0x38u, 0x26u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t197 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x26u, 0x7eu, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t198 = g->edx;
            if ((uint8_t)t197 == 0u)
            {
                eax = t197;
                edx = t198;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                eax = t197;
                t199 = (uint32_t)(int16_t)rd16(self + 0x22u);
                wr32(sp0 - 8u, t199);
                t200 = (uint32_t)(int16_t)rd16(self + 0x20u);
                wr32(sp0 - 8u, t200);
                wrf32(sp0 - 0x2cu, (float)(double)(float)(double)(int32_t)t199);
                wrf32(sp0 - 0x30u, (float)(double)(float)(double)(int32_t)t200);
                g->eax = eax;
                g->edx = t200;
                g->esp = sp0 - 0x28u;
                t201 = cow_thiscall(g, COW_IMG(0x101ef990u), self, 2, cow_f2bits((double)(float)(double)(int32_t)t200), cow_f2bits((double)(float)(double)(int32_t)t199));
                t202 = g->edx;
                eax = t201;
                edx = t202;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
    }
    else
    {
        ebx = (ebx & 0xffffff00u) | rd8(sp0 + 4u);
        t62 = (uint32_t)(int16_t)rd16(self + 0x1cu);
        t63 = rd32(self + 0x24u);
        d64 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u));
        wr32(sp0 + 4u, t62);
        wr32(sp0 - 8u, t63);
        t65 = rd32(self + 0x28u);
        wr32(sp0 - 0xcu, t65);
        t66 = (uint32_t)(int16_t)rd16(self + 0x1eu);
        wr32(sp0 - 0x10u, t66);
        t67 = (uint32_t)(int16_t)rd16(self + 0x6cu);
        t68 = rd16(self + 0x6eu);
        t69 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t67);
        d70 = fr(g, (double)rdf32(self + 0x2cu) - fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t69 * d64) + (double)rdf32(self + 0x24u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)rd32(sp0 + 4u)));
        wrf32(sp0 + 4u, (float)d70);
        wr32(sp0 - 0x10u, (uint32_t)(int16_t)t68);
        d71 = (double)(float)fr(g, (double)rdf32(self + 0x30u) - fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t66 * d64) + (double)rdf32(self + 0x28u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)(uint32_t)(int16_t)t68));
        wrf32(sp0 - 0x14u, (float)d71);
        g->edx = (uint32_t)(int16_t)t68;
        g->esp = sp0 - 0x28u;
        t72 = cow_call_regs(g, COW_IMG(0x10014cf0u), t67, g->ecx, g->edx, 1, 0);
        t73 = g->edx;
        d74 = cow_take_float(g);
        d75 = fr(g, d74 * (double)rdf32(COW_IMG(0x10329a08u)));
        if ((cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10329d38u)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10329d38u)), 1u) & 0x4100u;
            edx = t73;
            x0 = d75;
        }
        else
        {
            eax = cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10329d38u)), 1u) & 0x4100u;
            edx = t73;
            x0 = d75;
            x0 = (double)rdf32(COW_IMG(0x10329d38u));
        }
        d76 = fr(g, (double)rdf32(sp0 + 4u) * x0);
        wrf32(sp0 + 4u, (float)d76);
        d77 = (double)(float)fr(g, x0 * (double)rdf32(sp0 - 0x14u));
        wrf32(sp0 - 0x14u, (float)d77);
        d78 = (double)rdf32(self + 0x58u);
        d79 = (double)rdf32(sp0 + 4u);
        d80 = fr(g, d78 + d78);
        if ((cow_fsw(g, d79, d80, 1u) & 0x4100u) == 0u)
        {
            loc_14_f = d77;
            x0 = fr(g, d78 + d78);
            goto L_101ef38d;
        }
        eax = cow_fsw(g, d79, d80, 1u) & 0x4100u;
        loc_14_f = d77;
        x0 = fr(g, d78 + d78);
        if ((cow_fsw(g, loc_14_f, x0, 0u) & 0x4100u) != 0u) goto L_101ef3ab;
L_101ef38f: ;
        d81 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 + 4u, (float)d81);
        d82 = (double)(float)fr(g, loc_14_f * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x14u, (float)d82);
        loc_14_f = d82;
L_101ef3ab: ;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, cow_f2bits(loc_14_f));
        t83 = rd32(sp0 + 4u);
        wr32(sp0 - 0x34u, t83);
        g->ebx = ebx;
        g->ebp = ebp;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t84 = cow_call_regs(g, COW_IMG(0x101edaf0u), cow_f2bits(loc_14_f), self, g->edx, 0, 3, t83, cow_f2bits(loc_14_f), 0u);
        t85 = g->ecx;
        t86 = g->edx;
        d87 = fr(g, (double)rdf32(sp0 - 8u) - (double)rdf32(self + 0x24u));
        d88 = fr(g, (double)rdf32(sp0 - 0xcu) - (double)rdf32(self + 0x28u));
        d89 = (double)(float)fr(g, fr(g, d87 * d87) + fr(g, d88 * d88));
        wrf32(sp0 - 8u, (float)d89);
        g->edx = t86;
        t90 = cow_call_regs(g, COW_IMG(0x10014cf0u), t84, g->ecx, g->edx, 1, 0);
        t91 = g->edx;
        d92 = cow_take_float(g);
        d93 = fr(g, fr(g, d92 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x10329a34u)));
        d94 = (double)rdf32(sp0 - 8u);
        if ((cow_fsw(g, d93, d94, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d93, d94, 0u) & 0x4100u;
            edx = t91;
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
        else
        {
            t95 = (uint32_t)(int16_t)rd16(self + 0x1cu);
            d96 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u));
            wr32(sp0 + 4u, t95);
            wr32(sp0 - 0x2cu, 0u);
            t97 = (uint32_t)(int16_t)rd16(self + 0x1eu);
            wr32(sp0 - 8u, t97);
            t98 = (uint32_t)(int16_t)rd16(self + 0x6cu);
            t99 = rd16(self + 0x6eu);
            t100 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t98);
            d101 = fr(g, fr(g, (double)rdf32(self + 0x2cu) - fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t100 * d96) + (double)rdf32(self + 0x24u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)rd32(sp0 + 4u))) * (double)rdf32(self + 0x58u));
            wrf32(sp0 + 4u, (float)d101);
            wr32(sp0 - 8u, (uint32_t)(int16_t)t99);
            d102 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x30u) - fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t97 * d96) + (double)rdf32(self + 0x28u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)(uint32_t)(int16_t)t99)) * (double)rdf32(self + 0x58u));
            wrf32(sp0 - 0x14u, (float)d102);
            wr32(sp0 - 0x30u, cow_f2bits(d102));
            t103 = rd32(sp0 + 4u);
            wr32(sp0 - 0x34u, t103);
            g->ebx = ebx;
            g->ebp = ebp;
            g->esp = sp0 - 0x28u;
            t104 = cow_call_regs(g, COW_IMG(0x101edaf0u), cow_f2bits(d102), self, g->edx, 0, 3, t103, cow_f2bits(d102), 0u);
            t105 = g->ecx;
            t106 = (edi & 0xffff0000u) | rd16(self + 0x14u);
            if ((t106 & 0x100u) == 0u)
            {
                eax = t104;
                edi = t106;
            }
            else
            {
                ecx = t105;
                edx = t106 & 0x100u;
                edi = t106;
                t107 = (uint32_t)(int16_t)rd16(self + 0x6cu);
                wr32(sp0 - 8u, t107);
                g->edx = edx;
                d108 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(self + 0x2cu) - (double)(int32_t)t107) - (double)rdf32(self + 0x24u)) * (double)rdf32(self + 0x58u)) + (double)rdf32(COW_IMG(0x10329a08u)));
                fpush(g, d108);
                g->esp = sp0 - 0x28u;
                t109 = cow_call_regs(g, COW_IMG(0x10311c6cu), t107, g->ecx, g->edx, 1, 0);
                t110 = g->edx;
                t111 = (uint32_t)(int16_t)rd16(self + 0x6eu);
                wr32(sp0 - 8u, t111);
                d112 = (double)rdf32(self + 0x30u);
                wr16(self + 0x1cu, (uint16_t)t109);
                d113 = fr(g, fr(g, fr(g, fr(g, d112 - (double)(int32_t)t111) - (double)rdf32(self + 0x28u)) * (double)rdf32(self + 0x58u)) + (double)rdf32(COW_IMG(0x10329a08u)));
                fpush(g, d113);
                t114 = cow_call_regs(g, COW_IMG(0x10311c6cu), t109, g->ecx, g->edx, 1, 0);
                wr16(self + 0x1eu, (uint16_t)t114);
                eax = t114;
            }
            t115 = rd32(self + 8u);
            wr16(self + 0x14u, edi & 0xfff7u);
            wr8(t115 + 0x62u, 1u);
            edx = t115;
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    }
    if (rd16(self + 0xa6u) == 0u)
    {
        if (rd32(self + 0x94u) == 0u)
        {
            eax = rd32(self + 0x94u);
        }
        else
        {
            eax = rd32(self + 0x94u);
            if ((int16_t)rd16(self + 0x7au) > 0)
            {
                ebp = 0u;
                edi = 0u;
L_101ef8ab: ;
                t205 = ebp + rd32(self + 0x94u);
                wr32(sp0 - 0x2cu, t205);
                g->eax = t205;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t206 = cow_thiscall(g, COW_IMG(0x101eef90u), self, 1, t205);
                t207 = g->edx;
                if ((int32_t)(edi + 1u) < (int16_t)rd16(self + 0x7au))
                {
                    edx = t207;
                    ebp = ebp + 0x20u;
                    edi = edi + 1u;
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_28 = rd32(sp0 - 0x28u);
                    goto L_101ef8ab;
                }
                eax = t206;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
        t208 = rd32(self + 0x98u);
        wr32(sp0 - 0x2cu, t208);
        g->edx = t208;
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, COW_IMG(0x101eef90u), self, 1, t208);
        t209 = g->edx;
        if (rd32(self + 0x9cu) == 0u)
        {
            eax = rd32(self + 0x9cu);
            edx = t209;
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
        else
        {
            eax = rd32(self + 0x9cu);
            edx = t209;
            if ((int8_t)rd8(self + 0xa1u) <= 0)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0xa1u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                ebp = 0u;
                edi = 0u;
L_101ef8ed: ;
                t210 = ebp + rd32(self + 0x9cu);
                wr32(sp0 - 0x2cu, t210);
                g->eax = t210;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t211 = cow_thiscall(g, COW_IMG(0x101eef90u), self, 1, t210);
                t212 = g->edx;
                if ((int32_t)(edi + 1u) < (int8_t)rd8(self + 0xa1u))
                {
                    edx = t212;
                    ebp = ebp + 0x20u;
                    edi = edi + 1u;
                    goto L_101ef8ed;
                }
                eax = t211;
                edx = t212;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
    }
    if ((rd16(self + 0x14u) & 0x100u) == 0u)
    {
        edx = rd16(self + 0x14u) & 0x100u;
    }
    else
    {
        edx = rd16(self + 0x14u) & 0x100u;
        if ((uint8_t)ebx != 0u)
        {
            t213 = (uint32_t)(int16_t)rd16(self + 0x1eu);
            wr32(sp0 - 4u, t213);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, sp0 - 8u);
            t214 = (uint32_t)(int16_t)rd16(self + 0x1cu);
            wr32(sp0 - 8u, t214);
            g->edx = sp0 - 8u;
            g->esp = sp0 - 0x28u;
            t215 = cow_call_regs(g, COW_IMG(0x10124700u), t214, rd32(COW_IMG(0x104e1d4cu)), g->edx, 0, 2, sp0 - 8u, 0u);
            t216 = g->edx;
            d217 = (double)rdf32(sp0 + 4u);
            if (d217 != (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (t215 & 0xffff0000u) | (uint16_t)cow_fsw(g, d217, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                edx = t216;
                goto L_101ef963;
            }
            eax = (t215 & 0xffff0000u) | (uint16_t)cow_fsw(g, d217, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            edx = t216;
            d218 = (double)rdf32(sp0 - 0x14u);
            if (d218 == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d218, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
                goto L_101ef970;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d218, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_101ef963: ;
            wr32(sp0 - 0x2cu, 0u);
            g->eax = eax;
            g->esp = sp0 - 0x28u;
            t219 = cow_fastcall(g, COW_IMG(0x101252f0u), rd32(COW_IMG(0x104e1d4cu)), edx, 1, 0u);
            t220 = g->edx;
            eax = t219;
            edx = t220;
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    }
L_101ef970: ;
    if (rd8(sp0 - 0x15u) == 0u)
    {
        ebx = loc_20;
        ebp = loc_24;
        edi = loc_28;
    }
    else
    {
        ebx = loc_20;
        ebp = loc_24;
        edi = loc_28;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(self) + 0x54u), self, 0);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    g->ebx = ebx;
    g->esi = loc_1c;
    g->edi = edi;
    g->ebp = ebp;
    return;
L_101ef2ac: ;
    t58 = rd32(self + 0x68u);
    wr32(sp0 - 0x2cu, t58);
    g->eax = eax;
    g->edx = t58;
    g->esp = sp0 - 0x28u;
    t59 = cow_thiscall(g, COW_IMG(0x101efac0u), self, 1, t58);
    t60 = g->ecx;
    t61 = g->edx;
    eax = t59;
    ecx = t60;
    edx = t61;
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    goto L_101ef2b7;
L_101ef38d: ;
    goto L_101ef38f;
L_101ef69e: ;
    wr32(sp0 - 0x2cu, 0x79u);
    wr32(sp0 - 0x30u, 0x26u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t159 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x26u, 0x79u, loc_28, loc_24);
    t160 = g->ecx;
    t161 = g->edx;
    d162 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)d162);
    wr32(sp0 - 0x34u, 0x7au);
    wr32(sp0 - 0x38u, 0x26u);
    g->edx = t161;
    g->esp = sp0 - 0x28u;
    t163 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t160, 4, 0x26u, 0x7au, 0x26u, 0x79u);
    t164 = g->ecx;
    t165 = g->edx;
    d166 = cow_take_float(g);
    if ((rd16(self + 0x14u) & 0x200u) == 0u)
    {
        eax = t163;
        edx = t165;
        x1 = (double)rdf32(sp0 + 4u);
        x0 = d166;
    }
    else
    {
        eax = t163;
        edx = t165;
        x1 = (double)rdf32(sp0 + 4u);
        x0 = d166;
        x1 = fr(g, x1 + x1);
        x0 = fr(g, x0 + x0);
    }
    d167 = fr(g, x1 * (double)rdf32(COW_IMG(0x1033678cu)));
    wrf32(sp0 + 4u, (float)d167);
    d168 = (double)(float)fr(g, x0 * (double)rdf32(COW_IMG(0x1033678cu)));
    wrf32(sp0 - 0x14u, (float)d168);
    loc_14_f = d168;
L_101ef6e6: ;
    ecx = rd32(COW_IMG(0x10456a7cu));
    goto L_101ef6ec;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ef0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ef0a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
