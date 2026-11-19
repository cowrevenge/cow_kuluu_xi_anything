/* f_0x1008b460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 180u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008b47bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1008b47b;
    case 0x1008b47fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1008b47f;
    case 0x1008b48bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1008b48b;
    case 0x1008b49bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1008b49b;
    case 0x1008b4a6u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1008b4a6;
    case 0x1008b4b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008b4b5;
    case 0x1008b4c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1008b4c4;
    case 0x1008b4ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b4eb;
    case 0x1008b4f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b4f4;
    case 0x1008b4fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b4fb;
    case 0x1008b526u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1008b526;
    case 0x1008b534u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b534;
    case 0x1008b543u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b543;
    case 0x1008b54cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b54c;
    case 0x1008b558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b558;
    case 0x1008b565u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008b565;
    case 0x1008b574u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b574;
    case 0x1008b581u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b581;
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
    case 0x1008b6c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b6c5;
    case 0x1008b6d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b6d5;
    case 0x1008b6ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b6eb;
    case 0x1008b6f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b6f8;
    case 0x1008b708u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b708;
    case 0x1008b70fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b70f;
    case 0x1008b714u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b714;
    case 0x1008b738u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b738;
    case 0x1008b747u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b747;
    case 0x1008b77au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008b77a;
    case 0x1008b789u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b789;
    case 0x1008b7beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7be;
    case 0x1008b7cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7cd;
    case 0x1008b7d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7d6;
    case 0x1008b7e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7e7;
    case 0x1008b7f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7f1;
    case 0x1008b7f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b7f7;
    case 0x1008b822u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b822;
    case 0x1008b827u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b827;
    case 0x1008b83du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b83d;
    case 0x1008b853u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b853;
    case 0x1008b866u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b866;
    case 0x1008b8eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b8ee;
    case 0x1008b8fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b8fd;
    case 0x1008b915u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b915;
    case 0x1008b928u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008b928;
    case 0x1008b937u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b937;
    case 0x1008b946u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b946;
    case 0x1008b9bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); goto E_1008b9bf;
    case 0x1008b9ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b9ce;
    case 0x1008b9d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b9d6;
    case 0x1008b9efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b9ef;
    case 0x1008b9feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008b9fe;
    case 0x1008ba05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba05;
    case 0x1008ba1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba1d;
    case 0x1008ba2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba2e;
    case 0x1008ba37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba37;
    case 0x1008ba41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba41;
    case 0x1008ba57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba57;
    case 0x1008ba6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba6d;
    case 0x1008ba77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba77;
    case 0x1008ba80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba80;
    case 0x1008ba96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008ba96;
    case 0x1008baacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008baac;
    case 0x1008bab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bab6;
    case 0x1008babau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008baba;
    case 0x1008babeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008babe;
    case 0x1008bacdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bacd;
    case 0x1008bad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bad9;
    case 0x1008baefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008baef;
    case 0x1008baf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008baf7;
    case 0x1008baffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008baff;
    case 0x1008bb07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb07;
    case 0x1008bb16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb16;
    case 0x1008bb1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb1e;
    case 0x1008bb2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008bb2e;
    case 0x1008bb3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb3b;
    case 0x1008bb43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bb43;
    case 0x1008bb53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bb53;
    case 0x1008bb83u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1008bb83;
    case 0x1008bba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bba0;
    case 0x1008bbbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bbba;
    case 0x1008bbd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bbd0;
    case 0x1008bbeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008bbee;
    case 0x1008bbfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bbfd;
    case 0x1008bc1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc1e;
    case 0x1008bc2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc2a;
    case 0x1008bc40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc40;
    case 0x1008bc4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc4e;
    case 0x1008bc56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc56;
    case 0x1008bc5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc5e;
    case 0x1008bc6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc6e;
    case 0x1008bc7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc7d;
    case 0x1008bc8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bc8f;
    case 0x1008bcc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bcc7;
    case 0x1008bccfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bccf;
    case 0x1008bce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bce1;
    case 0x1008bcedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008bced;
    case 0x1008bcfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bcfc;
    case 0x1008bd01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bd01;
    case 0x1008bd17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bd17;
    case 0x1008bd1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bd1c;
    case 0x1008bd25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bd25;
    case 0x1008bd3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bd3b;
    case 0x1008bd4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bd4a;
    case 0x1008bd62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bd62;
    case 0x1008bd8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008bd8b;
    case 0x1008bd9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bd9a;
    case 0x1008bda9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bda9;
    case 0x1008bdb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bdb2;
    case 0x1008bdddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bddd;
    case 0x1008bdecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bdec;
    case 0x1008be17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008be17;
    case 0x1008be26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008be26;
    case 0x1008be35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008be35;
    case 0x1008be54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008be54;
    case 0x1008be73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008be73;
    case 0x1008be7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008be7a;
    case 0x1008be89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008be89;
    case 0x1008be9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008be9e;
    case 0x1008bebeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bebe;
    case 0x1008bec7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bec7;
    case 0x1008bef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bef0;
    case 0x1008bf00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bf00;
    case 0x1008bf12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008bf12;
    case 0x1008bf1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bf1f;
    case 0x1008bf4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bf4f;
    case 0x1008bf64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bf64;
    case 0x1008bf80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bf80;
    case 0x1008bf8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bf8b;
    case 0x1008bfa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bfa7;
    case 0x1008bfcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008bfcd;
    case 0x1008bfdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008bfdc;
    case 0x1008c00eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c00e;
    case 0x1008c015u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008c015;
    case 0x1008c024u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c024;
    case 0x1008c028u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c028;
    case 0x1008c02fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c02f;
    case 0x1008c042u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c042;
    case 0x1008c065u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c065;
    case 0x1008c069u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c069;
    case 0x1008c079u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c079;
    case 0x1008c08bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c08b;
    case 0x1008c0a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c0a1;
    case 0x1008c0b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c0b1;
    case 0x1008c0b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c0b6;
    case 0x1008c0ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c0ec;
    case 0x1008c0f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c0f7;
    case 0x1008c103u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c103;
    case 0x1008c11au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c11a;
    case 0x1008c121u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008c121;
    case 0x1008c130u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c130;
    case 0x1008c13fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c13f;
    case 0x1008c162u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008c162;
    case 0x1008c171u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c171;
    case 0x1008c17eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c17e;
    case 0x1008c193u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c193;
    case 0x1008c1b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c1b0;
    case 0x1008c1bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c1bd;
    case 0x1008c1f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c1f5;
    case 0x1008c204u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c204;
    case 0x1008c216u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c216;
    case 0x1008c226u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c226;
    case 0x1008c232u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c232;
    case 0x1008c237u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c237;
    case 0x1008c263u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008c263;
    case 0x1008c272u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c272;
    case 0x1008c27eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c27e;
    case 0x1008c28eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1008c28e;
    case 0x1008c29bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c29b;
    case 0x1008c2a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c2a3;
    case 0x1008c2b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2b0;
    case 0x1008c2b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c2b5;
    case 0x1008c2c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2c0;
    case 0x1008c2d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2d0;
    case 0x1008c2d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2d7;
    case 0x1008c2dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2db;
    case 0x1008c2ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c2dd;
    case 0x1008c30bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c30b;
    case 0x1008c31bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c31b;
    case 0x1008c329u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c329;
    case 0x1008c33au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c33a;
    case 0x1008c354u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1008c354;
    case 0x1008c36au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c36a;
    case 0x1008c376u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c376;
    case 0x1008c382u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); goto E_1008c382;
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
    if ((rd32(self + 0x120u) & 0x200u) == 0u)
    {
        loc_8c = in_ebx;
        loc_90 = in_ebp;
        loc_94 = in_esi;
        loc_98 = in_edi;
        goto L_1008c39f;
    }
    COW_AT(1008b48b)
    if ((rd32(self + 0x128u) & 0x20000000u) == 0u)
    {
        loc_8c = in_ebx;
        loc_90 = in_ebp;
        loc_94 = in_esi;
        loc_98 = in_edi;
        goto L_1008c39f;
    }
L_1008b49b: ;
    COW_AT(1008b49b)
    if (arg1 != 0u)
    {
        edx = in_edx;
        goto L_1008b4c4;
    }
    COW_AT(1008b4a6)
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x98u;
    t1 = cow_thiscall(g, COW_IMG(0x10083320u), rd32(self + 0xa0u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_1008b4c4;
    }
    eax = t1;
    COW_AT(1008b4b5)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b4c4: ;
    COW_AT(1008b4c4)
    t3 = rd32(self + 0x170u);
    wr32(sp0 - 0x9cu, t3);
    g->eax = t3;
    g->edx = edx;
    t4 = rd32(self + 0x12cu);
    g->esp = sp0 - 0x98u;
    t5 = cow_thiscall(g, COW_IMG(0x10095790u), self, 1, t3);
    t6 = g->ecx;
    t7 = g->edx;
    wr8(sp0 - 0x86u, (uint8_t)t5);
    g->edx = t7;
    t8 = cow_call_regs(g, COW_IMG(0x10087060u), t5, g->ecx, g->edx, 1, 0);
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        ebx = (t4 >> 0x16u & 0xffffff00u) | (t4 >> 0x16u & 1u);
    COW_AT(1008b4f4)
        t11 = rd32(self + 0x16cu);
        wr32(sp0 - 0x9cu, t11);
        edx = t11;
        loc_9c = t11;
    }
    else
    {
        eax = t8;
        edx = t9;
        ebx = (t4 >> 0x16u & 0xffffff00u) | (t4 >> 0x16u & 1u);
    COW_AT(1008b4eb)
        t10 = rd32(self + 0x170u);
        wr32(sp0 - 0x9cu, t10);
        loc_9c = t10;
    }
    COW_AT(1008b4fb)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t12 = cow_thiscall(g, COW_IMG(0x10095790u), self, 1, loc_9c);
    t13 = g->edx;
    wr8(sp0 - 0x85u, (uint8_t)t12);
    t14 = rd32(self + 0x170u);
    wr32(sp0 - 0x9cu, t14);
    g->eax = t14;
    g->edx = t13;
    t15 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, t14);
    t16 = g->ecx;
    t17 = g->edx;
    wr8(sp0 - 0x87u, (uint8_t)t15);
    if (rd8(self + 0xeeu) != 4u)
    {
        eax = (t15 & 0xffffff00u) | rd8(self + 0xeeu);
        edx = t17;
        goto L_1008b5cc;
    }
    eax = (t15 & 0xffffff00u) | rd8(self + 0xeeu);
    ecx = t16;
    edx = t17;
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
    t18 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t19 = g->edx;
    if (t18 >= rd32(self + 0x184u))
    {
        eax = t18;
        edx = t19;
        goto L_1008b574;
    }
    eax = t18;
    COW_AT(1008b565)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b574: ;
    COW_AT(1008b574)
    if (rd8(self + 0xeeu) != 4u)
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
    cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x84u, 0);
    t20 = g->edx;
    t21 = rd32(self + 0x180u) * 0x3cu;
    wr32(sp0 - 0x9cu, t21);
    cow_thiscall(g, COW_IMG(0x1018bbe0u), sp0 - 0x84u, 1, t21);
    t22 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0x9cu, t22);
    t23 = rd32(self + 0x16cu) - 0xau;
    wr32(sp0 - 0xa0u, t23);
    g->eax = t23;
    t24 = cow_thiscall(g, COW_IMG(0x100c3d50u), rd32(self + 0xa0u), 2, t23, t22);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return (t24 & 0xffffff00u) | 1u;
L_1008b5cc: ;
    COW_AT(1008b5cc)
    if (rd16(self + 0x210u) != 0u) goto L_1008b5f7;
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
    if ((rd32(self + 0x78u) & 0xff000000u) == 0u) goto L_1008b63e;
    COW_AT(1008b600)
    if (!(rd32(self + 0x12cu) >> 0x1eu & 1u)) goto L_1008b616;
    COW_AT(1008b60e)
    if ((uint8_t)eax == 0u) goto L_1008b63e;
    COW_AT(1008b612)
    if ((uint8_t)eax == 1u) goto L_1008b63e;
L_1008b616: ;
    COW_AT(1008b616)
    t25 = rd32(self + 0x120u);
    if (!(t25 >> 0xdu & 1u))
    {
        ecx = t25;
        edx = t25 >> 0xdu;
        goto L_1008b62a;
    }
    ecx = t25;
    edx = t25 >> 0xdu;
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
    t26 = rd32(COW_IMG(0x1008c3b0u) + rd8(COW_IMG(0x1008c3dcu) + ecx) * 4u);
    switch (t26 - RD)
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
    t120 = rd8(sp0 - 0x87u);
    wr8(self + 0x1bdu, 0u);
    if ((uint8_t)t120 == 0u)
    {
        eax = (eax & 0xffffff00u) | t120;
        goto L_1008b6c5;
    }
    eax = (eax & 0xffffff00u) | t120;
    COW_AT(1008b66c)
    if ((rd32(self + 0x120u) & 0x200u) == 0u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008b678)
    if ((rd32(self + 0x128u) & 0x20000000u) == 0u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008b688)
    wr32(sp0 - 0x9cu, 0u);
    t121 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x98u;
    cow_thiscall(g, COW_IMG(0x100d60c0u), t121, 1, 0u);
    t122 = g->ecx;
    t123 = rd32(self + 0xa0u);
    t124 = rd32(sp0 - 0x98u);
    wr8(t123 + 0xb2u, rd8(t123 + 0xb2u) | 0x40u);
    wr32(self + 0x1ccu, 0u);
    wr8(self + 0x1bcu, 0xeu);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = t124;
    g->ebp = rd32(sp0 - 0x90u);
    return t123 & 0xffffff00u;
L_1008b6c5: ;
    COW_AT(1008b6c5)
    wr32(sp0 - 0x9cu, 0xffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t125 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, 0xffu);
    t126 = g->edx;
    if ((uint8_t)t125 == 0u)
    {
        eax = t125;
        edx = t126;
        goto L_1008b6eb;
    }
    eax = t125;
    COW_AT(1008b6d5)
    wr8(self + 0x1bcu, 0xeu);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b6eb: ;
    COW_AT(1008b6eb)
    if (rd32(self + 0x170u) != 1u) goto L_1008bc40;
    COW_AT(1008b6f8)
    if (rd8(rd32(self + 0xa0u) + 0x8b5u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self + 0xa0u) + 0x8b5u);
        ecx = rd32(self + 0xa0u);
    COW_AT(1008b70f)
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        cow_thiscall(g, COW_IMG(0x100d16c0u), ecx, 0);
        t128 = g->edx;
        edx = t128;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self + 0xa0u) + 0x8b5u);
        ecx = rd32(self + 0xa0u);
    COW_AT(1008b708)
        g->esp = sp0 - 0x98u;
        cow_fastcall(g, COW_IMG(0x100d1970u), ecx, edx, 0);
        t127 = g->edx;
        edx = t127;
    }
    COW_AT(1008b714)
    g->eax = rd32(rd32(self + 0xa0u));
    t129 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    t130 = cow_thiscall(g, rd32(t129 + 0x160u), rd32(self + 0xa0u), 0);
    wr8(self + 0x1bcu, 1u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return t130 & 0xffffff00u;
L_1008b738: ;
    COW_AT(1008b738)
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t114 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    t115 = g->edx;
    if ((uint8_t)t114 == 0u)
    {
        eax = t114;
    }
    else
    {
        eax = t114;
        edx = t115;
    COW_AT(1008b747)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0u);
        g->eax = eax;
        g->edx = edx;
        t116 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        t117 = cow_thiscall_cdecl(g, COW_IMG(0x100d2ed0u), rd32(self + 0xa0u), 2, 0u, 0u);
        t118 = g->edx;
        wr32(sp0 - 0xa4u, t117);
        t119 = cow_thiscall(g, rd32(t116 + 0x298u), rd32(self + 0xa0u), 3, t117, 0u, 0u);
        wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
        wr8(self + 0x1bcu, 2u);
        eax = t119;
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
    t110 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0xa0u;
    cow_thiscall(g, rd32(t110 + 0x31cu), rd32(self + 0xa0u), 0);
    t111 = g->edx;
    g->eax = rd32(rd32(self + 0xa0u));
    t112 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    t113 = cow_thiscall(g, rd32(t112 + 0x164u), rd32(self + 0xa0u), 2, 1u, 0u);
    wr8(self + 0x1bcu, 3u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return t113 & 0xffffff00u;
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
            cow_thiscall(g, COW_IMG(0x10157660u), ecx, 1, 0u);
            t106 = g->edx;
            edx = t106;
        }
    }
    COW_AT(1008b7f7)
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, 0x67746e62u);
    g->eax = rd32(rd32(self + 0xa0u));
    g->edx = edx;
    t107 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    t108 = cow_thiscall(g, rd32(t107 + 0x298u), rd32(self + 0xa0u), 3, 0x67746e62u, 0u, 0u);
    t109 = g->edx;
    cow_thiscall(g, COW_IMG(0x100d14c0u), rd32(self + 0xa0u), 0);
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
    t91 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    if ((uint8_t)t91 == 0u)
    {
        eax = t91;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = t91;
    COW_AT(1008b866)
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, 0x74626c6bu);
    g->eax = eax;
    g->edx = rd32(rd32(self + 0xa0u));
    t92 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0xa4u;
    t93 = cow_thiscall(g, rd32(t92 + 0x298u), rd32(self + 0xa0u), 0);
    t94 = g->edx;
    wr32(sp0 - 0xa8u, 0u);
    wr32(sp0 - 0xacu, 0u);
    g->edx = t94;
    t95 = rd32(rd32(self + 0xa0u));
    t96 = cow_thiscall_cdecl(g, COW_IMG(0x100d2ef0u), rd32(self + 0xa0u), 2, 0u, 0u);
    t97 = g->edx;
    wr32(sp0 - 0xb0u, t96);
    g->edx = t97;
    g->esp = sp0 - 0x90u;
    cow_thiscall(g, rd32(t95 + 0x298u), rd32(self + 0xa0u), 8, t96, 0u, 0u, 0x74626c6bu, 0u, 0u, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t98 = g->edx;
    wr32(sp0 - 0x94u, 0u);
    t99 = rd32(self + 0xa0u);
    wr32(sp0 - 0x98u, t99);
    wr32(sp0 - 0x9cu, 0x74617768u);
    g->eax = rd32(t99);
    t100 = rd32(t99);
    g->esp = sp0 - 0x94u;
    t101 = cow_thiscall(g, rd32(t100 + 0x298u), t99, 2, 0x74617768u, t99);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x9cu, 0u);
    wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
    g->edx = rd32(rd32(self + 0xa0u));
    t102 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    t103 = cow_thiscall(g, rd32(t102 + 0x31cu), rd32(self + 0xa0u), 1, 0u);
    t104 = g->edx;
    wr32(sp0 - 0x9cu, 0u);
    t105 = cow_thiscall(g, COW_IMG(0x100cf160u), rd32(self + 0xa0u), 1, 0u);
    wr8(self + 0x1bcu, 5u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = 0u;
    g->edi = 0u;
    g->ebp = rd32(sp0 - 0x90u);
    return (t105 & 0xffffff00u) | 1u;
L_1008b8ee: ;
    COW_AT(1008b8ee)
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t84 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    t85 = g->edx;
    if ((uint8_t)t84 == 0u)
    {
        eax = t84;
    }
    else
    {
        edx = t85;
    COW_AT(1008b8fd)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0x746f6177u);
        g->eax = rd32(rd32(self + 0xa0u));
        g->edx = edx;
        t86 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        t87 = cow_thiscall(g, rd32(t86 + 0x2a0u), rd32(self + 0xa0u), 2, 0x746f6177u, 0u);
        t88 = g->edx;
        if ((uint8_t)t87 != 0u)
        {
            eax = t87;
        }
        else
        {
            eax = t87;
            edx = t88;
    COW_AT(1008b915)
            wr32(sp0 - 0x9cu, 1u);
            t89 = rd32(self + 0xa0u);
            wr8(self + 0x1bcu, (uint8_t)eax);
            g->eax = eax;
            g->esp = sp0 - 0x98u;
            t90 = cow_thiscall(g, COW_IMG(0x100d44b0u), t89, 1, 1u);
            eax = t90;
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
    t69 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    if ((uint8_t)t69 == 0u)
    {
        eax = t69;
        loc_90 = rd32(sp0 - 0x90u);
    }
    else
    {
        eax = t69;
    COW_AT(1008b946)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0u);
        wr32(sp0 - 0xa4u, 0x74626c6bu);
        g->eax = eax;
        g->edx = rd32(rd32(self + 0xa0u));
        t70 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x7cu;
        t71 = cow_thiscall(g, rd32(t70 + 0x298u), rd32(self + 0xa0u), 10, 0x74626c6bu, 0u, 0u, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u));
        t72 = g->edx;
        wr32(sp0 - 0x80u, 0u);
        wr32(sp0 - 0x84u, 0u);
        g->edx = t72;
        t73 = rd32(rd32(self + 0xa0u));
        t74 = cow_thiscall_cdecl(g, COW_IMG(0x100d2ef0u), rd32(self + 0xa0u), 2, 0u, 0u);
        t75 = g->edx;
        wr32(sp0 - 0x88u, t74);
        g->edx = t75;
        g->esp = sp0 - 0x84u;
        cow_thiscall(g, rd32(t73 + 0x298u), rd32(self + 0xa0u), 1, t74);
        t76 = g->edx;
        wr32(sp0 - 0x88u, 0u);
        t77 = rd32(self + 0xa0u);
        wr32(sp0 - 0x8cu, t77);
        wr32(sp0 - 0x90u, 0x74617768u);
        g->eax = rd32(t77);
        t78 = rd32(t77);
        g->esp = sp0 - 0x90u;
        t79 = cow_thiscall(g, rd32(t78 + 0x298u), t77, 0);
        wr32(sp0 - 0x94u, 0u);
        wr32(sp0 - 0x98u, 0u);
        wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
        g->edx = rd32(rd32(self + 0xa0u));
        t80 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        t81 = cow_thiscall(g, rd32(t80 + 0x31cu), rd32(self + 0xa0u), 0);
        t82 = g->edx;
        wr32(sp0 - 0x9cu, 0u);
        t83 = cow_thiscall(g, COW_IMG(0x100cf160u), rd32(self + 0xa0u), 1, 0u);
        wr8(self + 0x1bcu, 7u);
        eax = t83;
        loc_90 = 0x74617768u;
    }
    COW_AT(1008b9bf)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = loc_90;
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
        cow_thiscall(g, COW_IMG(0x100d60c0u), rd32(self + 0xa0u), 1, 0u);
        t49 = g->edx;
        if (rd32(self + 0x1ccu) < 0x97u)
        {
            eax = rd32(self + 0x1ccu);
            edx = t49;
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
                    g->edx = edx;
                    g->esp = sp0 - 0x98u;
                    t52 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, ecx, g->edx, 1, 0);
                    t53 = g->edx;
                    if ((uint8_t)t52 == 0u)
                    {
                        eax = t52;
                        edx = t53;
                    }
                    else
                    {
                        eax = t52;
                        edx = t53;
    COW_AT(1008ba37)
                        wr32(self + 0x1ccu, 0x96u);
                    }
                }
            }
            else
            {
    COW_AT(1008ba05)
                t51 = rd32(self + 0xa0u);
                wr32(t51 + 0x59cu, 0u);
                wr32(self + 0x1ccu, 0x97u);
                eax = t51;
            }
        }
        else
        {
            edx = t49;
    COW_AT(1008b9ef)
            t50 = rd32(self + 0xa0u);
            wr8(t50 + 0xb2u, rd8(t50 + 0xb2u) & 0xbfu);
            eax = t50;
        }
    }
    COW_AT(1008ba41)
    t54 = rd32(self + 0x16cu);
    wr32(sp0 - 0x9cu, t54);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t55 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, t54);
    if ((uint8_t)t55 != 0u)
    {
        eax = t55;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = t55;
    COW_AT(1008ba57)
    t56 = rd32(self + 0x16cu);
    wr32(sp0 - 0x9cu, t56);
    g->eax = eax;
    g->edx = t56;
    g->esp = sp0 - 0x98u;
    t57 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, t56);
    t58 = g->ecx;
    t59 = g->edx;
    if ((uint8_t)t57 != 0u)
    {
        eax = t57;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = t57;
    ecx = t58;
    edx = t59;
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
    t60 = rd32(self + 0x174u);
    wr32(sp0 - 0x9cu, t60);
    g->eax = t60;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t61 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, t60);
    t62 = g->edx;
    if ((uint8_t)t61 != 0u)
    {
        eax = t61;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    edx = t62;
    COW_AT(1008ba96)
    t63 = rd32(self + 0x174u);
    wr32(sp0 - 0x9cu, t63);
    g->eax = t63;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t64 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, t63);
    t65 = g->ecx;
    t66 = g->edx;
    if ((uint8_t)t64 != 0u)
    {
        eax = t64;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = t64;
    ecx = t65;
    edx = t66;
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
                t67 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
                if (rd32(self + 0x78u) != rd32(t67 + 4u))
                {
                    eax = t67;
                }
                else
                {
                    eax = t67;
                    edx = rd32(t67 + 4u);
    COW_AT(1008bacd)
                    wr32(sp0 - 0x9cu, 0u);
                    g->ebx = ebx;
                    g->esp = sp0 - 0x98u;
                    t68 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
                    eax = t68;
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
    t34 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    if (rd32(self + 0x78u) != rd32(t34 + 4u))
    {
        eax = t34;
        edx = rd32(self + 0x78u);
        goto L_1008bb3b;
    }
    eax = t34;
    edx = rd32(self + 0x78u);
    COW_AT(1008bb16)
    if (rd32(self + 0xa4u) == 0u) goto L_1008bb3b;
    COW_AT(1008bb1e)
    wr32(sp0 - 0x9cu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t35 = cow_thiscall(g, COW_IMG(0x100d65b0u), rd32(self + 0xa0u), 1, 0u);
    t36 = g->edx;
    if ((uint8_t)t35 != 0u)
    {
        eax = t35;
        edx = t36;
        goto L_1008bb3b;
    }
    eax = t35;
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
        t37 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        t38 = cow_thiscall(g, rd32(t37 + 0x30u), rd32(self + 0xa0u), 1, 0x808080u);
        eax = t38;
    }
    COW_AT(1008bb53)
    wr32(sp0 - 0x9cu, 0u);
    t39 = rd32(self + 0xa0u);
    wr32(sp0 - 0xa0u, t39);
    wr32(sp0 - 0xa4u, 0x66666f63u);
    g->edx = rd32(t39);
    t40 = rd32(t39);
    g->esp = sp0 - 0x98u;
    cow_thiscall(g, rd32(t40 + 0x298u), t39, 3, 0x66666f63u, t39, 0u);
    t41 = g->edx;
    t42 = rd32(self + 0xa0u);
    wr32(t42 + 0x7d8u, 0x20202020u);
    if (rd32(self + 0xa4u) == 0u)
    {
        edx = t41;
    }
    else
    {
        eax = t42;
        edi = rd32(self + 0xa4u);
    COW_AT(1008bb83)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, edi);
        wr32(sp0 - 0xa4u, 0x66666f63u);
        g->edx = rd32(edi);
        t43 = rd32(edi);
        g->esp = sp0 - 0x98u;
        cow_thiscall(g, rd32(t43 + 0x298u), edi, 3, 0x66666f63u, edi, 0u);
        t44 = g->edx;
        wr32(edi + 0x7d8u, 0x20202020u);
        wr32(edi + 0x768u, 0u);
        edx = t44;
    }
    COW_AT(1008bba0)
    t45 = rd32(self + 0xa0u);
    wr32(t45 + 0x768u, 0u);
    g->eax = t45;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t46 = cow_thiscall(g, COW_IMG(0x1008a1a0u), self, 0);
    t47 = g->edx;
    t48 = cow_fastcall(g, COW_IMG(0x1008a2f0u), self, t47, 0);
    eax = t48;
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
    t27 = rd32(self + 0xa4u);
    wr32(sp0 - 0x9cu, t27);
    wr32(sp0 - 0xa0u, 0x66666f63u);
    g->eax = t27;
    g->edx = rd32(rd32(self + 0xa0u));
    t28 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    t29 = cow_thiscall(g, rd32(t28 + 0x2a0u), rd32(self + 0xa0u), 2, 0x66666f63u, t27);
    t30 = g->edx;
    if ((uint8_t)t29 != 1u)
    {
        eax = t29;
        edx = t30;
        goto L_1008bbfd;
    }
    eax = t29;
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
    t31 = cow_thiscall(g, COW_IMG(0x100d44b0u), rd32(self + 0xa0u), 1, 7u);
    t32 = g->edx;
    wr32(sp0 - 0x9cu, 0xffu);
    t33 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, 0xffu);
    if ((uint8_t)t33 != 0u)
    {
        eax = t33;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = t33;
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
    t131 = rd32(COW_IMG(0x1008c3f0u) + rd8(COW_IMG(0x1008c430u) + eax) * 4u);
    switch (t131 - RD)
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
    t252 = rd32(self + 0x170u);
    wr8(self + 0x1bdu, 0u);
    if (t252 != 0x30u)
    {
        eax = t252;
        goto L_1008bcc7;
    }
    eax = t252;
    COW_AT(1008bc8f)
    t253 = rd16(COW_IMG(0x1035b8dau));
    wr8(self + 0x1bcu, 0xcu);
    wr16(self + 0x1c0u, (uint16_t)t253);
    t254 = rd16(COW_IMG(0x10485f7au));
    wr16(self + 0x1beu, (uint16_t)t254);
    wr8(self + 0x1bdu, 1u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return ((eax & 0xffff0000u) | t254) & 0xffffff00u;
L_1008bcc7: ;
    COW_AT(1008bcc7)
    if (rd8(sp0 - 0x86u) == 0u) goto L_1008bcfc;
    COW_AT(1008bccf)
    wr8(self + 0x1bcu, 0x17u);
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t255 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, self, g->edx, 1, 0);
    t256 = g->edx;
    if ((uint8_t)t255 != 0u)
    {
        eax = t255;
    }
    else
    {
        eax = t255;
        edx = t256;
    COW_AT(1008bce1)
        wr32(sp0 - 0x9cu, 0u);
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        t257 = cow_thiscall(g, COW_IMG(0x100d60c0u), rd32(self + 0xa0u), 1, 0u);
        eax = t257;
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
    t243 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    if ((uint8_t)t243 == 0u)
    {
        eax = t243;
    }
    else
    {
        eax = t243;
    COW_AT(1008bd4a)
        t244 = rd32(self + 0xa0u);
        wr32(sp0 - 0x9cu, t244);
        wr32(sp0 - 0xa0u, 0x746f6177u);
        g->eax = eax;
        g->edx = rd32(t244);
        t245 = rd32(t244);
        g->esp = sp0 - 0x98u;
        t246 = cow_thiscall(g, rd32(t245 + 0x2a0u), t244, 2, 0x746f6177u, t244);
        t247 = g->edx;
        if ((uint8_t)t246 != 0u)
        {
            eax = t246;
        }
        else
        {
            eax = t246;
            edx = t247;
    COW_AT(1008bd62)
            wr32(sp0 - 0x9cu, 1u);
            g->edx = edx;
            g->esp = sp0 - 0x98u;
            cow_thiscall(g, COW_IMG(0x100d44b0u), rd32(self + 0xa0u), 1, 1u);
            t248 = g->edx;
            wr32(sp0 - 0x9cu, 0u);
            t249 = rd32(self + 0xa0u);
            wr32(sp0 - 0xa0u, t249);
            wr32(sp0 - 0xa4u, 0x30736572u);
            g->eax = rd32(t249);
            t250 = rd32(t249);
            t251 = cow_thiscall(g, rd32(t250 + 0x298u), t249, 3, 0x30736572u, t249, 0u);
            wr8(self + 0x1bcu, 8u);
            eax = t251;
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
    t241 = rd32(self + 0xa0u);
    wr32(sp0 - 0xa0u, t241);
    wr32(sp0 - 0xa4u, 0x32736572u);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t242 = cow_thiscall(g, rd32(rd32(t241) + 0x298u), t241, 3, 0x32736572u, t241, 0u);
    wr8(self + 0x1bcu, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return t242 & 0xffffff00u;
L_1008bddd: ;
    COW_AT(1008bddd)
    g->esp = sp0 - 0x98u;
    t236 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    if ((uint8_t)t236 == 0u)
    {
        eax = t236;
    }
    else
    {
    COW_AT(1008bdec)
        t237 = rd32(self + 0x128u) | 4u;
        t238 = rd16(self + 0x1c0u);
        t239 = rd32(self + 0xa0u);
        wr32(self + 0x128u, t237);
        wr32(sp0 - 0x9cu, t238);
        g->eax = t238;
        g->esp = sp0 - 0x98u;
        t240 = cow_thiscall(g, COW_IMG(0x100d1c30u), t239, 1, t238);
        wr8(self + 0x1bcu, 0xau);
        eax = t240;
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
    t233 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    if ((uint8_t)t233 == 0u)
    {
        eax = t233;
    }
    else
    {
        eax = t233;
    COW_AT(1008be35)
        t234 = rd32(self + 0x128u) & 0xfffffffbu;
        wr32(self + 0x128u, t234);
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
            t235 = cow_thiscall(g, rd32(rd32(ecx) + 0x298u), ecx, 3, 0x746f6d65u, ecx, 0u);
            eax = t235;
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
    t208 = rd32(self + 0x1ccu) + 1u;
    wr32(self + 0x1ccu, t208);
    if ((uint8_t)ebx == 0u) goto L_1008bf4f;
    COW_AT(1008be9e)
    t209 = rd32(self + 0x1c8u);
    wr32(sp0 - 0x9cu, t209);
    t210 = rd32(self + 0x1c4u);
    wr32(sp0 - 0xa0u, t210);
    g->eax = rd32(rd32(self + 0xa0u));
    g->edx = t210;
    t211 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    t212 = cow_thiscall(g, rd32(t211 + 0x2a0u), rd32(self + 0xa0u), 2, t210, t209);
    t213 = g->edx;
    if ((uint8_t)t212 != 1u)
    {
        eax = t212;
        edx = t213;
        goto L_1008bf1f;
    }
    eax = t212;
    edx = t213;
    COW_AT(1008bebe)
    if (rd32(self + 0x1ccu) >= 4u)
    {
    COW_AT(1008bec7)
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        t214 = cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 0u, 0u);
        t215 = g->edx;
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 1u);
        g->edx = t215;
        t216 = cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 1u, 0u);
        t217 = g->edx;
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 4u);
        g->edx = t217;
        t218 = cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 4u, 0u);
        t219 = g->edx;
        eax = t218;
        edx = t219;
    }
    COW_AT(1008bef0)
    wr32(sp0 - 0x9cu, 0xffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t220 = cow_thiscall(g, COW_IMG(0x10095820u), self, 1, 0xffu);
    t221 = g->edx;
    if ((uint8_t)t220 != 0u)
    {
        eax = t220;
        edx = t221;
        goto L_1008bf1f;
    }
    edx = t221;
    COW_AT(1008bf00)
    t222 = rd32(self + 0x16cu);
    wr32(sp0 - 0x9cu, t222);
    g->eax = t222;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t223 = cow_thiscall(g, COW_IMG(0x10095820u), self, 1, t222);
    t224 = g->edx;
    if ((uint8_t)t223 != 0u)
    {
        eax = t223;
        edx = t224;
        goto L_1008bf1f;
    }
    eax = t223;
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
    t225 = cow_thiscall(g, COW_IMG(0x100d5f10u), rd32(self + 0xa0u), 2, 0u, 0u);
    t226 = g->edx;
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 1u);
    g->edx = t226;
    t227 = cow_thiscall(g, COW_IMG(0x100d5f10u), rd32(self + 0xa0u), 2, 1u, 0u);
    t228 = g->edx;
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 4u);
    g->edx = t228;
    t229 = cow_thiscall(g, COW_IMG(0x100d5f10u), rd32(self + 0xa0u), 2, 4u, 0u);
    t230 = g->edx;
    wr8(self + 0x1bdu, 0u);
    eax = t229;
    edx = t230;
L_1008bf4f: ;
    COW_AT(1008bf4f)
    wr32(sp0 - 0x9cu, 3u);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t231 = cow_thiscall(g, COW_IMG(0x100d44b0u), rd32(self + 0xa0u), 1, 3u);
    if (rd8(sp0 - 0x86u) == 0u) goto L_1008bf80;
    eax = (t231 & 0xffffff00u) | rd8(sp0 - 0x86u);
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
    t232 = rd32(sp0 - 0x98u);
    wr8(self + 0x1bcu, (eax != 0x2fu) - 1u & 0x15u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = t232;
    g->ebp = rd32(sp0 - 0x90u);
    return 1u;
L_1008bfcd: ;
    COW_AT(1008bfcd)
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t202 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    t203 = g->edx;
    if ((uint8_t)t202 == 0u)
    {
        eax = t202;
    }
    else
    {
        eax = t202;
        edx = t203;
    COW_AT(1008bfdc)
        t204 = rd16(self + 0x1c0u) >> 3u;
        wr32(sp0 - 0x9cu, t204);
        t205 = rd32(self + 0x128u) | 4u;
        t206 = rd32(self + 0xa0u);
        wr32(self + 0x128u, t205);
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        t207 = cow_thiscall(g, COW_IMG(0x100d1c30u), t206, 1, t204);
        wr8(self + 0x1bcu, 0xdu);
        if ((uint8_t)ebx == 0u)
        {
            eax = t207;
        }
        else
        {
            eax = t207;
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
    t184 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    if ((uint8_t)t184 == 0u)
    {
        eax = t184;
        goto L_1008c121;
    }
    eax = t184;
    COW_AT(1008c042)
    t185 = rd32(self + 0x128u) & 0xfffffffbu;
    t186 = rd32(self + 0xa0u);
    wr32(self + 0x128u, t185);
    if (rd8(t186 + 0xf8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(t186 + 0xf8u);
        goto L_1008c11a;
    }
    eax = (eax & 0xffffff00u) | rd8(t186 + 0xf8u);
    edx = t186;
    COW_AT(1008c065)
    if ((uint8_t)ebx == 0u) goto L_1008c0a1;
    COW_AT(1008c069)
    wr32(sp0 - 0x9cu, 0xffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t187 = cow_thiscall(g, COW_IMG(0x10095820u), self, 1, 0xffu);
    t188 = g->edx;
    if ((uint8_t)t187 != 0u)
    {
        eax = t187;
        goto L_1008c08b;
    }
    edx = t188;
    COW_AT(1008c079)
    t189 = rd32(self + 0x16cu);
    wr32(sp0 - 0x9cu, t189);
    g->eax = t189;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t190 = cow_thiscall(g, COW_IMG(0x10095820u), self, 1, t189);
    t191 = g->edx;
    if ((uint8_t)t190 == 0u)
    {
        edx = t191;
        goto L_1008c0a1;
    }
    eax = t190;
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
    t192 = cow_stdcall(g, COW_IMG(0x100d2f10u), 1, eax);
    t193 = rd16(self + 0x1beu);
    wr32(sp0 - 0x9cu, t193);
    t194 = rd32(self + 0xa0u);
    wr32(self + 0x1c4u, t192);
    wr32(self + 0x1c8u, t194);
    g->ecx = t194;
    g->edx = t193;
    t195 = cow_call_regs(g, COW_IMG(0x10086fc0u), t192, g->ecx, g->edx, 1, 1, t193);
    t196 = g->ecx;
    t197 = g->edx;
    if ((uint8_t)t195 == 0u)
    {
        ecx = t196;
        edi = t192;
    }
    else
    {
        ecx = t196;
        edx = t197;
        edi = t192;
    COW_AT(1008c0ec)
        if (rd32(COW_IMG(0x10480af0u) + edx * 4u) != 0u)
        {
            edx = rd32(COW_IMG(0x10480af0u) + edx * 4u);
    COW_AT(1008c0f7)
            t198 = rd32(edx + 0xa0u);
            wr32(self + 0x1c8u, t198);
        }
    }
    COW_AT(1008c103)
    wr32(sp0 - 0x9cu, 0u);
    t199 = rd32(self + 0x1c8u);
    wr32(sp0 - 0xa0u, t199);
    wr32(sp0 - 0xa4u, edi);
    g->eax = rd32(ecx);
    t200 = rd32(ecx);
    g->esp = sp0 - 0x98u;
    t201 = cow_thiscall(g, rd32(t200 + 0x298u), ecx, 3, edi, t199, 0u);
    wr32(self + 0x1ccu, 0u);
    eax = t201;
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
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t178 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    t179 = g->edx;
    if ((uint8_t)t178 == 0u)
    {
        eax = t178;
    }
    else
    {
        eax = t178;
        edx = t179;
    COW_AT(1008c13f)
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        cow_thiscall(g, COW_IMG(0x1008a1a0u), self, 0);
        t180 = g->edx;
        wr32(sp0 - 0x9cu, 0u);
        t181 = rd32(self + 0xa0u);
        wr32(sp0 - 0xa0u, t181);
        wr32(sp0 - 0xa4u, 0x30746973u);
        g->eax = rd32(t181);
        t182 = rd32(t181);
        t183 = cow_thiscall(g, rd32(t182 + 0x298u), t181, 3, 0x30746973u, t181, 0u);
        wr8(self + 0x1bcu, 0x15u);
        eax = t183;
    }
    COW_AT(1008c162)
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c171: ;
    COW_AT(1008c171)
    if (rd32(self + 0x170u) == 0x2fu)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008c17e)
    wr32(sp0 - 0x9cu, 0u);
    t173 = rd32(self + 0xa0u);
    wr32(sp0 - 0xa0u, t173);
    wr32(sp0 - 0xa4u, 0x32746973u);
    g->eax = eax;
    g->edx = rd32(t173);
    t174 = rd32(t173);
    g->esp = sp0 - 0x98u;
    t175 = cow_thiscall(g, rd32(t174 + 0x298u), t173, 3, 0x32746973u, t173, 0u);
    t176 = g->edx;
    eax = t175;
    edx = t176;
L_1008c193: ;
    COW_AT(1008c193)
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t177 = cow_thiscall(g, COW_IMG(0x1008a1a0u), self, 0);
    wr8(self + 0x1bcu, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return t177 & 0xffffff00u;
L_1008c1b0: ;
    COW_AT(1008c1b0)
    if (rd32(self + 0x170u) == 0x30u)
    {
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    COW_AT(1008c1bd)
    t171 = rd16(COW_IMG(0x1035b8deu));
    t172 = rd32(sp0 - 0x98u);
    wr16(self + 0x1c0u, (uint16_t)t171);
    wr16(self + 0x1beu, rd16(COW_IMG(0x10485f7au)));
    wr8(self + 0x1bcu, 0xcu);
    wr8(self + 0x1bdu, 1u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = t172;
    g->ebp = rd32(sp0 - 0x90u);
    return ((eax & 0xffff0000u) | t171) & 0xffffff00u;
L_1008c1f5: ;
    COW_AT(1008c1f5)
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t157 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    t158 = g->edx;
    if ((uint8_t)t157 == 0u)
    {
        eax = t157;
    }
    else
    {
        eax = t157;
        edx = t158;
    COW_AT(1008c204)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        t159 = cow_thiscall(g, COW_IMG(0x1008a1a0u), self, 0);
        t160 = g->edx;
        g->edx = t160;
        t161 = cow_call_regs(g, COW_IMG(0x1008e130u), t159, self, g->edx, 1, 0);
        t162 = g->ecx;
        t163 = g->edx;
        if ((uint8_t)t161 != 0u)
        {
            ecx = t162;
            edx = t163;
            goto L_1008c232;
        }
        ecx = t162;
    COW_AT(1008c216)
        t164 = rd32(self + 0x12cu);
        if (t164 >> 0x1eu & 1u)
        {
            edx = t164 >> 0x1eu;
            goto L_1008c232;
        }
        eax = t164;
        edx = t164 >> 0x1eu;
    COW_AT(1008c226)
        wr8(sp0 - 0x84u, 0u);
        if (eax >> 0x1fu == 0u) goto L_1008c237;
L_1008c232: ;
    COW_AT(1008c232)
        wr8(sp0 - 0x84u, 1u);
L_1008c237: ;
    COW_AT(1008c237)
        wr32(sp0 - 0x9cu, 0u);
        t165 = rd32(self + 0xa0u);
        wr32(sp0 - 0xa0u, t165);
        t166 = rd32(sp0 - 0x84u);
        wr32(sp0 - 0xa4u, t166);
        wr32(sp0 - 0xa8u, 0u);
        t167 = rd32(t165);
        g->esp = sp0 - 0xa0u;
        t168 = cow_call_regs(g, COW_IMG(0x1008c450u), t166, g->ecx, edx, 1, 2, 0u, t166);
        t169 = g->edx;
        wr32(sp0 - 0xa4u, t168);
        g->esp = sp0 - 0x98u;
        t170 = cow_thiscall(g, rd32(t167 + 0x298u), rd32(self + 0xa0u), 3, t168, rd32(sp0 - 0xa0u), 0u);
        wr8(self + 0x1bcu, 0x18u);
        eax = t170;
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
    t136 = cow_call_regs(g, COW_IMG(0x10087060u), eax, g->ecx, g->edx, 1, 0);
    t137 = g->edx;
    if ((uint8_t)t136 != 0u)
    {
        eax = t136;
        edx = t137;
        goto L_1008c2b5;
    }
    eax = t136;
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
    t132 = cow_call_regs(g, COW_IMG(0x10087060u), eax, g->ecx, g->edx, 1, 0);
    if ((uint8_t)t132 != 0u)
    {
        eax = t132;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_1008c39f;
    }
    eax = t132;
    COW_AT(1008c2b0)
L_1008c376: ;
    COW_AT(1008c376)
    if (rd32(self + 0x74u) != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
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
        g->esp = sp0 - 0x8cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x1035bb04u), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u));
        t133 = g->ecx;
        t134 = g->edx;
        wr32(sp0 - 0xa4u, 0u);
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        g->ebx = ebx;
        g->eax = sp0 - 0x80u;
        g->esp = sp0 - 0xa0u;
        t135 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x80u, 0u);
        eax = t135;
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
    t138 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, self, g->edx, 1, 0);
    t139 = g->ecx;
    if ((uint8_t)t138 != 0u)
    {
        ecx = t139;
        goto L_1008c2db;
    }
    COW_AT(1008c2c0)
    t140 = rd32(self + 0x12cu);
    if (t140 >> 0x1eu & 1u)
    {
        ecx = t140 >> 0x1eu;
        goto L_1008c2db;
    }
    eax = t140;
    ecx = t140 >> 0x1eu;
    COW_AT(1008c2d0)
    if (eax >> 0x1fu != 0u) goto L_1008c2db;
    COW_AT(1008c2d7)
    ebx = ebx & 0xffffff00u;
L_1008c2dd: ;
    COW_AT(1008c2dd)
    t141 = rd32(self + 0xa0u);
    wr8(sp0 - 0x84u, (uint8_t)ebx);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, t141);
    t142 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0xa4u, t142);
    wr32(sp0 - 0xa8u, 1u);
    t143 = rd32(t141);
    g->esp = sp0 - 0xa0u;
    t144 = cow_call_regs(g, COW_IMG(0x1008c450u), t141, g->ecx, t142, 1, 2, 1u, t142);
    t145 = g->edx;
    wr32(sp0 - 0xa4u, t144);
    g->edx = t145;
    g->esp = sp0 - 0x98u;
    t146 = cow_thiscall(g, rd32(t143 + 0x298u), rd32(self + 0xa0u), 3, t144, rd32(sp0 - 0xa0u), 0u);
    t147 = g->edx;
    if ((uint8_t)ebx != 0u)
    {
        eax = t146;
    }
    else
    {
        edx = t147;
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
            t148 = rd32(edi);
            g->esp = sp0 - 0x98u;
            t149 = cow_thiscall(g, rd32(t148 + 0x36cu), edi, 0);
            t150 = g->edx;
            if (t149 == 0u)
            {
                eax = t149;
                edx = t150;
            }
            else
            {
                edx = t150;
    COW_AT(1008c329)
                wr32(sp0 - 0x9cu, 0u);
                wr32(sp0 - 0xa0u, edi);
                wr32(sp0 - 0xa4u, 0x32696863u);
                g->eax = rd32(edi);
                g->edx = edx;
                t151 = rd32(edi);
                g->esp = sp0 - 0x98u;
                t152 = cow_thiscall(g, rd32(t151 + 0x298u), edi, 3, 0x32696863u, edi, 0u);
                t153 = g->edx;
                eax = t152;
                edx = t153;
            }
        }
    COW_AT(1008c33a)
        wr32(sp0 - 0x9cu, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        t154 = cow_thiscall(g, COW_IMG(0x100d5ef0u), rd32(self + 0xa0u), 1, 0u);
        t155 = g->edx;
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 2u);
        t156 = cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 2u, 0u);
        eax = t156;
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
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebp = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x98u;
        g->eax = arg1;
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
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
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
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
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
    case 0x1008b9bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
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
    case 0x1008bcc7u:
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
    case 0x1008bccfu:
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
    case 0x1008bd01u:
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
    case 0x1008bd17u:
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
    case 0x1008bd1cu:
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
    case 0x1008bd25u:
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
    case 0x1008bf4fu:
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
