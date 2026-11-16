/* f_0x1002f1d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1002f1d0(Guest* g)
{
    double d100;
    double d101;
    double d102;
    double d103;
    double d130;
    double d131;
    double d132;
    double d133;
    double d134;
    double d135;
    double d136;
    double d137;
    double d138;
    double d139;
    double d140;
    double d141;
    double d142;
    double d143;
    double d144;
    double d145;
    double d146;
    double d147;
    double d148;
    double d149;
    double d150;
    double d151;
    double d152;
    double d153;
    double d154;
    double d155;
    double d156;
    double d157;
    double d158;
    double d159;
    double d160;
    double d161;
    double d162;
    double d163;
    double d164;
    double d167;
    double d168;
    double d169;
    double d170;
    double d171;
    double d172;
    double d173;
    double d174;
    double d175;
    double d176;
    double d177;
    double d178;
    double d179;
    double d180;
    double d181;
    double d182;
    double d183;
    double d184;
    double d185;
    double d186;
    double d187;
    double d188;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    double d58;
    double d59;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d69;
    double d70;
    double d71;
    double d72;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    double d88;
    double d89;
    double d90;
    double d91;
    double d92;
    double d93;
    double d94;
    double d95;
    double d96;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_6c;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t165;
    uint32_t t166;
    uint32_t t17;
    uint32_t t18;
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
    uint32_t t263;
    uint32_t t264;
    uint32_t t265;
    uint32_t t266;
    uint32_t t267;
    uint32_t t268;
    uint32_t t269;
    uint32_t t27;
    uint32_t t270;
    uint32_t t271;
    uint32_t t272;
    uint32_t t273;
    uint32_t t274;
    uint32_t t275;
    uint32_t t276;
    uint32_t t277;
    uint32_t t278;
    uint32_t t279;
    uint32_t t28;
    uint32_t t280;
    uint32_t t281;
    uint32_t t282;
    uint32_t t283;
    uint32_t t284;
    uint32_t t285;
    uint32_t t286;
    uint32_t t287;
    uint32_t t288;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 124u);

    wr32(sp0 - 4u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x1000d680u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u) goto L_1002f1ed;
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x1000d6b0u), 0);
    if ((uint8_t)t4 != 0u) goto L_1002f1ed;
    esi = rd32(sp0 - 4u);
    wr32(sp0 - 0x64u, in_ebx);
    wr32(sp0 - 0x68u, in_ebp);
    wr32(sp0 - 0x6cu, esi);
    wr32(sp0 - 0x70u, in_edi);
    wr32(sp0 - 0x5cu, self);
    t5 = rd32(self + 0x5eu);
    wr32(sp0 - 0x44u, t5);
    t6 = rd32(self + 0x48u);
    wr32(sp0 - 0x30u, t6);
    t7 = t6 + rd16(rd32(self + 0x42u)) * 4u;
    wr32(sp0 - 0x40u, t7);
    t8 = rd32(t5 + 0x6eu);
    wr32(sp0 - 0x2cu, t8);
    if (rd32(COW_IMG(0x1045b774u)) == 0u)
    {
        ecx = t6;
        edx = t5;
        edi = t8 + rd16(rd32(self + 0x42u)) * 0x18u;
        loc_6c = esi;
        esi = rd32(COW_IMG(0x1045b774u));
        loc_44 = t5;
        loc_30 = t6;
        loc_40 = t7;
        loc_2c = t8;
        goto L_1002f293;
    }
    edx = t5;
    loc_6c = esi;
    esi = rd32(COW_IMG(0x1045b774u));
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, COW_IMG(0x1032a7dcu));
    wr32(sp0 - 0xcu, 0u);
    t9 = rd16(COW_IMG(0x1045b61au)) + rd32(edx + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
    wr32(sp0 - 8u, t9);
    wr32(sp0 - 0x74u, sp0 - 0x14u);
    g->eax = rd32(esi);
    g->edx = (uint16_t)rd32(COW_IMG(0x1045b618u));
    t10 = rd32(esi);
    t11 = rd32(COW_IMG(0x1045b618u));
    g->esp = sp0 - 0x70u;
    t12 = cow_thiscall(g, rd32(t10 + 0x1cu), esi, 1, sp0 - 0x14u);
    t13 = g->edx;
    cow_fastcall(g, COW_IMG(0x10030fb0u), rd32(COW_IMG(0x1045b774u)), t13, 0);
    g->esi = rd32(sp0 - 0x6cu);
    return;
L_1002f1ed: ;
    if (rd8(self + 0x34u) & 1u) goto L_100300bb;
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    t189 = rd32(self + 0x48u);
    wr32(sp0 - 0xcu, t189);
    t190 = rd32(self + 0x5eu);
    wr32(sp0 - 0x14u, t190);
    t191 = t189 + rd16(rd32(self + 0x42u)) * 4u;
    wr32(sp0 - 0x10u, t191);
    t192 = rd32(rd32(self + 0x5eu) + 0x6eu);
    wr32(sp0 - 4u, t192);
    t193 = t192 + rd16(rd32(self + 0x42u)) * 0x18u;
    wr32(sp0 - 8u, t193);
    t194 = rd32(t190 + 0x92u);
    wr32(sp0 - 0x1cu, t194);
    if ((uint16_t)rd32(COW_IMG(0x1045b618u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1045b618u));
        edx = t190;
        ebx = t191;
        loc_4 = t192;
        loc_c = t189;
        loc_14 = t190;
        loc_10 = t191;
        loc_8 = t193;
    }
    else
    {
        eax = rd32(t190 + 0x8eu);
        ebx = t191;
        edi = t192;
        loc_4 = t192;
        loc_c = t189;
        loc_14 = t190;
        loc_10 = t191;
        loc_8 = t193;
        loc_1c = t194;
        wr32(sp0 - 0x18u, edi);
        wr32(sp0 - 0x1cu, loc_1c - eax);
        ecx = loc_1c - eax;
        esi = 0u;
        loc_1c = loc_1c - eax;
        loc_18 = edi;
        edi = eax;
L_10030124: ;
        if ((int8_t)rd8(self + 0x32u) >= 0)
        {
            eax = rd16(esi * 4u + loc_c) & 0x7fu;
        }
        else
        {
            eax = rd16(esi * 4u + loc_c) & 0x7fu;
            t195 = rd16(eax * 2u + rd32(self + 0x3cu));
            eax = t195;
        }
        wr32(sp0 - 0x30u, edi + loc_1c);
        wr32(sp0 - 0x34u, edi);
        wr32(sp0 - 0x38u, loc_18);
        t196 = eax * 0x40u + rd32(COW_IMG(0x10457550u));
        wr32(sp0 - 0x3cu, t196);
        g->cf = eax >> 0x1cu & 1u;
        g->pf = PARITY((uint8_t)(eax << 4u));
        g->af = (loc_1c ^ edi ^ edi + loc_1c) >> 4u & 1u;
        g->zf = eax << 4u == 0u;
        g->sf = (int32_t)(eax << 4u) < 0;
        g->of = eax << 4u >> 0x1fu ^ (eax >> 0x1cu & 1u);
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x100309b0u), 4, t196, loc_18, edi, edi + loc_1c);
        t197 = rd32(sp0 - 0x18u) + 0x18u;
        wr32(sp0 - 0x18u, t197);
        if ((int32_t)(esi + 1u) < (int32_t)(uint16_t)rd32(COW_IMG(0x1045b618u)))
        {
            ecx = rd32(COW_IMG(0x1045b618u));
            esi = esi + 1u;
            edi = edi + 0xcu;
            loc_18 = t197;
            goto L_10030124;
        }
        ecx = rd32(COW_IMG(0x1045b618u));
        edx = rd32(sp0 - 0x14u);
    }
    t198 = (uint16_t)ecx * 0xcu + rd32(edx + 0x92u);
    wr32(sp0 - 0x1cu, t198);
    if (rd16(COW_IMG(0x1045b61au)) == 0u)
    {
        eax = ((uint16_t)ecx * 0xcu & 0xffff0000u) | rd16(COW_IMG(0x1045b61au));
    }
    else
    {
        edi = (uint16_t)ecx * 0xcu + rd32(edx + 0x8eu);
        loc_1c = t198;
        wr32(sp0 - 0x18u, loc_8);
        wr32(sp0 - 0x1cu, loc_1c - edi);
        eax = loc_1c - edi;
        esi = 0u;
        loc_1c = loc_1c - edi;
        loc_18 = loc_8;
L_100301cd: ;
        if ((int8_t)rd8(self + 0x32u) >= 0)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x32u);
            ecx = rd32(self + 0x3cu);
            eax = rd8(ebx + esi * 4u) & 0x7fu;
            ecx = rd8(ebx + esi * 4u + 2u) & 0x7fu;
        }
        else
        {
            ecx = rd32(self + 0x3cu);
            t199 = rd16(ecx + (rd8(ebx + esi * 4u + 2u) & 0x7fu) * 2u);
            eax = rd16(ecx + (rd8(ebx + esi * 4u) & 0x7fu) * 2u);
            ecx = t199;
            ebx = loc_10;
        }
        wr32(sp0 - 0x30u, edi + loc_1c);
        wr32(sp0 - 0x34u, edi);
        wr32(sp0 - 0x38u, loc_18);
        t200 = ecx * 0x40u + rd32(COW_IMG(0x10457550u));
        wr32(sp0 - 0x3cu, t200);
        t201 = eax * 0x40u + rd32(COW_IMG(0x10457550u));
        wr32(sp0 - 0x40u, t201);
        g->cf = eax >> 0x1cu & 1u;
        g->pf = PARITY((uint8_t)(eax << 4u));
        g->af = (loc_1c ^ edi ^ edi + loc_1c) >> 4u & 1u;
        g->zf = eax << 4u == 0u;
        g->sf = (int32_t)(eax << 4u) < 0;
        g->of = eax << 4u >> 0x1fu ^ (eax >> 0x1cu & 1u);
        g->edx = t201;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x10030a40u), 5, t201, t200, loc_18, edi, edi + loc_1c);
        t202 = g->edx;
        t203 = rd32(sp0 - 0x18u) + 0x38u;
        wr32(sp0 - 0x18u, t203);
        if ((int32_t)(esi + 1u) < (int32_t)rd16(COW_IMG(0x1045b61au)))
        {
            eax = (t203 & 0xffff0000u) | rd16(COW_IMG(0x1045b61au));
            edx = t202;
            esi = esi + 1u;
            edi = edi + 0xcu;
            loc_18 = t203;
            goto L_100301cd;
        }
        eax = (t203 & 0xffff0000u) | rd16(COW_IMG(0x1045b61au));
        ecx = rd32(COW_IMG(0x1045b618u));
        edx = rd32(sp0 - 0x14u);
    }
    wr32(sp0 - 0x10u, 0u);
    if ((int32_t)rd32(edx + 0x60u) > 0)
    {
        esi = (uint16_t)eax * 0xcu + (uint16_t)ecx * 0xcu + rd32(edx + 0x8eu);
        edi = (uint16_t)eax * 0xcu + (uint16_t)ecx * 0xcu + rd32(edx + 0x92u);
        wr32(sp0 - 0x18u, esi);
        wr32(sp0 - 0x1cu, edi - esi);
        loc_10 = 0u;
        loc_1c = edi - esi;
        edi = edi - esi;
        loc_18 = esi;
L_100302a6: ;
        if ((int32_t)rd16(loc_10 * 2u + rd32(edx + 0x5cu)) >= (int32_t)(uint16_t)ecx)
        {
            eax = rd16(loc_10 * 2u + rd32(edx + 0x5cu));
            ecx = (uint16_t)ecx;
            edx = rd32(edx + 0x5cu);
            if ((int8_t)rd8(self + 0x32u) >= 0)
            {
                t207 = eax;
                eax = t207 - ecx;
                ecx = (ecx & 0xffffff00u) | rd8(ebx + t207 * 4u - ecx * 4u);
                ecx = ecx & 0x7fu;
                edx = rd8(eax * 4u + ebx + 2u) & 0x7fu;
            }
            else
            {
                esi = rd32(self + 0x3cu);
                t208 = eax;
                eax = t208 - ecx;
                ecx = (ecx & 0xffffff00u) | rd8(ebx + t208 * 4u - ecx * 4u);
                t209 = rd16(esi + (ecx & 0x7fu) * 2u);
                t210 = rd16(esi + (rd8(eax * 4u + ebx + 2u) & 0x7fu) * 2u);
                ecx = t209;
                edx = t210;
                edi = loc_1c;
            }
            wr32(sp0 - 0x30u, edi + loc_18);
            wr32(sp0 - 0x34u, loc_18);
            t211 = eax * 0x38u + loc_8;
            wr32(sp0 - 0x38u, t211);
            t212 = edx * 0x40u + rd32(COW_IMG(0x10457550u));
            wr32(sp0 - 0x3cu, t212);
            t213 = ecx * 0x40u + rd32(COW_IMG(0x10457550u));
            wr32(sp0 - 0x40u, t213);
            g->cf = ecx >> 0x1cu & 1u;
            g->pf = PARITY((uint8_t)(ecx << 4u));
            g->af = (eax * 8u ^ eax ^ eax * 8u - eax) >> 4u & 1u;
            g->zf = ecx << 4u == 0u;
            g->sf = (int32_t)(ecx << 4u) < 0;
            g->of = ecx << 4u >> 0x1fu ^ (ecx >> 0x1cu & 1u);
            g->esp = sp0 - 0x2cu;
            cow_cdecl(g, COW_IMG(0x10030a40u), 5, t213, t212, t211, loc_18, edi + loc_18);
            edi = rd32(sp0 - 0x1cu);
        }
        else
        {
            eax = rd16(loc_10 * 2u + rd32(edx + 0x5cu));
            if ((int8_t)rd8(self + 0x32u) >= 0)
            {
                ecx = rd16(eax * 4u + loc_c) & 0x7fu;
            }
            else
            {
                ecx = rd16(eax * 4u + loc_c) & 0x7fu;
                t204 = rd16(ecx * 2u + rd32(self + 0x3cu));
                ecx = t204;
            }
            wr32(sp0 - 0x30u, edi + loc_18);
            wr32(sp0 - 0x34u, loc_18);
            t205 = eax * 0x18u + loc_4;
            wr32(sp0 - 0x38u, t205);
            t206 = ecx * 0x40u + rd32(COW_IMG(0x10457550u));
            wr32(sp0 - 0x3cu, t206);
            g->cf = ecx >> 0x1cu & 1u;
            g->pf = PARITY((uint8_t)(ecx << 4u));
            g->af = 0u;
            g->zf = ecx << 4u == 0u;
            g->sf = (int32_t)(ecx << 4u) < 0;
            g->of = ecx << 4u >> 0x1fu ^ (ecx >> 0x1cu & 1u);
            g->esp = sp0 - 0x2cu;
            cow_cdecl(g, COW_IMG(0x100309b0u), 4, t206, t205, loc_18, edi + loc_18);
        }
        t214 = rd32(sp0 - 0x10u) + 1u;
        wr32(sp0 - 0x10u, t214);
        t215 = rd32(sp0 - 0x18u) + 0xcu;
        wr32(sp0 - 0x18u, t215);
        if ((int32_t)(rd32(sp0 - 0x10u) + 1u) < (int32_t)rd32(rd32(sp0 - 0x14u) + 0x60u))
        {
            loc_10 = t214;
            loc_18 = t215;
            goto L_1003029c;
        }
    }
    return;
L_1002f293: ;
    t14 = rd32(edx + 0x8eu);
    wr32(sp0 - 0x58u, t14);
    t15 = rd32(edx + 0x92u);
    wr32(sp0 - 0x54u, t15);
    t16 = rd32(edx + 0x96u);
    wr32(sp0 - 0x48u, t16);
    t17 = rd32(loc_44 + 0x9au);
    wr32(sp0 - 0x50u, t17);
    wr32(sp0 - 0x3cu, 0u);
    if (rd16(COW_IMG(0x1045b618u)) == 0u)
    {
        ebx = t16;
        esi = 0xffffffffu;
        loc_58 = t14;
        loc_54 = t15;
        loc_48 = t16;
        loc_50 = t17;
    }
    else
    {
        ebx = t16;
        loc_58 = t14;
        loc_54 = t15;
        loc_50 = t17;
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x48u, loc_2c);
        esi = 0xffffffffu;
        loc_48 = loc_2c;
        loc_3c = 0u;
        loc_38 = 0u;
L_1002f2ea: ;
        t18 = rd16(ecx + loc_3c * 4u);
        wr32(sp0 - 0x28u, t18);
        t19 = rd32(self + 0x3cu);
        wr32(sp0 - 0x34u, t19);
        t20 = rd16(self + 0x32u);
        wr16(sp0 - 0x5eu, t20 & 0x80u);
        if ((t20 & 0x80u) == 0u)
        {
            eax = t18;
            loc_34 = t19;
            t22 = (eax & 0x7fu) << 4u;
            wr32(sp0 - 0x4cu, t22);
            ecx = t22;
            loc_4c = t22;
        }
        else
        {
            eax = t18;
            loc_28 = t18;
            loc_34 = t19;
            t21 = rd16(loc_34 + (eax & 0x7fu) * 2u) << 4u;
            wr32(sp0 - 0x4cu, t21);
            eax = loc_28;
            ecx = t21;
            loc_4c = t21;
        }
        if (rd8(self + 0x34u) & 1u)
        {
            if (rd16(sp0 - 0x5eu) == 0u)
            {
                t23 = eax >> 3u & 0x7f0u;
                esi = t23;
            }
            else
            {
                esi = rd16(loc_34 + (eax >> 7u & 0x7fu) * 2u) << 4u;
            }
        }
        wr32(sp0 - 0x74u, loc_48);
        wr32(sp0 - 0x78u, loc_58);
        g->esp = sp0 - 0x70u;
        cow_thiscall(g, COW_IMG(0x10028230u), ecx * 4u + rd32(COW_IMG(0x10457550u)), 2, loc_58, loc_48);
        t24 = rd32(sp0 - 0x48u) + 0xcu;
        wr32(sp0 - 0x74u, t24);
        t25 = rd32(sp0 - 0x54u);
        wr32(sp0 - 0x78u, t25);
        cow_thiscall(g, COW_IMG(0x100282c0u), rd32(COW_IMG(0x10457550u)) + rd32(sp0 - 0x4cu) * 4u, 2, t25, t24);
        t26 = rd32(sp0 - 0x58u) + 0xcu;
        wr32(sp0 - 0x58u, t26);
        t27 = rd32(sp0 - 0x54u) + 0xcu;
        wr32(sp0 - 0x54u, t27);
        if (!(rd8(self + 0x34u) & 1u))
        {
            loc_58 = t26;
            loc_54 = t27;
        }
        else
        {
            loc_58 = t26;
            loc_54 = t27;
            t28 = rd32(sp0 - 0x38u) + rd32(rd32(sp0 - 0x44u) + 0x76u);
            wr32(sp0 - 0x74u, t28);
            wr32(sp0 - 0x78u, ebx);
            wr32(sp0 - 0x28u, t28);
            g->esp = sp0 - 0x70u;
            cow_thiscall(g, COW_IMG(0x10028230u), esi * 4u + rd32(COW_IMG(0x10457550u)), 2, ebx, t28);
            t29 = rd32(sp0 - 0x28u) + 0xcu;
            wr32(sp0 - 0x74u, t29);
            t30 = rd32(sp0 - 0x50u);
            wr32(sp0 - 0x78u, t30);
            cow_thiscall(g, COW_IMG(0x100282c0u), esi * 4u + rd32(COW_IMG(0x10457550u)), 2, t30, t29);
            t31 = rd32(sp0 - 0x50u) + 0xcu;
            wr32(sp0 - 0x50u, t31);
            ebx = ebx + 0xcu;
            loc_50 = t31;
        }
        t32 = rd32(sp0 - 0x38u) + 0x18u;
        wr32(sp0 - 0x38u, t32);
        t33 = rd32(sp0 - 0x48u) + 0x18u;
        wr32(sp0 - 0x48u, t33);
        t34 = rd32(sp0 - 0x3cu) + 1u;
        wr32(sp0 - 0x3cu, t34);
        if ((int32_t)t34 < (int32_t)(uint16_t)rd32(COW_IMG(0x1045b618u)))
        {
            loc_38 = t32;
            loc_48 = t33;
            loc_3c = t34;
            goto L_1002f2e6;
        }
        wr32(sp0 - 0x48u, ebx);
        loc_48 = ebx;
    }
    wr32(sp0 - 0x3cu, 0u);
    if (rd16(COW_IMG(0x1045b61au)) == 0u)
    {
        ebp = 0xffffffffu;
    }
    else
    {
        wr32(sp0 - 0x34u, 0xffffffecu - edi);
        eax = 0u;
        ecx = edi + 0x14u;
        ebp = 0xffffffffu;
        loc_3c = 0u;
        loc_34 = 0xffffffecu - edi;
L_1002f467: ;
        t35 = rd16(self + 0x32u);
        wr16(sp0 - 0x5eu, t35 & 0x80u);
        if ((t35 & 0x80u) == 0u)
        {
            ebx = loc_40;
            t40 = rd16(eax * 4u + ebx);
            wr32(sp0 - 0x38u, t40);
            t41 = (t40 & 0x7fu) << 4u;
            wr32(sp0 - 0x4cu, t41);
            t42 = rd16(eax * 4u + ebx + 2u);
            eax = t42 & 0x7fu;
            edx = t42;
            loc_38 = t40;
            loc_4c = t41;
        }
        else
        {
            ebx = loc_40;
            t36 = rd16(eax * 4u + ebx);
            wr32(sp0 - 0x38u, t36);
            t37 = rd16((t36 & 0x7fu) * 2u + rd32(self + 0x3cu));
            wr32(sp0 - 0x4cu, t37 << 4u);
            t38 = rd16(loc_3c * 4u + loc_40 + 2u);
            wr32(sp0 - 0x28u, t38);
            t39 = rd16((t38 & 0x7fu) * 2u + rd32(self + 0x3cu));
            eax = t39;
            edx = t38;
            loc_38 = t36;
            loc_4c = t37 << 4u;
        }
        if (!(rd8(self + 0x34u) & 1u))
        {
            eax = eax << 4u;
        }
        else
        {
            eax = eax << 4u;
            if (rd16(sp0 - 0x5eu) == 0u)
            {
                esi = loc_38;
                t44 = edx >> 3u & 0x7f0u;
                ebp = t44;
                esi = esi >> 3u & 0x7f0u;
            }
            else
            {
                esi = loc_38;
                t43 = rd16(rd32(self + 0x3cu) + (esi >> 7u & 0x7fu) * 2u);
                ebp = rd16(rd32(self + 0x3cu) + (edx >> 7u & 0x7fu) * 2u) << 4u;
                esi = t43 << 4u;
            }
        }
        d45 = (double)(float)(double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)));
        wrf32(sp0 - 0x24u, (float)d45);
        d46 = (double)(float)(double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x10u);
        wrf32(sp0 - 0x20u, (float)d46);
        d47 = (double)(float)(double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x20u);
        wrf32(sp0 - 0x1cu, (float)d47);
        d48 = (double)rdf32(loc_4c * 4u + rd32(COW_IMG(0x10457550u)) + 0x20u);
        d49 = (double)rdf32(loc_4c * 4u + rd32(COW_IMG(0x10457550u)) + 0x10u);
        d50 = (double)rdf32(loc_4c * 4u + rd32(COW_IMG(0x10457550u)));
        d51 = fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x30u) * (double)rdf32(ecx + 8u)) + fr(g, d46 * (double)rdf32(ecx - 8u))) + fr(g, d45 * (double)rdf32(ecx - 0x10u))) + fr(g, d47 * (double)rdf32(ecx))) + fr(g, fr(g, fr(g, fr(g, (double)rdf32(loc_4c * 4u + rd32(COW_IMG(0x10457550u)) + 0x30u) * (double)rdf32(ecx + 4u)) + fr(g, d48 * (double)rdf32(ecx - 4u))) + fr(g, d49 * (double)rdf32(ecx - 0xcu))) + fr(g, d50 * (double)rdf32(ecx - 0x14u))));
        wrf32(loc_58, (float)d51);
        d52 = fr(g, fr(g, fr(g, fr(g, d47 * (double)rdf32(ecx + 0x20u)) + fr(g, d46 * (double)rdf32(ecx + 0x18u))) + fr(g, d45 * (double)rdf32(ecx + 0x10u))) + fr(g, fr(g, fr(g, d48 * (double)rdf32(ecx + 0x1cu)) + fr(g, d49 * (double)rdf32(ecx + 0x14u))) + fr(g, d50 * (double)rdf32(ecx + 0xcu))));
        wrf32(loc_54, (float)d52);
        d53 = (double)(float)(double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 4u);
        wrf32(sp0 - 0x24u, (float)d53);
        d54 = (double)(float)(double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x14u);
        wrf32(sp0 - 0x20u, (float)d54);
        d55 = (double)(float)(double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x24u);
        wrf32(sp0 - 0x1cu, (float)d55);
        d56 = (double)rdf32(loc_4c * 4u + rd32(COW_IMG(0x10457550u)) + 0x24u);
        d57 = (double)rdf32(loc_4c * 4u + rd32(COW_IMG(0x10457550u)) + 0x14u);
        d58 = (double)rdf32(loc_4c * 4u + rd32(COW_IMG(0x10457550u)) + 4u);
        d59 = fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x34u) * (double)rdf32(ecx + 8u)) + fr(g, d54 * (double)rdf32(ecx - 8u))) + fr(g, d53 * (double)rdf32(ecx - 0x10u))) + fr(g, d55 * (double)rdf32(ecx))) + fr(g, fr(g, fr(g, fr(g, (double)rdf32(loc_4c * 4u + rd32(COW_IMG(0x10457550u)) + 0x34u) * (double)rdf32(ecx + 4u)) + fr(g, d56 * (double)rdf32(ecx - 4u))) + fr(g, d57 * (double)rdf32(ecx - 0xcu))) + fr(g, d58 * (double)rdf32(ecx - 0x14u))));
        wrf32(loc_58 + 4u, (float)d59);
        d60 = fr(g, fr(g, fr(g, fr(g, d55 * (double)rdf32(ecx + 0x20u)) + fr(g, d54 * (double)rdf32(ecx + 0x18u))) + fr(g, d53 * (double)rdf32(ecx + 0x10u))) + fr(g, fr(g, fr(g, d56 * (double)rdf32(ecx + 0x1cu)) + fr(g, d57 * (double)rdf32(ecx + 0x14u))) + fr(g, d58 * (double)rdf32(ecx + 0xcu))));
        wrf32(loc_54 + 4u, (float)d60);
        d61 = (double)(float)(double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 8u);
        wrf32(sp0 - 0x24u, (float)d61);
        d62 = (double)(float)(double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x18u);
        wrf32(sp0 - 0x20u, (float)d62);
        d63 = (double)(float)(double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x28u);
        wrf32(sp0 - 0x1cu, (float)d63);
        d64 = (double)rdf32(loc_4c * 4u + rd32(COW_IMG(0x10457550u)) + 0x28u);
        d65 = (double)rdf32(loc_4c * 4u + rd32(COW_IMG(0x10457550u)) + 0x18u);
        d66 = (double)rdf32(loc_4c * 4u + rd32(COW_IMG(0x10457550u)) + 8u);
        d67 = fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x38u) * (double)rdf32(ecx + 8u)) + fr(g, d62 * (double)rdf32(ecx - 8u))) + fr(g, d61 * (double)rdf32(ecx - 0x10u))) + fr(g, d63 * (double)rdf32(ecx))) + fr(g, fr(g, fr(g, fr(g, (double)rdf32(loc_4c * 4u + rd32(COW_IMG(0x10457550u)) + 0x38u) * (double)rdf32(ecx + 4u)) + fr(g, d64 * (double)rdf32(ecx - 4u))) + fr(g, d65 * (double)rdf32(ecx - 0xcu))) + fr(g, d66 * (double)rdf32(ecx - 0x14u))));
        wrf32(loc_58 + 8u, (float)d67);
        wr32(sp0 - 0x58u, loc_58 + 0xcu);
        wr32(sp0 - 0x54u, loc_54 + 0xcu);
        d68 = fr(g, fr(g, fr(g, fr(g, d63 * (double)rdf32(ecx + 0x20u)) + fr(g, d62 * (double)rdf32(ecx + 0x18u))) + fr(g, d61 * (double)rdf32(ecx + 0x10u))) + fr(g, fr(g, fr(g, d64 * (double)rdf32(ecx + 0x1cu)) + fr(g, d65 * (double)rdf32(ecx + 0x14u))) + fr(g, d66 * (double)rdf32(ecx + 0xcu))));
        wrf32(loc_54 + 8u, (float)d68);
        if (!(rd8(self + 0x34u) & 1u))
        {
            loc_58 = loc_58 + 0xcu;
            loc_54 = loc_54 + 0xcu;
            ebx = loc_48;
        }
        else
        {
            loc_58 = loc_58 + 0xcu;
            loc_54 = loc_54 + 0xcu;
            d69 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)));
            wrf32(sp0 - 0x14u, (float)d69);
            d70 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x10u);
            wrf32(sp0 - 0x10u, (float)d70);
            d71 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x20u);
            wrf32(sp0 - 0xcu, (float)d71);
            d72 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)));
            d73 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x10u);
            d74 = fr(g, fr(g, fr(g, d72 * (double)rdf32(ecx + loc_34 + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u)) + fr(g, d73 * (double)rdf32(ecx + loc_34 + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 8u))) + fr(g, (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x30u) * (double)rdf32(ecx + loc_34 + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 0x18u)));
            d75 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x20u);
            d76 = fr(g, fr(g, fr(g, d69 * (double)rdf32(ecx + loc_34 + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 4u)) + fr(g, d70 * (double)rdf32(ecx + loc_34 + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 0xcu))) + fr(g, (double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x30u) * (double)rdf32(ecx + loc_34 + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 0x1cu)));
            d77 = fr(g, fr(g, d74 + fr(g, d75 * (double)rdf32(ecx + loc_34 + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 0x10u))) + fr(g, d76 + fr(g, d71 * (double)rdf32(ecx + loc_34 + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 0x14u))));
            t78 = rd32(loc_44 + 0x76u);
            t79 = rd32(COW_IMG(0x1045b618u));
            wrf32(loc_48, (float)d77);
            d80 = fr(g, fr(g, fr(g, d69 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x24u)) + fr(g, d71 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x34u))) + fr(g, d70 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x2cu)));
            d81 = fr(g, fr(g, fr(g, d72 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x20u)) + fr(g, d75 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x30u))) + fr(g, d73 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x28u)));
            wrf32(loc_50, (float)fr(g, d80 + d81));
            d82 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 4u);
            wrf32(sp0 - 0x14u, (float)d82);
            d83 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x14u);
            wrf32(sp0 - 0x10u, (float)d83);
            d84 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x24u);
            wrf32(sp0 - 0xcu, (float)d84);
            d85 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 4u);
            d86 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x14u);
            d87 = fr(g, fr(g, fr(g, d85 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u)) + fr(g, d86 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 8u))) + fr(g, (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x34u) * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x18u)));
            d88 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x24u);
            d89 = fr(g, fr(g, fr(g, d82 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 4u)) + fr(g, d83 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0xcu))) + fr(g, (double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x34u) * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x1cu)));
            d90 = fr(g, fr(g, d87 + fr(g, d88 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x10u))) + fr(g, d89 + fr(g, d84 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x14u))));
            wrf32(loc_48 + 4u, (float)d90);
            d91 = fr(g, fr(g, fr(g, d82 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x24u)) + fr(g, d84 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x34u))) + fr(g, d83 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x2cu)));
            d92 = fr(g, fr(g, fr(g, d85 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x20u)) + fr(g, d88 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x30u))) + fr(g, d86 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x28u)));
            wrf32(loc_50 + 4u, (float)fr(g, d91 + d92));
            d93 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 8u);
            wrf32(sp0 - 0x14u, (float)d93);
            d94 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x18u);
            wrf32(sp0 - 0x10u, (float)d94);
            d95 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x28u);
            wrf32(sp0 - 0xcu, (float)d95);
            d96 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 8u);
            d97 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x18u);
            d98 = fr(g, fr(g, fr(g, d96 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u)) + fr(g, d97 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 8u))) + fr(g, (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x38u) * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x18u)));
            d99 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x28u);
            d100 = fr(g, fr(g, fr(g, d93 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 4u)) + fr(g, d94 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0xcu))) + fr(g, (double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x38u) * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x1cu)));
            wr32(sp0 - 0x48u, loc_48 + 0xcu);
            d101 = fr(g, fr(g, d98 + fr(g, d99 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x10u))) + fr(g, d100 + fr(g, d95 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x14u))));
            wrf32(loc_48 + 8u, (float)d101);
            d102 = fr(g, fr(g, fr(g, d93 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x24u)) + fr(g, d95 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x34u))) + fr(g, d94 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x2cu)));
            d103 = fr(g, fr(g, fr(g, d96 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x20u)) + fr(g, d99 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x30u))) + fr(g, d97 * (double)rdf32(ecx + loc_34 + t78 + (uint16_t)t79 * 0x18u + 0x28u)));
            wr32(sp0 - 0x50u, loc_50 + 0xcu);
            wrf32(loc_50 + 8u, (float)fr(g, d102 + d103));
            ebx = loc_48 + 0xcu;
            loc_48 = loc_48 + 0xcu;
            loc_50 = loc_50 + 0xcu;
        }
        wr32(sp0 - 0x3cu, loc_3c + 1u);
        if ((int32_t)(loc_3c + 1u) < (int32_t)rd16(COW_IMG(0x1045b61au)))
        {
            eax = loc_3c + 1u;
            ecx = ecx + 0x38u;
            loc_3c = loc_3c + 1u;
            goto L_1002f467;
        }
    }
    wr32(sp0 - 0x34u, 0u);
    if ((int32_t)rd32(loc_44 + 0x60u) <= 0) goto L_1003007e;
    loc_34 = 0u;
L_1002f9a8: ;
    t104 = rd16(loc_34 * 2u + rd32(loc_44 + 0x5cu));
    wr32(sp0 - 0x3cu, t104);
    if ((int32_t)t104 >= (int32_t)(uint16_t)rd32(COW_IMG(0x1045b618u)))
    {
        eax = (uint16_t)rd32(COW_IMG(0x1045b618u));
        ecx = t104;
        wr32(sp0 - 0x3cu, ecx - eax);
        t120 = rd32(self + 0x3cu);
        wr32(sp0 - 0x4cu, t120);
        t121 = rd16(self + 0x32u);
        wr16(sp0 - 0x5eu, t121 & 0x80u);
        if ((t121 & 0x80u) == 0u)
        {
            loc_3c = ecx - eax;
            ecx = ecx - eax;
            loc_4c = t120;
            t126 = rd16(ecx * 4u + loc_40);
            wr32(sp0 - 0x38u, t126);
            t127 = rd16(ecx * 4u + loc_40 + 2u);
            eax = t126 & 0x7fu;
            edx = t127 & 0x7fu;
            ebx = t127;
            loc_38 = t126;
        }
        else
        {
            edx = t120;
            loc_3c = ecx - eax;
            ecx = ecx - eax;
            loc_4c = t120;
            t122 = rd16(ecx * 4u + loc_40);
            wr32(sp0 - 0x38u, t122);
            t123 = rd16(edx + (t122 & 0x7fu) * 2u);
            t124 = rd16(ecx * 4u + loc_40 + 2u);
            wr32(sp0 - 0x28u, t124);
            t125 = rd16(loc_4c + (t124 & 0x7fu) * 2u);
            eax = t123;
            edx = t125;
            ebx = t124;
            loc_38 = t122;
        }
        if (!(rd8(self + 0x34u) & 1u))
        {
            eax = eax << 4u;
            edx = edx << 4u;
        }
        else
        {
            eax = eax << 4u;
            edx = edx << 4u;
            if (rd16(sp0 - 0x5eu) == 0u)
            {
                t129 = ebx >> 3u & 0x7f0u;
                ebp = t129;
                esi = loc_38 >> 3u & 0x7f0u;
            }
            else
            {
                t128 = rd16(loc_4c + (ebx >> 7u & 0x7fu) * 2u);
                ebp = t128 << 4u;
                esi = rd16(loc_4c + (loc_38 >> 7u & 0x7fu) * 2u) << 4u;
            }
        }
        d130 = (double)(float)(double)rdf32(edx * 4u + rd32(COW_IMG(0x10457550u)));
        wrf32(sp0 - 0x14u, (float)d130);
        d131 = (double)(float)(double)rdf32(edx * 4u + rd32(COW_IMG(0x10457550u)) + 0x10u);
        wrf32(sp0 - 0x10u, (float)d131);
        d132 = (double)(float)(double)rdf32(edx * 4u + rd32(COW_IMG(0x10457550u)) + 0x20u);
        wrf32(sp0 - 0xcu, (float)d132);
        d133 = fr(g, fr(g, fr(g, fr(g, d130 * (double)rdf32(edi + loc_3c * 0x38u + 4u)) + fr(g, (double)rdf32(edx * 4u + rd32(COW_IMG(0x10457550u)) + 0x30u) * (double)rdf32(edi + loc_3c * 0x38u + 0x1cu))) + fr(g, d132 * (double)rdf32(edi + loc_3c * 0x38u + 0x14u))) + fr(g, d131 * (double)rdf32(edi + loc_3c * 0x38u + 0xcu)));
        d134 = (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)));
        d135 = (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x20u);
        d136 = (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x10u);
        d137 = fr(g, fr(g, fr(g, fr(g, d134 * (double)rdf32(edi + loc_3c * 0x38u)) + fr(g, (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x30u) * (double)rdf32(edi + loc_3c * 0x38u + 0x18u))) + fr(g, d135 * (double)rdf32(edi + loc_3c * 0x38u + 0x10u))) + fr(g, d136 * (double)rdf32(edi + loc_3c * 0x38u + 8u)));
        wrf32(loc_58, (float)fr(g, d133 + d137));
        d138 = fr(g, fr(g, fr(g, fr(g, d135 * (double)rdf32(edi + loc_3c * 0x38u + 0x30u)) + fr(g, d136 * (double)rdf32(edi + loc_3c * 0x38u + 0x28u))) + fr(g, d134 * (double)rdf32(edi + loc_3c * 0x38u + 0x20u))) + fr(g, fr(g, fr(g, d130 * (double)rdf32(edi + loc_3c * 0x38u + 0x24u)) + fr(g, d132 * (double)rdf32(edi + loc_3c * 0x38u + 0x34u))) + fr(g, d131 * (double)rdf32(edi + loc_3c * 0x38u + 0x2cu))));
        wrf32(loc_54, (float)d138);
        d139 = (double)(float)(double)rdf32(edx * 4u + rd32(COW_IMG(0x10457550u)) + 4u);
        wrf32(sp0 - 0x14u, (float)d139);
        d140 = (double)(float)(double)rdf32(edx * 4u + rd32(COW_IMG(0x10457550u)) + 0x14u);
        wrf32(sp0 - 0x10u, (float)d140);
        d141 = (double)(float)(double)rdf32(edx * 4u + rd32(COW_IMG(0x10457550u)) + 0x24u);
        wrf32(sp0 - 0xcu, (float)d141);
        d142 = fr(g, fr(g, fr(g, fr(g, d139 * (double)rdf32(edi + loc_3c * 0x38u + 4u)) + fr(g, (double)rdf32(edx * 4u + rd32(COW_IMG(0x10457550u)) + 0x34u) * (double)rdf32(edi + loc_3c * 0x38u + 0x1cu))) + fr(g, d141 * (double)rdf32(edi + loc_3c * 0x38u + 0x14u))) + fr(g, d140 * (double)rdf32(edi + loc_3c * 0x38u + 0xcu)));
        d143 = (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 4u);
        d144 = (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x24u);
        d145 = (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x14u);
        d146 = fr(g, fr(g, fr(g, fr(g, d143 * (double)rdf32(edi + loc_3c * 0x38u)) + fr(g, (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x34u) * (double)rdf32(edi + loc_3c * 0x38u + 0x18u))) + fr(g, d144 * (double)rdf32(edi + loc_3c * 0x38u + 0x10u))) + fr(g, d145 * (double)rdf32(edi + loc_3c * 0x38u + 8u)));
        wrf32(loc_58 + 4u, (float)fr(g, d142 + d146));
        d147 = fr(g, fr(g, fr(g, fr(g, d144 * (double)rdf32(edi + loc_3c * 0x38u + 0x30u)) + fr(g, d145 * (double)rdf32(edi + loc_3c * 0x38u + 0x28u))) + fr(g, d143 * (double)rdf32(edi + loc_3c * 0x38u + 0x20u))) + fr(g, fr(g, fr(g, d139 * (double)rdf32(edi + loc_3c * 0x38u + 0x24u)) + fr(g, d141 * (double)rdf32(edi + loc_3c * 0x38u + 0x34u))) + fr(g, d140 * (double)rdf32(edi + loc_3c * 0x38u + 0x2cu))));
        wrf32(loc_54 + 4u, (float)d147);
        d148 = (double)(float)(double)rdf32(edx * 4u + rd32(COW_IMG(0x10457550u)) + 8u);
        wrf32(sp0 - 0x14u, (float)d148);
        d149 = (double)(float)(double)rdf32(edx * 4u + rd32(COW_IMG(0x10457550u)) + 0x18u);
        wrf32(sp0 - 0x10u, (float)d149);
        d150 = (double)(float)(double)rdf32(edx * 4u + rd32(COW_IMG(0x10457550u)) + 0x28u);
        wrf32(sp0 - 0xcu, (float)d150);
        d151 = fr(g, fr(g, fr(g, fr(g, d148 * (double)rdf32(edi + loc_3c * 0x38u + 4u)) + fr(g, (double)rdf32(edx * 4u + rd32(COW_IMG(0x10457550u)) + 0x38u) * (double)rdf32(edi + loc_3c * 0x38u + 0x1cu))) + fr(g, d150 * (double)rdf32(edi + loc_3c * 0x38u + 0x14u))) + fr(g, d149 * (double)rdf32(edi + loc_3c * 0x38u + 0xcu)));
        d152 = (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 8u);
        d153 = (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x28u);
        d154 = (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x18u);
        d155 = fr(g, fr(g, fr(g, fr(g, d152 * (double)rdf32(edi + loc_3c * 0x38u)) + fr(g, (double)rdf32(eax * 4u + rd32(COW_IMG(0x10457550u)) + 0x38u) * (double)rdf32(edi + loc_3c * 0x38u + 0x18u))) + fr(g, d153 * (double)rdf32(edi + loc_3c * 0x38u + 0x10u))) + fr(g, d154 * (double)rdf32(edi + loc_3c * 0x38u + 8u)));
        wrf32(loc_58 + 8u, (float)fr(g, d151 + d155));
        wr32(sp0 - 0x54u, loc_54 + 0xcu);
        wr32(sp0 - 0x58u, loc_58 + 0xcu);
        d156 = fr(g, fr(g, fr(g, fr(g, d153 * (double)rdf32(edi + loc_3c * 0x38u + 0x30u)) + fr(g, d154 * (double)rdf32(edi + loc_3c * 0x38u + 0x28u))) + fr(g, d152 * (double)rdf32(edi + loc_3c * 0x38u + 0x20u))) + fr(g, fr(g, fr(g, d148 * (double)rdf32(edi + loc_3c * 0x38u + 0x24u)) + fr(g, d150 * (double)rdf32(edi + loc_3c * 0x38u + 0x34u))) + fr(g, d149 * (double)rdf32(edi + loc_3c * 0x38u + 0x2cu))));
        wrf32(loc_54 + 8u, (float)d156);
        if (!(rd8(self + 0x34u) & 1u))
        {
            loc_58 = loc_58 + 0xcu;
            loc_54 = loc_54 + 0xcu;
            ebx = loc_48;
        }
        else
        {
            ecx = loc_3c * 0x38u;
            loc_58 = loc_58 + 0xcu;
            loc_54 = loc_54 + 0xcu;
            d157 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)));
            wrf32(sp0 - 0x24u, (float)d157);
            d158 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x10u);
            wrf32(sp0 - 0x20u, (float)d158);
            d159 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x20u);
            wrf32(sp0 - 0x1cu, (float)d159);
            d160 = fr(g, fr(g, fr(g, d158 * (double)rdf32(ecx + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 0xcu)) + fr(g, d157 * (double)rdf32(ecx + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 4u))) + fr(g, (double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x30u) * (double)rdf32(ecx + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 0x1cu)));
            d161 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x10u);
            d162 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)));
            d163 = fr(g, fr(g, fr(g, d161 * (double)rdf32(ecx + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 8u)) + fr(g, d162 * (double)rdf32(ecx + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u))) + fr(g, (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x30u) * (double)rdf32(ecx + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 0x18u)));
            d164 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x20u);
            t165 = rd32(loc_44 + 0x76u);
            t166 = rd32(COW_IMG(0x1045b618u));
            d167 = fr(g, fr(g, d160 + fr(g, d159 * (double)rdf32(ecx + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 0x14u))) + fr(g, d163 + fr(g, d164 * (double)rdf32(ecx + rd32(loc_44 + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u + 0x10u))));
            wrf32(loc_48, (float)d167);
            d168 = fr(g, fr(g, fr(g, fr(g, d162 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x20u)) + fr(g, d164 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x30u))) + fr(g, d161 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x28u))) + fr(g, fr(g, fr(g, d159 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x34u)) + fr(g, d158 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x2cu))) + fr(g, d157 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x24u))));
            wrf32(loc_50, (float)d168);
            d169 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 4u);
            wrf32(sp0 - 0x24u, (float)d169);
            d170 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x14u);
            wrf32(sp0 - 0x20u, (float)d170);
            d171 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x24u);
            wrf32(sp0 - 0x1cu, (float)d171);
            d172 = fr(g, fr(g, fr(g, d170 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0xcu)) + fr(g, d169 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 4u))) + fr(g, (double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x34u) * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x1cu)));
            d173 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x14u);
            d174 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 4u);
            d175 = fr(g, fr(g, fr(g, d173 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 8u)) + fr(g, d174 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u))) + fr(g, (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x34u) * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x18u)));
            d176 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x24u);
            d177 = fr(g, fr(g, d172 + fr(g, d171 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x14u))) + fr(g, d175 + fr(g, d176 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x10u))));
            wrf32(loc_48 + 4u, (float)d177);
            d178 = fr(g, fr(g, fr(g, fr(g, d174 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x20u)) + fr(g, d176 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x30u))) + fr(g, d173 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x28u))) + fr(g, fr(g, fr(g, d171 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x34u)) + fr(g, d170 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x2cu))) + fr(g, d169 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x24u))));
            wrf32(loc_50 + 4u, (float)d178);
            d179 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 8u);
            wrf32(sp0 - 0x24u, (float)d179);
            d180 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x18u);
            wrf32(sp0 - 0x20u, (float)d180);
            d181 = (double)(float)(double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x28u);
            wrf32(sp0 - 0x1cu, (float)d181);
            d182 = fr(g, fr(g, fr(g, d180 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0xcu)) + fr(g, d179 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 4u))) + fr(g, (double)rdf32(ebp * 4u + rd32(COW_IMG(0x10457550u)) + 0x38u) * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x1cu)));
            d183 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x18u);
            d184 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 8u);
            d185 = fr(g, fr(g, fr(g, d183 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 8u)) + fr(g, d184 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u))) + fr(g, (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x38u) * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x18u)));
            wr32(sp0 - 0x48u, loc_48 + 0xcu);
            wr32(sp0 - 0x50u, loc_50 + 0xcu);
            d186 = (double)rdf32(esi * 4u + rd32(COW_IMG(0x10457550u)) + 0x28u);
            d187 = fr(g, fr(g, d182 + fr(g, d181 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x14u))) + fr(g, d185 + fr(g, d186 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x10u))));
            wrf32(loc_48 + 8u, (float)d187);
            d188 = fr(g, fr(g, fr(g, fr(g, d184 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x20u)) + fr(g, d186 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x30u))) + fr(g, d183 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x28u))) + fr(g, fr(g, fr(g, d181 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x34u)) + fr(g, d180 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x2cu))) + fr(g, d179 * (double)rdf32(ecx + t165 + (uint16_t)t166 * 0x18u + 0x24u))));
            wrf32(loc_50 + 8u, (float)d188);
            ebx = loc_48 + 0xcu;
            loc_48 = loc_48 + 0xcu;
            loc_50 = loc_50 + 0xcu;
        }
    }
    else
    {
        ecx = t104;
        loc_3c = t104;
        t105 = rd16(ecx * 4u + loc_30);
        wr32(sp0 - 0x28u, t105);
        t106 = rd32(self + 0x3cu);
        wr32(sp0 - 0x38u, t106);
        t107 = rd16(self + 0x32u);
        wr16(sp0 - 0x5eu, t107 & 0x80u);
        if ((t107 & 0x80u) == 0u)
        {
            eax = t105;
            loc_38 = t106;
            t109 = (eax & 0x7fu) << 4u;
            wr32(sp0 - 0x4cu, t109);
            loc_4c = t109;
        }
        else
        {
            eax = t105;
            loc_38 = t106;
            loc_28 = t105;
            t108 = rd16(loc_38 + (eax & 0x7fu) * 2u);
            wr32(sp0 - 0x4cu, t108 << 4u);
            eax = loc_28;
            ecx = loc_3c;
            loc_4c = t108 << 4u;
        }
        if (rd8(self + 0x34u) & 1u)
        {
            if (rd16(sp0 - 0x5eu) == 0u)
            {
                t110 = eax >> 3u & 0x7f0u;
                esi = t110;
            }
            else
            {
                esi = rd16(loc_38 + (eax >> 7u & 0x7fu) * 2u) << 4u;
            }
        }
        wr32(sp0 - 0x38u, ecx * 0x18u);
        t111 = ecx * 0x18u + loc_2c;
        wr32(sp0 - 0x28u, t111);
        wr32(sp0 - 0x74u, t111);
        wr32(sp0 - 0x78u, loc_58);
        g->esp = sp0 - 0x70u;
        cow_thiscall(g, COW_IMG(0x10028230u), loc_4c * 4u + rd32(COW_IMG(0x10457550u)), 2, loc_58, t111);
        t112 = rd32(sp0 - 0x28u) + 0xcu;
        wr32(sp0 - 0x74u, t112);
        t113 = rd32(sp0 - 0x54u);
        wr32(sp0 - 0x78u, t113);
        cow_thiscall(g, COW_IMG(0x100282c0u), rd32(COW_IMG(0x10457550u)) + rd32(sp0 - 0x4cu) * 4u, 2, t113, t112);
        t114 = rd32(sp0 - 0x58u) + 0xcu;
        wr32(sp0 - 0x58u, t114);
        t115 = rd32(sp0 - 0x54u) + 0xcu;
        wr32(sp0 - 0x54u, t115);
        if (!(rd8(self + 0x34u) & 1u))
        {
            loc_58 = t114;
            loc_54 = t115;
        }
        else
        {
            loc_58 = t114;
            loc_54 = t115;
            t116 = rd32(sp0 - 0x38u) + rd32(rd32(sp0 - 0x44u) + 0x76u);
            wr32(sp0 - 0x74u, t116);
            wr32(sp0 - 0x78u, ebx);
            wr32(sp0 - 0x28u, t116);
            g->esp = sp0 - 0x70u;
            cow_thiscall(g, COW_IMG(0x10028230u), esi * 4u + rd32(COW_IMG(0x10457550u)), 2, ebx, t116);
            t117 = rd32(sp0 - 0x28u) + 0xcu;
            wr32(sp0 - 0x74u, t117);
            t118 = rd32(sp0 - 0x50u);
            wr32(sp0 - 0x78u, t118);
            cow_thiscall(g, COW_IMG(0x100282c0u), esi * 4u + rd32(COW_IMG(0x10457550u)), 2, t118, t117);
            wr32(sp0 - 0x48u, ebx + 0xcu);
            t119 = rd32(sp0 - 0x50u) + 0xcu;
            wr32(sp0 - 0x50u, t119);
            loc_48 = ebx + 0xcu;
            ebx = ebx + 0xcu;
            loc_50 = t119;
        }
    }
    wr32(sp0 - 0x34u, loc_34 + 1u);
    if ((int32_t)(loc_34 + 1u) < (int32_t)rd32(loc_44 + 0x60u))
    {
        loc_34 = loc_34 + 1u;
        goto L_1002f9a8;
    }
L_1003007e: ;
    g->esi = loc_6c;
    return;
L_1002f2e6: ;
    ecx = rd32(sp0 - 0x30u);
    goto L_1002f2ea;
L_100300bb: ;
    wr32(sp0 - 0x3cu, in_ebx);
    wr32(sp0 - 0x40u, in_ebp);
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    wr32(sp0 - 0x24u, self);
    t216 = rd32(self + 0x48u);
    wr32(sp0 - 0x10u, t216);
    t217 = t216 + rd16(rd32(self + 0x42u)) * 4u;
    wr32(sp0 - 0x20u, t217);
    t218 = rd32(rd32(self + 0x5eu) + 0x6eu);
    wr32(sp0 - 0xcu, t218);
    wr32(sp0 - 0x18u, 0u);
    t219 = t218 + rd16(rd32(self + 0x42u)) * 0x18u;
    wr32(sp0 - 8u, t219);
    t220 = rd32(rd32(self + 0x5eu) + 0x96u);
    wr32(sp0 - 0x28u, t220);
    t221 = rd32(rd32(self + 0x5eu) + 0x9au);
    wr32(sp0 - 0x1cu, t221);
    if ((uint16_t)rd32(COW_IMG(0x1045b618u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1045b618u));
        esi = rd32(self + 0x5eu);
        loc_10 = t216;
        loc_20 = t217;
        loc_c = t218;
        loc_8 = t219;
    }
    else
    {
        eax = rd32(rd32(self + 0x5eu) + 0x92u);
        edx = t216;
        esi = rd32(self + 0x5eu);
        edi = rd32(rd32(self + 0x5eu) + 0x8eu);
        loc_10 = t216;
        loc_20 = t217;
        loc_c = t218;
        loc_8 = t219;
        loc_28 = t220;
        loc_1c = t221;
        wr32(sp0 - 0x30u, eax - edi);
        wr32(sp0 - 0x2cu, loc_1c - edi);
        wr32(sp0 - 0x28u, loc_28 - edi);
        ebx = 0u;
        loc_18 = 0u;
        loc_28 = loc_28 - edi;
        loc_30 = eax - edi;
        loc_2c = loc_1c - edi;
L_1003043c: ;
        t222 = rd32(self + 0x3cu);
        wr32(sp0 - 0x14u, t222);
        t223 = rd16(edx + loc_18 * 4u);
        t224 = rd16(self + 0x32u);
        wr16(sp0 - 0x38u, t224 & 0x80u);
        if ((t224 & 0x80u) == 0u)
        {
            eax = t223;
            edx = (edx & 0xffff0000u) | (t224 & 0x80u);
            loc_14 = t222;
            ecx = eax & 0x7fu;
        }
        else
        {
            eax = t223;
            ecx = t222;
            loc_14 = t222;
            t225 = rd16(ecx + (eax & 0x7fu) * 2u);
            ecx = t225;
            edx = rd16(sp0 - 0x38u);
        }
        if ((uint16_t)edx == 0u)
        {
            ecx = ecx << 4u;
            eax = eax >> 3u & 0x7f0u;
        }
        else
        {
            ecx = ecx << 4u;
            t226 = rd16(loc_14 + (eax >> 7u & 0x7fu) * 2u);
            eax = t226 << 4u;
        }
        wr32(sp0 - 0x38u, eax);
        wr32(sp0 - 0x4cu, edi + loc_30);
        wr32(sp0 - 0x50u, edi);
        wr32(sp0 - 0x54u, ebx + loc_c);
        t227 = ecx * 4u + rd32(COW_IMG(0x10457550u));
        wr32(sp0 - 0x58u, t227);
        g->cf = edi + loc_30 < loc_30;
        g->pf = PARITY((uint8_t)(edi + loc_30));
        g->af = (loc_30 ^ edi ^ edi + loc_30) >> 4u & 1u;
        g->zf = edi + loc_30 == 0u;
        g->sf = (int32_t)(edi + loc_30) < 0;
        g->of = ((loc_30 ^ edi + loc_30) & (edi ^ edi + loc_30)) >> 0x1fu;
        g->esp = sp0 - 0x48u;
        cow_cdecl(g, COW_IMG(0x100309b0u), 4, t227, ebx + loc_c, edi, edi + loc_30);
        t228 = edi + rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x5cu, t228);
        t229 = edi + rd32(sp0 - 0x28u);
        wr32(sp0 - 0x60u, t229);
        t230 = ebx + rd32(esi + 0x76u);
        wr32(sp0 - 0x64u, t230);
        t231 = rd32(COW_IMG(0x10457550u)) + rd32(sp0 - 0x38u) * 4u;
        wr32(sp0 - 0x68u, t231);
        g->cf = ebx + rd32(esi + 0x76u) < rd32(esi + 0x76u);
        g->pf = PARITY((uint8_t)(ebx + rd32(esi + 0x76u)));
        g->af = (rd32(esi + 0x76u) ^ ebx ^ ebx + rd32(esi + 0x76u)) >> 4u & 1u;
        g->zf = ebx + rd32(esi + 0x76u) == 0u;
        g->sf = (int32_t)(ebx + rd32(esi + 0x76u)) < 0;
        g->of = ((rd32(esi + 0x76u) ^ ebx + rd32(esi + 0x76u)) & (ebx ^ ebx + rd32(esi + 0x76u))) >> 0x1fu;
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x100309b0u), 4, t231, t230, t229, t228);
        t232 = rd32(sp0 - 0x18u) + 1u;
        wr32(sp0 - 0x18u, t232);
        if ((int32_t)(rd32(sp0 - 0x18u) + 1u) < (int32_t)(uint16_t)rd32(COW_IMG(0x1045b618u)))
        {
            ebx = ebx + 0x18u;
            edi = edi + 0xcu;
            loc_18 = t232;
            goto L_10030438;
        }
        ecx = rd32(COW_IMG(0x1045b618u));
    }
    t233 = (uint16_t)ecx * 0xcu + rd32(esi + 0x96u);
    wr32(sp0 - 0x28u, t233);
    t234 = (uint16_t)ecx * 0xcu + rd32(esi + 0x9au);
    wr32(sp0 - 0x1cu, t234);
    wr32(sp0 - 0x18u, 0u);
    if (rd16(COW_IMG(0x1045b61au)) == 0u)
    {
        eax = ((uint16_t)ecx * 0xcu & 0xffff0000u) | rd16(COW_IMG(0x1045b61au));
    }
    else
    {
        edx = (uint16_t)ecx * 0xcu + rd32(esi + 0x92u);
        edi = (uint16_t)ecx * 0xcu + rd32(esi + 0x8eu);
        loc_28 = t233;
        loc_1c = t234;
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x2cu, loc_1c - edi);
        wr32(sp0 - 0x30u, edx - edi);
        wr32(sp0 - 0x28u, loc_28 - edi);
        ebx = 0u;
        loc_18 = 0u;
        loc_28 = loc_28 - edi;
        loc_14 = 0u;
        loc_2c = loc_1c - edi;
        loc_30 = edx - edi;
L_10030580: ;
        t235 = rd32(self + 0x3cu);
        wr32(sp0 - 4u, t235);
        t236 = rd16(self + 0x32u);
        wr16(sp0 - 0x38u, t236 & 0x80u);
        if ((t236 & 0x80u) == 0u)
        {
            ebp = (self & 0xffff0000u) | (t236 & 0x80u);
            loc_4 = t235;
            t241 = rd16(ebx * 4u + loc_20);
            t242 = (t241 & 0x7fu) << 4u;
            wr32(sp0 - 0x34u, t242);
            t243 = rd16(ebx * 4u + loc_20 + 2u);
            eax = t241;
            ecx = t243;
            edx = t243 & 0x7fu;
            loc_34 = t242;
        }
        else
        {
            edx = t235;
            loc_4 = t235;
            t237 = rd16(ebx * 4u + loc_20);
            t238 = rd16(edx + (t237 & 0x7fu) * 2u);
            wr32(sp0 - 0x34u, t238 << 4u);
            t239 = rd16(ebx * 4u + loc_20 + 2u);
            t240 = rd16(edx + (t239 & 0x7fu) * 2u);
            eax = t237;
            ecx = t239;
            edx = t240;
            ebx = loc_18;
            ebp = (t240 & 0xffff0000u) | rd16(sp0 - 0x38u);
            loc_34 = t238 << 4u;
        }
        wr32(sp0 - 0x1cu, edx << 4u);
        if ((uint16_t)ebp == 0u)
        {
            edx = edx << 4u;
            t245 = eax >> 3u & 0x7f0u;
            t246 = ecx >> 3u & 0x7f0u;
            wr32(sp0 - 0x18u, t246);
            ebp = t245;
            loc_18 = t246;
        }
        else
        {
            loc_1c = edx << 4u;
            t244 = rd16(loc_4 + (ecx >> 7u & 0x7fu) * 2u) << 4u;
            wr32(sp0 - 0x18u, t244);
            edx = loc_1c;
            ebp = rd16(loc_4 + (eax >> 7u & 0x7fu) * 2u) << 4u;
            loc_18 = t244;
        }
        wr32(sp0 - 0x4cu, edi + loc_30);
        wr32(sp0 - 0x50u, edi);
        wr32(sp0 - 0x54u, loc_14 + loc_8);
        t247 = edx * 4u + rd32(COW_IMG(0x10457550u));
        wr32(sp0 - 0x58u, t247);
        t248 = loc_34 * 4u + rd32(COW_IMG(0x10457550u));
        wr32(sp0 - 0x5cu, t248);
        g->cf = loc_14 + loc_8 < loc_14;
        g->pf = PARITY((uint8_t)(loc_14 + loc_8));
        g->af = (loc_14 ^ loc_8 ^ loc_14 + loc_8) >> 4u & 1u;
        g->zf = loc_14 + loc_8 == 0u;
        g->sf = (int32_t)(loc_14 + loc_8) < 0;
        g->of = ((loc_14 ^ loc_14 + loc_8) & (loc_8 ^ loc_14 + loc_8)) >> 0x1fu;
        g->esp = sp0 - 0x48u;
        cow_cdecl(g, COW_IMG(0x10030a40u), 5, t248, t247, loc_14 + loc_8, edi, edi + loc_30);
        t249 = edi + rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x60u, t249);
        t250 = edi + rd32(sp0 - 0x28u);
        wr32(sp0 - 0x64u, t250);
        t251 = rd32(esi + 0x76u) + rd32(sp0 - 0x14u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u;
        wr32(sp0 - 0x68u, t251);
        t252 = rd32(COW_IMG(0x10457550u)) + rd32(sp0 - 0x18u) * 4u;
        wr32(sp0 - 0x6cu, t252);
        t253 = ebp * 4u + rd32(COW_IMG(0x10457550u));
        wr32(sp0 - 0x70u, t253);
        g->cf = rd32(esi + 0x76u) + rd32(sp0 - 0x14u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u < rd32(esi + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u;
        g->pf = PARITY((uint8_t)(rd32(esi + 0x76u) + rd32(sp0 - 0x14u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u));
        g->af = (rd32(esi + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u ^ rd32(sp0 - 0x14u) ^ rd32(esi + 0x76u) + rd32(sp0 - 0x14u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u) >> 4u & 1u;
        g->zf = rd32(esi + 0x76u) + rd32(sp0 - 0x14u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u == 0u;
        g->sf = (int32_t)(rd32(esi + 0x76u) + rd32(sp0 - 0x14u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u) < 0;
        g->of = ((rd32(esi + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u ^ rd32(esi + 0x76u) + rd32(sp0 - 0x14u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u) & (rd32(sp0 - 0x14u) ^ rd32(esi + 0x76u) + rd32(sp0 - 0x14u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u)) >> 0x1fu;
        g->eax = t253;
        g->esp = sp0 - 0x5cu;
        t254 = cow_cdecl(g, COW_IMG(0x10030a40u), 5, t253, t252, t251, t250, t249);
        t255 = rd32(sp0 - 0x14u) + 0x38u;
        wr32(sp0 - 0x14u, t255);
        wr32(sp0 - 0x18u, ebx + 1u);
        if ((int32_t)(ebx + 1u) < (int32_t)rd16(COW_IMG(0x1045b61au)))
        {
            edi = edi + 0xcu;
            loc_18 = ebx + 1u;
            ebx = ebx + 1u;
            loc_14 = t255;
            goto L_10030580;
        }
        eax = (t254 & 0xffff0000u) | rd16(COW_IMG(0x1045b61au));
        ecx = rd32(COW_IMG(0x1045b618u));
    }
    wr32(sp0 - 0x14u, 0u);
    t256 = (uint16_t)eax * 0xcu + (uint16_t)ecx * 0xcu + rd32(esi + 0x96u);
    wr32(sp0 - 0x28u, t256);
    if ((int32_t)rd32(esi + 0x60u) > 0)
    {
        edx = (uint16_t)eax * 0xcu + (uint16_t)ecx * 0xcu + rd32(esi + 0x92u);
        ebx = (uint16_t)eax * 0xcu + (uint16_t)ecx * 0xcu + rd32(esi + 0x8eu);
        edi = (uint16_t)eax * 0xcu + (uint16_t)ecx * 0xcu + rd32(esi + 0x9au);
        loc_28 = t256;
        wr32(sp0 - 0x18u, ebx);
        wr32(sp0 - 0x30u, edx - ebx);
        wr32(sp0 - 0x2cu, edi - ebx);
        wr32(sp0 - 0x28u, loc_28 - ebx);
        loc_18 = ebx;
        loc_28 = loc_28 - ebx;
        loc_14 = 0u;
        loc_30 = edx - ebx;
        loc_2c = edi - ebx;
L_10030756: ;
        if ((int32_t)rd16(loc_14 * 2u + rd32(esi + 0x5cu)) >= (int32_t)(uint16_t)ecx)
        {
            eax = rd16(loc_14 * 2u + rd32(esi + 0x5cu));
            ecx = (uint16_t)ecx;
            t268 = rd32(self + 0x3cu);
            wr32(sp0 - 4u, t268);
            t269 = rd16(self + 0x32u);
            wr16(sp0 - 0x38u, t269 & 0x80u);
            if ((t269 & 0x80u) == 0u)
            {
                eax = eax - ecx;
                loc_4 = t268;
                t273 = rd16(eax * 4u + loc_20);
                t274 = (t273 & 0x7fu) << 4u;
                wr32(sp0 - 0x34u, t274);
                t275 = rd16(eax * 4u + loc_20 + 2u);
                ecx = t273;
                edx = t275;
                ebp = t275 & 0x7fu;
                loc_34 = t274;
            }
            else
            {
                eax = eax - ecx;
                edi = t268;
                loc_4 = t268;
                t270 = rd16(eax * 4u + loc_20);
                t271 = rd16(edi + (t270 & 0x7fu) * 2u);
                wr32(sp0 - 0x34u, t271 << 4u);
                t272 = rd16(eax * 4u + loc_20 + 2u);
                ecx = t270;
                edx = t272;
                ebx = loc_18;
                ebp = rd16(edi + (t272 & 0x7fu) * 2u);
                loc_34 = t271 << 4u;
            }
            wr32(sp0 - 0x1cu, ebp << 4u);
            if (rd16(sp0 - 0x38u) == 0u)
            {
                ebp = ebp << 4u;
                t278 = ecx >> 3u & 0x7f0u;
                wr32(sp0 - 0x38u, t278);
                t279 = edx >> 3u & 0x7f0u;
                wr32(sp0 - 0x18u, t279);
                loc_18 = t279;
                loc_38 = t278;
            }
            else
            {
                loc_1c = ebp << 4u;
                t276 = rd16(loc_4 + (ecx >> 7u & 0x7fu) * 2u);
                wr32(sp0 - 0x38u, t276 << 4u);
                t277 = rd16(loc_4 + (edx >> 7u & 0x7fu) * 2u) << 4u;
                wr32(sp0 - 0x18u, t277);
                ebp = loc_1c;
                loc_18 = t277;
                loc_38 = t276 << 4u;
            }
            wr32(sp0 - 0x4cu, ebx + loc_30);
            wr32(sp0 - 0x50u, ebx);
            t280 = eax * 0x38u + loc_8;
            wr32(sp0 - 0x54u, t280);
            t281 = ebp * 4u + rd32(COW_IMG(0x10457550u));
            wr32(sp0 - 0x58u, t281);
            t282 = loc_34 * 4u + rd32(COW_IMG(0x10457550u));
            wr32(sp0 - 0x5cu, t282);
            g->cf = (eax * 8u - eax) >> 0x1du & 1u;
            g->pf = PARITY((uint8_t)(eax * 0x38u));
            g->af = (eax * 8u ^ eax ^ eax * 8u - eax) >> 4u & 1u;
            g->zf = eax * 0x38u == 0u;
            g->sf = (int32_t)(eax * 0x38u) < 0;
            g->of = eax * 0x38u >> 0x1fu ^ ((eax * 8u - eax) >> 0x1du & 1u);
            g->esp = sp0 - 0x48u;
            cow_cdecl(g, COW_IMG(0x10030a40u), 5, t282, t281, t280, ebx, ebx + loc_30);
            t283 = ebx + rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x60u, t283);
            t284 = ebx + rd32(sp0 - 0x28u);
            wr32(sp0 - 0x64u, t284);
            t285 = eax * 0x38u + rd32(esi + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u;
            wr32(sp0 - 0x68u, t285);
            t286 = rd32(COW_IMG(0x10457550u)) + rd32(sp0 - 0x18u) * 4u;
            wr32(sp0 - 0x6cu, t286);
            t287 = rd32(COW_IMG(0x10457550u)) + rd32(sp0 - 0x38u) * 4u;
            wr32(sp0 - 0x70u, t287);
            g->cf = eax * 0x38u + rd32(esi + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u < eax * 0x38u + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u;
            g->pf = PARITY((uint8_t)(eax * 0x38u + rd32(esi + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u));
            g->af = (eax * 0x38u + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u ^ rd32(esi + 0x76u) ^ eax * 0x38u + rd32(esi + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u) >> 4u & 1u;
            g->zf = eax * 0x38u + rd32(esi + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u == 0u;
            g->sf = (int32_t)(eax * 0x38u + rd32(esi + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u) < 0;
            g->of = ((eax * 0x38u + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u ^ eax * 0x38u + rd32(esi + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u) & (rd32(esi + 0x76u) ^ eax * 0x38u + rd32(esi + 0x76u) + (uint16_t)rd32(COW_IMG(0x1045b618u)) * 0x18u)) >> 0x1fu;
            g->esp = sp0 - 0x5cu;
            cow_cdecl(g, COW_IMG(0x10030a40u), 5, t287, t286, t285, t284, t283);
        }
        else
        {
            eax = rd16(loc_14 * 2u + rd32(esi + 0x5cu));
            edi = loc_14;
            t257 = rd32(self + 0x3cu);
            wr32(sp0 - 4u, t257);
            t258 = rd16(eax * 4u + loc_10);
            t259 = rd16(self + 0x32u);
            wr16(sp0 - 0x38u, t259 & 0x80u);
            if ((t259 & 0x80u) == 0u)
            {
                ecx = t258;
                edi = (edi & 0xffff0000u) | (t259 & 0x80u);
                loc_4 = t257;
                edx = ecx & 0x7fu;
            }
            else
            {
                ecx = t258;
                edx = t257;
                loc_4 = t257;
                t260 = rd16(edx + (ecx & 0x7fu) * 2u);
                edx = t260;
                edi = rd16(sp0 - 0x38u);
            }
            wr32(sp0 - 0x34u, edx << 4u);
            if ((uint16_t)edi == 0u)
            {
                edx = edx << 4u;
                ecx = ecx >> 3u & 0x7f0u;
            }
            else
            {
                loc_34 = edx << 4u;
                t261 = rd16(loc_4 + (ecx >> 7u & 0x7fu) * 2u);
                ecx = t261 << 4u;
                edx = loc_34;
            }
            wr32(sp0 - 0x38u, ecx);
            wr32(sp0 - 0x4cu, ebx + loc_30);
            wr32(sp0 - 0x50u, ebx);
            t262 = eax * 0x18u + loc_c;
            wr32(sp0 - 0x54u, t262);
            t263 = edx * 4u + rd32(COW_IMG(0x10457550u));
            wr32(sp0 - 0x58u, t263);
            g->cf = eax * 3u >> 0x1du & 1u;
            g->pf = PARITY((uint8_t)(eax * 0x18u));
            g->af = 0u;
            g->zf = eax * 0x18u == 0u;
            g->sf = (int32_t)(eax * 0x18u) < 0;
            g->of = eax * 0x18u >> 0x1fu ^ (eax * 3u >> 0x1du & 1u);
            g->esp = sp0 - 0x48u;
            cow_cdecl(g, COW_IMG(0x100309b0u), 4, t263, t262, ebx, ebx + loc_30);
            t264 = ebx + rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x5cu, t264);
            t265 = ebx + rd32(sp0 - 0x28u);
            wr32(sp0 - 0x60u, t265);
            t266 = eax * 0x18u + rd32(esi + 0x76u);
            wr32(sp0 - 0x64u, t266);
            t267 = rd32(COW_IMG(0x10457550u)) + rd32(sp0 - 0x38u) * 4u;
            wr32(sp0 - 0x68u, t267);
            g->cf = eax * 0x18u + rd32(esi + 0x76u) < rd32(esi + 0x76u);
            g->pf = PARITY((uint8_t)(eax * 0x18u + rd32(esi + 0x76u)));
            g->af = (rd32(esi + 0x76u) ^ eax * 0x18u ^ eax * 0x18u + rd32(esi + 0x76u)) >> 4u & 1u;
            g->zf = eax * 0x18u + rd32(esi + 0x76u) == 0u;
            g->sf = (int32_t)(eax * 0x18u + rd32(esi + 0x76u)) < 0;
            g->of = ((rd32(esi + 0x76u) ^ eax * 0x18u + rd32(esi + 0x76u)) & (eax * 0x18u ^ eax * 0x18u + rd32(esi + 0x76u))) >> 0x1fu;
            g->esp = sp0 - 0x58u;
            cow_cdecl(g, COW_IMG(0x100309b0u), 4, t267, t266, t265, t264);
        }
        t288 = rd32(sp0 - 0x14u) + 1u;
        wr32(sp0 - 0x14u, t288);
        wr32(sp0 - 0x18u, ebx + 0xcu);
        if ((int32_t)(rd32(sp0 - 0x14u) + 1u) < (int32_t)rd32(esi + 0x60u))
        {
            loc_14 = t288;
            loc_18 = ebx + 0xcu;
            ebx = ebx + 0xcu;
            goto L_10030750;
        }
    }
    return;
L_1003029c: ;
    ecx = rd32(COW_IMG(0x1045b618u));
    edx = rd32(sp0 - 0x14u);
    goto L_100302a6;
L_10030438: ;
    edx = rd32(sp0 - 0x10u);
    goto L_1003043c;
L_10030750: ;
    ecx = rd32(COW_IMG(0x1045b618u));
    goto L_10030756;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002f1d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1002f1d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
