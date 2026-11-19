/* f_0x10048220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10048220(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_128;
    uint32_t loc_12c;
    uint32_t loc_130;
    uint32_t loc_134;
    uint32_t loc_138;
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
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 316u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1004822fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x12cu); in_esi = rd32(sp0 - 0x128u); g->edi = rd32(sp0 - 0x12cu); g->esi = rd32(sp0 - 0x128u); goto E_1004822f;
    case 0x10048260u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048260;
    case 0x10048273u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048273;
    case 0x1004827au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004827a;
    case 0x10048285u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048285;
    case 0x10048295u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048295;
    case 0x100482a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100482a0;
    case 0x100482b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100482b0;
    case 0x100482bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100482bb;
    case 0x100482c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100482c4;
    case 0x100482cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100482cf;
    case 0x100482dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100482df;
    case 0x100482eau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100482ea;
    case 0x100482fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100482fa;
    case 0x10048305u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048305;
    case 0x1004830eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004830e;
    case 0x10048319u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048319;
    case 0x10048329u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048329;
    case 0x10048334u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048334;
    case 0x10048344u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048344;
    case 0x1004834fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004834f;
    case 0x10048355u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048355;
    case 0x1004835cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004835c;
    case 0x10048369u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048369;
    case 0x10048370u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048370;
    case 0x1004837du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004837d;
    case 0x10048384u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048384;
    case 0x1004838au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004838a;
    case 0x10048391u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048391;
    case 0x1004839eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004839e;
    case 0x100483a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100483a5;
    case 0x100483b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100483b2;
    case 0x100483b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100483b9;
    case 0x100483bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100483bd;
    case 0x100483c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100483c4;
    case 0x100483cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100483cb;
    case 0x100483d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100483d0;
    case 0x100483d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100483d6;
    case 0x100483e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100483e7;
    case 0x100483f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100483f5;
    case 0x10048409u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048409;
    case 0x10048418u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048418;
    case 0x1004841fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004841f;
    case 0x1004842bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004842b;
    case 0x10048432u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048432;
    case 0x10048444u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048444;
    case 0x10048449u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048449;
    case 0x10048450u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048450;
    case 0x10048457u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048457;
    case 0x1004845eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004845e;
    case 0x10048466u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_10048466;
    case 0x1004846bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004846b;
    case 0x10048479u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048479;
    case 0x10048484u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048484;
    case 0x10048496u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048496;
    case 0x100484a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100484a0;
    case 0x100484abu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100484ab;
    case 0x100484bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100484bd;
    case 0x100484c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100484c7;
    case 0x100484d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100484d2;
    case 0x100484e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100484e4;
    case 0x100484eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100484ee;
    case 0x100484f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100484f9;
    case 0x1004850bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_1004850b;
    case 0x10048515u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048515;
    case 0x10048520u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048520;
    case 0x10048532u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048532;
    case 0x1004853cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004853c;
    case 0x10048547u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048547;
    case 0x10048559u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048559;
    case 0x10048563u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048563;
    case 0x1004856eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004856e;
    case 0x10048580u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048580;
    case 0x1004858au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004858a;
    case 0x10048595u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048595;
    case 0x100485a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100485a7;
    case 0x100485b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100485b1;
    case 0x100485bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100485bc;
    case 0x100485ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100485ce;
    case 0x100485d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100485d8;
    case 0x100485e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100485e3;
    case 0x100485f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100485f5;
    case 0x100485ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100485ff;
    case 0x1004860au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004860a;
    case 0x1004861cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_1004861c;
    case 0x10048626u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048626;
    case 0x10048631u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048631;
    case 0x10048643u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048643;
    case 0x1004864du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004864d;
    case 0x10048658u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048658;
    case 0x1004866du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_1004866d;
    case 0x10048677u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048677;
    case 0x10048682u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048682;
    case 0x10048697u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048697;
    case 0x100486a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100486a1;
    case 0x100486acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100486ac;
    case 0x100486c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100486c1;
    case 0x100486cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100486cb;
    case 0x100486d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100486d6;
    case 0x100486ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100486eb;
    case 0x100486f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100486f5;
    case 0x10048700u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048700;
    case 0x10048715u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048715;
    case 0x1004871fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004871f;
    case 0x1004872au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004872a;
    case 0x1004873cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_1004873c;
    case 0x10048746u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048746;
    case 0x10048751u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048751;
    case 0x10048766u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048766;
    case 0x10048770u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048770;
    case 0x1004877bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004877b;
    case 0x1004878du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_1004878d;
    case 0x10048797u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048797;
    case 0x100487a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100487a2;
    case 0x100487b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100487b7;
    case 0x100487c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100487c1;
    case 0x100487ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100487cc;
    case 0x100487deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100487de;
    case 0x100487e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100487e8;
    case 0x100487f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100487f3;
    case 0x10048808u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048808;
    case 0x10048812u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048812;
    case 0x1004881du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004881d;
    case 0x1004882fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_1004882f;
    case 0x10048839u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048839;
    case 0x10048844u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048844;
    case 0x10048859u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048859;
    case 0x10048863u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048863;
    case 0x1004886eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004886e;
    case 0x10048880u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048880;
    case 0x1004888au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004888a;
    case 0x10048895u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048895;
    case 0x100488aau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100488aa;
    case 0x100488b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100488b4;
    case 0x100488bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100488bf;
    case 0x100488d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100488d4;
    case 0x100488deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100488de;
    case 0x100488e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100488e9;
    case 0x100488feu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100488fe;
    case 0x10048908u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048908;
    case 0x10048913u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048913;
    case 0x10048928u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048928;
    case 0x10048932u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048932;
    case 0x1004893du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004893d;
    case 0x10048952u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048952;
    case 0x1004895cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004895c;
    case 0x10048967u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048967;
    case 0x1004897cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_1004897c;
    case 0x10048986u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048986;
    case 0x10048991u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048991;
    case 0x100489a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100489a6;
    case 0x100489b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100489b0;
    case 0x100489bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100489bb;
    case 0x100489cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100489cd;
    case 0x100489d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100489d7;
    case 0x100489e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_100489e2;
    case 0x100489f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_100489f7;
    case 0x10048a01u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048a01;
    case 0x10048a0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048a0c;
    case 0x10048a21u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048a21;
    case 0x10048a2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048a2b;
    case 0x10048a36u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048a36;
    case 0x10048a4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048a4b;
    case 0x10048a55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048a55;
    case 0x10048a60u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048a60;
    case 0x10048a75u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048a75;
    case 0x10048a7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048a7f;
    case 0x10048a8au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048a8a;
    case 0x10048a9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048a9f;
    case 0x10048aa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048aa9;
    case 0x10048ab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048ab4;
    case 0x10048ac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048ac9;
    case 0x10048ad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048ad3;
    case 0x10048adeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048ade;
    case 0x10048af3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048af3;
    case 0x10048afdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048afd;
    case 0x10048b08u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048b08;
    case 0x10048b1du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048b1d;
    case 0x10048b27u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048b27;
    case 0x10048b32u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048b32;
    case 0x10048b44u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048b44;
    case 0x10048b4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048b4e;
    case 0x10048b59u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048b59;
    case 0x10048b6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048b6b;
    case 0x10048b75u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048b75;
    case 0x10048b80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048b80;
    case 0x10048b92u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048b92;
    case 0x10048b9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048b9c;
    case 0x10048ba7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048ba7;
    case 0x10048bb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048bb9;
    case 0x10048bc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048bc3;
    case 0x10048bceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048bce;
    case 0x10048be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048be0;
    case 0x10048beau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048bea;
    case 0x10048bf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048bf5;
    case 0x10048c07u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048c07;
    case 0x10048c11u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048c11;
    case 0x10048c1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048c1c;
    case 0x10048c31u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048c31;
    case 0x10048c3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048c3b;
    case 0x10048c46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048c46;
    case 0x10048c5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048c5b;
    case 0x10048c65u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048c65;
    case 0x10048c70u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048c70;
    case 0x10048c85u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048c85;
    case 0x10048c8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048c8f;
    case 0x10048c9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048c9a;
    case 0x10048cafu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048caf;
    case 0x10048cb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048cb9;
    case 0x10048cc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048cc4;
    case 0x10048cd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048cd9;
    case 0x10048ce3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048ce3;
    case 0x10048ceeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048cee;
    case 0x10048d03u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048d03;
    case 0x10048d0du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048d0d;
    case 0x10048d18u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048d18;
    case 0x10048d2du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048d2d;
    case 0x10048d37u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048d37;
    case 0x10048d42u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048d42;
    case 0x10048d57u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048d57;
    case 0x10048d61u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048d61;
    case 0x10048d6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048d6c;
    case 0x10048d81u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048d81;
    case 0x10048d8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048d8b;
    case 0x10048d96u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048d96;
    case 0x10048dabu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048dab;
    case 0x10048db5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048db5;
    case 0x10048dc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048dc0;
    case 0x10048dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048dd5;
    case 0x10048ddfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048ddf;
    case 0x10048deau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048dea;
    case 0x10048dffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048dff;
    case 0x10048e09u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048e09;
    case 0x10048e14u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048e14;
    case 0x10048e29u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048e29;
    case 0x10048e33u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048e33;
    case 0x10048e3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048e3e;
    case 0x10048e53u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048e53;
    case 0x10048e5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048e5d;
    case 0x10048e68u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048e68;
    case 0x10048e7du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048e7d;
    case 0x10048e87u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048e87;
    case 0x10048e92u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048e92;
    case 0x10048ea7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048ea7;
    case 0x10048eb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048eb1;
    case 0x10048ebcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048ebc;
    case 0x10048ed1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048ed1;
    case 0x10048edbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048edb;
    case 0x10048ee6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048ee6;
    case 0x10048efbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048efb;
    case 0x10048f05u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f05;
    case 0x10048f0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f0c;
    case 0x10048f21u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048f21;
    case 0x10048f28u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f28;
    case 0x10048f2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f2f;
    case 0x10048f41u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048f41;
    case 0x10048f48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f48;
    case 0x10048f4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f4f;
    case 0x10048f61u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048f61;
    case 0x10048f68u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f68;
    case 0x10048f6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f6f;
    case 0x10048f76u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f76;
    case 0x10048f85u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048f85;
    case 0x10048f8au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f8a;
    case 0x10048f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f90;
    case 0x10048f9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f9b;
    case 0x10048f9du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048f9d;
    case 0x10048fa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048fa5;
    case 0x10048fb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048fb3;
    case 0x10048fbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048fbf;
    case 0x10048fc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048fc4;
    case 0x10048fcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048fcb;
    case 0x10048fddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048fdd;
    case 0x10048fe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048fe2;
    case 0x10048fe9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048fe9;
    case 0x10048ff0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10048ff0;
    case 0x10048fffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_10048fff;
    case 0x10049006u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10049006;
    case 0x1004900du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004900d;
    case 0x1004901fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_134 = rd32(sp0 - 0x134u); goto E_1004901f;
    case 0x10049024u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10049024;
    case 0x1004902au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004902a;
    case 0x10049035u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10049035;
    case 0x10049037u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10049037;
    case 0x1004903fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004903f;
    case 0x10049049u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10049049;
    case 0x10049053u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10049053;
    case 0x10049056u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10049056;
    case 0x1004905du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004905d;
    case 0x1004906au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004906a;
    case 0x10049071u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10049071;
    case 0x1004907cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004907c;
    case 0x10049083u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_10049083;
    case 0x10049088u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10049088;
    case 0x1004908eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004908e;
    case 0x10049099u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_10049099;
    case 0x1004909bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004909b;
    case 0x1004909fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1004909f;
    default: break;
    }
#endif

    COW_AT(10048220)
    wr32(sp0 - 0x128u, in_esi);
    wr32(sp0 - 0x12cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x12cu;
    cow_thiscall(g, COW_IMG(0x10049570u), self, 0);
    t1 = g->edx;
    edx = t1;
    COW_AT(1004822f)
    t2 = rd32(self + 0xe0u);
    wr32(self + 0x78u, 0x3f800000u);
    wr32(self + 0x7cu, 0x3f800000u);
    wr32(self + 0x80u, 0x3f800000u);
    wr32(self + 0x84u, 0x3f800000u);
    wr32(self + 0x88u, 0x3f800000u);
    wr32(self + 0x8cu, 0x3f800000u);
    if (t2 == 0u)
    {
        eax = 0x3f800000u;
        loc_128 = in_esi;
        loc_12c = in_edi;
        goto L_100483e7;
    }
    esi = t2;
    loc_128 = in_esi;
    loc_12c = in_edi;
L_10048260: ;
    COW_AT(10048260)
    if ((uint8_t)rd32(esi) - 5u > 0x12u) goto L_100483d0;
    eax = (uint8_t)rd32(esi) - 5u;
    COW_AT(10048273)
    t3 = rd32(COW_IMG(0x100490a8u) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x1004827au: goto L_1004827a;
    case 0x10048295u: goto L_10048295;
    case 0x100482b0u: goto L_100482b0;
    case 0x100482c4u: goto L_100482c4;
    case 0x100482dfu: goto L_100482df;
    case 0x100482fau: goto L_100482fa;
    case 0x1004830eu: goto L_1004830e;
    case 0x10048329u: goto L_10048329;
    case 0x10048344u: goto L_10048344;
    case 0x10048355u: goto L_10048355;
    case 0x10048369u: goto L_10048369;
    case 0x1004837du: goto L_1004837d;
    case 0x1004838au: goto L_1004838a;
    case 0x1004839eu: goto L_1004839e;
    case 0x100483b2u: goto L_100483b2;
    case 0x100483d0u: goto L_100483d0;
    default: rt_fatal(g, COW_IMG(0x10048273u), "switch");
    }
    return 0;
L_1004827a: ;
    COW_AT(1004827a)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    eax = rd32(esi + 4u);
    COW_AT(10048285)
    t14 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t14);
    wr32(sp0 - 0x134u, 0x19u);
    wr32(sp0 - 0x138u, sp0 - 0xf0u);
    edx = sp0 - 0xf0u;
    loc_130 = t14;
    loc_138 = sp0 - 0xf0u;
L_100483c4: ;
    COW_AT(100483c4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x12cu;
    t15 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, loc_138, 0x19u, loc_130);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(100483cb)
    wr32(esi + 4u, rd32(eax));
    loc_128 = rd32(sp0 - 0x128u);
    loc_12c = rd32(sp0 - 0x12cu);
L_100483d0: ;
    COW_AT(100483d0)
    if ((uint8_t)rd32(esi) == 0u)
    {
        eax = rd32(esi);
        goto L_100483e7;
    }
    eax = rd32(esi);
    COW_AT(100483d6)
    if (esi + (eax >> 8u & 0x1fu) * 4u != 0u)
    {
        esi = esi + (eax >> 8u & 0x1fu) * 4u;
        goto L_10048260;
    }
    eax = eax >> 8u & 0x1fu;
L_100483e7: ;
    COW_AT(100483e7)
    if (rd32(self + 0xe4u) == 0u) goto L_10048fa5;
    esi = rd32(self + 0xe4u);
L_100483f5: ;
    COW_AT(100483f5)
    if ((uint8_t)rd32(esi) - 0x21u > 0x76u) goto L_10048f8a;
    eax = (uint8_t)rd32(esi) - 0x21u;
    COW_AT(10048409)
    t17 = rd32(COW_IMG(0x100490f4u) + rd8(COW_IMG(0x10049218u) + eax) * 4u);
    edx = rd8(COW_IMG(0x10049218u) + eax);
    switch (t17 - RD)
    {
    case 0x10048418u: goto L_10048418;
    case 0x1004842bu: goto L_1004842b;
    case 0x10048479u: goto L_10048479;
    case 0x100484a0u: goto L_100484a0;
    case 0x100484c7u: goto L_100484c7;
    case 0x100484eeu: goto L_100484ee;
    case 0x10048515u: goto L_10048515;
    case 0x1004853cu: goto L_1004853c;
    case 0x10048563u: goto L_10048563;
    case 0x1004858au: goto L_1004858a;
    case 0x100485b1u: goto L_100485b1;
    case 0x100485d8u: goto L_100485d8;
    case 0x100485ffu: goto L_100485ff;
    case 0x10048626u: goto L_10048626;
    case 0x1004864du: goto L_1004864d;
    case 0x10048677u: goto L_10048677;
    case 0x100486a1u: goto L_100486a1;
    case 0x100486cbu: goto L_100486cb;
    case 0x100486f5u: goto L_100486f5;
    case 0x1004871fu: goto L_1004871f;
    case 0x10048746u: goto L_10048746;
    case 0x10048770u: goto L_10048770;
    case 0x10048797u: goto L_10048797;
    case 0x100487c1u: goto L_100487c1;
    case 0x100487e8u: goto L_100487e8;
    case 0x10048812u: goto L_10048812;
    case 0x10048839u: goto L_10048839;
    case 0x10048863u: goto L_10048863;
    case 0x1004888au: goto L_1004888a;
    case 0x100488b4u: goto L_100488b4;
    case 0x100488deu: goto L_100488de;
    case 0x10048908u: goto L_10048908;
    case 0x10048932u: goto L_10048932;
    case 0x1004895cu: goto L_1004895c;
    case 0x10048986u: goto L_10048986;
    case 0x100489b0u: goto L_100489b0;
    case 0x100489d7u: goto L_100489d7;
    case 0x10048a01u: goto L_10048a01;
    case 0x10048a2bu: goto L_10048a2b;
    case 0x10048a55u: goto L_10048a55;
    case 0x10048a7fu: goto L_10048a7f;
    case 0x10048aa9u: goto L_10048aa9;
    case 0x10048ad3u: goto L_10048ad3;
    case 0x10048afdu: goto L_10048afd;
    case 0x10048b27u: goto L_10048b27;
    case 0x10048b4eu: goto L_10048b4e;
    case 0x10048b75u: goto L_10048b75;
    case 0x10048b9cu: goto L_10048b9c;
    case 0x10048bc3u: goto L_10048bc3;
    case 0x10048beau: goto L_10048bea;
    case 0x10048c11u: goto L_10048c11;
    case 0x10048c3bu: goto L_10048c3b;
    case 0x10048c65u: goto L_10048c65;
    case 0x10048c8fu: goto L_10048c8f;
    case 0x10048cb9u: goto L_10048cb9;
    case 0x10048ce3u: goto L_10048ce3;
    case 0x10048d0du: goto L_10048d0d;
    case 0x10048d37u: goto L_10048d37;
    case 0x10048d61u: goto L_10048d61;
    case 0x10048d8bu: goto L_10048d8b;
    case 0x10048db5u: goto L_10048db5;
    case 0x10048ddfu: goto L_10048ddf;
    case 0x10048e09u: goto L_10048e09;
    case 0x10048e33u: goto L_10048e33;
    case 0x10048e5du: goto L_10048e5d;
    case 0x10048e87u: goto L_10048e87;
    case 0x10048eb1u: goto L_10048eb1;
    case 0x10048edbu: goto L_10048edb;
    case 0x10048f05u: goto L_10048f05;
    case 0x10048f28u: goto L_10048f28;
    case 0x10048f48u: goto L_10048f48;
    case 0x10048f68u: goto L_10048f68;
    case 0x10048f8au: goto L_10048f8a;
    default: rt_fatal(g, COW_IMG(0x10048411u), "switch");
    }
    return 0;
L_10048295: ;
    COW_AT(10048295)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    COW_AT(100482a0)
    t13 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t13);
    wr32(sp0 - 0x134u, 0x19u);
    wr32(sp0 - 0x138u, sp0 - 0xe4u);
    eax = t13;
    loc_130 = t13;
    loc_138 = sp0 - 0xe4u;
    goto L_100483c4;
L_100482b0: ;
    COW_AT(100482b0)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    COW_AT(100482bb)
    eax = sp0 - 0xe0u;
L_100483bd: ;
    COW_AT(100483bd)
    t12 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t12);
    wr32(sp0 - 0x134u, 0x19u);
    wr32(sp0 - 0x138u, eax);
    edx = t12;
    loc_130 = t12;
    loc_138 = eax;
    goto L_100483c4;
L_100482c4: ;
    COW_AT(100482c4)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    eax = rd32(esi + 4u);
    COW_AT(100482cf)
    t11 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t11);
    wr32(sp0 - 0x134u, 0x19u);
    wr32(sp0 - 0x138u, sp0 - 0x114u);
    edx = sp0 - 0x114u;
    loc_130 = t11;
    loc_138 = sp0 - 0x114u;
    goto L_100483c4;
L_100482df: ;
    COW_AT(100482df)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    COW_AT(100482ea)
    t10 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t10);
    wr32(sp0 - 0x134u, 0x19u);
    wr32(sp0 - 0x138u, sp0 - 0xecu);
    eax = t10;
    loc_130 = t10;
    loc_138 = sp0 - 0xecu;
    goto L_100483c4;
L_100482fa: ;
    COW_AT(100482fa)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    COW_AT(10048305)
    eax = sp0 - 0x10cu;
    goto L_100483bd;
L_1004830e: ;
    COW_AT(1004830e)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    eax = rd32(esi + 4u);
    COW_AT(10048319)
    t9 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t9);
    wr32(sp0 - 0x134u, 0x19u);
    wr32(sp0 - 0x138u, sp0 - 0xf4u);
    edx = sp0 - 0xf4u;
    loc_130 = t9;
    loc_138 = sp0 - 0xf4u;
    goto L_100483c4;
L_10048329: ;
    COW_AT(10048329)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    COW_AT(10048334)
    t8 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t8);
    wr32(sp0 - 0x134u, 0x19u);
    wr32(sp0 - 0x138u, sp0 - 0x104u);
    eax = t8;
    loc_130 = t8;
    loc_138 = sp0 - 0x104u;
    goto L_100483c4;
L_10048344: ;
    COW_AT(10048344)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    COW_AT(1004834f)
    eax = sp0 - 0x11cu;
    goto L_100483bd;
L_10048355: ;
    COW_AT(10048355)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    eax = rd32(esi + 4u);
    COW_AT(1004835c)
    t7 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t7);
    wr32(sp0 - 0x134u, 0x19u);
    wr32(sp0 - 0x138u, sp0 - 0xfcu);
    edx = sp0 - 0xfcu;
    loc_130 = t7;
    loc_138 = sp0 - 0xfcu;
    goto L_100483c4;
L_10048369: ;
    COW_AT(10048369)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    COW_AT(10048370)
    t6 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t6);
    wr32(sp0 - 0x134u, 0x19u);
    wr32(sp0 - 0x138u, sp0 - 0x118u);
    eax = t6;
    loc_130 = t6;
    loc_138 = sp0 - 0x118u;
    goto L_100483c4;
L_1004837d: ;
    COW_AT(1004837d)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    COW_AT(10048384)
    eax = sp0 - 0x110u;
    goto L_100483bd;
L_1004838a: ;
    COW_AT(1004838a)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    eax = rd32(esi + 4u);
    COW_AT(10048391)
    t5 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t5);
    wr32(sp0 - 0x134u, 0x19u);
    wr32(sp0 - 0x138u, sp0 - 0x108u);
    edx = sp0 - 0x108u;
    loc_130 = t5;
    loc_138 = sp0 - 0x108u;
    goto L_100483c4;
L_1004839e: ;
    COW_AT(1004839e)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    COW_AT(100483a5)
    t4 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t4);
    wr32(sp0 - 0x134u, 0x19u);
    wr32(sp0 - 0x138u, sp0 - 0x100u);
    eax = t4;
    loc_130 = t4;
    loc_138 = sp0 - 0x100u;
    goto L_100483c4;
L_100483b2: ;
    COW_AT(100483b2)
    if (rd32(esi + 4u) != 0u) goto L_100483d0;
    COW_AT(100483b9)
    eax = sp0 - 0xf8u;
    goto L_100483bd;
L_10048418: ;
    COW_AT(10048418)
    if (rd32(esi + 4u) != 0u) goto L_1004846b;
    COW_AT(1004841f)
    t230 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t230);
    wr32(sp0 - 0x134u, 0x3eu);
    eax = t230;
    ecx = sp0 - 0xf8u;
    loc_134 = 0x3eu;
    loc_130 = t230;
L_1004845e: ;
    COW_AT(1004845e)
    wr32(sp0 - 0x138u, ecx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x12cu;
    t231 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, ecx, loc_134, loc_130);
    t232 = g->edx;
    eax = t231;
    edx = t232;
    COW_AT(10048466)
    wr32(esi + 4u, rd32(eax));
    loc_128 = rd32(sp0 - 0x128u);
    loc_12c = rd32(sp0 - 0x12cu);
L_1004846b: ;
    COW_AT(1004846b)
    t233 = rd32(esi + 4u);
    wr32(self + 0xa0u, t233);
L_10048f8a: ;
    COW_AT(10048f8a)
    if ((uint8_t)rd32(esi) == 0u)
    {
        eax = rd32(esi);
    COW_AT(10048f9b)
        esi = 0u;
    }
    else
    {
        eax = rd32(esi);
    COW_AT(10048f90)
        esi = esi + (eax >> 8u & 0x1fu) * 4u;
        eax = eax >> 8u & 0x1fu;
    }
    COW_AT(10048f9d)
    if (esi != 0u) goto L_100483f5;
L_10048fa5: ;
    COW_AT(10048fa5)
    if (rd32(self + 0xe8u) == 0u) goto L_1004903f;
    esi = rd32(self + 0xe8u);
L_10048fb3: ;
    COW_AT(10048fb3)
    if ((uint8_t)rd32(esi) == 0x47u)
    {
    COW_AT(10049006)
        if (rd32(esi + 0xcu) == 0u)
        {
    COW_AT(1004900d)
            t239 = rd32(esi + 8u);
            wr32(sp0 - 0x130u, t239);
            wr32(sp0 - 0x134u, 0xau);
            wr32(sp0 - 0x138u, sp0 - 0xe8u);
            g->eax = t239;
            g->edx = edx;
            g->esp = sp0 - 0x12cu;
            t240 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xe8u, 0xau, t239);
            t241 = g->edx;
            eax = t240;
            edx = t241;
    COW_AT(1004901f)
            wr32(esi + 0xcu, rd32(eax));
            loc_128 = rd32(sp0 - 0x128u);
            loc_12c = rd32(sp0 - 0x12cu);
        }
    }
    else
    {
        eax = (uint8_t)rd32(esi);
    COW_AT(10048fbf)
        if (eax == 0x65u)
        {
    COW_AT(10048fc4)
            if (rd32(esi + 4u) == 0u)
            {
    COW_AT(10048fcb)
                t234 = rd32(esi + 8u);
                wr32(sp0 - 0x130u, t234);
                wr32(sp0 - 0x134u, 7u);
                wr32(sp0 - 0x138u, sp0 - 0x120u);
                g->eax = t234;
                g->edx = edx;
                g->esp = sp0 - 0x12cu;
                t235 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x120u, 7u, t234);
                t236 = g->edx;
                eax = t235;
                edx = t236;
    COW_AT(10048fdd)
                wr32(esi + 4u, rd32(eax));
                loc_128 = rd32(sp0 - 0x128u);
                loc_12c = rd32(sp0 - 0x12cu);
            }
    COW_AT(10048fe2)
            if (rd32(esi + 4u) != 0u)
            {
                eax = rd32(esi + 4u);
    COW_AT(10048fe9)
                if (rd32(esi + 8u) == 0u)
                {
    COW_AT(10048ff0)
                    wr32(sp0 - 0x130u, eax);
                    wr32(sp0 - 0x134u, 5u);
                    wr32(sp0 - 0x138u, sp0 - 0x124u);
                    g->eax = eax;
                    g->edx = sp0 - 0x124u;
                    g->esp = sp0 - 0x12cu;
                    t237 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x124u, 5u, eax);
                    t238 = g->edx;
                    eax = t237;
                    edx = t238;
    COW_AT(10048fff)
                    wr32(esi + 8u, rd32(eax));
                    loc_128 = rd32(sp0 - 0x128u);
                    loc_12c = rd32(sp0 - 0x12cu);
                }
            }
        }
    }
    COW_AT(10049024)
    if ((uint8_t)rd32(esi) == 0u)
    {
        eax = rd32(esi);
    COW_AT(10049035)
        esi = 0u;
    }
    else
    {
        eax = rd32(esi);
    COW_AT(1004902a)
        esi = esi + (eax >> 8u & 0x1fu) * 4u;
        eax = eax >> 8u & 0x1fu;
    }
    COW_AT(10049037)
    if (esi != 0u) goto L_10048fb3;
L_1004903f: ;
    COW_AT(1004903f)
    if (rd32(self + 0xecu) == 0u) goto L_1004909f;
    esi = rd32(self + 0xecu);
L_10049049: ;
    COW_AT(10049049)
    if ((uint8_t)rd32(esi) == 1u) goto L_1004906a;
    eax = (uint8_t)rd32(esi) - 1u;
    COW_AT(10049053)
    if (eax != 1u) goto L_10049088;
    COW_AT(10049056)
    if (rd32(esi + 4u) != 0u) goto L_10049088;
    COW_AT(1004905d)
    t242 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t242);
    wr32(sp0 - 0x134u, 7u);
    wr32(sp0 - 0x138u, sp0 - 0x120u);
    eax = sp0 - 0x120u;
    edx = t242;
    loc_134 = 7u;
    loc_138 = sp0 - 0x120u;
    loc_130 = t242;
L_1004907c: ;
    COW_AT(1004907c)
    g->eax = eax;
    g->esp = sp0 - 0x12cu;
    t244 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, loc_138, loc_134, loc_130);
    eax = t244;
    COW_AT(10049083)
    wr32(esi + 4u, rd32(eax));
    loc_128 = rd32(sp0 - 0x128u);
    loc_12c = rd32(sp0 - 0x12cu);
L_10049088: ;
    COW_AT(10049088)
    if ((uint8_t)rd32(esi) == 0u)
    {
        eax = rd32(esi);
    COW_AT(10049099)
        esi = 0u;
    }
    else
    {
        eax = rd32(esi);
    COW_AT(1004908e)
        esi = esi + (eax >> 8u & 0x1fu) * 4u;
        eax = eax >> 8u & 0x1fu;
    }
    COW_AT(1004909b)
    if (esi != 0u) goto L_10049049;
L_1004909f: ;
    COW_AT(1004909f)
    g->esi = loc_128;
    g->edi = loc_12c;
    return eax;
L_1004842b: ;
    COW_AT(1004842b)
    if (rd32(esi + 0x10u) == 0u)
    {
    COW_AT(10048432)
        t227 = rd32(esi + 0x14u);
        wr32(sp0 - 0x130u, t227);
        wr32(sp0 - 0x134u, 0x3eu);
        wr32(sp0 - 0x138u, sp0 - 0x100u);
        g->eax = sp0 - 0x100u;
        g->edx = t227;
        g->esp = sp0 - 0x12cu;
        t228 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x100u, 0x3eu, t227);
        t229 = g->edx;
        eax = t228;
        edx = t229;
    COW_AT(10048444)
        wr32(esi + 0x10u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    COW_AT(10048449)
    if (rd32(esi + 8u) == 0u) goto L_1004846b;
    eax = rd32(esi + 8u);
    COW_AT(10048450)
    if (rd32(esi + 4u) != 0u) goto L_1004846b;
    COW_AT(10048457)
    wr32(sp0 - 0x130u, eax);
    wr32(sp0 - 0x134u, 0x19u);
    ecx = sp0 - 0x108u;
    loc_134 = 0x19u;
    loc_130 = eax;
    goto L_1004845e;
L_10048479: ;
    COW_AT(10048479)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048484)
        t224 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t224);
        wr32(sp0 - 0x134u, 5u);
        wr32(sp0 - 0x138u, sp0 - 0x110u);
        g->eax = sp0 - 0x110u;
        g->edx = t224;
        g->esp = sp0 - 0x12cu;
        t225 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x110u, 5u, t224);
        t226 = g->edx;
        eax = t225;
        edx = t226;
    COW_AT(10048496)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100484a0: ;
    COW_AT(100484a0)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(100484ab)
        t221 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t221);
        wr32(sp0 - 0x134u, 5u);
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        g->eax = eax;
        g->edx = sp0 - 0x118u;
        g->esp = sp0 - 0x12cu;
        t222 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x118u, 5u, t221);
        t223 = g->edx;
        eax = t222;
        edx = t223;
    COW_AT(100484bd)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100484c7: ;
    COW_AT(100484c7)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(100484d2)
        t218 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t218);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xfcu);
        g->eax = t218;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t219 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xfcu, 0x19u, t218);
        t220 = g->edx;
        eax = t219;
        edx = t220;
    COW_AT(100484e4)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100484ee: ;
    COW_AT(100484ee)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(100484f9)
        t215 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t215);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x11cu);
        g->eax = sp0 - 0x11cu;
        g->edx = t215;
        g->esp = sp0 - 0x12cu;
        t216 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x11cu, 0x19u, t215);
        t217 = g->edx;
        eax = t216;
        edx = t217;
    COW_AT(1004850b)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048515: ;
    COW_AT(10048515)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048520)
        t212 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t212);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        g->eax = eax;
        g->edx = sp0 - 0x104u;
        g->esp = sp0 - 0x12cu;
        t213 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x104u, 0x19u, t212);
        t214 = g->edx;
        eax = t213;
        edx = t214;
    COW_AT(10048532)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_1004853c: ;
    COW_AT(1004853c)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048547)
        t209 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t209);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xf4u);
        g->eax = t209;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t210 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xf4u, 0x19u, t209);
        t211 = g->edx;
        eax = t210;
        edx = t211;
    COW_AT(10048559)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048563: ;
    COW_AT(10048563)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(1004856e)
        t206 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t206);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x10cu);
        g->eax = sp0 - 0x10cu;
        g->edx = t206;
        g->esp = sp0 - 0x12cu;
        t207 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x10cu, 0x19u, t206);
        t208 = g->edx;
        eax = t207;
        edx = t208;
    COW_AT(10048580)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_1004858a: ;
    COW_AT(1004858a)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048595)
        t203 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t203);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xecu);
        g->eax = eax;
        g->edx = sp0 - 0xecu;
        g->esp = sp0 - 0x12cu;
        t204 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xecu, 0x19u, t203);
        t205 = g->edx;
        eax = t204;
        edx = t205;
    COW_AT(100485a7)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100485b1: ;
    COW_AT(100485b1)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(100485bc)
        t200 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t200);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x114u);
        g->eax = t200;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t201 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x114u, 0x19u, t200);
        t202 = g->edx;
        eax = t201;
        edx = t202;
    COW_AT(100485ce)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100485d8: ;
    COW_AT(100485d8)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(100485e3)
        t197 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t197);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xe0u);
        g->eax = sp0 - 0xe0u;
        g->edx = t197;
        g->esp = sp0 - 0x12cu;
        t198 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xe0u, 0x19u, t197);
        t199 = g->edx;
        eax = t198;
        edx = t199;
    COW_AT(100485f5)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100485ff: ;
    COW_AT(100485ff)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(1004860a)
        t194 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t194);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xe4u);
        g->eax = eax;
        g->edx = sp0 - 0xe4u;
        g->esp = sp0 - 0x12cu;
        t195 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xe4u, 0x19u, t194);
        t196 = g->edx;
        eax = t195;
        edx = t196;
    COW_AT(1004861c)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048626: ;
    COW_AT(10048626)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048631)
        t191 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t191);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xf0u);
        g->eax = t191;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t192 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xf0u, 0x19u, t191);
        t193 = g->edx;
        eax = t192;
        edx = t193;
    COW_AT(10048643)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_1004864d: ;
    COW_AT(1004864d)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048658)
        t188 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t188);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x90u);
        g->eax = sp0 - 0x90u;
        g->edx = t188;
        g->esp = sp0 - 0x12cu;
        t189 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x90u, 0x19u, t188);
        t190 = g->edx;
        eax = t189;
        edx = t190;
    COW_AT(1004866d)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048677: ;
    COW_AT(10048677)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048682)
        t185 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t185);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x14u);
        g->eax = eax;
        g->edx = sp0 - 0x14u;
        g->esp = sp0 - 0x12cu;
        t186 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x14u, 0x19u, t185);
        t187 = g->edx;
        eax = t186;
        edx = t187;
    COW_AT(10048697)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100486a1: ;
    COW_AT(100486a1)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(100486ac)
        t182 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t182);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xcu);
        g->eax = t182;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t183 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xcu, 0x19u, t182);
        t184 = g->edx;
        eax = t183;
        edx = t184;
    COW_AT(100486c1)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100486cb: ;
    COW_AT(100486cb)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(100486d6)
        t179 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t179);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->edx = t179;
        g->esp = sp0 - 0x12cu;
        t180 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 4u, 0x19u, t179);
        t181 = g->edx;
        eax = t180;
        edx = t181;
    COW_AT(100486eb)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100486f5: ;
    COW_AT(100486f5)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048700)
        t176 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t176);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x38u);
        g->eax = eax;
        g->edx = sp0 - 0x38u;
        g->esp = sp0 - 0x12cu;
        t177 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x38u, 0x19u, t176);
        t178 = g->edx;
        eax = t177;
        edx = t178;
    COW_AT(10048715)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_1004871f: ;
    COW_AT(1004871f)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(1004872a)
        t173 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t173);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xd0u);
        g->eax = t173;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t174 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xd0u, 0x19u, t173);
        t175 = g->edx;
        eax = t174;
        edx = t175;
    COW_AT(1004873c)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048746: ;
    COW_AT(10048746)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048751)
        t170 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t170);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x68u);
        g->eax = sp0 - 0x68u;
        g->edx = t170;
        g->esp = sp0 - 0x12cu;
        t171 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x68u, 0x19u, t170);
        t172 = g->edx;
        eax = t171;
        edx = t172;
    COW_AT(10048766)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048770: ;
    COW_AT(10048770)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(1004877b)
        t167 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t167);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xc8u);
        g->eax = eax;
        g->edx = sp0 - 0xc8u;
        g->esp = sp0 - 0x12cu;
        t168 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xc8u, 0x19u, t167);
        t169 = g->edx;
        eax = t168;
        edx = t169;
    COW_AT(1004878d)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048797: ;
    COW_AT(10048797)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(100487a2)
        t164 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t164);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x10u);
        g->eax = t164;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t165 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x10u, 0x19u, t164);
        t166 = g->edx;
        eax = t165;
        edx = t166;
    COW_AT(100487b7)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100487c1: ;
    COW_AT(100487c1)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(100487cc)
        t161 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t161);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        g->eax = sp0 - 0xc0u;
        g->edx = t161;
        g->esp = sp0 - 0x12cu;
        t162 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xc0u, 0x19u, t161);
        t163 = g->edx;
        eax = t162;
        edx = t163;
    COW_AT(100487de)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100487e8: ;
    COW_AT(100487e8)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(100487f3)
        t158 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t158);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x60u);
        g->eax = eax;
        g->edx = sp0 - 0x60u;
        g->esp = sp0 - 0x12cu;
        t159 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x60u, 0x19u, t158);
        t160 = g->edx;
        eax = t159;
        edx = t160;
    COW_AT(10048808)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048812: ;
    COW_AT(10048812)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(1004881d)
        t155 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t155);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xb8u);
        g->eax = t155;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t156 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xb8u, 0x19u, t155);
        t157 = g->edx;
        eax = t156;
        edx = t157;
    COW_AT(1004882f)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048839: ;
    COW_AT(10048839)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048844)
        t152 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t152);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x30u);
        g->eax = sp0 - 0x30u;
        g->edx = t152;
        g->esp = sp0 - 0x12cu;
        t153 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x30u, 0x19u, t152);
        t154 = g->edx;
        eax = t153;
        edx = t154;
    COW_AT(10048859)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048863: ;
    COW_AT(10048863)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(1004886e)
        t149 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t149);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xb0u);
        g->eax = eax;
        g->edx = sp0 - 0xb0u;
        g->esp = sp0 - 0x12cu;
        t150 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xb0u, 0x19u, t149);
        t151 = g->edx;
        eax = t150;
        edx = t151;
    COW_AT(10048880)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_1004888a: ;
    COW_AT(1004888a)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048895)
        t146 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t146);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x58u);
        g->eax = t146;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t147 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x58u, 0x19u, t146);
        t148 = g->edx;
        eax = t147;
        edx = t148;
    COW_AT(100488aa)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100488b4: ;
    COW_AT(100488b4)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(100488bf)
        t143 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t143);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xa8u);
        g->eax = sp0 - 0xa8u;
        g->edx = t143;
        g->esp = sp0 - 0x12cu;
        t144 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xa8u, 0x19u, t143);
        t145 = g->edx;
        eax = t144;
        edx = t145;
    COW_AT(100488d4)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100488de: ;
    COW_AT(100488de)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(100488e9)
        t140 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t140);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x18u);
        g->eax = eax;
        g->edx = sp0 - 0x18u;
        g->esp = sp0 - 0x12cu;
        t141 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x18u, 0x19u, t140);
        t142 = g->edx;
        eax = t141;
        edx = t142;
    COW_AT(100488fe)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048908: ;
    COW_AT(10048908)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048913)
        t137 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t137);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xa0u);
        g->eax = t137;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t138 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xa0u, 0x19u, t137);
        t139 = g->edx;
        eax = t138;
        edx = t139;
    COW_AT(10048928)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048932: ;
    COW_AT(10048932)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(1004893d)
        t134 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t134);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x50u);
        g->eax = sp0 - 0x50u;
        g->edx = t134;
        g->esp = sp0 - 0x12cu;
        t135 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x50u, 0x19u, t134);
        t136 = g->edx;
        eax = t135;
        edx = t136;
    COW_AT(10048952)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_1004895c: ;
    COW_AT(1004895c)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048967)
        t131 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t131);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x98u);
        g->eax = eax;
        g->edx = sp0 - 0x98u;
        g->esp = sp0 - 0x12cu;
        t132 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x98u, 0x19u, t131);
        t133 = g->edx;
        eax = t132;
        edx = t133;
    COW_AT(1004897c)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048986: ;
    COW_AT(10048986)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048991)
        t128 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t128);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x28u);
        g->eax = t128;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t129 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x28u, 0x19u, t128);
        t130 = g->edx;
        eax = t129;
        edx = t130;
    COW_AT(100489a6)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100489b0: ;
    COW_AT(100489b0)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(100489bb)
        t125 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t125);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xdcu);
        g->eax = sp0 - 0xdcu;
        g->edx = t125;
        g->esp = sp0 - 0x12cu;
        t126 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xdcu, 0x19u, t125);
        t127 = g->edx;
        eax = t126;
        edx = t127;
    COW_AT(100489cd)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_100489d7: ;
    COW_AT(100489d7)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(100489e2)
        t122 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t122);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x48u);
        g->eax = eax;
        g->edx = sp0 - 0x48u;
        g->esp = sp0 - 0x12cu;
        t123 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x48u, 0x19u, t122);
        t124 = g->edx;
        eax = t123;
        edx = t124;
    COW_AT(100489f7)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048a01: ;
    COW_AT(10048a01)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048a0c)
        t119 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t119);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x88u);
        g->eax = t119;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t120 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x88u, 0x19u, t119);
        t121 = g->edx;
        eax = t120;
        edx = t121;
    COW_AT(10048a21)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048a2b: ;
    COW_AT(10048a2b)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048a36)
        t116 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t116);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 8u);
        g->eax = sp0 - 8u;
        g->edx = t116;
        g->esp = sp0 - 0x12cu;
        t117 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 8u, 0x19u, t116);
        t118 = g->edx;
        eax = t117;
        edx = t118;
    COW_AT(10048a4b)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048a55: ;
    COW_AT(10048a55)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048a60)
        t113 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t113);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x80u);
        g->eax = eax;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0x12cu;
        t114 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x80u, 0x19u, t113);
        t115 = g->edx;
        eax = t114;
        edx = t115;
    COW_AT(10048a75)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048a7f: ;
    COW_AT(10048a7f)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048a8a)
        t110 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t110);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x40u);
        g->eax = t110;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t111 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x40u, 0x19u, t110);
        t112 = g->edx;
        eax = t111;
        edx = t112;
    COW_AT(10048a9f)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048aa9: ;
    COW_AT(10048aa9)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048ab4)
        t107 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t107);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x78u);
        g->eax = sp0 - 0x78u;
        g->edx = t107;
        g->esp = sp0 - 0x12cu;
        t108 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x78u, 0x19u, t107);
        t109 = g->edx;
        eax = t108;
        edx = t109;
    COW_AT(10048ac9)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048ad3: ;
    COW_AT(10048ad3)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048ade)
        t104 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t104);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x20u);
        g->eax = eax;
        g->edx = sp0 - 0x20u;
        g->esp = sp0 - 0x12cu;
        t105 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x20u, 0x19u, t104);
        t106 = g->edx;
        eax = t105;
        edx = t106;
    COW_AT(10048af3)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048afd: ;
    COW_AT(10048afd)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048b08)
        t101 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t101);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x70u);
        g->eax = t101;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t102 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x70u, 0x19u, t101);
        t103 = g->edx;
        eax = t102;
        edx = t103;
    COW_AT(10048b1d)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048b27: ;
    COW_AT(10048b27)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048b32)
        t98 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t98);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xd8u);
        g->eax = sp0 - 0xd8u;
        g->edx = t98;
        g->esp = sp0 - 0x12cu;
        t99 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xd8u, 0x19u, t98);
        t100 = g->edx;
        eax = t99;
        edx = t100;
    COW_AT(10048b44)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048b4e: ;
    COW_AT(10048b4e)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048b59)
        t95 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t95);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xd4u);
        g->eax = eax;
        g->edx = sp0 - 0xd4u;
        g->esp = sp0 - 0x12cu;
        t96 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xd4u, 0x19u, t95);
        t97 = g->edx;
        eax = t96;
        edx = t97;
    COW_AT(10048b6b)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048b75: ;
    COW_AT(10048b75)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048b80)
        t92 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t92);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xccu);
        g->eax = t92;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t93 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xccu, 0x19u, t92);
        t94 = g->edx;
        eax = t93;
        edx = t94;
    COW_AT(10048b92)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048b9c: ;
    COW_AT(10048b9c)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048ba7)
        t89 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t89);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xc4u);
        g->eax = sp0 - 0xc4u;
        g->edx = t89;
        g->esp = sp0 - 0x12cu;
        t90 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xc4u, 0x19u, t89);
        t91 = g->edx;
        eax = t90;
        edx = t91;
    COW_AT(10048bb9)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048bc3: ;
    COW_AT(10048bc3)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048bce)
        t86 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t86);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xbcu);
        g->eax = eax;
        g->edx = sp0 - 0xbcu;
        g->esp = sp0 - 0x12cu;
        t87 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xbcu, 0x19u, t86);
        t88 = g->edx;
        eax = t87;
        edx = t88;
    COW_AT(10048be0)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048bea: ;
    COW_AT(10048bea)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048bf5)
        t83 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t83);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xb4u);
        g->eax = t83;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t84 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xb4u, 0x19u, t83);
        t85 = g->edx;
        eax = t84;
        edx = t85;
    COW_AT(10048c07)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048c11: ;
    COW_AT(10048c11)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048c1c)
        t80 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t80);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xacu);
        g->eax = sp0 - 0xacu;
        g->edx = t80;
        g->esp = sp0 - 0x12cu;
        t81 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xacu, 0x19u, t80);
        t82 = g->edx;
        eax = t81;
        edx = t82;
    COW_AT(10048c31)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048c3b: ;
    COW_AT(10048c3b)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048c46)
        t77 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t77);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xa4u);
        g->eax = eax;
        g->edx = sp0 - 0xa4u;
        g->esp = sp0 - 0x12cu;
        t78 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xa4u, 0x19u, t77);
        t79 = g->edx;
        eax = t78;
        edx = t79;
    COW_AT(10048c5b)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048c65: ;
    COW_AT(10048c65)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048c70)
        t74 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t74);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x9cu);
        g->eax = t74;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t75 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x9cu, 0x19u, t74);
        t76 = g->edx;
        eax = t75;
        edx = t76;
    COW_AT(10048c85)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048c8f: ;
    COW_AT(10048c8f)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048c9a)
        t71 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t71);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x94u);
        g->eax = sp0 - 0x94u;
        g->edx = t71;
        g->esp = sp0 - 0x12cu;
        t72 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x94u, 0x19u, t71);
        t73 = g->edx;
        eax = t72;
        edx = t73;
    COW_AT(10048caf)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048cb9: ;
    COW_AT(10048cb9)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048cc4)
        t68 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t68);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x8cu);
        g->eax = eax;
        g->edx = sp0 - 0x8cu;
        g->esp = sp0 - 0x12cu;
        t69 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x8cu, 0x19u, t68);
        t70 = g->edx;
        eax = t69;
        edx = t70;
    COW_AT(10048cd9)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048ce3: ;
    COW_AT(10048ce3)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048cee)
        t65 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t65);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x84u);
        g->eax = t65;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t66 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x84u, 0x19u, t65);
        t67 = g->edx;
        eax = t66;
        edx = t67;
    COW_AT(10048d03)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048d0d: ;
    COW_AT(10048d0d)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048d18)
        t62 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t62);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x7cu);
        g->eax = sp0 - 0x7cu;
        g->edx = t62;
        g->esp = sp0 - 0x12cu;
        t63 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x7cu, 0x19u, t62);
        t64 = g->edx;
        eax = t63;
        edx = t64;
    COW_AT(10048d2d)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048d37: ;
    COW_AT(10048d37)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048d42)
        t59 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t59);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x74u);
        g->eax = eax;
        g->edx = sp0 - 0x74u;
        g->esp = sp0 - 0x12cu;
        t60 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x74u, 0x19u, t59);
        t61 = g->edx;
        eax = t60;
        edx = t61;
    COW_AT(10048d57)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048d61: ;
    COW_AT(10048d61)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048d6c)
        t56 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t56);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x6cu);
        g->eax = t56;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t57 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x6cu, 0x19u, t56);
        t58 = g->edx;
        eax = t57;
        edx = t58;
    COW_AT(10048d81)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048d8b: ;
    COW_AT(10048d8b)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048d96)
        t53 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t53);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x64u);
        g->eax = sp0 - 0x64u;
        g->edx = t53;
        g->esp = sp0 - 0x12cu;
        t54 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x64u, 0x19u, t53);
        t55 = g->edx;
        eax = t54;
        edx = t55;
    COW_AT(10048dab)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048db5: ;
    COW_AT(10048db5)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048dc0)
        t50 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t50);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x5cu);
        g->eax = eax;
        g->edx = sp0 - 0x5cu;
        g->esp = sp0 - 0x12cu;
        t51 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x5cu, 0x19u, t50);
        t52 = g->edx;
        eax = t51;
        edx = t52;
    COW_AT(10048dd5)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048ddf: ;
    COW_AT(10048ddf)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048dea)
        t47 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t47);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x54u);
        g->eax = t47;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t48 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x54u, 0x19u, t47);
        t49 = g->edx;
        eax = t48;
        edx = t49;
    COW_AT(10048dff)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048e09: ;
    COW_AT(10048e09)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048e14)
        t44 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t44);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x4cu);
        g->eax = sp0 - 0x4cu;
        g->edx = t44;
        g->esp = sp0 - 0x12cu;
        t45 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x4cu, 0x19u, t44);
        t46 = g->edx;
        eax = t45;
        edx = t46;
    COW_AT(10048e29)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048e33: ;
    COW_AT(10048e33)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048e3e)
        t41 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t41);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x44u);
        g->eax = eax;
        g->edx = sp0 - 0x44u;
        g->esp = sp0 - 0x12cu;
        t42 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x44u, 0x19u, t41);
        t43 = g->edx;
        eax = t42;
        edx = t43;
    COW_AT(10048e53)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048e5d: ;
    COW_AT(10048e5d)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048e68)
        t38 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t38);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x3cu);
        g->eax = t38;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t39 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x3cu, 0x19u, t38);
        t40 = g->edx;
        eax = t39;
        edx = t40;
    COW_AT(10048e7d)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048e87: ;
    COW_AT(10048e87)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048e92)
        t35 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t35);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x34u);
        g->eax = sp0 - 0x34u;
        g->edx = t35;
        g->esp = sp0 - 0x12cu;
        t36 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x34u, 0x19u, t35);
        t37 = g->edx;
        eax = t36;
        edx = t37;
    COW_AT(10048ea7)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048eb1: ;
    COW_AT(10048eb1)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048ebc)
        t32 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t32);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x2cu);
        g->eax = eax;
        g->edx = sp0 - 0x2cu;
        g->esp = sp0 - 0x12cu;
        t33 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x2cu, 0x19u, t32);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    COW_AT(10048ed1)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048edb: ;
    COW_AT(10048edb)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048ee6)
        t29 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t29);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x24u);
        g->eax = t29;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t30 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x24u, 0x19u, t29);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    COW_AT(10048efb)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048f05: ;
    COW_AT(10048f05)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(10048f0c)
        t26 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t26);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0x1cu);
        g->eax = sp0 - 0x1cu;
        g->edx = t26;
        g->esp = sp0 - 0x12cu;
        t27 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x1cu, 0x19u, t26);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    COW_AT(10048f21)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048f28: ;
    COW_AT(10048f28)
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
    COW_AT(10048f2f)
        t23 = rd32(esi + 8u);
        wr32(sp0 - 0x130u, t23);
        wr32(sp0 - 0x134u, 0x19u);
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        g->eax = eax;
        g->edx = sp0 - 0xe8u;
        g->esp = sp0 - 0x12cu;
        t24 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0xe8u, 0x19u, t23);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    COW_AT(10048f41)
        wr32(esi + 4u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048f48: ;
    COW_AT(10048f48)
    if (rd32(esi + 8u) == 0u)
    {
    COW_AT(10048f4f)
        t20 = rd32(esi + 4u);
        wr32(sp0 - 0x130u, t20);
        wr32(sp0 - 0x134u, 0x4au);
        wr32(sp0 - 0x138u, sp0 - 0x124u);
        g->eax = t20;
        g->edx = edx;
        g->esp = sp0 - 0x12cu;
        t21 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x124u, 0x4au, t20);
        t22 = g->edx;
        eax = t21;
        edx = t22;
    COW_AT(10048f61)
        wr32(esi + 8u, rd32(eax));
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
    }
    goto L_10048f8a;
L_10048f68: ;
    COW_AT(10048f68)
    if (rd32(esi + 0x10u) != 0u)
    {
        eax = rd32(esi + 0x10u);
    COW_AT(10048f6f)
        if (rd32(esi + 0x14u) == 0u)
        {
    COW_AT(10048f76)
            wr32(sp0 - 0x130u, eax);
            wr32(sp0 - 0x134u, 0xau);
            wr32(sp0 - 0x138u, sp0 - 0x120u);
            g->eax = eax;
            g->edx = sp0 - 0x120u;
            g->esp = sp0 - 0x12cu;
            t18 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 0x120u, 0xau, eax);
            t19 = g->edx;
            eax = t18;
            edx = t19;
    COW_AT(10048f85)
            wr32(esi + 0x14u, rd32(eax));
            loc_128 = rd32(sp0 - 0x128u);
            loc_12c = rd32(sp0 - 0x12cu);
        }
    }
    goto L_10048f8a;
L_1004906a: ;
    COW_AT(1004906a)
    if (rd32(esi + 4u) != 0u) goto L_10049088;
    eax = rd32(esi + 4u);
    COW_AT(10049071)
    t243 = rd32(esi + 8u);
    wr32(sp0 - 0x130u, t243);
    wr32(sp0 - 0x134u, 5u);
    wr32(sp0 - 0x138u, sp0 - 0x124u);
    edx = sp0 - 0x124u;
    loc_134 = 5u;
    loc_138 = sp0 - 0x124u;
    loc_130 = t243;
    goto L_1004907c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10048220(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1004822fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x12cu);
        in_esi = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048260u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048273u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004827au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048285u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048295u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100482a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100482b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100482bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100482c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100482cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100482dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100482eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100482fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048305u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004830eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048319u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048329u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048334u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048344u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004834fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048355u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004835cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048369u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048370u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004837du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048384u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004838au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048391u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004839eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100483a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100483b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100483b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100483bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100483c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x134u, 0x19u);
        (void)sp0;
        return 1;
    }
    case 0x100483cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100483d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100483d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100483e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100483f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048409u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048418u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004841fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004842bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048432u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048444u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10048449u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048450u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048457u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004845eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10048466u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004846bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048479u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048484u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048496u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x100484a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100484abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100484bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x100484c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100484d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100484e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xfcu);
        (void)sp0;
        return 1;
    }
    case 0x100484eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100484f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004850bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x11cu);
        (void)sp0;
        return 1;
    }
    case 0x10048515u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048520u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048532u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1004853cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048547u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048559u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xf4u);
        (void)sp0;
        return 1;
    }
    case 0x10048563u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004856eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048580u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x1004858au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048595u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100485a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xecu);
        (void)sp0;
        return 1;
    }
    case 0x100485b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100485bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100485ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100485d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100485e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100485f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x100485ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004860au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004861cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xe4u);
        (void)sp0;
        return 1;
    }
    case 0x10048626u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048631u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048643u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xf0u);
        (void)sp0;
        return 1;
    }
    case 0x1004864du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048658u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004866du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x10048677u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048682u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048697u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x100486a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100486acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100486c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100486cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100486d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100486ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100486f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048700u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048715u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1004871fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004872au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004873cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10048746u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048751u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048766u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x10048770u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004877bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004878du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10048797u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100487a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100487b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100487c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100487ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100487deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x100487e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100487f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048808u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10048812u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004881du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004882fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x10048839u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048844u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048859u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x10048863u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004886eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048880u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x1004888au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048895u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100488aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x100488b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100488bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100488d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    case 0x100488deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100488e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100488feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10048908u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048913u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048928u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x10048932u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004893du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048952u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1004895cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048967u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004897cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10048986u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048991u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100489a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100489b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100489bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100489cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xdcu);
        (void)sp0;
        return 1;
    }
    case 0x100489d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100489e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x100489f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x10048a01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048a0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048a21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x10048a2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048a36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048a4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10048a55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048a60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048a75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10048a7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048a8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048a9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10048aa9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048ab4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048ac9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x78u);
        (void)sp0;
        return 1;
    }
    case 0x10048ad3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048adeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048af3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10048afdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048b08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048b1du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x10048b27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048b32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048b44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10048b4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048b59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048b6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x10048b75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048b80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048b92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xccu);
        (void)sp0;
        return 1;
    }
    case 0x10048b9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048ba7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048bb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x10048bc3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048bceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048be0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x10048beau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048bf5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048c07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10048c11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048c1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048c31u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x10048c3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048c46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048c5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10048c65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048c70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048c85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x10048c8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048c9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048cafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10048cb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048cc4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048cd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x10048ce3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048ceeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048d03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x10048d0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048d18u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048d2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10048d37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048d42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048d57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x10048d61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048d6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048d81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x10048d8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048d96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048dabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x10048db5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048dc0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048dd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x5cu);
        (void)sp0;
        return 1;
    }
    case 0x10048ddfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048deau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048dffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x10048e09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048e14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048e29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10048e33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048e3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048e53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x10048e5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048e68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048e7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10048e87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048e92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048ea7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x10048eb1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048ebcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048ed1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10048edbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048ee6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048efbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10048f05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048f0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048f21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10048f28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048f2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048f41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x10048f48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048f4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048f61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x124u);
        (void)sp0;
        return 1;
    }
    case 0x10048f68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048f6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048f76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048f85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x120u);
        (void)sp0;
        return 1;
    }
    case 0x10048f8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048f90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048f9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048f9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048fa5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048fb3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048fbfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048fc4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048fcbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048fddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x120u);
        (void)sp0;
        return 1;
    }
    case 0x10048fe2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048fe9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048ff0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10048fffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0x124u);
        (void)sp0;
        return 1;
    }
    case 0x10049006u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004900du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004901fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x138u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x10049024u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004902au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10049035u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10049037u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004903fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10049049u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10049053u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10049056u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004905du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004906au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10049071u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004907cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10049083u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10049088u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004908eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x10049099u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004909bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x1004909fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10048220(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10048220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
