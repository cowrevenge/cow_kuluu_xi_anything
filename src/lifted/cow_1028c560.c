/* f_0x1028c560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1028c560(Guest* g)
{
    uint32_t al_m10;
    uint32_t al_m14;
    uint32_t al_m18;
    uint32_t al_m1c;
    uint32_t al_m20;
    uint32_t al_m4;
    uint32_t al_m8;
    double d107;
    double d111;
    double d121;
    double d131;
    double d132;
    double d152;
    double d161;
    double d170;
    double d174;
    double d188;
    double d192;
    double d76;
    double d77;
    double d78;
    double d82;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
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
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t162;
    uint32_t t163;
    uint32_t t164;
    uint32_t t165;
    uint32_t t166;
    uint32_t t167;
    uint32_t t168;
    uint32_t t169;
    uint32_t t17;
    uint32_t t171;
    uint32_t t172;
    uint32_t t173;
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
    uint32_t t189;
    uint32_t t19;
    uint32_t t190;
    uint32_t t191;
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
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 112u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028c57au: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp1 - 0x18u); in_esi = rd32(sp1 - 0x14u); in_ebx = rd32(sp1 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x10u); g->edi = rd32(sp1 - 0x18u); g->esi = rd32(sp1 - 0x14u); goto E_1028c57a;
    case 0x1028c59eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); al_m8 = rd32(sp1 - 8u); goto E_1028c59e;
    case 0x1028c5d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1028c5d6;
    case 0x1028c5ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1028c5dd;
    case 0x1028c5fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c5fc;
    case 0x1028c612u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c612;
    case 0x1028c619u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c619;
    case 0x1028c643u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c643;
    case 0x1028c64au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c64a;
    case 0x1028c674u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c674;
    case 0x1028c67bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c67b;
    case 0x1028c6b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c6b9;
    case 0x1028c6c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c6c0;
    case 0x1028c6d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c6d6;
    case 0x1028c6ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c6dd;
    case 0x1028c71eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c71e;
    case 0x1028c7d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m20 = rd32(sp1 - 0x20u); goto E_1028c7d0;
    case 0x1028c7d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m20 = rd32(sp1 - 0x20u); goto E_1028c7d7;
    case 0x1028c7dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); goto E_1028c7dc;
    case 0x1028c7efu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1028c7ef;
    case 0x1028c802u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1028c802;
    case 0x1028c815u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1028c815;
    case 0x1028c834u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c834;
    case 0x1028c84au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c84a;
    case 0x1028c851u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c851;
    case 0x1028c895u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c895;
    case 0x1028c8f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m4 = rd32(sp1 - 4u); goto E_1028c8f5;
    case 0x1028c927u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m4 = rd32(sp1 - 4u); goto E_1028c927;
    case 0x1028c92cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1028c92c;
    case 0x1028c992u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1028c992;
    case 0x1028c9b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c9b1;
    case 0x1028c9c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c9c7;
    case 0x1028c9ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c9ce;
    case 0x1028c9e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028c9e4;
    case 0x1028c9f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1028c9f2;
    case 0x1028ca11u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028ca11;
    case 0x1028ca27u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028ca27;
    case 0x1028ca2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028ca2e;
    case 0x1028ca34u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028ca34;
    case 0x1028ca3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028ca3b;
    case 0x1028ca53u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028ca53;
    case 0x1028ca58u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); goto E_1028ca58;
    case 0x1028ca61u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1028ca61;
    case 0x1028caaau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m20 = rd32(sp1 - 0x20u); goto E_1028caaa;
    case 0x1028cab1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m20 = rd32(sp1 - 0x20u); goto E_1028cab1;
    case 0x1028cab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); goto E_1028cab6;
    case 0x1028cad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1028cad9;
    case 0x1028cae9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1028cae9;
    case 0x1028caf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1028caf9;
    case 0x1028caffu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); goto E_1028caff;
    case 0x1028cb08u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1c = rd32(sp1 - 0x1cu); al_m4 = rd32(sp1 - 4u); goto E_1028cb08;
    case 0x1028cb2au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); al_m10 = rd32(sp1 - 0x10u); al_m8 = rd32(sp1 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1028cb2a;
    default: break;
    }
#endif

    COW_AT(1028c560)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x10u, in_ebx);
    wr32(sp1 - 0x14u, in_esi);
    wr32(sp1 - 0x18u, in_edi);
    if (rd32(arg1 + 0x34u) == 0u)
    {
        loc_4 = in_ebp;
        al_m10 = in_ebx;
        al_m14 = in_esi;
        al_m18 = in_edi;
        goto L_1028cb2a;
    }
    eax = rd32(arg1 + 0x34u);
    COW_AT(1028c57a)
    wr32(sp1 - 0x1cu, COW_IMG(0x103ba068u));
    wr32(sp1 - 0x20u, arg2);
    g->ebx = arg1;
    g->ecx = self;
    g->esp = sp1 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, in_edx, 1, 5, arg2, COW_IMG(0x103ba068u), in_edi, in_esi, in_ebx);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp1 - 8u, 0u);
    if ((int32_t)rd32(arg1 + 0x34u) <= 0)
    {
        loc_4 = in_ebp;
        al_m10 = in_ebx;
        al_m14 = in_esi;
        al_m18 = in_edi;
        goto L_1028cb2a;
    }
    ecx = t1;
    edx = t2;
    al_m8 = 0u;
L_1028c59e: ;
    COW_AT(1028c59e)
    wr32(sp1 - 0x1cu, al_m8);
    wr32(sp1 - 0x20u, arg1);
    g->eax = al_m8;
    g->edx = edx;
    g->esp = sp1 - 0x18u;
    t3 = cow_cdecl(g, COW_IMG(0x10279870u), 2, arg1, al_m8);
    t4 = g->edx;
    t5 = rd32(sp1 - 8u);
    wr32(sp1 - 0x24u, t5);
    wr32(sp1 - 0x28u, arg1);
    g->ecx = t5;
    g->edx = t4;
    g->esp = sp1 - 0x20u;
    t6 = cow_cdecl(g, COW_IMG(0x10279b40u), 2, arg1, t5);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp1 - 0x2cu, t6);
    wr32(sp1 - 0x30u, COW_IMG(0x103ba058u));
    wr32(sp1 - 0x34u, arg2);
    g->ebx = arg1;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t8, 1, 5, arg2, COW_IMG(0x103ba058u), t6, arg1, rd32(sp1 - 0x24u));
    t9 = g->edx;
    if (rd32(t3) - 0xf0001u > 6u)
    {
        eax = rd32(t3);
        ecx = rd32(t3) - 0xf0001u;
        edx = t9;
        goto L_1028caf9;
    }
    eax = rd32(t3);
    ecx = rd32(t3) - 0xf0001u;
    edx = t9;
    edi = t3;
    COW_AT(1028c5d6)
    t10 = rd32(COW_IMG(0x1028cb34u) + ecx * 4u);
    switch (t10 - RD)
    {
    case 0x1028c5ddu: goto L_1028c5dd;
    case 0x1028c815u: goto L_1028c815;
    case 0x1028c92cu: goto L_1028c92c;
    case 0x1028c992u: goto L_1028c992;
    case 0x1028c9f2u: goto L_1028c9f2;
    case 0x1028cad9u: goto L_1028cad9;
    case 0x1028cae9u: goto L_1028cae9;
    default: rt_fatal(g, COW_IMG(0x1028c5d6u), "switch");
    }
    return;
L_1028c5dd: ;
    COW_AT(1028c5dd)
    wr32(sp1 - 0x1cu, COW_IMG(0x103ba04cu));
    wr32(sp1 - 0x20u, arg2);
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0xcu;
    t137 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103ba04cu), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
    t138 = g->ecx;
    wr32(sp1 - 0x24u, edi + 0x14u);
    wr32(sp1 - 0x28u, arg2);
    g->ebx = arg1;
    g->ecx = t138;
    g->esp = sp1 + 8u;
    cow_call_regs(g, COW_IMG(0x1028cb50u), g->eax, g->ecx, edi + 0x14u, 1, 12, arg2, edi + 0x14u, arg2, COW_IMG(0x103ba04cu), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u), rd32(sp1 - 4u), rd32(sp1), rd32(sp1 + 4u));
    t139 = g->ecx;
    t140 = g->edx;
    if (rd32(edi + 0x4cu) == 0u)
    {
        ecx = t139;
        edx = t140;
    }
    else
    {
        eax = rd32(edi + 0x4cu);
        ecx = t139;
        edx = t140;
    COW_AT(1028c5fc)
        wr32(sp1 - 0x1cu, eax);
        wr32(sp1 - 0x20u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 4u;
        t141 = cow_cdecl(g, COW_IMG(0x10279e80u), 7, arg1, eax, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u));
        t142 = g->ecx;
        t143 = g->edx;
        wr32(sp1 - 0x24u, t141);
        wr32(sp1 - 0x28u, COW_IMG(0x103ba034u));
        wr32(sp1 - 0x2cu, arg2);
        g->ebx = arg1;
        g->ecx = t142;
        g->esp = sp1 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t143, 1, 5, arg2, COW_IMG(0x103ba034u), t141, arg1, rd32(sp1 - 0x1cu));
        t144 = g->ecx;
        t145 = g->edx;
        ecx = t144;
        edx = t145;
    }
    COW_AT(1028c612)
    if (rd32(edi + 0x50u) != 0u)
    {
        eax = rd32(edi + 0x50u);
    COW_AT(1028c619)
        wr32(sp1 - 0x1cu, eax);
        wr32(sp1 - 0x20u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 4u;
        t146 = cow_cdecl(g, COW_IMG(0x10279e80u), 7, arg1, eax, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u));
        t147 = g->ecx;
        t148 = g->edx;
        wr32(sp1 - 0x24u, t146);
        wr32(sp1 - 0x28u, COW_IMG(0x103ba01cu));
        wr32(sp1 - 0x2cu, arg2);
        g->ebx = arg1;
        g->ecx = t147;
        g->esp = sp1 - 0x18u;
        t149 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t148, 1, 5, arg2, COW_IMG(0x103ba01cu), t146, arg1, rd32(sp1 - 0x1cu));
        t150 = g->ecx;
        t151 = g->edx;
        d152 = (double)rdf32(edi + 0x6cu);
        wrf64(sp1 - 0x20u, d152);
        wr32(sp1 - 0x24u, COW_IMG(0x103ba004u));
        wr32(sp1 - 0x28u, arg2);
        g->ebx = arg1;
        g->ecx = t150;
        g->esp = sp1 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t151, 1, 5, arg2, COW_IMG(0x103ba004u), cow_dlo(d152), cow_dhi(d152), rd32(sp1 - 0x18u));
        t153 = g->ecx;
        t154 = g->edx;
        ecx = t153;
        edx = t154;
    }
    COW_AT(1028c643)
    if (rd32(edi + 0x54u) != 0u)
    {
        eax = rd32(edi + 0x54u);
    COW_AT(1028c64a)
        wr32(sp1 - 0x1cu, eax);
        wr32(sp1 - 0x20u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 4u;
        t155 = cow_cdecl(g, COW_IMG(0x10279e80u), 7, arg1, eax, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u));
        t156 = g->ecx;
        t157 = g->edx;
        wr32(sp1 - 0x24u, t155);
        wr32(sp1 - 0x28u, COW_IMG(0x103b9fecu));
        wr32(sp1 - 0x2cu, arg2);
        g->ebx = arg1;
        g->ecx = t156;
        g->esp = sp1 - 0x18u;
        t158 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t157, 1, 5, arg2, COW_IMG(0x103b9fecu), t155, arg1, rd32(sp1 - 0x1cu));
        t159 = g->ecx;
        t160 = g->edx;
        d161 = (double)rdf32(edi + 0x70u);
        wrf64(sp1 - 0x20u, d161);
        wr32(sp1 - 0x24u, COW_IMG(0x103b9fd4u));
        wr32(sp1 - 0x28u, arg2);
        g->ebx = arg1;
        g->ecx = t159;
        g->esp = sp1 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t160, 1, 5, arg2, COW_IMG(0x103b9fd4u), cow_dlo(d161), cow_dhi(d161), rd32(sp1 - 0x18u));
        t162 = g->ecx;
        t163 = g->edx;
        ecx = t162;
        edx = t163;
    }
    COW_AT(1028c674)
    if (rd32(edi + 0x64u) != 0u)
    {
        eax = rd32(edi + 0x64u);
    COW_AT(1028c67b)
        wr32(sp1 - 0x1cu, eax);
        wr32(sp1 - 0x20u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 4u;
        t164 = cow_cdecl(g, COW_IMG(0x10279e80u), 7, arg1, eax, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u));
        t165 = g->ecx;
        t166 = g->edx;
        wr32(sp1 - 0x24u, t164);
        wr32(sp1 - 0x28u, COW_IMG(0x103b9fbcu));
        wr32(sp1 - 0x2cu, arg2);
        g->ebx = arg1;
        g->ecx = t165;
        g->esp = sp1 - 0x18u;
        t167 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t166, 1, 5, arg2, COW_IMG(0x103b9fbcu), t164, arg1, rd32(sp1 - 0x1cu));
        t168 = g->ecx;
        t169 = g->edx;
        d170 = (double)rdf32(edi + 0x78u);
        wrf64(sp1 - 0x20u, d170);
        wr32(sp1 - 0x24u, COW_IMG(0x103b9fa4u));
        wr32(sp1 - 0x28u, arg2);
        g->ebx = arg1;
        g->ecx = t168;
        g->esp = sp1 - 0x14u;
        t171 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t169, 1, 5, arg2, COW_IMG(0x103b9fa4u), cow_dlo(d170), cow_dhi(d170), rd32(sp1 - 0x18u));
        t172 = g->ecx;
        t173 = g->edx;
        d174 = (double)rdf32(edi + 0x7cu);
        wrf64(sp1 - 0x20u, d174);
        wr32(sp1 - 0x24u, COW_IMG(0x103b9f8cu));
        wr32(sp1 - 0x28u, arg2);
        g->ebx = arg1;
        g->ecx = t172;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t173, 1, 5, arg2, COW_IMG(0x103b9f8cu), cow_dlo(d174), cow_dhi(d174), rd32(sp1 - 0x18u));
        t175 = g->ecx;
        t176 = g->edx;
        ecx = t175;
        edx = t176;
    }
    COW_AT(1028c6b9)
    if (rd32(edi + 0x5cu) != 0u)
    {
        eax = rd32(edi + 0x5cu);
    COW_AT(1028c6c0)
        wr32(sp1 - 0x1cu, eax);
        wr32(sp1 - 0x20u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 4u;
        t177 = cow_cdecl(g, COW_IMG(0x10279e80u), 7, arg1, eax, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u));
        t178 = g->ecx;
        t179 = g->edx;
        wr32(sp1 - 0x24u, t177);
        wr32(sp1 - 0x28u, COW_IMG(0x103b9f74u));
        wr32(sp1 - 0x2cu, arg2);
        g->ebx = arg1;
        g->ecx = t178;
        g->esp = sp1 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t179, 1, 5, arg2, COW_IMG(0x103b9f74u), t177, arg1, rd32(sp1 - 0x1cu));
        t180 = g->ecx;
        t181 = g->edx;
        ecx = t180;
        edx = t181;
    }
    COW_AT(1028c6d6)
    if (rd32(edi + 0x58u) != 0u)
    {
        eax = rd32(edi + 0x58u);
    COW_AT(1028c6dd)
        wr32(sp1 - 0x1cu, eax);
        wr32(sp1 - 0x20u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 4u;
        t182 = cow_cdecl(g, COW_IMG(0x10279e80u), 7, arg1, eax, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u));
        t183 = g->ecx;
        t184 = g->edx;
        wr32(sp1 - 0x24u, t182);
        wr32(sp1 - 0x28u, COW_IMG(0x103b9f5cu));
        wr32(sp1 - 0x2cu, arg2);
        g->ebx = arg1;
        g->ecx = t183;
        g->esp = sp1 - 0x18u;
        t185 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t184, 1, 5, arg2, COW_IMG(0x103b9f5cu), t182, arg1, rd32(sp1 - 0x1cu));
        t186 = g->ecx;
        t187 = g->edx;
        d188 = (double)rdf32(edi + 0x74u);
        wrf64(sp1 - 0x20u, d188);
        wr32(sp1 - 0x24u, COW_IMG(0x103b9f44u));
        wr32(sp1 - 0x28u, arg2);
        g->ebx = arg1;
        g->ecx = t186;
        g->esp = sp1 - 0x14u;
        t189 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t187, 1, 5, arg2, COW_IMG(0x103b9f44u), cow_dlo(d188), cow_dhi(d188), rd32(sp1 - 0x18u));
        t190 = g->ecx;
        t191 = g->edx;
        d192 = (double)rdf32(edi + 0x80u);
        wrf64(sp1 - 0x20u, d192);
        wr32(sp1 - 0x24u, COW_IMG(0x103b9f2cu));
        wr32(sp1 - 0x28u, arg2);
        g->ebx = arg1;
        g->ecx = t190;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t191, 1, 5, arg2, COW_IMG(0x103b9f2cu), cow_dlo(d192), cow_dhi(d192), rd32(sp1 - 0x18u));
        t193 = g->ecx;
        t194 = g->edx;
        ecx = t193;
        edx = t194;
    }
    COW_AT(1028c71e)
    t195 = rd32(edi + 0x88u);
    wr32(sp1 - 0x1cu, t195);
    wr32(sp1 - 0x20u, COW_IMG(0x103b9f14u));
    wr32(sp1 - 0x24u, arg2);
    g->ebx = arg1;
    g->eax = t195;
    g->esp = sp1 - 0x10u;
    t196 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9f14u), t195, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u));
    t197 = g->edx;
    t198 = rd32(edi + 0x8cu);
    wr32(sp1 - 0x28u, t198);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b9efcu));
    wr32(sp1 - 0x30u, arg2);
    g->ebx = arg1;
    g->ecx = t198;
    g->esp = sp1 - 0x1cu;
    t199 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t197, 1, 5, arg2, COW_IMG(0x103b9efcu), t198, arg2, COW_IMG(0x103b9f14u));
    t200 = g->ecx;
    t201 = rd32(edi + 0x90u);
    wr32(sp1 - 0x34u, t201);
    wr32(sp1 - 0x38u, COW_IMG(0x103b9ee4u));
    wr32(sp1 - 0x3cu, arg2);
    g->ebx = arg1;
    g->ecx = t200;
    g->esp = sp1 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t201, 1, 5, arg2, COW_IMG(0x103b9ee4u), t201, arg2, COW_IMG(0x103b9efcu));
    t202 = g->ecx;
    t203 = g->edx;
    t204 = rd32(edi + 0x94u);
    wr32(sp1 - 0x40u, t204);
    wr32(sp1 - 0x44u, COW_IMG(0x103b9eccu));
    wr32(sp1 - 0x48u, arg2);
    g->ebx = arg1;
    g->eax = t204;
    g->esp = sp1 - 0x34u;
    t205 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t203, 1, 5, arg2, COW_IMG(0x103b9eccu), t204, arg2, COW_IMG(0x103b9ee4u));
    t206 = g->edx;
    t207 = rd32(edi + 0x98u);
    wr32(sp1 - 0x4cu, t207);
    wr32(sp1 - 0x50u, COW_IMG(0x103b9eb4u));
    wr32(sp1 - 0x54u, arg2);
    g->ebx = arg1;
    g->ecx = t207;
    g->esp = sp1 - 0x40u;
    t208 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t206, 1, 5, arg2, COW_IMG(0x103b9eb4u), t207, arg2, COW_IMG(0x103b9eccu));
    t209 = g->ecx;
    t210 = rd32(edi + 0x9cu);
    wr32(sp1 - 0x58u, t210);
    wr32(sp1 - 0x5cu, COW_IMG(0x103b9e9cu));
    wr32(sp1 - 0x60u, arg2);
    g->ebx = arg1;
    g->ecx = t209;
    g->esp = sp1 - 0x4cu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t210, 1, 5, arg2, COW_IMG(0x103b9e9cu), t210, arg2, COW_IMG(0x103b9eb4u));
    t211 = g->ecx;
    t212 = g->edx;
    t213 = rd32(edi + 0xa0u);
    wr32(sp1 - 0x1cu, t213);
    wr32(sp1 - 0x20u, COW_IMG(0x103b9e84u));
    wr32(sp1 - 0x24u, arg2);
    g->ebx = arg1;
    g->eax = t213;
    g->esp = sp1 - 0x10u;
    t214 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t212, 1, 5, arg2, COW_IMG(0x103b9e84u), t213, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u));
    t215 = g->edx;
    t216 = rd32(edi + 0xa4u);
    wr32(sp1 - 0x28u, t216);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b9e6cu));
    wr32(sp1 - 0x30u, arg2);
    g->ebx = arg1;
    g->ecx = t216;
    g->esp = sp1 - 0x1cu;
    t217 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t215, 1, 5, arg2, COW_IMG(0x103b9e6cu), t216, arg2, COW_IMG(0x103b9e84u));
    t218 = g->ecx;
    t219 = rd32(edi + 0xa8u);
    wr32(sp1 - 0x34u, t219);
    wr32(sp1 - 0x38u, COW_IMG(0x103b9e54u));
    wr32(sp1 - 0x3cu, arg2);
    g->ebx = arg1;
    g->ecx = t218;
    g->esp = sp1 - 0x28u;
    t220 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t219, 1, 5, arg2, COW_IMG(0x103b9e54u), t219, arg2, COW_IMG(0x103b9e6cu));
    t221 = g->ecx;
    t222 = g->edx;
    if (!(rd8(edi + 0x84u) & 1u))
    {
        eax = (t220 & 0xffffff00u) | rd8(edi + 0x84u);
        ecx = t221;
        edx = t222;
    COW_AT(1028c7d7)
        wr32(sp1 - 0x1cu, COW_IMG(0x103b9e24u));
        al_m1c = COW_IMG(0x103b9e24u);
    }
    else
    {
        eax = (t220 & 0xffffff00u) | rd8(edi + 0x84u);
        ecx = t221;
        edx = t222;
    COW_AT(1028c7d0)
        wr32(sp1 - 0x1cu, COW_IMG(0x103b9e3cu));
        al_m1c = COW_IMG(0x103b9e3cu);
    }
    COW_AT(1028c7dc)
    wr32(sp1 - 0x20u, arg2);
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0xcu;
    t223 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, al_m1c, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
    t224 = g->ecx;
    t225 = g->edx;
    if ((rd8(edi + 0x84u) & 2u) == 0u)
    {
        eax = (t223 & 0xffffff00u) | rd8(edi + 0x84u);
        ecx = t224;
        edx = t225;
    COW_AT(1028c802)
        wr32(sp1 - 0x1cu, COW_IMG(0x103b9df4u));
        wr32(sp1 - 0x20u, arg2);
        g->ebx = arg1;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp1 - 0xcu;
        t229 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9df4u), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
        t230 = g->ecx;
        t231 = g->edx;
        eax = t229;
        ecx = t230;
        edx = t231;
        al_m4 = rd32(sp1 - 4u);
    }
    else
    {
        eax = (t223 & 0xffffff00u) | rd8(edi + 0x84u);
        ecx = t224;
        edx = t225;
    COW_AT(1028c7ef)
        wr32(sp1 - 0x1cu, COW_IMG(0x103b9e0cu));
        wr32(sp1 - 0x20u, arg2);
        g->ebx = arg1;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp1 - 0xcu;
        t226 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9e0cu), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
        t227 = g->ecx;
        t228 = g->edx;
        eax = t226;
        ecx = t227;
        edx = t228;
        al_m4 = rd32(sp1 - 4u);
    }
L_1028cb08: ;
    COW_AT(1028cb08)
    wr32(sp1 - 0x1cu, COW_IMG(0x103b3238u));
    wr32(sp1 - 0x20u, arg2);
    g->ebx = arg1;
    g->esp = sp1 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b3238u), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
    t235 = g->edx;
    t236 = rd32(sp1 - 8u) + 1u;
    t237 = rd32(sp1 - 8u);
    wr32(sp1 - 8u, t236);
    if ((int32_t)(t237 + 1u) < (int32_t)rd32(arg1 + 0x34u))
    {
        ecx = rd32(arg1 + 0x34u);
        edx = t235;
        al_m8 = t236;
        goto L_1028c59e;
    }
    loc_4 = rd32(sp0 - 4u);
    al_m10 = rd32(sp1 - 0x10u);
    al_m14 = rd32(sp1 - 0x14u);
    al_m18 = rd32(sp1 - 0x18u);
L_1028cb2a: ;
    COW_AT(1028cb2a)
    g->ebx = al_m10;
    g->esi = al_m14;
    g->edi = al_m18;
    g->ebp = loc_4;
    return;
L_1028c815: ;
    COW_AT(1028c815)
    wr32(sp1 - 0x1cu, COW_IMG(0x103b9de8u));
    wr32(sp1 - 0x20u, arg2);
    g->ebx = arg1;
    g->ecx = ecx;
    g->esp = sp1 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9de8u), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
    t92 = g->ecx;
    t93 = g->edx;
    wr32(sp1 - 0x24u, edi + 0x14u);
    wr32(sp1 - 0x28u, arg2);
    g->ebx = arg1;
    g->ecx = t92;
    g->esp = sp1 + 8u;
    cow_call_regs(g, COW_IMG(0x1028cb50u), g->eax, g->ecx, t93, 1, 12, arg2, edi + 0x14u, arg2, COW_IMG(0x103b9de8u), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u), rd32(sp1 - 4u), rd32(sp1), rd32(sp1 + 4u));
    t94 = g->ecx;
    t95 = g->edx;
    if (rd32(edi + 0x50u) == 0u)
    {
        ecx = t94;
        edx = t95;
    }
    else
    {
        eax = rd32(edi + 0x50u);
        ecx = t94;
        edx = t95;
    COW_AT(1028c834)
        wr32(sp1 - 0x1cu, eax);
        wr32(sp1 - 0x20u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 4u;
        t96 = cow_cdecl(g, COW_IMG(0x10279e80u), 7, arg1, eax, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u));
        t97 = g->ecx;
        t98 = g->edx;
        wr32(sp1 - 0x24u, t96);
        wr32(sp1 - 0x28u, COW_IMG(0x103ba034u));
        wr32(sp1 - 0x2cu, arg2);
        g->ebx = arg1;
        g->ecx = t97;
        g->esp = sp1 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t98, 1, 5, arg2, COW_IMG(0x103ba034u), t96, arg1, rd32(sp1 - 0x1cu));
        t99 = g->ecx;
        t100 = g->edx;
        ecx = t99;
        edx = t100;
    }
    COW_AT(1028c84a)
    if (rd32(edi + 0x54u) == 0u)
    {
        eax = rd32(edi + 0x54u);
    }
    else
    {
        eax = rd32(edi + 0x54u);
    COW_AT(1028c851)
        wr32(sp1 - 0x1cu, eax);
        wr32(sp1 - 0x20u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 4u;
        t101 = cow_cdecl(g, COW_IMG(0x10279e80u), 7, arg1, eax, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u));
        t102 = g->ecx;
        t103 = g->edx;
        wr32(sp1 - 0x24u, t101);
        wr32(sp1 - 0x28u, COW_IMG(0x103b9f5cu));
        wr32(sp1 - 0x2cu, arg2);
        g->ebx = arg1;
        g->ecx = t102;
        g->esp = sp1 - 0x18u;
        t104 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t103, 1, 5, arg2, COW_IMG(0x103b9f5cu), t101, arg1, rd32(sp1 - 0x1cu));
        t105 = g->ecx;
        t106 = g->edx;
        d107 = (double)rdf32(edi + 0x160u);
        wrf64(sp1 - 0x20u, d107);
        wr32(sp1 - 0x24u, COW_IMG(0x103b9f44u));
        wr32(sp1 - 0x28u, arg2);
        g->ebx = arg1;
        g->ecx = t105;
        g->esp = sp1 - 0x14u;
        t108 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t106, 1, 5, arg2, COW_IMG(0x103b9f44u), cow_dlo(d107), cow_dhi(d107), rd32(sp1 - 0x18u));
        t109 = g->ecx;
        t110 = g->edx;
        d111 = (double)rdf32(edi + 0x15cu);
        wrf64(sp1 - 0x20u, d111);
        wr32(sp1 - 0x24u, COW_IMG(0x103b9f2cu));
        wr32(sp1 - 0x28u, arg2);
        g->ebx = arg1;
        t112 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t110, 1, 5, arg2, COW_IMG(0x103b9f2cu), cow_dlo(d111), cow_dhi(d111), rd32(sp1 - 0x18u));
        t113 = g->edx;
        eax = t112;
        edx = t113;
    }
    COW_AT(1028c895)
    t114 = rd32(edi + 0x168u);
    wr32(sp1 - 0x1cu, t114);
    wr32(sp1 - 0x20u, COW_IMG(0x103b9eccu));
    wr32(sp1 - 0x24u, arg2);
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = t114;
    g->esp = sp1 - 0x10u;
    t115 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9eccu), t114, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u));
    t116 = g->ecx;
    t117 = rd32(edi + 0x4cu);
    wr32(sp1 - 0x28u, t117);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b9f14u));
    wr32(sp1 - 0x30u, arg2);
    g->ebx = arg1;
    g->ecx = t116;
    g->esp = sp1 - 0x1cu;
    t118 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t117, 1, 5, arg2, COW_IMG(0x103b9f14u), t117, arg2, COW_IMG(0x103b9eccu));
    t119 = g->ecx;
    t120 = g->edx;
    d121 = (double)rdf32(edi + 0x58u);
    wrf64(sp1 - 0x20u, d121);
    wr32(sp1 - 0x24u, COW_IMG(0x103b9dd0u));
    wr32(sp1 - 0x28u, arg2);
    g->ebx = arg1;
    g->ecx = t119;
    g->esp = sp1 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t120, 1, 5, arg2, COW_IMG(0x103b9dd0u), cow_dlo(d121), cow_dhi(d121), rd32(sp1 - 0x18u));
    t122 = g->ecx;
    t123 = g->edx;
    t124 = rd32(edi + 0x164u);
    wr32(sp1 - 0x2cu, t124);
    wr32(sp1 - 0x30u, COW_IMG(0x103b9e84u));
    wr32(sp1 - 0x34u, arg2);
    g->ebx = arg1;
    g->eax = t124;
    g->ecx = t122;
    g->esp = sp1 - 0x20u;
    t125 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t123, 1, 5, arg2, COW_IMG(0x103b9e84u), t124, arg2, COW_IMG(0x103b9dd0u));
    t126 = g->ecx;
    t127 = g->edx;
    wr32(sp1 - 0x38u, COW_IMG(0x103b9dbcu));
    wr32(sp1 - 0x3cu, arg2);
    g->ebx = arg1;
    g->ecx = t126;
    g->esp = sp1 - 0x28u;
    t128 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t127, 1, 5, arg2, COW_IMG(0x103b9dbcu), arg2, COW_IMG(0x103b9e84u), rd32(sp1 - 0x2cu));
    t129 = g->ecx;
    t130 = g->edx;
    wr32(sp1 - 4u, 0x10u);
    eax = t128;
    ecx = t129;
    edx = t130;
    edi = edi + 0x60u;
    al_m4 = 0x10u;
L_1028c8f5: ;
    COW_AT(1028c8f5)
    d131 = (double)rdf32(edi + 4u);
    wrf64(sp1 - 0x20u, d131);
    wrf64(sp1 - 0x28u, (double)rdf32(edi));
    d132 = (double)rdf32(edi - 4u);
    wrf64(sp1 - 0x30u, d132);
    wr32(sp1 - 0x34u, COW_IMG(0x103b9dacu));
    wr32(sp1 - 0x38u, arg2);
    g->ebx = arg1;
    g->ecx = ecx;
    g->esp = sp1 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9dacu), cow_dlo(d132), cow_dhi(d132), cow_dlo((double)rdf32(edi)));
    t133 = g->ecx;
    t134 = g->edx;
    t135 = rd32(sp1 - 4u) - 1u;
    t136 = rd32(sp1 - 4u);
    wr32(sp1 - 4u, t135);
    if (t136 != 1u)
    {
        eax = t135;
        ecx = t133;
        edx = t134;
        edi = edi + 0x10u;
        al_m4 = t135;
        goto L_1028c8f5;
    }
    eax = t135;
    ecx = t133;
    edx = t134;
    al_m4 = t135;
    COW_AT(1028c927)
    goto L_1028cb08;
L_1028c92c: ;
    COW_AT(1028c92c)
    wr32(sp1 - 0x1cu, COW_IMG(0x103b9da4u));
    wr32(sp1 - 0x20u, arg2);
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0xcu;
    t73 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9da4u), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
    t74 = g->ecx;
    t75 = g->edx;
    d76 = (double)rdf32(edi + 0x54u);
    wrf64(sp1 - 0x20u, d76);
    d77 = (double)rdf32(edi + 0x50u);
    wrf64(sp1 - 0x28u, d77);
    d78 = (double)rdf32(edi + 0x4cu);
    wrf64(sp1 - 0x30u, d78);
    wr32(sp1 - 0x34u, COW_IMG(0x103b9d88u));
    wr32(sp1 - 0x38u, arg2);
    g->ebx = arg1;
    g->ecx = t74;
    g->esp = sp1 - 0x24u;
    t79 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t75, 1, 5, arg2, COW_IMG(0x103b9d88u), cow_dlo(d78), cow_dhi(d78), cow_dlo(d77));
    t80 = g->ecx;
    t81 = g->edx;
    d82 = (double)rdf32(edi + 0x58u);
    wrf64(sp1 - 0x20u, d82);
    wr32(sp1 - 0x24u, COW_IMG(0x103b9d70u));
    wr32(sp1 - 0x28u, arg2);
    g->ebx = arg1;
    g->esp = sp1 - 0x14u;
    t83 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t81, 1, 5, arg2, COW_IMG(0x103b9d70u), cow_dlo(d82), cow_dhi(d82), rd32(sp1 - 0x18u));
    t84 = g->edx;
    t85 = rd32(edi + 0x5cu);
    wr32(sp1 - 0x2cu, t85);
    wr32(sp1 - 0x30u, COW_IMG(0x103b9d58u));
    wr32(sp1 - 0x34u, arg2);
    g->ebx = arg1;
    g->ecx = t85;
    g->esp = sp1 - 0x20u;
    t86 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t84, 1, 5, arg2, COW_IMG(0x103b9d58u), t85, arg2, COW_IMG(0x103b9d70u));
    t87 = g->ecx;
    t88 = rd32(edi + 0x60u);
    wr32(sp1 - 0x38u, t88);
    wr32(sp1 - 0x3cu, COW_IMG(0x103b9f14u));
    wr32(sp1 - 0x40u, arg2);
    g->ebx = arg1;
    g->ecx = t87;
    g->esp = sp1 - 0x2cu;
    t89 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t88, 1, 5, arg2, COW_IMG(0x103b9f14u), t88, arg2, COW_IMG(0x103b9d58u));
    t90 = g->ecx;
    t91 = g->edx;
    eax = t89;
    ecx = t90;
    edx = t91;
    al_m4 = rd32(sp1 - 4u);
    goto L_1028cb08;
L_1028c992: ;
    COW_AT(1028c992)
    wr32(sp1 - 0x1cu, COW_IMG(0x103b9d4cu));
    wr32(sp1 - 0x20u, arg2);
    g->ebx = arg1;
    g->ecx = ecx;
    g->esp = sp1 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9d4cu), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
    t58 = g->ecx;
    t59 = g->edx;
    wr32(sp1 - 0x24u, edi + 0x14u);
    wr32(sp1 - 0x28u, arg2);
    g->ebx = arg1;
    g->ecx = t58;
    g->esp = sp1 + 8u;
    cow_call_regs(g, COW_IMG(0x1028cb50u), g->eax, g->ecx, t59, 1, 12, arg2, edi + 0x14u, arg2, COW_IMG(0x103b9d4cu), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u), rd32(sp1 - 4u), rd32(sp1), rd32(sp1 + 4u));
    t60 = g->ecx;
    t61 = g->edx;
    if (rd32(edi + 0x4cu) == 0u)
    {
        ecx = t60;
        edx = t61;
    }
    else
    {
        eax = rd32(edi + 0x4cu);
        ecx = t60;
        edx = t61;
    COW_AT(1028c9b1)
        wr32(sp1 - 0x1cu, eax);
        wr32(sp1 - 0x20u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 4u;
        t62 = cow_cdecl(g, COW_IMG(0x10279e80u), 7, arg1, eax, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u));
        t63 = g->ecx;
        t64 = g->edx;
        wr32(sp1 - 0x24u, t62);
        wr32(sp1 - 0x28u, COW_IMG(0x103b9d34u));
        wr32(sp1 - 0x2cu, arg2);
        g->ebx = arg1;
        g->ecx = t63;
        g->esp = sp1 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t64, 1, 5, arg2, COW_IMG(0x103b9d34u), t62, arg1, rd32(sp1 - 0x1cu));
        t65 = g->ecx;
        t66 = g->edx;
        ecx = t65;
        edx = t66;
    }
    COW_AT(1028c9c7)
    if (rd32(edi + 0x50u) == 0u)
    {
        eax = rd32(edi + 0x50u);
    }
    else
    {
        eax = rd32(edi + 0x50u);
    COW_AT(1028c9ce)
        wr32(sp1 - 0x1cu, eax);
        wr32(sp1 - 0x20u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 4u;
        t67 = cow_cdecl(g, COW_IMG(0x10279e80u), 7, arg1, eax, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u));
        t68 = g->ecx;
        t69 = g->edx;
        wr32(sp1 - 0x24u, t67);
        wr32(sp1 - 0x28u, COW_IMG(0x103b9d1cu));
        wr32(sp1 - 0x2cu, arg2);
        g->ebx = arg1;
        g->esp = sp1 - 0x18u;
        t70 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t69, 1, 5, arg2, COW_IMG(0x103b9d1cu), t67, arg1, rd32(sp1 - 0x1cu));
        t71 = g->edx;
        eax = t70;
        edx = t71;
    }
    COW_AT(1028c9e4)
    t72 = rd32(edi + 0x54u);
    wr32(sp1 - 0x1cu, t72);
    wr32(sp1 - 0x20u, COW_IMG(0x103b9f14u));
    ecx = t72;
    al_m1c = t72;
    al_m20 = COW_IMG(0x103b9f14u);
L_1028caff: ;
    COW_AT(1028caff)
    wr32(sp1 - 0x24u, arg2);
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x10u;
    t232 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, al_m20, al_m1c, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u));
    t233 = g->ecx;
    t234 = g->edx;
    eax = t232;
    ecx = t233;
    edx = t234;
    al_m4 = rd32(sp1 - 4u);
    goto L_1028cb08;
L_1028c9f2: ;
    COW_AT(1028c9f2)
    wr32(sp1 - 0x1cu, COW_IMG(0x103b9d10u));
    wr32(sp1 - 0x20u, arg2);
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9d10u), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
    t18 = g->ecx;
    wr32(sp1 - 0x24u, edi + 0x14u);
    wr32(sp1 - 0x28u, arg2);
    g->ebx = arg1;
    g->ecx = t18;
    g->esp = sp1 + 8u;
    cow_call_regs(g, COW_IMG(0x1028cb50u), g->eax, g->ecx, edi + 0x14u, 1, 12, arg2, edi + 0x14u, arg2, COW_IMG(0x103b9d10u), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u), rd32(sp1 - 4u), rd32(sp1), rd32(sp1 + 4u));
    t19 = g->ecx;
    t20 = g->edx;
    if (rd32(edi + 0x60u) == 0u)
    {
        ecx = t19;
        edx = t20;
    }
    else
    {
        eax = rd32(edi + 0x60u);
        ecx = t19;
        edx = t20;
    COW_AT(1028ca11)
        wr32(sp1 - 0x1cu, eax);
        wr32(sp1 - 0x20u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 4u;
        t21 = cow_cdecl(g, COW_IMG(0x10279e80u), 7, arg1, eax, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u));
        t22 = g->ecx;
        t23 = g->edx;
        wr32(sp1 - 0x24u, t21);
        wr32(sp1 - 0x28u, COW_IMG(0x103b9cf8u));
        wr32(sp1 - 0x2cu, arg2);
        g->ebx = arg1;
        g->ecx = t22;
        g->esp = sp1 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t23, 1, 5, arg2, COW_IMG(0x103b9cf8u), t21, arg1, rd32(sp1 - 0x1cu));
        t24 = g->ecx;
        t25 = g->edx;
        ecx = t24;
        edx = t25;
    }
    COW_AT(1028ca27)
    if (rd32(edi + 0x64u) == 0u)
    {
        eax = rd32(edi + 0x64u);
        goto L_1028ca53;
    }
    eax = rd32(edi + 0x64u);
    COW_AT(1028ca2e)
    if ((rd8(eax + 0x20u) & 4u) == 0u) goto L_1028ca3b;
    COW_AT(1028ca34)
    wr32(sp1 - 0x1cu, COW_IMG(0x103b9cd0u));
    al_m1c = COW_IMG(0x103b9cd0u);
L_1028ca58: ;
    COW_AT(1028ca58)
    wr32(sp1 - 0x20u, arg2);
    g->ebx = arg1;
    g->ecx = ecx;
    g->esp = sp1 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, al_m1c, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
    t31 = g->ecx;
    t32 = g->edx;
    ecx = t31;
    edx = t32;
L_1028ca61: ;
    COW_AT(1028ca61)
    t33 = rd32(edi + 0x58u);
    wr32(sp1 - 0x1cu, t33);
    wr32(sp1 - 0x20u, COW_IMG(0x103b9c70u));
    wr32(sp1 - 0x24u, arg2);
    g->ebx = arg1;
    g->eax = t33;
    g->esp = sp1 - 0x10u;
    t34 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9c70u), t33, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u));
    t35 = g->edx;
    t36 = rd32(edi + 0x4cu);
    wr32(sp1 - 0x28u, t36);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b9f14u));
    wr32(sp1 - 0x30u, arg2);
    g->ebx = arg1;
    g->ecx = t36;
    g->esp = sp1 - 0x1cu;
    t37 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t35, 1, 5, arg2, COW_IMG(0x103b9f14u), t36, arg2, COW_IMG(0x103b9c70u));
    t38 = g->ecx;
    t39 = rd32(edi + 0x50u);
    wr32(sp1 - 0x34u, t39);
    wr32(sp1 - 0x38u, COW_IMG(0x103b9efcu));
    wr32(sp1 - 0x3cu, arg2);
    g->ebx = arg1;
    g->ecx = t38;
    g->esp = sp1 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t39, 1, 5, arg2, COW_IMG(0x103b9efcu), t39, arg2, COW_IMG(0x103b9f14u));
    t40 = g->ecx;
    t41 = g->edx;
    t42 = rd32(edi + 0x54u);
    wr32(sp1 - 0x40u, t42);
    wr32(sp1 - 0x44u, COW_IMG(0x103b9e6cu));
    wr32(sp1 - 0x48u, arg2);
    g->ebx = arg1;
    g->eax = t42;
    g->ecx = t40;
    g->esp = sp1 - 0x34u;
    t43 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t41, 1, 5, arg2, COW_IMG(0x103b9e6cu), t42, arg2, COW_IMG(0x103b9efcu));
    t44 = g->ecx;
    t45 = g->edx;
    wr32(sp1 - 0x4cu, edi);
    g->ecx = t44;
    g->edx = t45;
    g->esp = sp1 - 0x48u;
    t46 = cow_cdecl(g, COW_IMG(0x102778d0u), 1, edi);
    t47 = g->ecx;
    t48 = g->edx;
    if ((uint8_t)t46 == 0u)
    {
        eax = t46;
        ecx = t47;
        edx = t48;
    COW_AT(1028cab1)
        wr32(sp1 - 0x1cu, COW_IMG(0x103b9c40u));
        al_m1c = COW_IMG(0x103b9c40u);
    }
    else
    {
        eax = t46;
        ecx = t47;
        edx = t48;
    COW_AT(1028caaa)
        wr32(sp1 - 0x1cu, COW_IMG(0x103b9c58u));
        al_m1c = COW_IMG(0x103b9c58u);
    }
    COW_AT(1028cab6)
    wr32(sp1 - 0x20u, arg2);
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0xcu;
    t49 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, al_m1c, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp1 - 0x1cu, edi);
    g->ecx = t50;
    g->edx = t51;
    g->esp = sp1 - 0x18u;
    t52 = cow_cdecl(g, COW_IMG(0x10277900u), 1, edi);
    t53 = g->ecx;
    t54 = g->edx;
    wr32(sp1 - 0x20u, t52);
    wr32(sp1 - 0x24u, COW_IMG(0x103b9c28u));
    wr32(sp1 - 0x28u, arg2);
    g->ebx = arg1;
    g->ecx = t53;
    g->esp = sp1 - 0x14u;
    t55 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t54, 1, 5, arg2, COW_IMG(0x103b9c28u), t52, rd32(sp1 - 0x1cu), rd32(sp1 - 0x18u));
    t56 = g->ecx;
    t57 = g->edx;
    eax = t55;
    ecx = t56;
    edx = t57;
    al_m4 = rd32(sp1 - 4u);
    goto L_1028cb08;
L_1028ca3b: ;
    COW_AT(1028ca3b)
    wr32(sp1 - 0x1cu, eax);
    wr32(sp1 - 0x20u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 4u;
    t26 = cow_cdecl(g, COW_IMG(0x10279e80u), 7, arg1, eax, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u));
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp1 - 0x24u, t26);
    wr32(sp1 - 0x28u, COW_IMG(0x103b9cb8u));
    wr32(sp1 - 0x2cu, arg2);
    g->ebx = arg1;
    g->ecx = t27;
    g->esp = sp1 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t28, 1, 5, arg2, COW_IMG(0x103b9cb8u), t26, arg1, rd32(sp1 - 0x1cu));
    t29 = g->ecx;
    t30 = g->edx;
    ecx = t29;
    edx = t30;
    goto L_1028ca61;
L_1028ca53: ;
    COW_AT(1028ca53)
    wr32(sp1 - 0x1cu, COW_IMG(0x103b9c88u));
    al_m1c = COW_IMG(0x103b9c88u);
    goto L_1028ca58;
L_1028cad9: ;
    COW_AT(1028cad9)
    wr32(sp1 - 0x1cu, COW_IMG(0x103b9c04u));
    wr32(sp1 - 0x20u, arg2);
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9c04u), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    al_m4 = rd32(sp1 - 4u);
    goto L_1028cb08;
L_1028cae9: ;
    COW_AT(1028cae9)
    wr32(sp1 - 0x1cu, COW_IMG(0x103b9bd8u));
    wr32(sp1 - 0x20u, arg2);
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0xcu;
    t11 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9bd8u), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u));
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    al_m4 = rd32(sp1 - 4u);
    goto L_1028cb08;
L_1028caf9: ;
    COW_AT(1028caf9)
    wr32(sp1 - 0x1cu, eax);
    wr32(sp1 - 0x20u, COW_IMG(0x103b9bb4u));
    al_m1c = eax;
    al_m20 = COW_IMG(0x103b9bb4u);
    goto L_1028caff;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028c560(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x1028c57au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x18u);
        in_esi = rd32(sp1 - 0x14u);
        in_ebx = rd32(sp1 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1028c59eu:
    {
        uint32_t al_m1c;
        uint32_t al_m20;
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c5d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c5ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c5fcu:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c612u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c619u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c643u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c64au:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c674u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c67bu:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c6b9u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c6c0u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c6d6u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c6ddu:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c71eu:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c7d0u:
    {
        uint32_t al_m20;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m20 = rd32(sp1 - 0x20u);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c7d7u:
    {
        uint32_t al_m20;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m20 = rd32(sp1 - 0x20u);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c7dcu:
    {
        uint32_t al_m1c;
        uint32_t al_m20;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x1cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c7efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c802u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c815u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c834u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c84au:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c851u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c895u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c8f5u:
    {
        uint32_t al_m4;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m4 = rd32(sp1 - 4u);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c927u:
    {
        uint32_t al_m4;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m4 = rd32(sp1 - 4u);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c92cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c992u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c9b1u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c9c7u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c9ceu:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c9e4u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028c9f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028ca11u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028ca27u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028ca2eu:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028ca34u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028ca3bu:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028ca53u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028ca58u:
    {
        uint32_t al_m1c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x1cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028ca61u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028caaau:
    {
        uint32_t al_m20;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m20 = rd32(sp1 - 0x20u);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028cab1u:
    {
        uint32_t al_m20;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m20 = rd32(sp1 - 0x20u);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028cab6u:
    {
        uint32_t al_m1c;
        uint32_t al_m20;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x1cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028cad9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028cae9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028caf9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028caffu:
    {
        uint32_t al_m1c;
        uint32_t al_m20;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028cb08u:
    {
        uint32_t al_m1c;
        uint32_t al_m4;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1c = rd32(sp1 - 0x1cu);
        al_m4 = rd32(sp1 - 4u);
        g->esp = sp1 - 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1028cb2au:
    {
        uint32_t al_m10;
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m1c;
        uint32_t al_m20;
        uint32_t al_m8;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        al_m10 = rd32(sp1 - 0x10u);
        al_m8 = rd32(sp1 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1028c560(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1028c560(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
