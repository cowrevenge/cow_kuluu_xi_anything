/* f_0x102203b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102203b0(Guest* g)
{
    double d116;
    double d117;
    double d118;
    double d119;
    double d120;
    double d121;
    double d122;
    double d123;
    double d125;
    double d129;
    double d130;
    double d137;
    double d142;
    double d16;
    double d164;
    double d165;
    double d169;
    double d17;
    double d170;
    double d171;
    double d172;
    double d173;
    double d174;
    double d179;
    double d185;
    double d199;
    double d207;
    double d208;
    double d211;
    double d212;
    double d217;
    double d223;
    double d23;
    double d24;
    double d25;
    double d38;
    double d42;
    double d52;
    double d56;
    double d66;
    double d70;
    double d79;
    double d83;
    double d93;
    double d95;
    double d96;
    double d97;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_64;
    uint32_t loc_80;
    uint32_t loc_88;
    double loc_88_f;
    double loc_94_f;
    double loc_98_f;
    double loc_9c_f;
    uint32_t loc_b4;
    uint32_t loc_b8;
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
    uint32_t t12;
    uint32_t t124;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t13;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
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
    uint32_t t160;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t166;
    uint32_t t167;
    uint32_t t168;
    uint32_t t175;
    uint32_t t176;
    uint32_t t177;
    uint32_t t178;
    uint32_t t18;
    uint32_t t180;
    uint32_t t181;
    uint32_t t182;
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
    uint32_t t2;
    uint32_t t20;
    uint32_t t200;
    uint32_t t201;
    uint32_t t202;
    uint32_t t203;
    uint32_t t204;
    uint32_t t205;
    uint32_t t206;
    uint32_t t209;
    uint32_t t21;
    uint32_t t210;
    uint32_t t213;
    uint32_t t214;
    uint32_t t215;
    uint32_t t216;
    uint32_t t218;
    uint32_t t219;
    uint32_t t22;
    uint32_t t220;
    uint32_t t221;
    uint32_t t222;
    uint32_t t224;
    uint32_t t225;
    uint32_t t226;
    uint32_t t227;
    uint32_t t228;
    uint32_t t229;
    uint32_t t230;
    uint32_t t231;
    uint32_t t232;
    uint32_t t233;
    uint32_t t234;
    uint32_t t235;
    uint32_t t236;
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
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
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
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
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
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
    uint32_t t94;
    uint32_t t98;
    uint32_t t99;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 264u);

    wr32(sp0 - 0xa0u, in_ebx);
    wr32(sp0 - 0xa4u, in_ebp);
    wr32(sp0 - 0xa8u, in_esi);
    wr32(sp0 - 0xacu, in_edi);
    wr32(sp0 - 0x6cu, self);
    g->edx = in_edx;
    g->esp = sp0 - 0xacu;
    t1 = cow_thiscall(g, COW_IMG(0x1021f410u), self, 0);
    t2 = g->edx;
    g->ebx = self;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1021fce0u), self, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1021fe10u), self, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (rd8(self + 0xdu) == 0u) goto L_10220c0c;
    ecx = t6;
    edx = t7;
    t8 = (uint32_t)(int16_t)rd16(self + 0x28u);
    wr32(sp0 - 0x68u, t8);
    t9 = (uint32_t)(int16_t)rd16(self + 0x2au) - (uint32_t)(int16_t)rd16(self + 0x2cu);
    wr32(sp0 - 0x84u, t9);
    g->ecx = ecx;
    g->edx = edx;
    t10 = rd16(self + 0x2cu);
    g->esp = sp0 - 0xacu;
    t11 = cow_call_regs(g, COW_IMG(0x100ad7c0u), (uint32_t)(int16_t)t10, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        goto L_10220411;
    }
    eax = t11;
    edx = t13;
    esi = t9;
    edi = t8;
    wr32(sp0 - 0xb0u, esi);
    wr32(sp0 - 0xb4u, edi);
    g->ebx = self;
    g->esp = sp0 - 0xacu;
    cow_call_regs(g, COW_IMG(0x102201f0u), eax, self, g->edx, 0, 2, edi, esi);
    g->ebx = rd32(sp0 - 0xa0u);
    g->esi = rd32(sp0 - 0xa8u);
    g->edi = rd32(sp0 - 0xacu);
    g->ebp = rd32(sp0 - 0xa4u);
    return;
L_10220411: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x10220c20u), ecx, 1, rd32(sp0 - 0xacu));
    t15 = g->edx;
    d16 = cow_take_float(g);
    d17 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 0x24u)) * (double)rdf32(COW_IMG(0x1032df98u))) + fr(g, (double)rdf32(self + 0x24u) * (double)rdf32(COW_IMG(0x103295d8u)))) + d16);
    wrf32(sp0 - 0x9cu, (float)d17);
    if ((cow_fsw(g, d17, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d17, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u;
        edx = t15;
        loc_9c_f = d17;
        x0 = d17;
        goto L_10220458;
    }
    eax = cow_fsw(g, d17, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u;
    edx = t15;
    x0 = d17;
    x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x1032df90u)));
L_1022046f: ;
    wrf32(sp0 - 0x9cu, (float)(double)(float)x0);
    loc_9c_f = (double)(float)x0;
L_10220473: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t18 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t21 = g->edx;
    t22 = rd32(sp0 - 0x9cu);
    wr32(sp0 - 0xb0u, t22);
    d23 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x30u) * (double)rdf32(self + 0x24u)) * (double)rdf32(COW_IMG(0x1032df40u)));
    wrf32(sp0 - 0x18u, (float)d23);
    d24 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x30u) * (double)rdf32(self + 0x24u)) * (double)rdf32(COW_IMG(0x1032df40u)));
    wrf32(sp0 - 0x2cu, (float)d24);
    d25 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x30u) * (double)rdf32(self + 0x24u)) * (double)rdf32(COW_IMG(0x1032df40u)));
    wrf32(sp0 - 0x40u, (float)d25);
    g->edx = t21;
    t26 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t22);
    t27 = g->edx;
    wr32(sp0 - 0xb0u, 0xbf8cbe4cu);
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, 0xbf8cbe4cu);
    t29 = g->edx;
    wr32(sp0 - 0xb0u, 0u);
    t30 = (rd32(self + 0x20u) << 0x18u) + 0x808080u;
    wr32(sp0 - 0xb4u, t30);
    esi = sp0 - 0x40u;
    edi = sp0 - 0xf4u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t31 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0xf8u, t31);
    t32 = rd32(sp0 - 0x68u);
    wr32(sp0 - 0xfcu, t32);
    wr32(sp0 - 0x100u, 0u);
    wr32(sp0 - 0x104u, 1u);
    g->edx = t29;
    g->esp = sp0 - 0xfcu;
    t33 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 1u, 0u);
    t34 = g->edx;
    g->esp = sp0 - 0xacu;
    cow_bridge_indirect(g, COW_IMG(0x1011ff70u), 0u, 20u, (const uint32_t[]){rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), 0u}, t33, g->edx, g->eax, 0u);
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    wr32(sp0 - 0xb4u, sp0 - 0x7cu);
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x8cu, 0x3f800000u);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x94u, 0x430c0000u);
    g->eax = sp0 - 0x7cu;
    g->edx = sp0 - 0x98u;
    t35 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, t30);
    g->ecx = t36;
    g->edx = t37;
    d38 = (double)rdf32(sp0 - 0x78u);
    fpush(g, d38);
    g->esp = sp0 - 0xb8u;
    t39 = cow_call_regs(g, COW_IMG(0x10311c6cu), t35, g->ecx, g->edx, 1, 0);
    t40 = g->ecx;
    t41 = g->edx;
    wr32(sp0 - 0xbcu, t31 + t39);
    g->ecx = t40;
    g->edx = t41;
    d42 = (double)rdf32(sp0 - 0x7cu);
    fpush(g, d42);
    g->esp = sp0 - 0xbcu;
    t43 = cow_call_regs(g, COW_IMG(0x10311c6cu), t31 + t39, g->ecx, g->edx, 1, 0);
    t44 = g->ecx;
    t45 = g->edx;
    wr32(sp0 - 0xc0u, t32 + t43);
    wr32(sp0 - 0xc4u, 4u);
    wr32(sp0 - 0xc8u, 1u);
    g->eax = t32 + t43;
    g->edx = t45;
    g->esp = sp0 - 0xc0u;
    t46 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 1u, 4u);
    t47 = g->edx;
    g->esp = sp0 - 0xacu;
    t48 = cow_thiscall(g, COW_IMG(0x1011fb60u), t46, 5, rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), 0u, 0u);
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    wr32(sp0 - 0xb4u, sp0 - 0x7cu);
    wr32(sp0 - 0x98u, 0xc30c0000u);
    wr32(sp0 - 0x94u, 0u);
    g->edx = sp0 - 0x7cu;
    t49 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, t30);
    g->ecx = t50;
    g->edx = t51;
    d52 = (double)rdf32(sp0 - 0x78u);
    fpush(g, d52);
    g->esp = sp0 - 0xb8u;
    t53 = cow_call_regs(g, COW_IMG(0x10311c6cu), t49, g->ecx, g->edx, 1, 0);
    t54 = g->ecx;
    t55 = g->edx;
    wr32(sp0 - 0xbcu, t31 + t53);
    g->ecx = t54;
    g->edx = t55;
    d56 = (double)rdf32(sp0 - 0x7cu);
    fpush(g, d56);
    g->esp = sp0 - 0xbcu;
    t57 = cow_call_regs(g, COW_IMG(0x10311c6cu), t31 + t53, g->ecx, g->edx, 1, 0);
    t58 = g->ecx;
    t59 = g->edx;
    wr32(sp0 - 0xc0u, t32 + t57);
    wr32(sp0 - 0xc4u, 1u);
    wr32(sp0 - 0xc8u, 1u);
    g->eax = t32 + t57;
    g->edx = t59;
    g->esp = sp0 - 0xc0u;
    t60 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 1u, 1u);
    t61 = g->edx;
    g->edx = t61;
    g->esp = sp0 - 0xacu;
    cow_thiscall(g, COW_IMG(0x1011fb60u), t60, 5, rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), 0u, 0u);
    t62 = g->edx;
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    wr32(sp0 - 0xb4u, sp0 - 0x7cu);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x94u, 0xc30c0000u);
    g->eax = sp0 - 0x98u;
    g->edx = t62;
    t63 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
    t64 = g->ecx;
    t65 = g->edx;
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, t30);
    g->ecx = t64;
    g->edx = t65;
    d66 = (double)rdf32(sp0 - 0x78u);
    fpush(g, d66);
    g->esp = sp0 - 0xb8u;
    t67 = cow_call_regs(g, COW_IMG(0x10311c6cu), t63, g->ecx, g->edx, 1, 0);
    t68 = g->ecx;
    t69 = g->edx;
    wr32(sp0 - 0xbcu, t31 + t67);
    g->ecx = t68;
    g->edx = t69;
    d70 = (double)rdf32(sp0 - 0x7cu);
    fpush(g, d70);
    g->esp = sp0 - 0xbcu;
    t71 = cow_call_regs(g, COW_IMG(0x10311c6cu), t31 + t67, g->ecx, g->edx, 1, 0);
    t72 = g->ecx;
    t73 = g->edx;
    wr32(sp0 - 0xc0u, t32 + t71);
    wr32(sp0 - 0xc4u, 3u);
    wr32(sp0 - 0xc8u, 1u);
    g->eax = t32 + t71;
    g->edx = t73;
    g->esp = sp0 - 0xc0u;
    t74 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 1u, 3u);
    t75 = g->edx;
    g->esp = sp0 - 0xacu;
    cow_thiscall(g, COW_IMG(0x1011fb60u), t74, 5, rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), 0u, 0u);
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    wr32(sp0 - 0xb4u, sp0 - 0x7cu);
    wr32(sp0 - 0x98u, 0x430c0000u);
    wr32(sp0 - 0x94u, 0u);
    g->eax = sp0 - 0x7cu;
    g->edx = sp0 - 0x98u;
    t76 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
    t77 = g->ecx;
    t78 = g->edx;
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, t30);
    g->ecx = t77;
    g->edx = t78;
    d79 = (double)rdf32(sp0 - 0x78u);
    fpush(g, d79);
    g->esp = sp0 - 0xb8u;
    t80 = cow_call_regs(g, COW_IMG(0x10311c6cu), t76, g->ecx, g->edx, 1, 0);
    t81 = g->ecx;
    t82 = g->edx;
    wr32(sp0 - 0xbcu, t31 + t80);
    g->ecx = t81;
    g->edx = t82;
    d83 = (double)rdf32(sp0 - 0x7cu);
    fpush(g, d83);
    g->esp = sp0 - 0xbcu;
    t84 = cow_call_regs(g, COW_IMG(0x10311c6cu), t31 + t80, g->ecx, g->edx, 1, 0);
    t85 = g->ecx;
    t86 = g->edx;
    wr32(sp0 - 0xc0u, t32 + t84);
    wr32(sp0 - 0xc4u, 2u);
    wr32(sp0 - 0xc8u, 1u);
    g->eax = t32 + t84;
    g->edx = t86;
    g->esp = sp0 - 0xc0u;
    t87 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 1u, 2u);
    t88 = g->edx;
    g->edx = t88;
    g->esp = sp0 - 0xacu;
    t89 = cow_thiscall(g, COW_IMG(0x1011fb60u), t87, 5, rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), 0u, 0u);
    t90 = g->edx;
    g->edx = t90;
    t91 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t92 = g->edx;
    d93 = (double)rdf32(self + 0x24u);
    t94 = rd32(sp0 - 0x9cu);
    wr32(sp0 - 0xb0u, t94);
    d95 = (double)(float)fr(g, d93 + d93);
    wrf32(sp0 - 0x18u, (float)d95);
    d96 = (double)(float)fr(g, d93 + d93);
    wrf32(sp0 - 0x2cu, (float)d96);
    d97 = (double)(float)fr(g, d93 + d93);
    wrf32(sp0 - 0x40u, (float)d97);
    g->edx = t92;
    t98 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t94);
    t99 = g->edx;
    wr32(sp0 - 0xb0u, 0xbf8cbe4cu);
    g->edx = t99;
    t100 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, 0xbf8cbe4cu);
    t101 = g->edx;
    g->edx = t101;
    t102 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t103 = g->edx;
    if (t102 == 0u)
    {
        eax = t102;
        edx = t103;
    }
    else
    {
        eax = t102;
        esi = t102;
        edi = t32;
        g->eax = eax;
        g->esp = sp0 - 0xacu;
        t104 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
        wr32(sp0 - 0x60u, rd32(t104));
        g->eax = rd32(t104);
        t105 = rd32(t104);
        t106 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
        t107 = rd32(t106 + 4u);
        wr32(sp0 - 0x5cu, t107);
        g->eax = t107;
        t108 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
        t109 = rd32(t108 + 8u);
        wr32(sp0 - 0x58u, t109);
        g->edx = rd32(esi);
        t110 = rd32(esi);
        cow_thiscall(g, rd32(t110 + 0x1bcu), esi, 0);
        t111 = g->edx;
        wr32(sp0 - 0x64u, 0u);
        eax = 0u;
        edx = t111;
        ebx = self;
        loc_64 = 0u;
        loc_98_f = cow_bits2f(0x430c0000u);
        loc_94_f = cow_bits2f(0u);
L_102206ec: ;
        if (eax != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
        {
            t112 = rd32(COW_IMG(0x10480af0u) + eax * 4u);
            wr32(sp0 - 0x80u, t112);
            if (rd32(COW_IMG(0x10480af0u) + eax * 4u) == 0u)
            {
                loc_80 = t112;
            }
            else
            {
                ebp = t112;
                loc_80 = t112;
                wr32(sp0 - 0xb0u, 0u);
                g->esp = sp0 - 0xacu;
                t113 = cow_call_regs(g, COW_IMG(0x10098210u), eax, ebp, edx, 0, 1, 0u);
                t114 = g->ecx;
                t115 = g->edx;
                if ((uint8_t)t113 == 0u)
                {
                    edx = t115;
                }
                else
                {
                    ecx = t114;
                    edx = t115;
                    if (rd32(ebp + 0xa0u) == 0u)
                    {
                        eax = rd32(ebp + 0xa0u);
                        goto L_10220748;
                    }
                    eax = rd32(ebp + 0xa0u);
                    if ((int8_t)rd8(eax + 0xb2u) < 0) goto L_10220939;
                    ecx = (ecx & 0xffffff00u) | rd8(eax + 0xb2u);
                    if (eax == 0u) goto L_10220748;
                    if (rd8(eax + 0xb3u) & 1u) goto L_10220939;
L_10220748: ;
                    if (rd32(ebp + 0x1d0u) != 0u)
                    {
                        ebx = rd32(ebp + 0x1d0u);
                        d116 = (double)(float)fr(g, (double)rdf32(sp0 - 0x60u) - (double)rdf32(ebp + 4u));
                        wrf32(sp0 - 0x98u, (float)d116);
                        d117 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x58u) - (double)rdf32(ebp + 0xcu)) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                        wrf32(sp0 - 0x94u, (float)d117);
                        d118 = (double)rdf32(sp0 - 0x90u);
                        d119 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d117 * d117) + fr(g, d116 * d116)) + fr(g, d118 * d118))));
                        wrf32(sp0 - 0x9cu, (float)d119);
                        d120 = fr(g, (double)rdf32(sp0 - 0x5cu) - (double)rdf32(ebp + 8u));
                        d121 = (double)(float)fr(g, sqrt(fr(g, d120 * d120)));
                        wrf32(sp0 - 0x88u, (float)d121);
                        d122 = (double)rdf32(rd32(sp0 - 0x6cu) + 0x34u);
                        if ((cow_fsw(g, d119, d122, 0u) & 0x4100u) == 0u)
                        {
                            edx = rd32(sp0 - 0x6cu);
                            loc_98_f = d116;
                            loc_94_f = d117;
                            loc_9c_f = d119;
                        }
                        else
                        {
                            eax = cow_fsw(g, d119, d122, 0u) & 0x4100u;
                            edx = rd32(sp0 - 0x6cu);
                            loc_98_f = d116;
                            loc_94_f = d117;
                            loc_9c_f = d119;
                            loc_88_f = d121;
                            if ((cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x1032a3a0u)), 0u) & 0x4100u) != 0u)
                            {
                                eax = cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x1032a3a0u)), 0u) & 0x4100u;
                                d123 = fr(g, loc_9c_f - (double)rdf32(edx + 0x38u));
                                if (!(d123 <= (double)rdf32(COW_IMG(0x103295d8u))))
                                {
                                    edi = edx;
                                    x0 = d123;
                                    wr32(sp0 - 0x44u, 0u);
                                    t124 = rd32(edi + 0x20u);
                                    wr32(sp0 - 0x48u, t124);
                                    g->ecx = ecx;
                                    g->edx = edx;
                                    d125 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / fr(g, (double)rdf32(edi + 0x34u) - (double)rdf32(edi + 0x38u)))) * (double)(int32_t)t124) + fr(g, fr(g, x0 / fr(g, (double)rdf32(edi + 0x34u) - (double)rdf32(edi + 0x38u))) * (double)rdf32(COW_IMG(0x103295d8u))));
                                    fpush(g, d125);
                                    g->esp = sp0 - 0xacu;
                                    t126 = cow_call_regs(g, COW_IMG(0x10311c6cu), t124, g->ecx, g->edx, 1, 0);
                                    t127 = g->ecx;
                                    t128 = g->edx;
                                    eax = t126;
                                    ecx = t127;
                                    edx = t128;
                                    esi = t126;
                                }
                                else
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d123, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                    edi = edx;
                                    x0 = d123;
                                    esi = rd32(edi + 0x20u);
                                }
                                d129 = fr(g, loc_88_f - (double)rdf32(COW_IMG(0x10329990u)));
                                if ((cow_fsw(g, d129, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
                                {
                                    eax = cow_fsw(g, d129, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
                                    x0 = d129;
                                }
                                else
                                {
                                    eax = cow_fsw(g, d129, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
                                    x0 = d129;
                                    wr32(sp0 - 0x50u, esi);
                                    wr32(sp0 - 0x4cu, 0u);
                                    g->edx = edx;
                                    d130 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 * (double)rdf32(COW_IMG(0x10329a08u)))) * (double)(int32_t)esi) + fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x103295d8u))));
                                    fpush(g, d130);
                                    g->esp = sp0 - 0xacu;
                                    t131 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                    t132 = g->edx;
                                    eax = t131;
                                    edx = t132;
                                    esi = t131;
                                }
                                if (!(ebx & 1u)) goto L_102208a1;
                                if (rd16(ebp + 0x210u) != 0u) goto L_102208a1;
                                ebx = (-((ebx & 0xcu) != 0u) & 0x301ff0u) + 0x40f0u;
L_102208e3: ;
                                wr32(sp0 - 0xb0u, sp0 - 0x98u);
                                wr32(sp0 - 0xb4u, sp0 - 0x7cu);
                                g->eax = eax;
                                g->edx = sp0 - 0x7cu;
                                g->esp = sp0 - 0xacu;
                                t133 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
                                t134 = g->ecx;
                                t135 = g->edx;
                                wr32(sp0 - 0xb0u, 0u);
                                wr32(sp0 - 0xb4u, 0u);
                                t136 = esi << 0x18u | ebx;
                                wr32(sp0 - 0xb8u, t136);
                                g->edx = t135;
                                d137 = (double)rdf32(sp0 - 0x78u);
                                fpush(g, d137);
                                g->esp = sp0 - 0xb8u;
                                t138 = cow_call_regs(g, COW_IMG(0x10311c6cu), t133, g->ecx, g->edx, 1, 0);
                                t139 = g->edx;
                                t140 = t138 + rd32(sp0 - 0x84u);
                                wr32(sp0 - 0xbcu, t140);
                                g->ecx = rd32(sp0 - 0x84u);
                                g->edx = t139;
                                t141 = rd32(sp0 - 0x84u);
                                d142 = (double)rdf32(sp0 - 0x7cu);
                                fpush(g, d142);
                                g->esp = sp0 - 0xbcu;
                                t143 = cow_call_regs(g, COW_IMG(0x10311c6cu), t140, g->ecx, g->edx, 1, 0);
                                t144 = g->ecx;
                                t145 = g->edx;
                                t146 = t143 + rd32(sp0 - 0x68u);
                                wr32(sp0 - 0xc0u, t146);
                                wr32(sp0 - 0xc4u, 5u);
                                wr32(sp0 - 0xc8u, 1u);
                                g->eax = t146;
                                g->edx = t145;
                                g->esp = sp0 - 0xc0u;
                                t147 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 1u, 5u);
                                t148 = g->edx;
                                g->edx = t148;
                                g->esp = sp0 - 0xacu;
                                cow_thiscall(g, COW_IMG(0x1011fb60u), t147, 5, rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), 0u, 0u);
                                t149 = g->edx;
                                edx = t149;
                            }
                        }
                    }
L_10220931: ;
                    ebx = rd32(sp0 - 0x6cu);
                    edi = rd32(sp0 - 0x68u);
                }
L_10220939: ;
                eax = rd32(sp0 - 0x64u);
            }
        }
        wr32(sp0 - 0x64u, eax + 1u);
        if ((int32_t)(eax + 1u) < 2304)
        {
            loc_64 = eax + 1u;
            eax = eax + 1u;
            goto L_102206ec;
        }
        t150 = rd32(sp0 - 0x84u);
        wr32(sp0 - 0xb0u, t150);
        wr32(sp0 - 0xb4u, edi);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0xacu;
        t151 = cow_call_regs(g, COW_IMG(0x102201f0u), t150, ebx, g->edx, 0, 2, edi, t150);
        t152 = g->ecx;
        t153 = g->edx;
        g->edx = t153;
        t154 = cow_thiscall(g, COW_IMG(0x100f94d0u), t152, 0);
        t155 = g->ecx;
        t156 = g->edx;
        wr32(sp0 - 0x88u, t154);
        if (t154 == 0u) goto L_10220aca;
        eax = t154;
        ecx = t155;
        edx = t156;
        loc_88 = t154;
        if (rd32(eax) != 1u) goto L_10220aca;
        wr32(sp0 - 0xb0u, 0xcu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xacu;
        t157 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0xcu);
        t158 = g->ecx;
        t159 = g->edx;
        if (t157 == 0u)
        {
            eax = t157;
            ecx = t158;
        }
        else
        {
            eax = t157;
            edx = t159;
            ebp = t157;
            t160 = (uint32_t)(int8_t)rd8(ebx + 0xfu);
            wr32(sp0 - 0x80u, t160);
            wrf32(sp0 - 0x80u, (float)(double)(float)(double)(int32_t)t160);
            g->ecx = t160;
            g->edx = edx;
            g->esp = sp0 - 0xacu;
            t161 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t162 = g->ecx;
            t163 = g->edx;
            d164 = cow_take_float(g);
            g->ecx = t162;
            d165 = fr(g, (double)rdf32(sp0 - 0x80u) - d164);
            fpush(g, d165);
            t166 = cow_call_regs(g, COW_IMG(0x10311c6cu), t161, g->ecx, g->edx, 1, 0);
            t167 = g->ecx;
            wr8(ebx + 0xfu, (uint8_t)t166);
            if ((int8_t)t166 >= 0)
            {
                ecx = t167;
            }
            else
            {
                eax = t166;
                ecx = t167;
                t168 = rd8(ebx + 0xeu);
                wr8(ebx + 0xfu, 5u);
                wr8(ebx + 0xeu, (uint8_t)((uint8_t)t168 + 1u));
            }
            if (rd32(rd32(ebp) + (uint32_t)(int8_t)rd8(ebx + 0xeu) * 4u) != 0u)
            {
                esi = rd32(rd32(ebp) + (uint32_t)(int8_t)rd8(ebx + 0xeu) * 4u);
                goto L_102209d8;
            }
            eax = rd32(ebp);
            wr8(ebx + 0xeu, 0u);
            if (rd32(rd32(ebp)) == 0u)
            {
                ecx = rd32(ebp);
                goto L_10220aa6;
            }
            ecx = rd32(ebp);
            esi = rd32(rd32(ebp));
L_102209d8: ;
            d169 = (double)(float)fr(g, (double)rdf32(sp0 - 0x60u) - (double)rdf32(rd32(sp0 - 0x88u) + 4u));
            wrf32(sp0 - 0x98u, (float)d169);
            d170 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x58u) - (double)rdf32(rd32(sp0 - 0x88u) + 0xcu)) * (double)rdf32(COW_IMG(0x1032a3f0u)));
            wrf32(sp0 - 0x94u, (float)d170);
            d171 = (double)rdf32(sp0 - 0x90u);
            d172 = fr(g, sqrt(fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x58u) - (double)rdf32(rd32(sp0 - 0x88u) + 0xcu)) * (double)rdf32(COW_IMG(0x1032a3f0u))) * d170) + fr(g, d169 * d169)) + fr(g, d171 * d171))));
            if (d172 == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (rd32(sp0 - 0x88u) & 0xffff0000u) | (uint16_t)cow_fsw(g, d172, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = d172;
            }
            else
            {
                loc_98_f = d169;
                loc_94_f = d170;
                x0 = d172;
                wr32(sp0 - 0xb0u, sp0 - 0x98u);
                wr32(sp0 - 0xb4u, sp0 - 0x7cu);
                d173 = (double)(float)fr(g, loc_98_f * fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0) * (double)rdf32(ebx + 0x34u)) * (double)rdf32(COW_IMG(0x10329a34u))));
                wrf32(sp0 - 0x98u, (float)d173);
                d174 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0) * (double)rdf32(ebx + 0x34u)) * (double)rdf32(COW_IMG(0x10329a34u))) * loc_94_f);
                wrf32(sp0 - 0x94u, (float)d174);
                g->eax = sp0 - 0x7cu;
                g->edx = sp0 - 0x98u;
                g->esp = sp0 - 0xacu;
                t175 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
                t176 = g->edx;
                wr32(sp0 - 0xb0u, 0u);
                wr32(sp0 - 0xb4u, 0u);
                wr32(sp0 - 0xb8u, 0x802080f0u);
                t177 = rd16(esi + 0x24u);
                t178 = rd16(esi + 0x26u);
                d179 = (double)rdf32(sp0 - 0x78u);
                fpush(g, d179);
                g->esp = sp0 - 0xb8u;
                t180 = cow_call_regs(g, COW_IMG(0x10311c6cu), t175, g->ecx, g->edx, 1, 0);
                t181 = t180 + (uint32_t)(int16_t)t177 + rd32(sp0 - 0x84u) - (uint32_t)(int16_t)t178;
                wr32(sp0 - 0xbcu, t181);
                t182 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu);
                g->edx = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu);
                t183 = rd16(esi + 0x22u);
                t184 = rd16(esi + 0x20u);
                d185 = (double)rdf32(sp0 - 0x7cu);
                fpush(g, d185);
                g->esp = sp0 - 0xbcu;
                t186 = cow_call_regs(g, COW_IMG(0x10311c6cu), t182, g->ecx, g->edx, 1, 0);
                t187 = g->edx;
                t188 = edi + t186 - (uint32_t)((int32_t)t182 >> 1u);
                wr32(sp0 - 0xc0u, t188);
                g->eax = t188;
                g->esp = sp0 - 0xacu;
                t189 = cow_thiscall(g, COW_IMG(0x1011fb60u), esi, 5, t188, rd32(sp0 - 0xbcu), 0x802080f0u, 0u, 0u);
                t190 = g->ecx;
                eax = t189;
                ecx = t190;
            }
        }
L_10220aa6: ;
        wr32(sp0 - 0xb0u, 0x80808080u);
        t191 = (eax & 0xffff0000u) | rd16(rd32(sp0 - 0x88u) + 0x10u);
        wr32(sp0 - 0xb4u, t191);
        g->eax = t191;
        g->edx = rd32(sp0 - 0x88u);
        t192 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb0u;
        t193 = cow_cdecl(g, COW_IMG(0x1008a8e0u), 1, t191);
        t194 = g->edx;
        wr32(sp0 - 0xb4u, t193);
        t195 = rd32(sp0 - 0x84u) + 0x1au;
        wr32(sp0 - 0xb8u, t195);
        eax = t193;
        ecx = t195;
        edx = t194;
        loc_b4 = t193;
        loc_b8 = t195;
L_10220bf7: ;
        wr32(sp0 - 0xbcu, edi + 0x24u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        t235 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, edi + 0x24u, loc_b8, loc_b4, 0x80808080u, rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
        t236 = g->edx;
        eax = t235;
        edx = t236;
    }
L_10220c03: ;
    g->esp = sp0 - 0xacu;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
L_10220c0c: ;
    g->ebx = in_ebx;
    return;
L_10220458: ;
    if (!(x0 < (double)rdf32(COW_IMG(0x1033bf74u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1033bf74u)), 0u);
        goto L_10220473;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1033bf74u)), 0u);
    x0 = fr(g, loc_9c_f + (double)rdf32(COW_IMG(0x1032df90u)));
    goto L_1022046f;
L_102208a1: ;
    if (!(ebx >> 8u & 1u)) goto L_102208ad;
    ebx = 0x30d000u;
    goto L_102208e3;
L_102208ad: ;
    if ((ebx & 2u) == 0u) goto L_102208c2;
    if (rd32(ebp + 0x170u) == 0x31u) goto L_10220931;
    ebx = 0xb040u;
    goto L_102208e3;
L_102208c2: ;
    if (rd8(edi + 0x2fu) == 0u) goto L_10220931;
    eax = (eax & 0xffffff00u) | rd8(edi + 0x2fu);
    if (rd32(ebp + 0x170u) == 2u) goto L_102208de;
    ebp = rd32(ebp + 0x170u);
    if (ebp != 3u)
    {
        ebx = 0x808080u;
        goto L_102208e3;
    }
L_102208de: ;
    ebx = 0x206060u;
    goto L_102208e3;
L_10220aca: ;
    wr32(sp0 - 0xb0u, sp0 - 0x80u);
    wr32(sp0 - 0xb4u, sp0 - 0x98u);
    g->eax = sp0 - 0x98u;
    g->ecx = ebx;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0xacu;
    t196 = cow_stdcall(g, COW_IMG(0x1021f030u), 2, sp0 - 0x98u, sp0 - 0x80u);
    t197 = g->ecx;
    t198 = g->edx;
    d199 = cow_take_float(g);
    wrf32(sp0 - 0x9cu, (float)(double)(float)d199);
    if (d199 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t196 & 0xffff0000u) | (uint16_t)cow_fsw(g, d199, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t198;
        goto L_10220c03;
    }
    eax = (t196 & 0xffff0000u) | (uint16_t)cow_fsw(g, d199, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = t197;
    edx = t198;
    loc_9c_f = (double)(float)d199;
    wr32(sp0 - 0xb0u, 0xcu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t200 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0xcu);
    t201 = g->ecx;
    t202 = g->edx;
    if (t200 == 0u)
    {
        ecx = t201;
    }
    else
    {
        eax = t200;
        edx = t202;
        ebp = t200;
        t203 = (uint32_t)(int8_t)rd8(ebx + 0xfu);
        wr32(sp0 - 0x88u, t203);
        wrf32(sp0 - 0x88u, (float)(double)(float)(double)(int32_t)t203);
        g->ecx = t203;
        g->edx = edx;
        g->esp = sp0 - 0xacu;
        t204 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t205 = g->ecx;
        t206 = g->edx;
        d207 = cow_take_float(g);
        d208 = fr(g, (double)rdf32(sp0 - 0x88u) - d207);
        fpush(g, d208);
        t209 = cow_call_regs(g, COW_IMG(0x10311c6cu), t204, g->ecx, g->edx, 1, 0);
        wr8(ebx + 0xfu, (uint8_t)t209);
        if ((int8_t)t209 < 0)
        {
            eax = t209;
            t210 = rd8(ebx + 0xeu);
            wr8(ebx + 0xfu, 5u);
            wr8(ebx + 0xeu, (uint8_t)((uint8_t)t210 + 1u));
        }
        if (rd32(rd32(ebp) + (uint32_t)(int8_t)rd8(ebx + 0xeu) * 4u) != 0u)
        {
            esi = rd32(rd32(ebp) + (uint32_t)(int8_t)rd8(ebx + 0xeu) * 4u);
            goto L_10220b54;
        }
        wr8(ebx + 0xeu, 0u);
        if (rd32(rd32(ebp)) == 0u)
        {
            ecx = rd32(ebp);
            goto L_10220bd7;
        }
        esi = rd32(rd32(ebp));
L_10220b54: ;
        wr32(sp0 - 0xb0u, sp0 - 0x98u);
        wr32(sp0 - 0xb4u, sp0 - 0x7cu);
        d211 = (double)(float)fr(g, (double)rdf32(sp0 - 0x98u) * fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x9cu)) * (double)rdf32(ebx + 0x34u)) * (double)rdf32(COW_IMG(0x10329a34u))));
        wrf32(sp0 - 0x98u, (float)d211);
        d212 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x9cu)) * (double)rdf32(ebx + 0x34u)) * (double)rdf32(COW_IMG(0x10329a34u))) * (double)rdf32(sp0 - 0x94u));
        wrf32(sp0 - 0x94u, (float)d212);
        g->eax = sp0 - 0x7cu;
        g->edx = sp0 - 0x98u;
        g->esp = sp0 - 0xacu;
        t213 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
        t214 = g->edx;
        wr32(sp0 - 0xb0u, 0u);
        wr32(sp0 - 0xb4u, 0u);
        wr32(sp0 - 0xb8u, 0x80802020u);
        t215 = rd16(esi + 0x24u);
        t216 = rd16(esi + 0x26u);
        d217 = (double)rdf32(sp0 - 0x78u);
        fpush(g, d217);
        g->esp = sp0 - 0xb8u;
        t218 = cow_call_regs(g, COW_IMG(0x10311c6cu), t213, g->ecx, g->edx, 1, 0);
        t219 = t218 + (uint32_t)(int16_t)t215 + rd32(sp0 - 0x84u) - (uint32_t)(int16_t)t216;
        wr32(sp0 - 0xbcu, t219);
        t220 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu);
        g->edx = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu);
        t221 = rd16(esi + 0x22u);
        t222 = rd16(esi + 0x20u);
        d223 = (double)rdf32(sp0 - 0x7cu);
        fpush(g, d223);
        g->esp = sp0 - 0xbcu;
        t224 = cow_call_regs(g, COW_IMG(0x10311c6cu), t220, g->ecx, g->edx, 1, 0);
        t225 = g->edx;
        t226 = edi + t224 - (uint32_t)((int32_t)t220 >> 1u);
        wr32(sp0 - 0xc0u, t226);
        g->esp = sp0 - 0xacu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), esi, 5, t226, rd32(sp0 - 0xbcu), 0x80802020u, 0u, 0u);
        t227 = g->ecx;
        ecx = t227;
    }
L_10220bd7: ;
    wr32(sp0 - 0xb0u, rd32(COW_IMG(0x104e1bb8u)));
    t228 = (ecx & 0xffff0000u) | rd16(rd32(sp0 - 0x80u) + 0x74u);
    wr32(sp0 - 0xb4u, t228);
    g->eax = rd32(COW_IMG(0x104e1bb8u));
    g->ecx = t228;
    g->edx = rd32(sp0 - 0x80u);
    t229 = rd32(COW_IMG(0x104e1bb8u));
    t230 = rd32(sp0 - 0x80u);
    g->esp = sp0 - 0xb0u;
    t231 = cow_cdecl(g, COW_IMG(0x1008a8e0u), 1, t228);
    t232 = g->ecx;
    t233 = g->edx;
    wr32(sp0 - 0xb4u, t231);
    t234 = rd32(sp0 - 0x84u) + 0x1au;
    wr32(sp0 - 0xb8u, t234);
    eax = t234;
    ecx = t232;
    edx = t233;
    loc_b4 = t231;
    loc_b8 = t234;
    goto L_10220bf7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102203b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102203b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
