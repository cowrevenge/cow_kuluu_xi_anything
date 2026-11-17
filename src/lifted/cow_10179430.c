/* f_0x10179430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10179430(Guest* g)
{
    double d104;
    double d105;
    double d106;
    double d110;
    double d113;
    double d116;
    double d118;
    double d119;
    double d120;
    double d121;
    double d122;
    double d130;
    double d131;
    double d132;
    double d133;
    double d136;
    double d138;
    double d27;
    double d28;
    double d29;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d54;
    double d55;
    double d56;
    double d57;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_518;
    uint32_t loc_51c;
    uint32_t loc_520;
    uint32_t loc_524;
    uint32_t loc_528;
    uint32_t loc_530;
    uint32_t loc_534;
    uint32_t loc_538;
    double loc_538_f;
    uint32_t loc_53c;
    double loc_53c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t111;
    uint32_t t112;
    uint32_t t114;
    uint32_t t115;
    uint32_t t117;
    uint32_t t12;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t134;
    uint32_t t135;
    uint32_t t137;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 1376u);

    wr32(sp0 - 0x540u, in_ebx);
    wr32(sp0 - 0x544u, in_ebp);
    wr32(sp0 - 0x548u, in_esi);
    wr32(sp0 - 0x54cu, in_edi);
    wr32(sp0 - 0x52cu, self);
    t1 = rd8(arg1 + 3u);
    wr32(sp0 - 0x528u, t1);
    if ((int32_t)rd8(arg1 + 3u) < 27)
    {
        loc_528 = t1;
    }
    else
    {
        loc_528 = t1;
        t2 = ((rd8(arg1 + 2u) << 8u | rd8(arg1 + 1u)) << 8u | rd8(arg1)) - 8u;
        wr32(sp0 - 0x534u, t2);
        wr32(sp0 - 0x524u, 0u);
        if ((int32_t)t2 <= 0) goto L_101794e3;
        edx = 0u;
        ebx = rd8(COW_IMG(0x10376fefu) - rd8(arg1 + 7u));
        esi = 0u;
        loc_534 = t2;
        loc_524 = 0u;
L_1017948d: ;
        t3 = ebx + edx + 1u;
        wr32(sp0 - 0x518u, t3);
        if (!(ebx & 1u))
        {
            eax = ((uint32_t)((int32_t)(uint8_t)ebx >> 4u) & 7u) + 0x10u;
            edx = edx + 1u;
            ebx = t3;
        }
        else
        {
            eax = ((uint32_t)((int32_t)(uint8_t)ebx >> 4u) & 7u) + 0x10u;
            edx = edx + 1u;
            ebx = t3;
            loc_518 = t3;
            if ((int32_t)(eax + esi) < (int32_t)loc_534)
            {
                if ((int32_t)eax > 0)
                {
                    ecx = 0u;
                    esi = arg1 + esi + 8u;
L_101794bf: ;
                    t4 = rd8(ecx + esi);
                    wr8(ecx + esi, (uint8_t)~t4);
                    if ((int32_t)(ecx + 1u) < (int32_t)eax)
                    {
                        ecx = ecx + 1u;
                        ebx = (ebx & 0xffffff00u) | (uint8_t)~t4;
                        goto L_101794bf;
                    }
                    ebx = loc_518;
                    esi = loc_524;
                }
            }
        }
        wr32(sp0 - 0x524u, eax + esi);
        if ((int32_t)(eax + esi) < (int32_t)loc_534)
        {
            loc_524 = eax + esi;
            esi = eax + esi;
            goto L_1017948d;
        }
    }
L_101794e3: ;
    t5 = rd8(arg1 + 0x1cu);
    wr32(self + rd32(self + 0x38u) * 4u + 0x58u, arg1);
    t6 = self + rd32(self + 0x38u) * 0x78u + 0x60u;
    wr32(sp0 - 0x51cu, t6);
    wr32(t6, t5 + 1u);
    wr32(t6 + 8u, arg1);
    wr32(t6 + 0x5cu, arg2);
    t7 = rd8(arg1 + 0xcu);
    wr32(t6 + 0x10u, t7);
    t8 = rd8(arg1 + 0xdu);
    wr32(t6 + 0x14u, t8);
    t9 = rd8(arg1 + 0xeu);
    wr32(t6 + 0x18u, t9);
    t10 = rd8(arg1 + 0xfu);
    wr32(t6 + 0x1cu, t10);
    t11 = rd32(arg1 + 4u);
    wr32(t6 + 0x64u, 0u);
    wr32(t6 + 0x24u, t11 & 0xffffffu);
    if (rd32(arg1 + 0x18u) == 0u)
    {
        esi = t6;
        loc_51c = t6;
    }
    else
    {
        eax = rd32(arg1 + 0x18u);
        edx = t9;
        esi = t6;
        loc_51c = t6;
        if ((int32_t)loc_528 >= 18)
        {
            wr32(sp0 - 0x550u, arg1 + eax);
            wr32(esi + 0x64u, arg1 + eax);
            g->esp = sp0 - 0x54cu;
            cow_thiscall(g, COW_IMG(0x1017a6d0u), self, 1, arg1 + eax);
            loc_528 = rd32(sp0 - 0x528u);
            loc_51c = rd32(sp0 - 0x51cu);
        }
    }
    wr32(sp0 - 0x550u, 4u);
    wr32(sp0 - 0x530u, arg1 + 0x20u);
    t12 = rd32(esi + 0x24u) * 0x16cu;
    wr32(sp0 - 0x554u, t12);
    g->esp = sp0 - 0x54cu;
    t13 = cow_call_regs(g, COW_IMG(0x10028640u), t12, rd32(esi + 0x24u) * 5u, rd32(esi + 0x24u) * 0x2du, 1, 2, t12, 4u);
    t14 = rd32(esi + 0x24u);
    wr32(esi + 0x28u, t13);
    wr32(sp0 - 0x520u, t13);
    wr32(sp0 - 0x524u, 0u);
    edi = t13;
    eax = 0u;
    ecx = t14 * 0x16cu >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t14 * 0x16cu & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if ((int32_t)rd32(esi + 0x24u) <= 0)
    {
        edx = t14 * 0x16cu;
    }
    else
    {
        loc_520 = t13;
        wr32(sp0 - 0x47cu, 0u);
        wr32(sp0 - 0x478u, 0u);
        wr32(sp0 - 0x474u, 0u);
        wr32(sp0 - 0x470u, 0u);
        wr32(sp0 - 0x468u, 0u);
        wr32(sp0 - 0x464u, 0u);
        wr32(sp0 - 0x460u, 0u);
        wr32(sp0 - 0x45cu, 0u);
        wr32(sp0 - 0x454u, 0u);
        wr32(sp0 - 0x450u, 0u);
        wr32(sp0 - 0x44cu, 0u);
        wr32(sp0 - 0x448u, 0u);
        wr32(sp0 - 0x444u, 0x3f800000u);
        wr32(sp0 - 0x400u, 0x3f800000u);
        wr32(sp0 - 0x3fcu, 0u);
        wr32(sp0 - 0x3f8u, 0u);
        wr32(sp0 - 0x3f4u, 0u);
        wr32(sp0 - 0x3f0u, 0u);
        wr32(sp0 - 0x3e4u, 0u);
        wr32(sp0 - 0x3e0u, 0u);
        wr32(sp0 - 0x3d4u, 0u);
        wr32(sp0 - 0x3d0u, 0u);
        wr32(sp0 - 0x3ccu, 0u);
        wr32(sp0 - 0x3c8u, 0u);
        wr32(sp0 - 0x3c4u, 0x3f800000u);
        wr32(sp0 - 0x37cu, 0u);
        wr32(sp0 - 0x374u, 0u);
        wr32(sp0 - 0x370u, 0u);
        wr32(sp0 - 0x36cu, 0x3f800000u);
        wr32(sp0 - 0x368u, 0u);
        wr32(sp0 - 0x364u, 0u);
        wr32(sp0 - 0x35cu, 0u);
        wr32(sp0 - 0x354u, 0u);
        wr32(sp0 - 0x350u, 0u);
        wr32(sp0 - 0x34cu, 0u);
        wr32(sp0 - 0x348u, 0u);
        wr32(sp0 - 0x344u, 0x3f800000u);
        wr32(sp0 - 0x3b8u, 0u);
        wr32(sp0 - 0x3b4u, 0u);
        wr32(sp0 - 0x3a8u, 0u);
        wr32(sp0 - 0x3a4u, 0u);
        wr32(sp0 - 0x3a0u, 0u);
        wr32(sp0 - 0x39cu, 0u);
        wr32(sp0 - 0x398u, 0x3f800000u);
        wr32(sp0 - 0x394u, 0u);
        wr32(sp0 - 0x390u, 0u);
        wr32(sp0 - 0x38cu, 0u);
        wr32(sp0 - 0x388u, 0u);
        wr32(sp0 - 0x384u, 0x3f800000u);
        wr32(sp0 - 0x2c0u, 0x3f800000u);
        wr32(sp0 - 0x2bcu, 0u);
        wr32(sp0 - 0x2b8u, 0u);
        wr32(sp0 - 0x2b4u, 0u);
        wr32(sp0 - 0x2b0u, 0u);
        wr32(sp0 - 0x2acu, 0x3f800000u);
        wr32(sp0 - 0x2a8u, 0u);
        wr32(sp0 - 0x2a4u, 0u);
        wr32(sp0 - 0x2a0u, 0u);
        wr32(sp0 - 0x29cu, 0u);
        wr32(sp0 - 0x298u, 0x3f800000u);
        wr32(sp0 - 0x294u, 0u);
        wr32(sp0 - 0x284u, 0x3f800000u);
        t15 = rd32(sp0 - 0x530u) + 0x10u;
        wr32(sp0 - 0x534u, t15);
        ebp = loc_520 + 0x3cu;
        loc_524 = 0u;
        loc_534 = t15;
        loc_530 = rd32(sp0 - 0x530u);
L_1017986e: ;
        if ((int32_t)rd32(sp0 - 0x528u) < 27)
        {
            esi = loc_530;
        }
        else
        {
            esi = loc_530;
            eax = 0u;
            ebx = 0u;
L_1017987d: ;
            t16 = rd8(eax + esi);
            wr8(eax + esi, (uint8_t)(t16 ^ 0x55u));
            if ((int32_t)(eax + 1u) < 16)
            {
                eax = eax + 1u;
                ebx = (ebx & 0xffffff00u) | (t16 ^ 0x55u);
                goto L_1017987d;
            }
        }
        wr32(sp0 - 0x550u, esi);
        wr32(sp0 - 0x554u, loc_520);
        t17 = rd32(sp0 - 0x51cu);
        wr32(sp0 - 0x558u, t17);
        g->esp = sp0 - 0x54cu;
        cow_thiscall(g, COW_IMG(0x1017af80u), rd32(sp0 - 0x52cu), 3, t17, loc_520, esi);
        t18 = rd32(sp0 - 0x534u);
        wr32(ebp - 0x20u, rd32(t18));
        t19 = rd32(t18 + 4u);
        wr32(ebp - 0x1cu, t19);
        t20 = rd32(t18 + 8u);
        wr32(ebp - 0x18u, t20);
        t21 = rd32(t18 + 0xcu);
        wr32(ebp - 0x14u, t21);
        t22 = rd32(t18 + 0x10u);
        wr32(ebp - 0x10u, t22);
        t23 = rd32(t18 + 0x14u);
        wr32(ebp - 0xcu, t23);
        t24 = rd32(t18 + 0x18u);
        wr32(ebp - 8u, t24);
        t25 = rd32(t18 + 0x1cu);
        wr32(ebp - 4u, t25);
        t26 = rd32(t18 + 0x20u);
        wr32(ebp, t26);
        d27 = fr(g, (double)rdf32(t18) - (double)rdf32(COW_IMG(0x1033677cu)));
        if (!(d27 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (t26 & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            ecx = t18;
            edx = ebp - 8u;
            ebx = ebp - 8u;
            edi = ebp - 0x14u;
            x0 = d27;
        }
        else
        {
            eax = (t26 & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            ecx = t18;
            edx = ebp - 8u;
            ebx = ebp - 8u;
            edi = ebp - 0x14u;
            x0 = d27;
            x0 = -x0;
        }
        d28 = fr(g, (double)rdf32(ecx + 4u) - (double)rdf32(COW_IMG(0x10336778u)));
        if (!(d28 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            x1 = d28;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            x1 = d28;
            x1 = -x1;
        }
        wrf32(sp0 - 0x53cu, (float)(double)(float)x1);
        d29 = fr(g, (double)rdf32(ecx + 8u) - (double)rdf32(COW_IMG(0x10336774u)));
        if (!(d29 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            loc_53c_f = (double)(float)x1;
            x1 = d29;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            loc_53c_f = (double)(float)x1;
            x1 = d29;
            x1 = -x1;
        }
        wrf32(sp0 - 0x538u, (float)(double)(float)x1);
        if (rd32(rd32(sp0 - 0x52cu) + 0x3cu) == 0xd5u)
        {
            ecx = rd32(sp0 - 0x52cu);
            loc_538_f = (double)(float)x1;
            if (x0 < (double)rdf32(COW_IMG(0x1032a3e0u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u);
                if (loc_53c_f < (double)rdf32(COW_IMG(0x1032a3e0u)))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_53c_f, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u);
                    if (loc_538_f < (double)rdf32(COW_IMG(0x1032a3e0u)))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_538_f, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u);
                        wr32(sp0 - 0x550u, 7u);
                        wr32(sp0 - 0x554u, COW_IMG(0x10377888u));
                        wr32(sp0 - 0x558u, esi);
                        g->eax = eax;
                        g->esp = sp0 - 0x544u;
                        t30 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, COW_IMG(0x10377888u), 7u, rd32(sp0 - 0x54cu), rd32(sp0 - 0x548u));
                        if (t30 == 0u)
                        {
                            wr8(ebp - 0x2eu, 1u);
                        }
                    }
                }
            }
        }
        wr32(sp0 - 0x480u, rd32(ebx));
        t31 = rd32(ebp - 4u);
        wr32(sp0 - 0x46cu, t31);
        wr32(sp0 - 0x458u, rd32(ebp));
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x514u, 0x3f800000u);
        wr32(sp0 - 0x510u, 0u);
        wr32(sp0 - 0x50cu, 0u);
        wr32(sp0 - 0x508u, 0u);
        wr32(sp0 - 0x504u, 0u);
        wr32(sp0 - 0x500u, 0x3f800000u);
        wr32(sp0 - 0x4fcu, 0u);
        wr32(sp0 - 0x4f8u, 0u);
        wr32(sp0 - 0x4f4u, 0u);
        wr32(sp0 - 0x4f0u, 0u);
        wr32(sp0 - 0x4ecu, 0x3f800000u);
        wr32(sp0 - 0x4e8u, 0u);
        wr32(sp0 - 0x4e4u, 0u);
        wr32(sp0 - 0x4e0u, 0u);
        wr32(sp0 - 0x4dcu, 0u);
        wr32(sp0 - 0x4d8u, 0x3f800000u);
        g->esp = sp0 - 0x54cu;
        cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x514u, sp0 - 0x514u, sp0 - 0x480u);
        wr32(sp0 - 0x4d4u, rd32(edi));
        wr32(sp0 - 0x53cu, 0u);
        d32 = (double)(float)fr(g, cos(cow_bits2f(rd32(edi))));
        wrf32(sp0 - 0x3ecu, (float)d32);
        d33 = (double)(float)fr(g, sin(cow_bits2f(rd32(edi))));
        wrf32(sp0 - 0x3e8u, (float)d33);
        d34 = (double)(float)-fr(g, sin(cow_bits2f(rd32(edi))));
        wrf32(sp0 - 0x3dcu, (float)d34);
        d35 = (double)(float)fr(g, cos(cow_bits2f(rd32(edi))));
        wrf32(sp0 - 0x3d8u, (float)d35);
        loc_53c = 0u;
L_10179a80: ;
        wr32(sp0 - 0x538u, 4u);
        ebx = loc_53c + sp0 - 0x514u;
        esi = loc_53c + sp0 - 0x300u;
        edi = sp0 - 0x400u;
        loc_538 = 4u;
L_10179a9e: ;
        d36 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(esi, 0u);
        eax = edi;
        ecx = ebx;
        edx = 4u;
        x0 = d36;
L_10179ab3: ;
        if (edx != 1u)
        {
            edx = edx - 1u;
            x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
            eax = eax + 0x10u;
            ecx = ecx + 4u;
            goto L_10179ab3;
        }
        x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
        wrf32(esi, (float)x0);
        wr32(sp0 - 0x538u, loc_538 - 1u);
        if (loc_538 != 1u)
        {
            esi = esi + 4u;
            edi = edi + 4u;
            loc_538 = loc_538 - 1u;
            goto L_10179a9e;
        }
        wr32(sp0 - 0x53cu, loc_53c + 0x10u);
        if ((int32_t)(loc_53c + 0x10u) < 64)
        {
            loc_53c = loc_53c + 0x10u;
            goto L_10179a80;
        }
        t37 = rd32(sp0 - 0x2fcu);
        wr32(sp0 - 0x510u, t37);
        t38 = rd32(sp0 - 0x2f0u);
        wr32(sp0 - 0x504u, t38);
        t39 = rd32(sp0 - 0x2e4u);
        wr32(sp0 - 0x4f8u, t39);
        t40 = rd32(sp0 - 0x2d8u);
        wr32(sp0 - 0x4ecu, t40);
        t41 = rd32(sp0 - 0x2ccu);
        wr32(sp0 - 0x4e0u, t41);
        t42 = rd32(ebp - 0x10u);
        wr32(sp0 - 0x4d0u, t42);
        t43 = rd32(sp0 - 0x300u);
        wr32(sp0 - 0x514u, t43);
        t44 = rd32(sp0 - 0x2f8u);
        wr32(sp0 - 0x50cu, t44);
        t45 = rd32(sp0 - 0x2f4u);
        wr32(sp0 - 0x508u, t45);
        t46 = rd32(sp0 - 0x2ecu);
        wr32(sp0 - 0x500u, t46);
        t47 = rd32(sp0 - 0x2e8u);
        wr32(sp0 - 0x4fcu, t47);
        t48 = rd32(sp0 - 0x2e0u);
        wr32(sp0 - 0x4f4u, t48);
        t49 = rd32(sp0 - 0x2dcu);
        wr32(sp0 - 0x4f0u, t49);
        t50 = rd32(sp0 - 0x2d4u);
        wr32(sp0 - 0x4e8u, t50);
        t51 = rd32(sp0 - 0x2d0u);
        wr32(sp0 - 0x4e4u, t51);
        t52 = rd32(sp0 - 0x2c8u);
        wr32(sp0 - 0x4dcu, t52);
        t53 = rd32(sp0 - 0x2c4u);
        wr32(sp0 - 0x4d8u, t53);
        wr32(sp0 - 0x53cu, 0u);
        d54 = (double)(float)fr(g, cos(cow_bits2f(t42)));
        wrf32(sp0 - 0x380u, (float)d54);
        d55 = fr(g, sin(cow_bits2f(t42)));
        wrf32(sp0 - 0x378u, (float)(double)(float)-d55);
        wrf32(sp0 - 0x360u, (float)(double)(float)d55);
        d56 = (double)(float)fr(g, cos(cow_bits2f(t42)));
        wrf32(sp0 - 0x358u, (float)d56);
        loc_53c = 0u;
L_10179bd0: ;
        wr32(sp0 - 0x538u, 4u);
        ebx = loc_53c + sp0 - 0x514u;
        esi = loc_53c + sp0 - 0x440u;
        edi = sp0 - 0x380u;
        loc_538 = 4u;
L_10179bee: ;
        d57 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(esi, 0u);
        eax = edi;
        ecx = ebx;
        edx = 4u;
        x0 = d57;
L_10179c03: ;
        if (edx != 1u)
        {
            edx = edx - 1u;
            x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
            eax = eax + 0x10u;
            ecx = ecx + 4u;
            goto L_10179c03;
        }
        x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
        wrf32(esi, (float)x0);
        wr32(sp0 - 0x538u, loc_538 - 1u);
        if (loc_538 != 1u)
        {
            esi = esi + 4u;
            edi = edi + 4u;
            loc_538 = loc_538 - 1u;
            goto L_10179bee;
        }
        wr32(sp0 - 0x53cu, loc_53c + 0x10u);
        if ((int32_t)(loc_53c + 0x10u) < 64)
        {
            loc_53c = loc_53c + 0x10u;
            goto L_10179bd0;
        }
        t58 = rd32(sp0 - 0x43cu);
        wr32(sp0 - 0x510u, t58);
        t59 = rd32(sp0 - 0x430u);
        wr32(sp0 - 0x504u, t59);
        t60 = rd32(sp0 - 0x424u);
        wr32(sp0 - 0x4f8u, t60);
        t61 = rd32(sp0 - 0x418u);
        wr32(sp0 - 0x4ecu, t61);
        t62 = rd32(sp0 - 0x40cu);
        wr32(sp0 - 0x4e0u, t62);
        t63 = rd32(ebp - 0xcu);
        wr32(sp0 - 0x4c8u, t63);
        t64 = rd32(sp0 - 0x440u);
        wr32(sp0 - 0x514u, t64);
        t65 = rd32(sp0 - 0x438u);
        wr32(sp0 - 0x50cu, t65);
        t66 = rd32(sp0 - 0x434u);
        wr32(sp0 - 0x508u, t66);
        t67 = rd32(sp0 - 0x42cu);
        wr32(sp0 - 0x500u, t67);
        t68 = rd32(sp0 - 0x428u);
        wr32(sp0 - 0x4fcu, t68);
        t69 = rd32(sp0 - 0x420u);
        wr32(sp0 - 0x4f4u, t69);
        t70 = rd32(sp0 - 0x41cu);
        wr32(sp0 - 0x4f0u, t70);
        t71 = rd32(sp0 - 0x414u);
        wr32(sp0 - 0x4e8u, t71);
        t72 = rd32(sp0 - 0x410u);
        wr32(sp0 - 0x4e4u, t72);
        t73 = rd32(sp0 - 0x408u);
        wr32(sp0 - 0x4dcu, t73);
        t74 = rd32(sp0 - 0x404u);
        wr32(sp0 - 0x4d8u, t74);
        wr32(sp0 - 0x53cu, 0u);
        d75 = (double)(float)fr(g, cos(cow_bits2f(t63)));
        wrf32(sp0 - 0x3c0u, (float)d75);
        d76 = (double)(float)fr(g, sin(cow_bits2f(t63)));
        wrf32(sp0 - 0x3bcu, (float)d76);
        d77 = (double)(float)-fr(g, sin(cow_bits2f(t63)));
        wrf32(sp0 - 0x3b0u, (float)d77);
        d78 = (double)(float)fr(g, cos(cow_bits2f(t63)));
        wrf32(sp0 - 0x3acu, (float)d78);
        loc_53c = 0u;
L_10179d27: ;
        wr32(sp0 - 0x538u, 4u);
        ebx = loc_53c + sp0 - 0x514u;
        esi = loc_53c + sp0 - 0x340u;
        edi = sp0 - 0x3c0u;
        loc_538 = 4u;
L_10179d45: ;
        d79 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(esi, 0u);
        eax = edi;
        ecx = ebx;
        edx = 4u;
        x0 = d79;
L_10179d5a: ;
        if (edx != 1u)
        {
            edx = edx - 1u;
            x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
            eax = eax + 0x10u;
            ecx = ecx + 4u;
            goto L_10179d5a;
        }
        x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
        wrf32(esi, (float)x0);
        wr32(sp0 - 0x538u, loc_538 - 1u);
        if (loc_538 != 1u)
        {
            esi = esi + 4u;
            edi = edi + 4u;
            loc_538 = loc_538 - 1u;
            goto L_10179d45;
        }
        wr32(sp0 - 0x53cu, loc_53c + 0x10u);
        if ((int32_t)(loc_53c + 0x10u) < 64)
        {
            loc_53c = loc_53c + 0x10u;
            goto L_10179d27;
        }
        t80 = rd32(sp0 - 0x340u);
        wr32(sp0 - 0x514u, t80);
        t81 = rd32(sp0 - 0x33cu);
        wr32(sp0 - 0x510u, t81);
        t82 = rd32(sp0 - 0x338u);
        wr32(sp0 - 0x50cu, t82);
        t83 = rd32(sp0 - 0x334u);
        wr32(sp0 - 0x508u, t83);
        t84 = rd32(sp0 - 0x330u);
        wr32(sp0 - 0x504u, t84);
        t85 = rd32(sp0 - 0x32cu);
        wr32(sp0 - 0x500u, t85);
        t86 = rd32(sp0 - 0x328u);
        wr32(sp0 - 0x4fcu, t86);
        t87 = rd32(sp0 - 0x324u);
        wr32(sp0 - 0x4f8u, t87);
        t88 = rd32(sp0 - 0x320u);
        wr32(sp0 - 0x4f4u, t88);
        t89 = rd32(sp0 - 0x31cu);
        wr32(sp0 - 0x4f0u, t89);
        t90 = rd32(sp0 - 0x318u);
        wr32(sp0 - 0x4ecu, t90);
        t91 = rd32(sp0 - 0x314u);
        wr32(sp0 - 0x4e8u, t91);
        t92 = rd32(sp0 - 0x310u);
        wr32(sp0 - 0x4e4u, t92);
        t93 = rd32(sp0 - 0x30cu);
        wr32(sp0 - 0x4e0u, t93);
        t94 = rd32(sp0 - 0x308u);
        wr32(sp0 - 0x4dcu, t94);
        t95 = rd32(sp0 - 0x304u);
        wr32(sp0 - 0x4d8u, t95);
        t96 = rd32(ebp - 0x20u);
        wr32(sp0 - 0x290u, t96);
        t97 = rd32(ebp - 0x1cu);
        wr32(sp0 - 0x28cu, t97);
        t98 = rd32(ebp - 0x18u);
        wr32(sp0 - 0x288u, t98);
        wr32(sp0 - 0x550u, sp0 - 0x2c0u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x558u, ebp + 4u);
        g->eax = sp0 - 0x514u;
        g->esp = sp0 - 0x54cu;
        t99 = cow_cdecl(g, COW_IMG(0x1016c060u), 3, ebp + 4u, sp0 - 0x514u, sp0 - 0x2c0u);
        t100 = rd32(sp0 - 0x52cu);
        t101 = rd32(sp0 - 0x520u);
        wr32(ebp + 0x120u, 0u);
        wr16(ebp + 0x118u, 0u);
        wr32(sp0 - 0x550u, t101);
        wr32(ebp + 0x11cu, 0u);
        wr32(ebp + 0x124u, 0u);
        g->ecx = t100;
        g->edx = t101;
        cow_stdcall(g, COW_IMG(0x1017a710u), 1, t101);
        t102 = g->ecx;
        t103 = g->edx;
        wr32(sp0 - 0x488u, 0u);
        wr32(sp0 - 0x48cu, 0u);
        wr32(sp0 - 0x490u, 0u);
        wr32(sp0 - 0x494u, 0u);
        wr32(sp0 - 0x49cu, 0u);
        wr32(sp0 - 0x4a0u, 0u);
        wr32(sp0 - 0x4a4u, 0u);
        wr32(sp0 - 0x4a8u, 0u);
        wr32(sp0 - 0x4b0u, 0u);
        wr32(sp0 - 0x4b4u, 0u);
        wr32(sp0 - 0x4b8u, 0u);
        wr32(sp0 - 0x4bcu, 0u);
        wr32(sp0 - 0x484u, 0x3f800000u);
        wr32(sp0 - 0x498u, 0x3f800000u);
        wr32(sp0 - 0x4acu, 0x3f800000u);
        wr32(sp0 - 0x4c0u, 0x3f800000u);
        d104 = (double)(float)-(double)rdf32(ebp - 0x18u);
        wrf32(sp0 - 0x550u, (float)d104);
        d105 = (double)(float)-(double)rdf32(ebp - 0x1cu);
        wrf32(sp0 - 0x554u, (float)d105);
        d106 = (double)(float)-(double)rdf32(ebp - 0x20u);
        wrf32(sp0 - 0x558u, (float)d106);
        wr32(sp0 - 0x55cu, sp0 - 0x200u);
        g->eax = sp0 - 0x200u;
        g->ecx = t102;
        g->edx = t103;
        t107 = cow_stdcall(g, COW_IMG(0x102d79c3u), 4, sp0 - 0x200u, cow_f2bits(d106), cow_f2bits(d105), cow_f2bits(d104));
        t108 = g->ecx;
        t109 = g->edx;
        wr32(sp0 - 0x550u, t108);
        d110 = (double)(float)-(double)rdf32(ebp - 0xcu);
        wrf32(sp0 - 0x550u, (float)d110);
        wr32(sp0 - 0x554u, sp0 - 0x100u);
        g->ecx = sp0 - 0x100u;
        t111 = cow_stdcall(g, COW_IMG(0x102d7b9fu), 2, sp0 - 0x100u, cow_f2bits(d110));
        t112 = g->ecx;
        wr32(sp0 - 0x550u, t112);
        d113 = (double)(float)-(double)rdf32(ebp - 0x10u);
        wrf32(sp0 - 0x550u, (float)d113);
        wr32(sp0 - 0x554u, sp0 - 0x80u);
        g->ecx = t112;
        g->edx = sp0 - 0x80u;
        cow_stdcall(g, COW_IMG(0x102d7b02u), 2, sp0 - 0x80u, cow_f2bits(d113));
        t114 = g->ecx;
        t115 = g->edx;
        wr32(sp0 - 0x550u, t114);
        d116 = (double)(float)-(double)rdf32(ebp - 0x14u);
        wrf32(sp0 - 0x550u, (float)d116);
        wr32(sp0 - 0x554u, sp0 - 0x1c0u);
        g->eax = sp0 - 0x1c0u;
        t117 = cow_stdcall(g, COW_IMG(0x102d7a66u), 2, sp0 - 0x1c0u, cow_f2bits(d116));
        d118 = (double)rdf32(ebp - 8u);
        if (d118 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (t117 & 0xffff0000u) | (uint16_t)cow_fsw(g, d118, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            wr32(sp0 - 0x518u, 0x3f800000u);
        }
        else
        {
            eax = (t117 & 0xffff0000u) | (uint16_t)cow_fsw(g, d118, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            d119 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(ebp - 8u));
            wrf32(sp0 - 0x518u, (float)d119);
        }
        d120 = (double)rdf32(ebp - 4u);
        if (d120 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d120, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            wr32(sp0 - 0x4c4u, 0x3f800000u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d120, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            d121 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(ebp - 4u));
            wrf32(sp0 - 0x4c4u, (float)d121);
        }
        if ((double)rdf32(ebp) == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            wr32(sp0 - 0x4ccu, 0x3f800000u);
        }
        else
        {
            d122 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(ebp));
            wrf32(sp0 - 0x4ccu, (float)d122);
        }
        t123 = rd32(sp0 - 0x4ccu);
        wr32(sp0 - 0x550u, t123);
        t124 = rd32(sp0 - 0x4c4u);
        wr32(sp0 - 0x554u, t124);
        t125 = rd32(sp0 - 0x518u);
        wr32(sp0 - 0x558u, t125);
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        g->esp = sp0 - 0x54cu;
        cow_stdcall(g, COW_IMG(0x102d7913u), 4, sp0 - 0xc0u, t125, t124, t123);
        wr32(sp0 - 0x550u, sp0 - 0x200u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x558u, sp0 - 0x280u);
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x280u, sp0 - 0x4c0u, sp0 - 0x200u);
        esi = sp0 - 0x280u;
        edi = sp0 - 0x4c0u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x550u, sp0 - 0x100u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x558u, sp0 - 0x180u);
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x180u, sp0 - 0x4c0u, sp0 - 0x100u);
        esi = sp0 - 0x180u;
        edi = sp0 - 0x4c0u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x550u, sp0 - 0x80u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x558u, sp0 - 0x240u);
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x240u, sp0 - 0x4c0u, sp0 - 0x80u);
        esi = sp0 - 0x240u;
        edi = sp0 - 0x4c0u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x550u, sp0 - 0x1c0u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x558u, sp0 - 0x140u);
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x140u, sp0 - 0x4c0u, sp0 - 0x1c0u);
        esi = sp0 - 0x140u;
        edi = sp0 - 0x4c0u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        g->edx = sp0 - 0xc0u;
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x40u, sp0 - 0x4c0u, sp0 - 0xc0u);
        t126 = g->edx;
        wr8(ebp - 0x34u, 2u);
        esi = sp0 - 0x40u;
        edi = ebp + 0x44u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t127 = rd32(sp0 - 0x534u);
        t128 = rd8(rd32(sp0 - 0x534u) + 0x37u);
        wr8(ebp - 0x2fu, (uint8_t)t128);
        t129 = rd32(t127 + 0x24u);
        wr32(ebp + 0x84u, t129);
        d130 = (double)rdf32(t127 + 0x28u);
        wrf32(ebp + 0x8cu, (float)fr(g, d130 * d130));
        d131 = (double)rdf32(t127 + 0x28u);
        d132 = (double)rdf32(t127 + 0x2cu);
        if ((cow_fsw(g, d131, d132, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d131, d132, 0u) & 0x4100u;
            ecx = t127;
            edx = (t126 & 0xffffff00u) | t128;
            x0 = (double)rdf32(ecx + 0x2cu);
        }
        else
        {
            eax = cow_fsw(g, d131, d132, 0u) & 0x4100u;
            ecx = t127;
            edx = (t126 & 0xffffff00u) | t128;
            x0 = (double)rdf32(ecx + 0x28u);
        }
        wrf32(ebp + 0x90u, (float)fr(g, x0 * x0));
        d133 = (double)rdf32(ecx + 0x30u);
        wrf32(ebp + 0x94u, (float)fr(g, d133 * d133));
        t134 = rd8(ecx + 0x34u);
        wr8(ebp - 0x33u, (uint8_t)t134);
        t135 = rd8(ecx + 0x35u);
        d136 = fr(g, (double)rdf32(ebp - 8u) * (double)rdf32(ebp));
        wr8(ebp - 0x32u, (uint8_t)t135);
        wr8(ebp - 0x31u, rd8(ecx + 0x36u) & 1u);
        t137 = rd8(ecx + 0x36u);
        d138 = (double)rdf32(COW_IMG(0x103295d8u));
        wr16(ebp + 0x98u, 0u);
        wr8(ebp - 0x2du, t137 >> 2u & 1u);
        if (d136 < d138)
        {
            wr16(ebp + 0x98u, 1u);
        }
        if (rd32(ecx + 0x38u) == 0u)
        {
            wr32(ebp + 0x9cu, 0u);
        }
        else
        {
            eax = rd32(ecx + 0x38u);
            wr32(ebp + 0x9cu, arg1 + eax);
        }
        t139 = rd32(ecx + 0x3cu);
        wr32(ebp + 0xa0u, t139);
        if ((int32_t)rd32(sp0 - 0x528u) < 18)
        {
            wr32(ebp + 0xa8u, 0u);
            wr32(ebp + 0xacu, 0u);
            wr32(ebp + 0xb0u, 0u);
            wr32(ebp + 0xb4u, 0u);
        }
        else
        {
            t140 = rd32(ecx + 0x44u);
            wr32(ebp + 0xa8u, t140);
            t141 = rd32(ecx + 0x48u);
            wr32(ebp + 0xacu, t141);
            t142 = rd32(ecx + 0x4cu);
            wr32(ebp + 0xb0u, t142);
            t143 = rd32(ecx + 0x50u);
            wr32(ebp + 0xb4u, t143);
        }
        t144 = rd32(ecx + 0x40u);
        t145 = rd32(sp0 - 0x524u);
        t146 = rd32(sp0 - 0x520u);
        wr32(ebp + 0x88u, t144);
        wr32(sp0 - 0x534u, ecx + 0x64u);
        t147 = rd32(sp0 - 0x530u) + 0x64u;
        wr32(sp0 - 0x530u, t147);
        wr32(sp0 - 0x524u, t145 + 1u);
        wr32(sp0 - 0x520u, t146 + 0x16cu);
        if ((int32_t)(t145 + 1u) < (int32_t)rd32(rd32(sp0 - 0x51cu) + 0x24u))
        {
            ebp = ebp + 0x16cu;
            loc_520 = t146 + 0x16cu;
            loc_524 = t145 + 1u;
            loc_534 = ecx + 0x64u;
            loc_530 = t147;
            goto L_1017986e;
        }
        edx = rd32(rd32(sp0 - 0x51cu) + 0x24u);
    }
    if ((int32_t)rd32(sp0 - 0x528u) < 21)
    {
        eax = rd32(arg1 + 0x14u);
        ebx = rd32(sp0 - 0x52cu);
        esi = rd32(sp0 - 0x51cu);
        wr32(esi + 0x30u, arg1 + eax);
        t155 = rd32(arg1 + 0x10u);
        t156 = rd32(arg1 + 0x10u);
        wr32(esi + 0x2cu, t155);
        wr32(esi + 0x34u, t156 != 0u);
        wr32(esi + 0x38u, 0u);
        eax = t155;
    }
    else
    {
        eax = rd32(arg1 + 0x14u);
        ebx = rd32(sp0 - 0x52cu);
        esi = rd32(sp0 - 0x51cu);
        t148 = arg1 + eax + 4u;
        wr32(esi + 0x30u, t148);
        t149 = rd32(arg1 + eax);
        t150 = rd32(arg1 + eax);
        wr32(esi + 0x2cu, t149);
        wr32(esi + 0x34u, t150 != 0u);
        t151 = arg1 + rd32(arg1 + 0x10u);
        wr32(sp0 - 0x550u, t151);
        wr32(sp0 - 0x554u, arg1);
        wr32(sp0 - 0x558u, esi);
        t152 = rd32(arg1 + 0x10u);
        wr32(esi + 0x38u, t151);
        g->eax = t151;
        g->esp = sp0 - 0x54cu;
        t153 = cow_fastcall(g, COW_IMG(0x1017c820u), ebx, t152, 3, esi, arg1, t151);
        t154 = g->edx;
        eax = t153;
        edx = t154;
    }
    wr32(sp0 - 0x550u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54cu;
    t157 = cow_stdcall(g, COW_IMG(0x1017af30u), 1, esi);
    t158 = g->edx;
    wr32(sp0 - 0x550u, esi);
    g->edx = t158;
    t159 = cow_stdcall(g, COW_IMG(0x1017a950u), 1, esi);
    t160 = g->edx;
    wr32(sp0 - 0x550u, esi);
    t161 = cow_fastcall(g, COW_IMG(0x10186b80u), ebx, t160, 1, esi);
    t162 = g->edx;
    g->edx = t162;
    t163 = cow_thiscall(g, COW_IMG(0x1017a630u), ebx, 0);
    t164 = g->edx;
    g->edx = t164;
    t165 = cow_thiscall(g, COW_IMG(0x10170fd0u), esi + 0x44u, 0);
    t166 = g->edx;
    wr32(esi + 0x74u, t165);
    if (rd32(ebx + 0x154u) != 0u)
    {
        eax = rd32(arg1 + 8u);
        edx = t166;
        if (eax != 0u)
        {
            wr32(esi + 0xcu, arg1 + eax);
            t175 = rd32(ebx + 0x48u);
            wr32(sp0 - 0x550u, t175);
            g->eax = arg1 + eax;
            g->esp = sp0 - 0x54cu;
            t176 = cow_thiscall(g, COW_IMG(0x1017a5e0u), ebx, 1, t175);
            wr32(esi + 0x34u, t176 != 0u);
            if (t176 == 0u)
            {
                edx = t176 != 0u;
                eax = 0u;
            }
            else
            {
                eax = t176;
                edx = t176 != 0u;
                eax = rd32(eax + 0xd8u);
            }
            wr32(sp0 - 0x550u, eax);
            wr32(sp0 - 0x554u, COW_IMG(0x1065c4d8u));
            wr32(sp0 - 0x558u, esi);
            g->esp = sp0 - 0x54cu;
            cow_thiscall(g, COW_IMG(0x10167be0u), ebx + 0x178u, 3, esi, COW_IMG(0x1065c4d8u), eax);
        }
    }
    else
    {
        eax = rd32(arg1 + 8u);
        edx = t166;
        if (eax != 0u)
        {
            wr32(esi + 0xcu, arg1 + eax);
            t167 = (edx & 0xffffff00u) | rd8(arg1 + 0x1du);
            wr32(sp0 - 0x550u, t167);
            t168 = rd32(sp0 - 0x528u);
            wr32(sp0 - 0x554u, t168);
            wr32(sp0 - 0x558u, COW_IMG(0x1065c4d8u));
            wr32(sp0 - 0x55cu, esi);
            g->esp = sp0 - 0x54cu;
            t169 = cow_call_regs(g, COW_IMG(0x10167f50u), t168, ebx + 0x178u, t167, 0, 4, esi, COW_IMG(0x1065c4d8u), t168, t167);
            t170 = g->edx;
            g->edx = t170;
            t171 = cow_stdcall(g, COW_IMG(0x10173990u), 0);
            t172 = g->edx;
            if (t171 == 0u) goto L_1017a351;
            eax = t171;
            edx = t172;
            ebp = ebx + 0x178u;
            esi = t171;
L_1017a343: ;
            wr32(sp0 - 0x550u, esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x54cu;
            t173 = cow_thiscall(g, COW_IMG(0x10167ad0u), ebp, 1, esi);
            t174 = g->edx;
            if (rd32(esi) != 0u)
            {
                eax = t173;
                edx = t174;
                esi = rd32(esi);
                goto L_1017a343;
            }
L_1017a351: ;
            wr32(ebx + 0x154u, 1u);
        }
    }
    t177 = rd32(ebx + 0x38u) + 1u;
    t178 = rd32(ebx + 0x38u);
    wr32(ebx + 0x38u, t177);
    if ((int32_t)(t178 + 1u) >= 0)
    {
        eax = t177;
        goto L_1017a3b6;
    }
    t179 = rd32(sp0 - 0x548u);
    t180 = rd32(sp0 - 0x54cu);
    wr32(ebx + 0x38u, 0u);
    g->ebx = rd32(sp0 - 0x540u);
    g->esi = t179;
    g->edi = t180;
    g->ebp = rd32(sp0 - 0x544u);
    return;
L_1017a3b6: ;
    if ((int32_t)eax > 1)
    {
        eax = 1u;
    }
    t181 = rd32(sp0 - 0x548u);
    t182 = rd32(sp0 - 0x54cu);
    wr32(ebx + 0x38u, eax);
    g->ebx = rd32(sp0 - 0x540u);
    g->esi = t181;
    g->edi = t182;
    g->ebp = rd32(sp0 - 0x544u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10179430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10179430(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
