/* f_0x1008b460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
/* COW_FRAME_ANSWER 3 of 16 */
uint32_t cow_fn_1008b460(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8c;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 176u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008b47bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1008b47b;
    case 0x1008b47fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1008b47f;
    case 0x1008b48bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1008b48b;
    case 0x1008b49bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1008b49b;
    case 0x1008b4a6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1008b4a6;
    case 0x1008b4b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b4b1;
    case 0x1008b4b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008b4b5;
    case 0x1008b4c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); goto E_1008b4c4;
    case 0x1008b4deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b4de;
    case 0x1008b4e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b4e7;
    case 0x1008b4ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b4eb;
    case 0x1008b4f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b4f4;
    case 0x1008b4fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b4fb;
    case 0x1008b502u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b502;
    case 0x1008b514u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b514;
    case 0x1008b526u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b526;
    case 0x1008b534u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b534;
    case 0x1008b543u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b543;
    case 0x1008b54cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b54c;
    case 0x1008b558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b558;
    case 0x1008b55du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b55d;
    case 0x1008b565u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008b565;
    case 0x1008b574u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b574;
    case 0x1008b581u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b581;
    case 0x1008b58au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b58a;
    case 0x1008b5a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b5a3;
    case 0x1008b5bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008b5bd;
    case 0x1008b5ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b5cc;
    case 0x1008b5d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b5d7;
    case 0x1008b5dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b5df;
    case 0x1008b5e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b5e7;
    case 0x1008b5efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b5ef;
    case 0x1008b5f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b5f7;
    case 0x1008b600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b600;
    case 0x1008b60eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b60e;
    case 0x1008b612u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b612;
    case 0x1008b616u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b616;
    case 0x1008b626u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b626;
    case 0x1008b62au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b62a;
    case 0x1008b62eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b62e;
    case 0x1008b632u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b632;
    case 0x1008b63eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b63e;
    case 0x1008b64eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b64e;
    case 0x1008b65du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b65d;
    case 0x1008b66cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b66c;
    case 0x1008b678u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b678;
    case 0x1008b688u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b688;
    case 0x1008b694u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b694;
    case 0x1008b6c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b6c5;
    case 0x1008b6d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b6d1;
    case 0x1008b6d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b6d5;
    case 0x1008b6ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b6eb;
    case 0x1008b6f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b6f8;
    case 0x1008b708u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b708;
    case 0x1008b70du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b70d;
    case 0x1008b70fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b70f;
    case 0x1008b714u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b714;
    case 0x1008b722u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b722;
    case 0x1008b738u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b738;
    case 0x1008b743u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b743;
    case 0x1008b747u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b747;
    case 0x1008b756u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b756;
    case 0x1008b763u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b763;
    case 0x1008b77au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008b77a;
    case 0x1008b789u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b789;
    case 0x1008b79au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b79a;
    case 0x1008b7a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7a8;
    case 0x1008b7beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7be;
    case 0x1008b7cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7cd;
    case 0x1008b7d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7d6;
    case 0x1008b7e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7e7;
    case 0x1008b7f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7f1;
    case 0x1008b7f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7f7;
    case 0x1008b80cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b80c;
    case 0x1008b817u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b817;
    case 0x1008b822u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b822;
    case 0x1008b827u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b827;
    case 0x1008b83du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b83d;
    case 0x1008b853u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b853;
    case 0x1008b85eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b85e;
    case 0x1008b866u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b866;
    case 0x1008b87bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b87b;
    case 0x1008b88au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b88a;
    case 0x1008b897u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b897;
    case 0x1008b8acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b8ac;
    case 0x1008b8ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b8cc;
    case 0x1008b8d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b8d8;
    case 0x1008b8eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b8ee;
    case 0x1008b8f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b8f9;
    case 0x1008b8fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b8fd;
    case 0x1008b911u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b911;
    case 0x1008b915u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b915;
    case 0x1008b928u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008b928;
    case 0x1008b937u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b937;
    case 0x1008b942u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b942;
    case 0x1008b946u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b946;
    case 0x1008b95bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b95b;
    case 0x1008b96au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b96a;
    case 0x1008b977u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b977;
    case 0x1008b98cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b98c;
    case 0x1008b9acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b9ac;
    case 0x1008b9b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b9b8;
    case 0x1008b9bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008b9bf;
    case 0x1008b9ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b9ce;
    case 0x1008b9d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b9d6;
    case 0x1008b9e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b9e2;
    case 0x1008b9efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b9ef;
    case 0x1008b9feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b9fe;
    case 0x1008ba05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba05;
    case 0x1008ba1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba1d;
    case 0x1008ba2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba2e;
    case 0x1008ba33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba33;
    case 0x1008ba37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba37;
    case 0x1008ba41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba41;
    case 0x1008ba4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba4f;
    case 0x1008ba57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba57;
    case 0x1008ba65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba65;
    case 0x1008ba6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba6d;
    case 0x1008ba77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba77;
    case 0x1008ba80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba80;
    case 0x1008ba8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba8e;
    case 0x1008ba96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba96;
    case 0x1008baa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008baa4;
    case 0x1008baacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008baac;
    case 0x1008bab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bab6;
    case 0x1008babau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008baba;
    case 0x1008babeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008babe;
    case 0x1008bac3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bac3;
    case 0x1008bacdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bacd;
    case 0x1008bad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bad9;
    case 0x1008baefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008baef;
    case 0x1008baf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008baf7;
    case 0x1008baffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008baff;
    case 0x1008bb07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb07;
    case 0x1008bb0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb0c;
    case 0x1008bb16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb16;
    case 0x1008bb1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb1e;
    case 0x1008bb2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb2a;
    case 0x1008bb2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008bb2e;
    case 0x1008bb3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb3b;
    case 0x1008bb43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb43;
    case 0x1008bb53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bb53;
    case 0x1008bb68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb68;
    case 0x1008bb83u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1008bb83;
    case 0x1008bb94u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1008bb94;
    case 0x1008bba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bba0;
    case 0x1008bbb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bbb3;
    case 0x1008bbbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bbba;
    case 0x1008bbd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bbd0;
    case 0x1008bbeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bbea;
    case 0x1008bbeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008bbee;
    case 0x1008bbfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bbfd;
    case 0x1008bc0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc0a;
    case 0x1008bc16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc16;
    case 0x1008bc1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc1e;
    case 0x1008bc2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc2a;
    case 0x1008bc40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc40;
    case 0x1008bc4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc4e;
    case 0x1008bc56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc56;
    case 0x1008bc5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc5e;
    case 0x1008bc6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc6e;
    case 0x1008bc7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc7d;
    case 0x1008bc8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bc8f;
    case 0x1008bcc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bcc7;
    case 0x1008bccfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bccf;
    case 0x1008bcddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bcdd;
    case 0x1008bce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bce1;
    case 0x1008bcedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008bced;
    case 0x1008bcfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bcfc;
    case 0x1008bd01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bd01;
    case 0x1008bd17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bd17;
    case 0x1008bd1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bd1c;
    case 0x1008bd25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bd25;
    case 0x1008bd3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bd3b;
    case 0x1008bd46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bd46;
    case 0x1008bd4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bd4a;
    case 0x1008bd5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bd5e;
    case 0x1008bd62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bd62;
    case 0x1008bd6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bd6f;
    case 0x1008bd84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bd84;
    case 0x1008bd8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008bd8b;
    case 0x1008bd9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bd9a;
    case 0x1008bda9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bda9;
    case 0x1008bdb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bdb2;
    case 0x1008bdc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bdc7;
    case 0x1008bdddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bddd;
    case 0x1008bde8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bde8;
    case 0x1008bdecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bdec;
    case 0x1008be10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008be10;
    case 0x1008be17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008be17;
    case 0x1008be26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008be26;
    case 0x1008be31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008be31;
    case 0x1008be35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008be35;
    case 0x1008be54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008be54;
    case 0x1008be73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008be73;
    case 0x1008be7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008be7a;
    case 0x1008be89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008be89;
    case 0x1008be9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008be9e;
    case 0x1008bebau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008beba;
    case 0x1008bebeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bebe;
    case 0x1008bec7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bec7;
    case 0x1008bed4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bed4;
    case 0x1008bee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bee2;
    case 0x1008bef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bef0;
    case 0x1008befcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008befc;
    case 0x1008bf00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bf00;
    case 0x1008bf0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bf0e;
    case 0x1008bf12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008bf12;
    case 0x1008bf1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bf1f;
    case 0x1008bf2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bf2c;
    case 0x1008bf3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bf3a;
    case 0x1008bf48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bf48;
    case 0x1008bf4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bf4f;
    case 0x1008bf5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bf5c;
    case 0x1008bf64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bf64;
    case 0x1008bf80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bf80;
    case 0x1008bf8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bf8b;
    case 0x1008bfa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bfa7;
    case 0x1008bfcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bfcd;
    case 0x1008bfd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bfd8;
    case 0x1008bfdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bfdc;
    case 0x1008c003u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c003;
    case 0x1008c00eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c00e;
    case 0x1008c015u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008c015;
    case 0x1008c024u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c024;
    case 0x1008c028u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c028;
    case 0x1008c02fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c02f;
    case 0x1008c03au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c03a;
    case 0x1008c042u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c042;
    case 0x1008c065u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c065;
    case 0x1008c069u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c069;
    case 0x1008c075u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c075;
    case 0x1008c079u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c079;
    case 0x1008c087u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c087;
    case 0x1008c08bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c08b;
    case 0x1008c0a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c0a1;
    case 0x1008c0b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c0b1;
    case 0x1008c0b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c0b6;
    case 0x1008c0c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c0c2;
    case 0x1008c0e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c0e5;
    case 0x1008c0ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c0ec;
    case 0x1008c0f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c0f7;
    case 0x1008c103u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c103;
    case 0x1008c114u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c114;
    case 0x1008c11au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c11a;
    case 0x1008c121u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008c121;
    case 0x1008c130u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c130;
    case 0x1008c13bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c13b;
    case 0x1008c13fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c13f;
    case 0x1008c146u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c146;
    case 0x1008c15bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c15b;
    case 0x1008c162u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008c162;
    case 0x1008c171u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c171;
    case 0x1008c17eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c17e;
    case 0x1008c193u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c193;
    case 0x1008c19au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c19a;
    case 0x1008c1b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c1b0;
    case 0x1008c1bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c1bd;
    case 0x1008c1f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c1f5;
    case 0x1008c200u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c200;
    case 0x1008c204u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c204;
    case 0x1008c20bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c20b;
    case 0x1008c212u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c212;
    case 0x1008c216u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c216;
    case 0x1008c226u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c226;
    case 0x1008c232u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c232;
    case 0x1008c237u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c237;
    case 0x1008c24cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c24c;
    case 0x1008c25cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c25c;
    case 0x1008c263u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008c263;
    case 0x1008c272u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c272;
    case 0x1008c27eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c27e;
    case 0x1008c28au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c28a;
    case 0x1008c28eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008c28e;
    case 0x1008c29bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c29b;
    case 0x1008c2a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c2a3;
    case 0x1008c2a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2a8;
    case 0x1008c2b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2b0;
    case 0x1008c2b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c2b5;
    case 0x1008c2bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2bc;
    case 0x1008c2c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2c0;
    case 0x1008c2d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2d0;
    case 0x1008c2d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2d7;
    case 0x1008c2dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2db;
    case 0x1008c2ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2dd;
    case 0x1008c2f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2f7;
    case 0x1008c307u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c307;
    case 0x1008c30bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c30b;
    case 0x1008c31bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c31b;
    case 0x1008c325u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c325;
    case 0x1008c329u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c329;
    case 0x1008c33au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c33a;
    case 0x1008c346u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c346;
    case 0x1008c354u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c354;
    case 0x1008c36au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c36a;
    case 0x1008c376u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c376;
    case 0x1008c382u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c382;
    case 0x1008c391u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c391;
    case 0x1008c39cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008c39c;
    case 0x1008c39fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); goto E_1008c39f;
    default: break;
    }
#endif

    COW_AT(1008b460)
    wr32(sp0 - 0x8cu, in_ebx);
    wr32(sp0 - 0x90u, in_ebp);
    wr32(sp0 - 0x94u, in_esi);
    wr32(sp0 - 0x98u, in_edi);
    if (rd8(self + 0xeeu) == 6u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0xeeu);
        goto L_1008b47f;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0xeeu);
    COW_AT(1008b47b)
    if ((uint8_t)eax != 7u) goto L_1008b49b;
L_1008b47f: ;
    COW_AT(1008b47f)
    t1 = rd32(self + 0x120u);
    if ((t1 & 0x200u) == 0u)
    {
        loc_8c = in_ebx;
        loc_90 = in_ebp;
        loc_94 = in_esi;
        loc_98 = in_edi;
        goto L_1008c39f;
    }
    COW_AT(1008b48b)
    t2 = rd32(self + 0x128u);
    if ((t2 & 0x20000000u) == 0u)
    {
        loc_8c = in_ebx;
        loc_90 = in_ebp;
        loc_94 = in_esi;
        loc_98 = in_edi;
        goto L_1008c39f;
    }
L_1008b49b: ;
    COW_AT(1008b49b)
    if (rd32(sp0 + 4u) != 0u)
    {
        edx = in_edx;
        loc_8c = in_ebx;
        loc_90 = in_ebp;
        loc_94 = in_esi;
        loc_98 = in_edi;
        goto L_1008b4c4;
    }
    eax = rd32(sp0 + 4u);
    COW_AT(1008b4a6)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b4b1u);
    t3 = cow_thiscall(g, COW_IMG(0x10083320u), rd32(self + 0xa0u), 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(1008b4b1)
    if (eax == 0u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008b4c4;
    }
    COW_AT(1008b4b5)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b4c4: ;
    COW_AT(1008b4c4)
    t5 = rd32(self + 0x170u);
    wr32(sp0 - 0x9cu, t5);
    g->eax = t5;
    g->edx = edx;
    t6 = rd32(self + 0x12cu);
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b4deu);
    t7 = cow_thiscall(g, COW_IMG(0x10095790u), self, 1, t5);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    ebx = (t6 >> 0x16u & 0xffffff00u) | (t6 >> 0x16u & 1u);
    COW_AT(1008b4de)
    wr8(sp0 - 0x86u, (uint8_t)eax);
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b4e7u);
    t10 = cow_call_regs(g, COW_IMG(0x10087060u), eax, ecx, g->edx, 1, 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(1008b4e7)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(1008b4f4)
        t13 = rd32(self + 0x16cu);
        wr32(sp0 - 0x9cu, t13);
        edx = t13;
        loc_9c = t13;
    }
    else
    {
    COW_AT(1008b4eb)
        t12 = rd32(self + 0x170u);
        wr32(sp0 - 0x9cu, t12);
        loc_9c = t12;
    }
    COW_AT(1008b4fb)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b502u);
    t14 = cow_thiscall(g, COW_IMG(0x10095790u), self, 1, loc_9c);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(1008b502)
    wr8(sp0 - 0x85u, (uint8_t)eax);
    t16 = rd32(self + 0x170u);
    wr32(sp0 - 0x9cu, t16);
    g->eax = t16;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b514u);
    t17 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, t16);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(1008b514)
    wr8(sp0 - 0x87u, (uint8_t)eax);
    if (rd8(self + 0xeeu) != 4u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
        goto L_1008b5cc;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    COW_AT(1008b526)
    if (rd8(self + 0x1bcu) != 0u) goto L_1008b5cc;
    ecx = (ecx & 0xffffff00u) | rd8(self + 0x1bcu);
    COW_AT(1008b534)
    if ((int32_t)rd32(self + 0x170u) < 10)
    {
        eax = rd32(self + 0x170u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = rd32(self + 0x170u);
    COW_AT(1008b543)
    if ((int32_t)eax > 17)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008b54c)
    if (eax == rd32(self + 0x16cu))
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008b558)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b55du);
    t20 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(1008b55d)
    if (eax >= rd32(self + 0x184u)) goto L_1008b574;
    COW_AT(1008b565)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b574: ;
    COW_AT(1008b574)
    t22 = rd8(self + 0xeeu);
    if ((uint8_t)t22 != 4u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008b581)
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b58au);
    cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x84u, 0);
    t23 = g->edx;
    edx = t23;
    COW_AT(1008b58a)
    t24 = rd32(self + 0x180u) * 0x3cu;
    wr32(sp0 - 0x9cu, t24);
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b5a3u);
    cow_thiscall(g, COW_IMG(0x1018bbe0u), sp0 - 0x84u, 1, t24);
    COW_AT(1008b5a3)
    t25 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0x9cu, t25);
    t26 = rd32(self + 0x16cu) - 0xau;
    wr32(sp0 - 0xa0u, t26);
    g->eax = t26;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b5bdu);
    t27 = cow_thiscall(g, COW_IMG(0x100c3d50u), rd32(self + 0xa0u), 2, t26, t25);
    eax = t27;
    COW_AT(1008b5bd)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return (eax & 0xffffff00u) | 1u;
L_1008b5cc: ;
    COW_AT(1008b5cc)
    t28 = rd16(self + 0x210u);
    if ((uint16_t)t28 != 0u) goto L_1008b5f7;
    COW_AT(1008b5d7)
    if ((uint8_t)eax == 2u) goto L_1008bc40;
    COW_AT(1008b5df)
    if ((uint8_t)eax == 3u) goto L_1008bc40;
    COW_AT(1008b5e7)
    if ((uint8_t)eax == 4u) goto L_1008bc40;
    COW_AT(1008b5ef)
    if ((uint8_t)eax == 5u) goto L_1008bc40;
L_1008b5f7: ;
    COW_AT(1008b5f7)
    t29 = rd32(self + 0x78u);
    if ((t29 & 0xff000000u) == 0u) goto L_1008b63e;
    COW_AT(1008b600)
    if (!(rd32(self + 0x12cu) >> 0x1eu & 1u)) goto L_1008b616;
    COW_AT(1008b60e)
    if ((uint8_t)eax == 0u) goto L_1008b63e;
    COW_AT(1008b612)
    if ((uint8_t)eax == 1u) goto L_1008b63e;
L_1008b616: ;
    COW_AT(1008b616)
    t30 = rd32(self + 0x120u);
    if (!(t30 >> 0xdu & 1u))
    {
        ecx = t30;
        edx = t30 >> 0xdu;
        goto L_1008b62a;
    }
    ecx = t30;
    edx = t30 >> 0xdu;
    COW_AT(1008b626)
    if ((uint8_t)eax == 1u) goto L_1008b63e;
L_1008b62a: ;
    COW_AT(1008b62a)
    if ((uint8_t)eax == 6u) goto L_1008b63e;
    COW_AT(1008b62e)
    if ((uint8_t)eax == 8u) goto L_1008b63e;
    COW_AT(1008b632)
    if (!(ecx >> 2u & 1u)) goto L_1008bc40;
L_1008b63e: ;
    COW_AT(1008b63e)
    if ((uint32_t)(int8_t)rd8(self + 0x1bcu) > 0x11u) goto L_1008bc40;
    ecx = (uint32_t)(int8_t)rd8(self + 0x1bcu);
    COW_AT(1008b64e)
    t31 = rd32(COW_IMG(0x1008c3b0u) + rd8(COW_IMG(0x1008c3dcu) + ecx) * 4u);
    switch (t31 - RD)
    {
    case 0x1008b65du: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008b65d;
    case 0x1008b738u: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008b738;
    case 0x1008b789u: goto L_1008b789;
    case 0x1008b7beu: goto L_1008b7be;
    case 0x1008b853u: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008b853;
    case 0x1008b8eeu: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008b8ee;
    case 0x1008b937u: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008b937;
    case 0x1008b9ceu: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008b9ce;
    case 0x1008baefu: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008baef;
    case 0x1008bbd0u: goto L_1008bbd0;
    case 0x1008bc40u: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008bc40;
    default: rt_fatal(g, COW_IMG(0x1008b656u), "switch");
    }
    return 0;
L_1008b65d: ;
    COW_AT(1008b65d)
    t127 = rd8(sp0 - 0x87u);
    wr8(self + 0x1bdu, 0u);
    if ((uint8_t)t127 == 0u)
    {
        eax = (eax & 0xffffff00u) | t127;
        goto L_1008b6c5;
    }
    eax = (eax & 0xffffff00u) | t127;
    COW_AT(1008b66c)
    t128 = rd32(self + 0x120u);
    if ((t128 & 0x200u) == 0u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008b678)
    t129 = rd32(self + 0x128u);
    if ((t129 & 0x20000000u) == 0u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008b688)
    wr32(sp0 - 0x9cu, 0u);
    t130 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b694u);
    cow_thiscall(g, COW_IMG(0x100d60c0u), t130, 1, 0u);
    t131 = g->ecx;
    ecx = t131;
    COW_AT(1008b694)
    t132 = rd32(self + 0xa0u);
    t133 = rd32(sp0 - 0x98u);
    wr8(t132 + 0xb2u, rd8(t132 + 0xb2u) | 0x40u);
    wr32(self + 0x1ccu, 0u);
    wr8(self + 0x1bcu, 0xeu);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = t133;
    g->ebp = rd32(sp0 - 0x90u);
    return t132 & 0xffffff00u;
L_1008b6c5: ;
    COW_AT(1008b6c5)
    wr32(sp0 - 0x9cu, 0xffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b6d1u);
    t134 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, 0xffu);
    t135 = g->edx;
    eax = t134;
    edx = t135;
    COW_AT(1008b6d1)
    if ((uint8_t)eax == 0u) goto L_1008b6eb;
    COW_AT(1008b6d5)
    wr8(self + 0x1bcu, 0xeu);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b6eb: ;
    COW_AT(1008b6eb)
    t136 = rd32(self + 0x170u);
    if (t136 != 1u) goto L_1008bc40;
    COW_AT(1008b6f8)
    if (rd8(rd32(self + 0xa0u) + 0x8b5u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self + 0xa0u) + 0x8b5u);
        ecx = rd32(self + 0xa0u);
    COW_AT(1008b70f)
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008b714u);
        cow_fastcall(g, COW_IMG(0x100d16c0u), ecx, edx, 0);
        t138 = g->edx;
        edx = t138;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self + 0xa0u) + 0x8b5u);
        ecx = rd32(self + 0xa0u);
    COW_AT(1008b708)
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008b70du);
        cow_fastcall(g, COW_IMG(0x100d1970u), ecx, edx, 0);
        t137 = g->edx;
        edx = t137;
    COW_AT(1008b70d)
    }
    COW_AT(1008b714)
    g->eax = rd32(rd32(self + 0xa0u));
    t139 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b722u);
    t140 = cow_thiscall(g, rd32(t139 + 0x160u), rd32(self + 0xa0u), 0);
    eax = t140;
    COW_AT(1008b722)
    wr8(self + 0x1bcu, 1u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b738: ;
    COW_AT(1008b738)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b743u);
    t121 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), edx, 1, 0);
    t122 = g->edx;
    eax = t121;
    edx = t122;
    COW_AT(1008b743)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(1008b747)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0u);
        g->eax = eax;
        g->edx = edx;
        t123 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008b756u);
        t124 = cow_thiscall_cdecl(g, COW_IMG(0x100d2ed0u), rd32(self + 0xa0u), 2, 0u, 0u);
        t125 = g->edx;
        eax = t124;
        edx = t125;
        edi = t123;
    COW_AT(1008b756)
        wr32(sp0 - 0xa4u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008b763u);
        t126 = cow_thiscall(g, rd32(edi + 0x298u), rd32(self + 0xa0u), 3, eax, rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
        eax = t126;
    COW_AT(1008b763)
        wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
        wr8(self + 0x1bcu, 2u);
    }
    COW_AT(1008b77a)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b789: ;
    COW_AT(1008b789)
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 1u);
    g->edx = rd32(rd32(self + 0xa0u));
    t117 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b79au);
    cow_thiscall(g, rd32(t117 + 0x31cu), rd32(self + 0xa0u), 2, 1u, 0u);
    t118 = g->edx;
    edx = t118;
    COW_AT(1008b79a)
    g->eax = rd32(rd32(self + 0xa0u));
    t119 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b7a8u);
    t120 = cow_thiscall(g, rd32(t119 + 0x164u), rd32(self + 0xa0u), 0);
    eax = t120;
    COW_AT(1008b7a8)
    wr8(self + 0x1bcu, 3u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b7be: ;
    COW_AT(1008b7be)
    if (rd32(self + 0x170u) == 1u)
    {
        eax = rd32(self + 0x170u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = rd32(self + 0x170u);
    COW_AT(1008b7cd)
    if (eax == 3u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008b7d6)
    if (rd16(self + 0x74u) != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
    {
        edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    }
    else
    {
        edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    COW_AT(1008b7e7)
        if (rd32(COW_IMG(0x1057876cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(1008b7f1)
            wr32(sp0 - 0x9cu, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x98u;
            COW_RET(0x1008b7f7u);
            cow_thiscall(g, COW_IMG(0x10157660u), ecx, 1, 0u);
            t113 = g->edx;
            edx = t113;
        }
    }
    COW_AT(1008b7f7)
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, 0x67746e62u);
    g->eax = rd32(rd32(self + 0xa0u));
    g->edx = edx;
    t114 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b80cu);
    t115 = cow_thiscall(g, rd32(t114 + 0x298u), rd32(self + 0xa0u), 3, 0x67746e62u, 0u, 0u);
    t116 = g->edx;
    eax = t115;
    edx = t116;
    COW_AT(1008b80c)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b817u);
    cow_fastcall(g, COW_IMG(0x100d14c0u), rd32(self + 0xa0u), edx, 0);
    COW_AT(1008b817)
    if (rd32(self + 0x170u) == 0x21u)
    {
        eax = rd32(self + 0x170u);
        goto L_1008b83d;
    }
    eax = rd32(self + 0x170u);
    COW_AT(1008b822)
    if (eax == 7u) goto L_1008b83d;
    COW_AT(1008b827)
    wr8(self + 0x1bcu, 0x11u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b83d: ;
    COW_AT(1008b83d)
    wr8(self + 0x1bcu, 6u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b853: ;
    COW_AT(1008b853)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b85eu);
    t98 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), edx, 1, 0);
    eax = t98;
    COW_AT(1008b85e)
    if ((uint8_t)eax == 0u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008b866)
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, 0x74626c6bu);
    g->eax = eax;
    g->edx = rd32(rd32(self + 0xa0u));
    t99 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b87bu);
    t100 = cow_thiscall(g, rd32(t99 + 0x298u), rd32(self + 0xa0u), 3, 0x74626c6bu, 0u, 0u);
    t101 = g->edx;
    eax = t100;
    edx = t101;
    COW_AT(1008b87b)
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    g->eax = eax;
    g->edx = edx;
    t102 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b88au);
    t103 = cow_thiscall_cdecl(g, COW_IMG(0x100d2ef0u), rd32(self + 0xa0u), 2, 0u, 0u);
    t104 = g->edx;
    eax = t103;
    edx = t104;
    edi = t102;
    COW_AT(1008b88a)
    wr32(sp0 - 0xa4u, eax);
    g->edx = edx;
    g->esp = sp0 - 0xa0u;
    COW_RET(0x1008b897u);
    cow_thiscall(g, rd32(edi + 0x298u), rd32(self + 0xa0u), 1, eax);
    t105 = g->edx;
    edx = t105;
    COW_AT(1008b897)
    wr32(sp0 - 0xa4u, 0u);
    t106 = rd32(self + 0xa0u);
    wr32(sp0 - 0xa8u, t106);
    wr32(sp0 - 0xacu, 0x74617768u);
    g->eax = rd32(t106);
    t107 = rd32(t106);
    g->esp = sp0 - 0xa0u;
    COW_RET(0x1008b8acu);
    t108 = cow_thiscall(g, rd32(t107 + 0x298u), t106, 3, 0x74617768u, t106, 0u);
    eax = t108;
    COW_AT(1008b8ac)
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, 0u);
    wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
    g->eax = eax;
    g->edx = rd32(rd32(self + 0xa0u));
    t109 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b8ccu);
    t110 = cow_thiscall(g, rd32(t109 + 0x31cu), rd32(self + 0xa0u), 4, rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
    t111 = g->edx;
    eax = t110;
    edx = t111;
    COW_AT(1008b8cc)
    wr32(sp0 - 0x9cu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b8d8u);
    t112 = cow_thiscall(g, COW_IMG(0x100cf160u), rd32(self + 0xa0u), 1, 0u);
    eax = t112;
    COW_AT(1008b8d8)
    wr8(self + 0x1bcu, 5u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return (eax & 0xffffff00u) | 1u;
L_1008b8ee: ;
    COW_AT(1008b8ee)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b8f9u);
    t91 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), edx, 1, 0);
    t92 = g->edx;
    eax = t91;
    edx = t92;
    COW_AT(1008b8f9)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(1008b8fd)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0x746f6177u);
        g->eax = rd32(rd32(self + 0xa0u));
        g->edx = edx;
        t93 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008b911u);
        t94 = cow_thiscall(g, rd32(t93 + 0x2a0u), rd32(self + 0xa0u), 2, 0x746f6177u, 0u);
        t95 = g->edx;
        eax = t94;
        edx = t95;
    COW_AT(1008b911)
        if ((uint8_t)eax == 0u)
        {
    COW_AT(1008b915)
            wr32(sp0 - 0x9cu, 1u);
            t96 = rd32(self + 0xa0u);
            wr8(self + 0x1bcu, (uint8_t)eax);
            g->eax = eax;
            g->esp = sp0 - 0x98u;
            COW_RET(0x1008b928u);
            t97 = cow_thiscall(g, COW_IMG(0x100d44b0u), t96, 1, rd32(sp0 - 0x9cu));
            eax = t97;
        }
    }
    COW_AT(1008b928)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b937: ;
    COW_AT(1008b937)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008b942u);
    t76 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), edx, 1, 0);
    eax = t76;
    COW_AT(1008b942)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(1008b946)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0u);
        wr32(sp0 - 0xa4u, 0x74626c6bu);
        g->eax = eax;
        g->edx = rd32(rd32(self + 0xa0u));
        t77 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x90u;
        COW_RET(0x1008b95bu);
        t78 = cow_thiscall(g, rd32(t77 + 0x298u), rd32(self + 0xa0u), 5, 0x74626c6bu, 0u, 0u, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
        t79 = g->edx;
        eax = t78;
        edx = t79;
    COW_AT(1008b95b)
        wr32(sp0 - 0x94u, 0u);
        wr32(sp0 - 0x98u, 0u);
        g->eax = eax;
        g->edx = edx;
        t80 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x90u;
        COW_RET(0x1008b96au);
        t81 = cow_thiscall_cdecl(g, COW_IMG(0x100d2ef0u), rd32(self + 0xa0u), 2, 0u, 0u);
        t82 = g->edx;
        eax = t81;
        edx = t82;
        edi = t80;
    COW_AT(1008b96a)
        wr32(sp0 - 0x9cu, eax);
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008b977u);
        cow_thiscall(g, rd32(edi + 0x298u), rd32(self + 0xa0u), 1, eax);
        t83 = g->edx;
        edx = t83;
    COW_AT(1008b977)
        wr32(sp0 - 0x9cu, 0u);
        t84 = rd32(self + 0xa0u);
        wr32(sp0 - 0xa0u, t84);
        wr32(sp0 - 0xa4u, 0x74617768u);
        g->eax = rd32(t84);
        t85 = rd32(t84);
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008b98cu);
        t86 = cow_thiscall(g, rd32(t85 + 0x298u), t84, 3, 0x74617768u, t84, 0u);
        eax = t86;
    COW_AT(1008b98c)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0u);
        wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
        g->eax = eax;
        g->edx = rd32(rd32(self + 0xa0u));
        t87 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008b9acu);
        t88 = cow_thiscall(g, rd32(t87 + 0x31cu), rd32(self + 0xa0u), 2, rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
        t89 = g->edx;
        eax = t88;
        edx = t89;
    COW_AT(1008b9ac)
        wr32(sp0 - 0x9cu, 0u);
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008b9b8u);
        t90 = cow_thiscall(g, COW_IMG(0x100cf160u), rd32(self + 0xa0u), 1, 0u);
        eax = t90;
    COW_AT(1008b9b8)
        wr8(self + 0x1bcu, 7u);
    }
    COW_AT(1008b9bf)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b9ce: ;
    COW_AT(1008b9ce)
    if (rd8(sp0 - 0x87u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x87u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x87u);
    COW_AT(1008b9d6)
        wr32(sp0 - 0x9cu, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008b9e2u);
        cow_thiscall(g, COW_IMG(0x100d60c0u), rd32(self + 0xa0u), 1, 0u);
        t55 = g->edx;
        edx = t55;
    COW_AT(1008b9e2)
        if (rd32(self + 0x1ccu) < 0x97u)
        {
            eax = rd32(self + 0x1ccu);
    COW_AT(1008b9fe)
            if (eax < 0x96u)
            {
    COW_AT(1008ba1d)
                wr32(self + 0x1ccu, eax + 1u);
                if (rd32(self + 0xa4u) == 0u)
                {
                    eax = eax + 1u;
                }
                else
                {
                    eax = eax + 1u;
                    ecx = rd32(self + 0xa4u);
    COW_AT(1008ba2e)
                    g->esp = sp0 - 0x98u;
                    COW_RET(0x1008ba33u);
                    t59 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, ecx, edx, 1, 0);
                    t60 = g->edx;
                    eax = t59;
                    edx = t60;
    COW_AT(1008ba33)
                    if ((uint8_t)eax != 0u)
                    {
    COW_AT(1008ba37)
                        wr32(self + 0x1ccu, 0x96u);
                    }
                }
            }
            else
            {
    COW_AT(1008ba05)
                t58 = rd32(self + 0xa0u);
                wr32(t58 + 0x59cu, 0u);
                wr32(self + 0x1ccu, 0x97u);
                eax = t58;
            }
        }
        else
        {
    COW_AT(1008b9ef)
            t56 = rd8(rd32(self + 0xa0u) + 0xb2u);
            t57 = rd32(self + 0xa0u);
            wr8(t57 + 0xb2u, t56 & 0xbfu);
            eax = t57;
        }
    }
    COW_AT(1008ba41)
    t61 = rd32(self + 0x16cu);
    wr32(sp0 - 0x9cu, t61);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008ba4fu);
    t62 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, t61);
    eax = t62;
    COW_AT(1008ba4f)
    if ((uint8_t)eax != 0u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008ba57)
    t63 = rd32(self + 0x16cu);
    wr32(sp0 - 0x9cu, t63);
    g->eax = eax;
    g->edx = t63;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008ba65u);
    t64 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, t63);
    t65 = g->ecx;
    t66 = g->edx;
    eax = t64;
    ecx = t65;
    edx = t66;
    COW_AT(1008ba65)
    if ((uint8_t)eax != 0u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008ba6d)
    if ((int8_t)rd8(self + 0x120u) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x120u);
        goto L_1008baac;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x120u);
    COW_AT(1008ba77)
    if (rd8(COW_IMG(0x104807f5u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
        goto L_1008baac;
    }
    COW_AT(1008ba80)
    t67 = rd32(self + 0x174u);
    wr32(sp0 - 0x9cu, t67);
    g->eax = t67;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008ba8eu);
    t68 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, t67);
    t69 = g->edx;
    eax = t68;
    edx = t69;
    COW_AT(1008ba8e)
    if ((uint8_t)eax != 0u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008ba96)
    t70 = rd32(self + 0x174u);
    wr32(sp0 - 0x9cu, t70);
    g->eax = t70;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008baa4u);
    t71 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, t70);
    t72 = g->ecx;
    t73 = g->edx;
    eax = t71;
    ecx = t72;
    edx = t73;
    COW_AT(1008baa4)
    if ((uint8_t)eax != 0u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
L_1008baac: ;
    COW_AT(1008baac)
    if (rd8(self + 0xeeu) == 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    COW_AT(1008bab6)
        if ((uint8_t)eax != 4u)
        {
    COW_AT(1008baba)
            if ((uint8_t)eax != 5u)
            {
    COW_AT(1008babe)
                g->eax = eax;
                g->esp = sp0 - 0x98u;
                COW_RET(0x1008bac3u);
                t74 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
                eax = t74;
    COW_AT(1008bac3)
                if (rd32(self + 0x78u) == rd32(eax + 4u))
                {
                    edx = rd32(eax + 4u);
    COW_AT(1008bacd)
                    wr32(sp0 - 0x9cu, 0u);
                    g->ebx = ebx;
                    g->esp = sp0 - 0x98u;
                    COW_RET(0x1008bad9u);
                    t75 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
                    eax = t75;
                }
            }
        }
    }
    COW_AT(1008bad9)
    wr8(self + 0x1bcu, 0xfu);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008baef: ;
    COW_AT(1008baef)
    if ((uint8_t)eax == 3u) goto L_1008bbba;
    COW_AT(1008baf7)
    if ((uint8_t)eax == 4u) goto L_1008bbba;
    COW_AT(1008baff)
    if ((uint8_t)eax == 5u) goto L_1008bbba;
    COW_AT(1008bb07)
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bb0cu);
    t39 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    eax = t39;
    COW_AT(1008bb0c)
    if (rd32(self + 0x78u) != rd32(eax + 4u))
    {
        edx = rd32(self + 0x78u);
        goto L_1008bb3b;
    }
    edx = rd32(self + 0x78u);
    COW_AT(1008bb16)
    t40 = rd32(self + 0xa4u);
    if (t40 == 0u) goto L_1008bb3b;
    COW_AT(1008bb1e)
    wr32(sp0 - 0x9cu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bb2au);
    t41 = cow_fastcall(g, COW_IMG(0x100d65b0u), rd32(self + 0xa0u), edx, 1, 0u);
    t42 = g->edx;
    eax = t41;
    edx = t42;
    COW_AT(1008bb2a)
    if ((uint8_t)eax != 0u) goto L_1008bb3b;
    COW_AT(1008bb2e)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax;
L_1008bb3b: ;
    COW_AT(1008bb3b)
    if (rd8(sp0 - 0x87u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x87u);
    }
    else
    {
    COW_AT(1008bb43)
        wr32(sp0 - 0x9cu, 0x808080u);
        g->eax = rd32(rd32(self + 0xa0u));
        t43 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008bb53u);
        t44 = cow_thiscall(g, rd32(t43 + 0x30u), rd32(self + 0xa0u), 1, 0x808080u);
        eax = t44;
    }
    COW_AT(1008bb53)
    wr32(sp0 - 0x9cu, 0u);
    t45 = rd32(self + 0xa0u);
    wr32(sp0 - 0xa0u, t45);
    wr32(sp0 - 0xa4u, 0x66666f63u);
    g->edx = rd32(t45);
    t46 = rd32(t45);
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bb68u);
    cow_thiscall(g, rd32(t46 + 0x298u), t45, 3, 0x66666f63u, t45, 0u);
    t47 = g->edx;
    edx = t47;
    COW_AT(1008bb68)
    t48 = rd32(self + 0xa0u);
    wr32(t48 + 0x7d8u, 0x20202020u);
    if (rd32(self + 0xa4u) != 0u)
    {
        eax = t48;
        edi = rd32(self + 0xa4u);
    COW_AT(1008bb83)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, edi);
        wr32(sp0 - 0xa4u, 0x66666f63u);
        g->edx = rd32(edi);
        t49 = rd32(edi);
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008bb94u);
        cow_thiscall(g, rd32(t49 + 0x298u), edi, 3, 0x66666f63u, edi, 0u);
        t50 = g->edx;
        edx = t50;
    COW_AT(1008bb94)
        wr32(edi + 0x7d8u, 0x20202020u);
        wr32(edi + 0x768u, 0u);
    }
    COW_AT(1008bba0)
    t51 = rd32(self + 0xa0u);
    wr32(t51 + 0x768u, 0u);
    g->eax = t51;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bbb3u);
    t52 = cow_fastcall(g, COW_IMG(0x1008a1a0u), self, edx, 0);
    t53 = g->edx;
    eax = t52;
    edx = t53;
    COW_AT(1008bbb3)
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bbbau);
    t54 = cow_fastcall(g, COW_IMG(0x1008a2f0u), self, edx, 0);
    eax = t54;
L_1008bbba: ;
    COW_AT(1008bbba)
    wr8(self + 0x1bcu, 0x10u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bbd0: ;
    COW_AT(1008bbd0)
    t32 = rd32(self + 0xa4u);
    wr32(sp0 - 0x9cu, t32);
    wr32(sp0 - 0xa0u, 0x66666f63u);
    g->eax = t32;
    g->edx = rd32(rd32(self + 0xa0u));
    t33 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bbeau);
    t34 = cow_thiscall(g, rd32(t33 + 0x2a0u), rd32(self + 0xa0u), 2, 0x66666f63u, t32);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    COW_AT(1008bbea)
    if ((uint8_t)eax != 1u) goto L_1008bbfd;
    COW_AT(1008bbee)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bbfd: ;
    COW_AT(1008bbfd)
    wr32(sp0 - 0x9cu, 7u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bc0au);
    t36 = cow_thiscall(g, COW_IMG(0x100d44b0u), rd32(self + 0xa0u), 1, 7u);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(1008bc0a)
    wr32(sp0 - 0x9cu, 0xffu);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bc16u);
    t38 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, 0xffu);
    eax = t38;
    COW_AT(1008bc16)
    if ((uint8_t)eax != 0u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008bc1e)
    if (rd8(sp0 - 0x87u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x87u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x87u);
    COW_AT(1008bc2a)
    wr8(self + 0x1bcu, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return (eax & 0xffffff00u) | 1u;
L_1008bc40: ;
    COW_AT(1008bc40)
    if (rd8(self + 0xeeu) == 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    COW_AT(1008bc4e)
    if ((uint8_t)eax == 4u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008bc56)
    if ((uint8_t)eax == 5u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008bc5e)
    if ((uint32_t)(int8_t)rd8(self + 0x1bcu) > 0x1au)
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x1bcu);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x1bcu);
    COW_AT(1008bc6e)
    t141 = rd32(COW_IMG(0x1008c3f0u) + rd8(COW_IMG(0x1008c430u) + eax) * 4u);
    switch (t141 - RD)
    {
    case 0x1008bc7du: ecx = rd8(COW_IMG(0x1008c430u) + eax); goto L_1008bc7d;
    case 0x1008bd3bu: goto L_1008bd3b;
    case 0x1008bd9au: goto L_1008bd9a;
    case 0x1008bdddu: goto L_1008bddd;
    case 0x1008be26u: goto L_1008be26;
    case 0x1008be89u: goto L_1008be89;
    case 0x1008bfcdu: goto L_1008bfcd;
    case 0x1008c024u: goto L_1008c024;
    case 0x1008c130u: goto L_1008c130;
    case 0x1008c171u: goto L_1008c171;
    case 0x1008c1b0u: ecx = rd8(COW_IMG(0x1008c430u) + eax); goto L_1008c1b0;
    case 0x1008c1f5u: goto L_1008c1f5;
    case 0x1008c272u: ecx = rd8(COW_IMG(0x1008c430u) + eax); goto L_1008c272;
    case 0x1008c29bu: ecx = rd8(COW_IMG(0x1008c430u) + eax); goto L_1008c29b;
    case 0x1008c36au: goto L_1008c36a;
    case 0x1008c39fu: loc_8c = rd32(sp0 - 0x8cu); loc_90 = rd32(sp0 - 0x90u); loc_94 = rd32(sp0 - 0x94u); loc_98 = rd32(sp0 - 0x98u); goto L_1008c39f;
    default: rt_fatal(g, COW_IMG(0x1008bc76u), "switch");
    }
    return 0;
L_1008bc7d: ;
    COW_AT(1008bc7d)
    t266 = rd32(self + 0x170u);
    wr8(self + 0x1bdu, 0u);
    if (t266 != 0x30u)
    {
        eax = t266;
        goto L_1008bcc7;
    }
    eax = t266;
    COW_AT(1008bc8f)
    t267 = rd16(COW_IMG(0x1035b8dau));
    wr8(self + 0x1bcu, 0xcu);
    wr16(self + 0x1c0u, (uint16_t)t267);
    t268 = rd16(COW_IMG(0x10485f7au));
    wr16(self + 0x1beu, (uint16_t)t268);
    wr8(self + 0x1bdu, 1u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return ((eax & 0xffff0000u) | t268) & 0xffffff00u;
L_1008bcc7: ;
    COW_AT(1008bcc7)
    if (rd8(sp0 - 0x86u) == 0u) goto L_1008bcfc;
    COW_AT(1008bccf)
    wr8(self + 0x1bcu, 0x17u);
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bcddu);
    t269 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, self, g->edx, 1, 0);
    t270 = g->edx;
    eax = t269;
    edx = t270;
    COW_AT(1008bcdd)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(1008bce1)
        wr32(sp0 - 0x9cu, 0u);
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008bcedu);
        t271 = cow_thiscall(g, COW_IMG(0x100d60c0u), rd32(self + 0xa0u), 1, 0u);
        eax = t271;
    }
    COW_AT(1008bced)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bcfc: ;
    COW_AT(1008bcfc)
    if (eax != 0x2fu) goto L_1008bd17;
    COW_AT(1008bd01)
    wr8(self + 0x1bcu, 0x14u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bd17: ;
    COW_AT(1008bd17)
    if (eax == 0x21u) goto L_1008bd25;
    COW_AT(1008bd1c)
    if (eax != 7u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
L_1008bd25: ;
    COW_AT(1008bd25)
    wr8(self + 0x1bcu, 7u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bd3b: ;
    COW_AT(1008bd3b)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bd46u);
    t257 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), edx, 1, 0);
    eax = t257;
    COW_AT(1008bd46)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(1008bd4a)
        t258 = rd32(self + 0xa0u);
        wr32(sp0 - 0x9cu, t258);
        wr32(sp0 - 0xa0u, 0x746f6177u);
        g->eax = eax;
        g->edx = rd32(t258);
        t259 = rd32(t258);
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008bd5eu);
        t260 = cow_thiscall(g, rd32(t259 + 0x2a0u), t258, 2, 0x746f6177u, t258);
        t261 = g->edx;
        eax = t260;
        edx = t261;
    COW_AT(1008bd5e)
        if ((uint8_t)eax == 0u)
        {
    COW_AT(1008bd62)
            wr32(sp0 - 0x9cu, 1u);
            g->edx = edx;
            g->esp = sp0 - 0x98u;
            COW_RET(0x1008bd6fu);
            cow_thiscall(g, COW_IMG(0x100d44b0u), rd32(self + 0xa0u), 1, 1u);
            t262 = g->edx;
            edx = t262;
    COW_AT(1008bd6f)
            wr32(sp0 - 0x9cu, 0u);
            t263 = rd32(self + 0xa0u);
            wr32(sp0 - 0xa0u, t263);
            wr32(sp0 - 0xa4u, 0x30736572u);
            g->eax = rd32(t263);
            t264 = rd32(t263);
            g->esp = sp0 - 0x98u;
            COW_RET(0x1008bd84u);
            t265 = cow_thiscall(g, rd32(t264 + 0x298u), t263, 3, 0x30736572u, t263, 0u);
            eax = t265;
    COW_AT(1008bd84)
            wr8(self + 0x1bcu, 8u);
        }
    }
    COW_AT(1008bd8b)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bd9a: ;
    COW_AT(1008bd9a)
    if (rd32(self + 0x170u) == 0x21u)
    {
        eax = rd32(self + 0x170u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = rd32(self + 0x170u);
    COW_AT(1008bda9)
    if (eax == 7u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008bdb2)
    wr32(sp0 - 0x9cu, 0u);
    t255 = rd32(self + 0xa0u);
    wr32(sp0 - 0xa0u, t255);
    wr32(sp0 - 0xa4u, 0x32736572u);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bdc7u);
    t256 = cow_thiscall(g, rd32(rd32(t255) + 0x298u), t255, 3, 0x32736572u, t255, 0u);
    eax = t256;
    COW_AT(1008bdc7)
    wr8(self + 0x1bcu, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bddd: ;
    COW_AT(1008bddd)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bde8u);
    t250 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), edx, 1, 0);
    eax = t250;
    COW_AT(1008bde8)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(1008bdec)
        t251 = rd32(self + 0x128u) | 4u;
        t252 = rd16(self + 0x1c0u);
        t253 = rd32(self + 0xa0u);
        wr32(self + 0x128u, t251);
        wr32(sp0 - 0x9cu, t252);
        g->eax = t252;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008be10u);
        t254 = cow_thiscall(g, COW_IMG(0x100d1c30u), t253, 1, t252);
        eax = t254;
    COW_AT(1008be10)
        wr8(self + 0x1bcu, 0xau);
    }
    COW_AT(1008be17)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008be26: ;
    COW_AT(1008be26)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008be31u);
    t247 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), edx, 1, 0);
    eax = t247;
    COW_AT(1008be31)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(1008be35)
        t248 = rd32(self + 0x128u) & 0xfffffffbu;
        wr32(self + 0x128u, t248);
        if (rd8(rd32(self + 0xa0u) + 0xf8u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(rd32(self + 0xa0u) + 0xf8u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(rd32(self + 0xa0u) + 0xf8u);
            ecx = rd32(self + 0xa0u);
    COW_AT(1008be54)
            wr32(self + 0x1c4u, 0x746f6d65u);
            wr32(self + 0x1c8u, ecx);
            wr32(sp0 - 0x9cu, 0u);
            wr32(sp0 - 0xa0u, ecx);
            wr32(sp0 - 0xa4u, 0x746f6d65u);
            g->eax = eax;
            g->esp = sp0 - 0x98u;
            COW_RET(0x1008be73u);
            t249 = cow_thiscall(g, rd32(rd32(ecx) + 0x298u), ecx, 3, 0x746f6d65u, ecx, 0u);
            eax = t249;
        }
    COW_AT(1008be73)
        wr8(self + 0x1bcu, 0xbu);
    }
    COW_AT(1008be7a)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008be89: ;
    COW_AT(1008be89)
    t221 = rd32(self + 0x1ccu) + 1u;
    wr32(self + 0x1ccu, t221);
    if ((uint8_t)ebx == 0u) goto L_1008bf4f;
    COW_AT(1008be9e)
    t222 = rd32(self + 0x1c8u);
    wr32(sp0 - 0x9cu, t222);
    t223 = rd32(self + 0x1c4u);
    wr32(sp0 - 0xa0u, t223);
    g->eax = rd32(rd32(self + 0xa0u));
    g->edx = t223;
    t224 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bebau);
    t225 = cow_thiscall(g, rd32(t224 + 0x2a0u), rd32(self + 0xa0u), 2, t223, t222);
    t226 = g->edx;
    eax = t225;
    edx = t226;
    COW_AT(1008beba)
    if ((uint8_t)eax != 1u) goto L_1008bf1f;
    COW_AT(1008bebe)
    t227 = rd32(self + 0x1ccu);
    if (t227 >= 4u)
    {
    COW_AT(1008bec7)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008bed4u);
        t228 = cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 0u, 0u);
        t229 = g->edx;
        eax = t228;
        edx = t229;
    COW_AT(1008bed4)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008bee2u);
        t230 = cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 1u, 0u);
        t231 = g->edx;
        eax = t230;
        edx = t231;
    COW_AT(1008bee2)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008bef0u);
        t232 = cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 4u, 0u);
        t233 = g->edx;
        eax = t232;
        edx = t233;
    }
    COW_AT(1008bef0)
    wr32(sp0 - 0x9cu, 0xffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008befcu);
    t234 = cow_thiscall(g, COW_IMG(0x10095820u), self, 1, 0xffu);
    t235 = g->edx;
    eax = t234;
    edx = t235;
    COW_AT(1008befc)
    if ((uint8_t)eax != 0u) goto L_1008bf1f;
    COW_AT(1008bf00)
    t236 = rd32(self + 0x16cu);
    wr32(sp0 - 0x9cu, t236);
    g->eax = t236;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bf0eu);
    t237 = cow_thiscall(g, COW_IMG(0x10095820u), self, 1, t236);
    t238 = g->edx;
    eax = t237;
    edx = t238;
    COW_AT(1008bf0e)
    if ((uint8_t)eax != 0u) goto L_1008bf1f;
    COW_AT(1008bf12)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax;
L_1008bf1f: ;
    COW_AT(1008bf1f)
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bf2cu);
    t239 = cow_thiscall(g, COW_IMG(0x100d5f10u), rd32(self + 0xa0u), 2, 0u, 0u);
    t240 = g->edx;
    eax = t239;
    edx = t240;
    COW_AT(1008bf2c)
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bf3au);
    t241 = cow_thiscall(g, COW_IMG(0x100d5f10u), rd32(self + 0xa0u), 2, 1u, 0u);
    t242 = g->edx;
    eax = t241;
    edx = t242;
    COW_AT(1008bf3a)
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bf48u);
    t243 = cow_thiscall(g, COW_IMG(0x100d5f10u), rd32(self + 0xa0u), 2, 4u, 0u);
    t244 = g->edx;
    eax = t243;
    edx = t244;
    COW_AT(1008bf48)
    wr8(self + 0x1bdu, 0u);
L_1008bf4f: ;
    COW_AT(1008bf4f)
    wr32(sp0 - 0x9cu, 3u);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bf5cu);
    t245 = cow_thiscall(g, COW_IMG(0x100d44b0u), rd32(self + 0xa0u), 1, 3u);
    eax = t245;
    COW_AT(1008bf5c)
    if (rd8(sp0 - 0x86u) == 0u) goto L_1008bf80;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x86u);
    COW_AT(1008bf64)
    wr8(self + 0x1bcu, 0x18u);
    wr32(self + 0x1ccu, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return (eax & 0xffffff00u) | 1u;
L_1008bf80: ;
    COW_AT(1008bf80)
    if (rd32(self + 0x170u) != 0x30u)
    {
        eax = rd32(self + 0x170u);
        goto L_1008bfa7;
    }
    eax = rd32(self + 0x170u);
    COW_AT(1008bf8b)
    wr8(self + 0x1bcu, 0x16u);
    wr32(self + 0x1ccu, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return (eax & 0xffffff00u) | 1u;
L_1008bfa7: ;
    COW_AT(1008bfa7)
    wr32(self + 0x1ccu, 0u);
    t246 = rd32(sp0 - 0x98u);
    wr8(self + 0x1bcu, (eax != 0x2fu) - 1u & 0x15u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = t246;
    g->ebp = rd32(sp0 - 0x90u);
    return 1u;
L_1008bfcd: ;
    COW_AT(1008bfcd)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008bfd8u);
    t215 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), edx, 1, 0);
    t216 = g->edx;
    eax = t215;
    edx = t216;
    COW_AT(1008bfd8)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(1008bfdc)
        t217 = rd16(self + 0x1c0u) >> 3u;
        wr32(sp0 - 0x9cu, t217);
        t218 = rd32(self + 0x128u) | 4u;
        t219 = rd32(self + 0xa0u);
        wr32(self + 0x128u, t218);
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008c003u);
        t220 = cow_thiscall(g, COW_IMG(0x100d1c30u), t219, 1, rd32(sp0 - 0x9cu));
        eax = t220;
    COW_AT(1008c003)
        wr8(self + 0x1bcu, 0xdu);
        if ((uint8_t)ebx != 0u)
        {
    COW_AT(1008c00e)
            wr8(self + 0x1bdu, 1u);
        }
    }
    COW_AT(1008c015)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c024: ;
    COW_AT(1008c024)
    if ((uint8_t)ebx != 0u)
    {
    COW_AT(1008c028)
        wr8(self + 0x1bdu, 1u);
    }
    COW_AT(1008c02f)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c03au);
    t197 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), edx, 1, 0);
    eax = t197;
    COW_AT(1008c03a)
    if ((uint8_t)eax == 0u) goto L_1008c121;
    COW_AT(1008c042)
    t198 = rd32(self + 0x128u) & 0xfffffffbu;
    t199 = rd32(self + 0xa0u);
    wr32(self + 0x128u, t198);
    if (rd8(t199 + 0xf8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(t199 + 0xf8u);
        goto L_1008c11a;
    }
    eax = (eax & 0xffffff00u) | rd8(t199 + 0xf8u);
    edx = t199;
    COW_AT(1008c065)
    if ((uint8_t)ebx == 0u) goto L_1008c0a1;
    COW_AT(1008c069)
    wr32(sp0 - 0x9cu, 0xffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c075u);
    t200 = cow_thiscall(g, COW_IMG(0x10095820u), self, 1, 0xffu);
    t201 = g->edx;
    eax = t200;
    edx = t201;
    COW_AT(1008c075)
    if ((uint8_t)eax != 0u) goto L_1008c08b;
    COW_AT(1008c079)
    t202 = rd32(self + 0x16cu);
    wr32(sp0 - 0x9cu, t202);
    g->eax = t202;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c087u);
    t203 = cow_thiscall(g, COW_IMG(0x10095820u), self, 1, t202);
    t204 = g->edx;
    eax = t203;
    edx = t204;
    COW_AT(1008c087)
    if ((uint8_t)eax == 0u) goto L_1008c0a1;
L_1008c08b: ;
    COW_AT(1008c08b)
    wr8(self + 0x1bcu, 0xbu);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c0a1: ;
    COW_AT(1008c0a1)
    if ((int32_t)(rd16(self + 0x1c0u) & 0x80000007u) >= 0)
    {
        eax = rd16(self + 0x1c0u) & 0x80000007u;
    }
    else
    {
        eax = rd16(self + 0x1c0u) & 0x80000007u;
    COW_AT(1008c0b1)
        eax = (eax - 1u | 0xfffffff8u) + 1u;
    }
    COW_AT(1008c0b6)
    wr32(sp0 - 0x9cu, eax);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c0c2u);
    t205 = cow_stdcall(g, COW_IMG(0x100d2f10u), 1, eax);
    eax = t205;
    COW_AT(1008c0c2)
    t206 = rd16(self + 0x1beu);
    wr32(sp0 - 0x9cu, t206);
    t207 = rd32(self + 0xa0u);
    wr32(self + 0x1c4u, eax);
    wr32(self + 0x1c8u, t207);
    g->ecx = t207;
    g->edx = t206;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c0e5u);
    t208 = cow_call_regs(g, COW_IMG(0x10086fc0u), eax, g->ecx, g->edx, 1, 1, rd32(sp0 - 0x9cu));
    t209 = g->ecx;
    t210 = g->edx;
    ecx = t209;
    edx = t210;
    edi = eax;
    eax = t208;
    COW_AT(1008c0e5)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(1008c0ec)
        if (rd32(COW_IMG(0x10480af0u) + edx * 4u) != 0u)
        {
            edx = rd32(COW_IMG(0x10480af0u) + edx * 4u);
    COW_AT(1008c0f7)
            t211 = rd32(edx + 0xa0u);
            wr32(self + 0x1c8u, t211);
        }
    }
    COW_AT(1008c103)
    wr32(sp0 - 0x9cu, 0u);
    t212 = rd32(self + 0x1c8u);
    wr32(sp0 - 0xa0u, t212);
    wr32(sp0 - 0xa4u, edi);
    g->eax = rd32(ecx);
    t213 = rd32(ecx);
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c114u);
    t214 = cow_thiscall(g, rd32(t213 + 0x298u), ecx, 3, edi, t212, 0u);
    eax = t214;
    COW_AT(1008c114)
    wr32(self + 0x1ccu, 0u);
L_1008c11a: ;
    COW_AT(1008c11a)
    wr8(self + 0x1bcu, 0xbu);
L_1008c121: ;
    COW_AT(1008c121)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c130: ;
    COW_AT(1008c130)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c13bu);
    t191 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), edx, 1, 0);
    t192 = g->edx;
    eax = t191;
    edx = t192;
    COW_AT(1008c13b)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(1008c13f)
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008c146u);
        cow_fastcall(g, COW_IMG(0x1008a1a0u), self, edx, 0);
        t193 = g->edx;
        edx = t193;
    COW_AT(1008c146)
        wr32(sp0 - 0x9cu, 0u);
        t194 = rd32(self + 0xa0u);
        wr32(sp0 - 0xa0u, t194);
        wr32(sp0 - 0xa4u, 0x30746973u);
        g->eax = rd32(t194);
        t195 = rd32(t194);
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008c15bu);
        t196 = cow_thiscall(g, rd32(t195 + 0x298u), t194, 3, 0x30746973u, t194, 0u);
        eax = t196;
    COW_AT(1008c15b)
        wr8(self + 0x1bcu, 0x15u);
    }
    COW_AT(1008c162)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c171: ;
    COW_AT(1008c171)
    t185 = rd32(self + 0x170u);
    if (t185 == 0x2fu)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008c17e)
    wr32(sp0 - 0x9cu, 0u);
    t186 = rd32(self + 0xa0u);
    wr32(sp0 - 0xa0u, t186);
    wr32(sp0 - 0xa4u, 0x32746973u);
    g->eax = eax;
    g->edx = rd32(t186);
    t187 = rd32(t186);
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c193u);
    t188 = cow_thiscall(g, rd32(t187 + 0x298u), t186, 3, 0x32746973u, t186, 0u);
    t189 = g->edx;
    eax = t188;
    edx = t189;
L_1008c193: ;
    COW_AT(1008c193)
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c19au);
    t190 = cow_fastcall(g, COW_IMG(0x1008a1a0u), self, edx, 0);
    eax = t190;
    COW_AT(1008c19a)
    wr8(self + 0x1bcu, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c1b0: ;
    COW_AT(1008c1b0)
    t182 = rd32(self + 0x170u);
    if (t182 == 0x30u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008c1bd)
    t183 = rd16(COW_IMG(0x1035b8deu));
    t184 = rd32(sp0 - 0x98u);
    wr16(self + 0x1c0u, (uint16_t)t183);
    wr16(self + 0x1beu, rd16(COW_IMG(0x10485f7au)));
    wr8(self + 0x1bcu, 0xcu);
    wr8(self + 0x1bdu, 1u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = t184;
    g->ebp = rd32(sp0 - 0x90u);
    return ((eax & 0xffff0000u) | t183) & 0xffffff00u;
L_1008c1f5: ;
    COW_AT(1008c1f5)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c200u);
    t168 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), edx, 1, 0);
    t169 = g->edx;
    eax = t168;
    edx = t169;
    COW_AT(1008c200)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(1008c204)
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008c20bu);
        t170 = cow_fastcall(g, COW_IMG(0x1008a1a0u), self, edx, 0);
        t171 = g->edx;
        eax = t170;
        edx = t171;
    COW_AT(1008c20b)
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008c212u);
        t172 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, self, g->edx, 1, 0);
        t173 = g->ecx;
        t174 = g->edx;
        eax = t172;
        ecx = t173;
        edx = t174;
    COW_AT(1008c212)
        if ((uint8_t)eax != 0u) goto L_1008c232;
    COW_AT(1008c216)
        t175 = rd32(self + 0x12cu);
        if (t175 >> 0x1eu & 1u)
        {
            edx = t175 >> 0x1eu;
            goto L_1008c232;
        }
        eax = t175;
        edx = t175 >> 0x1eu;
    COW_AT(1008c226)
        wr8(sp0 - 0x84u, 0u);
        if (eax >> 0x1fu == 0u) goto L_1008c237;
L_1008c232: ;
    COW_AT(1008c232)
        wr8(sp0 - 0x84u, 1u);
L_1008c237: ;
    COW_AT(1008c237)
        wr32(sp0 - 0x9cu, 0u);
        t176 = rd32(self + 0xa0u);
        wr32(sp0 - 0xa0u, t176);
        t177 = rd32(sp0 - 0x84u);
        wr32(sp0 - 0xa4u, t177);
        wr32(sp0 - 0xa8u, 0u);
        t178 = rd32(t176);
        g->esp = sp0 - 0xa0u;
        COW_RET(0x1008c24cu);
        t179 = cow_call_regs(g, COW_IMG(0x1008c450u), t177, g->ecx, edx, 1, 2, 0u, t177);
        t180 = g->edx;
        eax = t179;
        edx = t180;
        edi = t178;
    COW_AT(1008c24c)
        wr32(sp0 - 0xa4u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008c25cu);
        t181 = cow_thiscall(g, rd32(edi + 0x298u), rd32(self + 0xa0u), 3, eax, rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
        eax = t181;
    COW_AT(1008c25c)
        wr8(self + 0x1bcu, 0x18u);
    }
    COW_AT(1008c263)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c272: ;
    COW_AT(1008c272)
    if (rd8(sp0 - 0x85u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x85u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x85u);
    COW_AT(1008c27e)
    wr8(self + 0x1bcu, 0x19u);
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c28au);
    t147 = cow_call_regs(g, COW_IMG(0x10087060u), eax, ecx, g->edx, 1, 0);
    t148 = g->edx;
    eax = t147;
    edx = t148;
    COW_AT(1008c28a)
    if ((uint8_t)eax != 0u) goto L_1008c2b5;
    COW_AT(1008c28e)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax;
L_1008c29b: ;
    COW_AT(1008c29b)
    if (rd8(sp0 - 0x85u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x85u);
        goto L_1008c2b5;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x85u);
    COW_AT(1008c2a3)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c2a8u);
    t142 = cow_call_regs(g, COW_IMG(0x10087060u), eax, ecx, g->edx, 1, 0);
    eax = t142;
    COW_AT(1008c2a8)
    if ((uint8_t)eax != 0u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008c2b0)
L_1008c376: ;
    COW_AT(1008c376)
    t143 = rd32(self + 0x74u);
    if (t143 != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
    }
    else
    {
        ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    COW_AT(1008c382)
        wr32(sp0 - 0x9cu, COW_IMG(0x1035bb04u));
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0x94u;
        COW_RET(0x1008c391u);
        cow_cdecl(g, COW_IMG(0x10312031u), 3, sp0 - 0x80u, COW_IMG(0x1035bb04u), rd32(sp0 - 0x98u));
        t144 = g->ecx;
        t145 = g->edx;
        ecx = t144;
        edx = t145;
    COW_AT(1008c391)
        wr32(sp0 - 0xa4u, 0u);
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        g->ebx = ebx;
        g->eax = sp0 - 0x80u;
        g->esp = sp0 - 0xa0u;
        COW_RET(0x1008c39cu);
        t146 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x80u, 0u);
        eax = t146;
    COW_AT(1008c39c)
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
    }
L_1008c39f: ;
    COW_AT(1008c39f)
    g->ebx = loc_8c;
    g->esi = loc_94;
    g->edi = loc_98;
    g->ebp = loc_90;
    return (eax & 0xffffff00u) | 1u;
L_1008c2b5: ;
    COW_AT(1008c2b5)
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c2bcu);
    t149 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, self, g->edx, 1, 0);
    t150 = g->ecx;
    eax = t149;
    ecx = t150;
    COW_AT(1008c2bc)
    if ((uint8_t)eax != 0u) goto L_1008c2db;
    COW_AT(1008c2c0)
    t151 = rd32(self + 0x12cu);
    if (t151 >> 0x1eu & 1u)
    {
        ecx = t151 >> 0x1eu;
        goto L_1008c2db;
    }
    eax = t151;
    ecx = t151 >> 0x1eu;
    COW_AT(1008c2d0)
    if (eax >> 0x1fu != 0u) goto L_1008c2db;
    COW_AT(1008c2d7)
    ebx = ebx & 0xffffff00u;
L_1008c2dd: ;
    COW_AT(1008c2dd)
    t152 = rd32(self + 0xa0u);
    wr8(sp0 - 0x84u, (uint8_t)ebx);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, t152);
    t153 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0xa4u, t153);
    wr32(sp0 - 0xa8u, 1u);
    t154 = rd32(t152);
    g->esp = sp0 - 0xa0u;
    COW_RET(0x1008c2f7u);
    t155 = cow_call_regs(g, COW_IMG(0x1008c450u), t152, g->ecx, t153, 1, 2, 1u, t153);
    t156 = g->edx;
    eax = t155;
    edx = t156;
    edi = t154;
    COW_AT(1008c2f7)
    wr32(sp0 - 0xa4u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    COW_RET(0x1008c307u);
    t157 = cow_thiscall(g, rd32(edi + 0x298u), rd32(self + 0xa0u), 3, eax, rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
    t158 = g->edx;
    eax = t157;
    edx = t158;
    COW_AT(1008c307)
    if ((uint8_t)ebx == 0u)
    {
    COW_AT(1008c30b)
        if (rd32(rd32(self + 0xa0u) + 0x768u) == 0u)
        {
            eax = rd32(self + 0xa0u);
        }
        else
        {
            eax = rd32(self + 0xa0u);
            edi = rd32(rd32(self + 0xa0u) + 0x768u);
    COW_AT(1008c31b)
            g->eax = eax;
            g->edx = rd32(edi);
            t159 = rd32(edi);
            g->esp = sp0 - 0x98u;
            COW_RET(0x1008c325u);
            t160 = cow_thiscall(g, rd32(t159 + 0x36cu), edi, 0);
            t161 = g->edx;
            eax = t160;
            edx = t161;
    COW_AT(1008c325)
            if (eax != 0u)
            {
    COW_AT(1008c329)
                wr32(sp0 - 0x9cu, 0u);
                wr32(sp0 - 0xa0u, edi);
                wr32(sp0 - 0xa4u, 0x32696863u);
                g->eax = rd32(edi);
                g->edx = edx;
                t162 = rd32(edi);
                g->esp = sp0 - 0x98u;
                COW_RET(0x1008c33au);
                t163 = cow_thiscall(g, rd32(t162 + 0x298u), edi, 3, 0x32696863u, edi, 0u);
                t164 = g->edx;
                eax = t163;
                edx = t164;
            }
        }
    COW_AT(1008c33a)
        wr32(sp0 - 0x9cu, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008c346u);
        t165 = cow_thiscall(g, COW_IMG(0x100d5ef0u), rd32(self + 0xa0u), 1, 0u);
        t166 = g->edx;
        eax = t165;
        edx = t166;
    COW_AT(1008c346)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        COW_RET(0x1008c354u);
        t167 = cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 2u, 0u);
        eax = t167;
    }
    COW_AT(1008c354)
    wr8(self + 0x1bcu, 0x1au);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c2db: ;
    COW_AT(1008c2db)
    ebx = (ebx & 0xffffff00u) | 1u;
    goto L_1008c2dd;
L_1008c36a: ;
    COW_AT(1008c36a)
    if (rd8(sp0 - 0x86u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x86u);
        goto L_1008c193;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x86u);
    goto L_1008c376;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1008b460(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1008b47bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebp = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b47fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebp = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b48bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebp = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b49bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebp = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b4a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebp = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b4b1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b4b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b4c4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b4deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b4e7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b4ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b4f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b4fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x9cu;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b502u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b514u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b526u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b534u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b543u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b54cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b558u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b55du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b565u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b574u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b581u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b58au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b5a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b5bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b5ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b5d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b5dfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b5e7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b5efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b5f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b600u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b60eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b612u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b616u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b626u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b62au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b62eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b632u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b63eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b64eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b65du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b66cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008b678u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b688u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b694u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b6c5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b6d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b6d5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b6ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b6f8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b708u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b70du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b70fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b714u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b722u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b738u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b743u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b747u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b756u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b763u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b77au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b789u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b79au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b7a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b7beu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b7cdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b7d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b7e7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b7f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b7f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b80cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b817u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b822u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b827u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b83du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b853u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b85eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b866u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b87bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b88au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b897u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b8acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b8ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b8d8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b8eeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b8f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b8fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b911u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b915u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b928u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b937u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b942u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b946u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b95bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x90u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b96au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b977u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b98cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b9acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b9b8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b9bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008b9ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b9d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b9e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b9efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008b9feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba05u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba1du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba2eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba33u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba37u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba41u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba4fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba57u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba65u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba6du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba77u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba80u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba8eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008ba96u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008baa4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008baacu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bab6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008babau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008babeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bac3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bacdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bad9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008baefu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008baf7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008baffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bb07u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bb0cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bb16u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bb1eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bb2au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bb2eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bb3bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bb43u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bb53u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bb68u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bb83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebx = 0x20202020u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bb94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebx = 0x20202020u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bba0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bbb3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bbbau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bbd0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bbeau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bbeeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bbfdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bc0au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bc16u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bc1eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bc2au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bc40u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bc4eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bc56u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bc5eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bc6eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bc7du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bc8fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bcc7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bccfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bcddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bce1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bcedu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bcfcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd01u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd17u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd25u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd3bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd46u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd4au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd5eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd62u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd6fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd84u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd8bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bd9au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bda9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bdb2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bdc7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bdddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bde8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bdecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008be10u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008be17u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008be26u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008be31u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008be35u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008be54u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008be73u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008be7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008be89u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008be9eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bebau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bebeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bec7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bed4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bee2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bef0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008befcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bf00u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bf0eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bf12u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bf1fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bf2cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bf3au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bf48u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bf4fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bf5cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bf64u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bf80u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bf8bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bfa7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008bfcdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bfd8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008bfdcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c003u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c00eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c015u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c024u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c028u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c02fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c03au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c042u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c065u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c069u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c075u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c079u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c087u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c08bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c0a1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c0b1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c0b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c0c2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c0e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x9cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c0ecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c0f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c103u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c114u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c11au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c121u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c130u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c13bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c13fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c146u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c15bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c162u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c171u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c17eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c193u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c19au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c1b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c1bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c1f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c200u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c204u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c20bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c212u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c216u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c226u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c232u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c237u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c24cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x1008c25cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c263u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c272u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c27eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c28au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c28eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c29bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c2a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c2a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c2b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c2b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c2bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c2c0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c2d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c2d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c2dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c2ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c2f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c307u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c30bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c31bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c325u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c329u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c33au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c346u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c354u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1008c36au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c376u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c382u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x98u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008c391u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1008c39cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1008c39fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1008b460(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1008b460(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
