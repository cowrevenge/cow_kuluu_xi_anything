/* f_0x102ebe77 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102ebe77(Guest* g)
{
    double d11;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_18_f;
    uint32_t loc_20;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_c;
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
    uint32_t t22;
    uint32_t t23;
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
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ebe90u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x3cu); goto E_102ebe90;
    case 0x102ebe9fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ebe9f;
    case 0x102ebeadu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ebead;
    case 0x102ebeb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebeb8;
    case 0x102ebec8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebec8;
    case 0x102ebecdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_102ebecd;
    case 0x102ebed3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebed3;
    case 0x102ebedau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebeda;
    case 0x102ebee6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebee6;
    case 0x102ebef2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_4 = rd32(sp0 - 4u); goto E_102ebef2;
    case 0x102ebf03u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ebf03;
    case 0x102ebf11u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ebf11;
    case 0x102ebf1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebf1c;
    case 0x102ebf2du: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebf2d;
    case 0x102ebf3bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ebf3b;
    case 0x102ebf47u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebf47;
    case 0x102ebf55u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ebf55;
    case 0x102ebf60u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ebf60;
    case 0x102ebf6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ebf6b;
    case 0x102ebf76u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebf76;
    case 0x102ebf84u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebf84;
    case 0x102ebf89u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ebf89;
    case 0x102ebf97u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ebf97;
    case 0x102ebfa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebfa2;
    case 0x102ebfadu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebfad;
    case 0x102ebfb9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ebfb9;
    case 0x102ebfc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebfc5;
    case 0x102ebfd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ebfd3;
    case 0x102ebfdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebfde;
    case 0x102ebfebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ebfeb;
    case 0x102ebff9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ebff9;
    case 0x102ec005u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec005;
    case 0x102ec013u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec013;
    case 0x102ec01eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec01e;
    case 0x102ec02cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec02c;
    case 0x102ec037u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec037;
    case 0x102ec044u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec044;
    case 0x102ec052u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec052;
    case 0x102ec05cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec05c;
    case 0x102ec068u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec068;
    case 0x102ec076u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec076;
    case 0x102ec081u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec081;
    case 0x102ec08cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec08c;
    case 0x102ec09au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec09a;
    case 0x102ec0a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec0a5;
    case 0x102ec0aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec0ae;
    case 0x102ec0bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec0bb;
    case 0x102ec0d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_102ec0d0;
    case 0x102ec0ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec0dd;
    case 0x102ec0ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec0eb;
    case 0x102ec0f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec0f5;
    case 0x102ec0ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec0ff;
    case 0x102ec10bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec10b;
    case 0x102ec119u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec119;
    case 0x102ec124u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec124;
    case 0x102ec12fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec12f;
    case 0x102ec13au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec13a;
    case 0x102ec148u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec148;
    case 0x102ec153u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec153;
    case 0x102ec160u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec160;
    case 0x102ec16eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec16e;
    case 0x102ec178u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec178;
    case 0x102ec182u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec182;
    case 0x102ec18cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec18c;
    case 0x102ec198u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec198;
    case 0x102ec1a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec1a6;
    case 0x102ec1aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec1aa;
    case 0x102ec1b2u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec1b2;
    case 0x102ec1bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec1bd;
    case 0x102ec1ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec1cc;
    case 0x102ec1e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec1e4;
    case 0x102ec1eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec1ee;
    case 0x102ec1fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_102ec1fc;
    case 0x102ec204u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec204;
    case 0x102ec20cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec20c;
    case 0x102ec219u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec219;
    case 0x102ec227u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec227;
    case 0x102ec231u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec231;
    case 0x102ec241u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec241;
    case 0x102ec254u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec254;
    case 0x102ec25eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec25e;
    case 0x102ec268u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec268;
    case 0x102ec276u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec276;
    case 0x102ec285u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec285;
    case 0x102ec293u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec293;
    case 0x102ec298u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec298;
    case 0x102ec29eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec29e;
    case 0x102ec2a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec2a5;
    case 0x102ec2aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec2ae;
    case 0x102ec2b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec2b5;
    case 0x102ec2bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec2bc;
    case 0x102ec2c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec2c3;
    case 0x102ec2cau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec2ca;
    case 0x102ec2d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec2d5;
    case 0x102ec2dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec2dc;
    case 0x102ec2eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec2ea;
    case 0x102ec2f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec2f8;
    case 0x102ec306u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec306;
    case 0x102ec312u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec312;
    case 0x102ec31au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec31a;
    case 0x102ec326u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec326;
    case 0x102ec334u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec334;
    case 0x102ec33du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec33d;
    case 0x102ec344u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec344;
    case 0x102ec350u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec350;
    case 0x102ec35fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec35f;
    case 0x102ec366u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec366;
    case 0x102ec36cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec36c;
    case 0x102ec371u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec371;
    case 0x102ec377u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec377;
    case 0x102ec379u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec379;
    case 0x102ec389u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec389;
    case 0x102ec38fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec38f;
    case 0x102ec39du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec39d;
    case 0x102ec3acu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec3ac;
    case 0x102ec3b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec3b7;
    case 0x102ec3c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec3c6;
    case 0x102ec3deu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec3de;
    case 0x102ec3e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec3e8;
    case 0x102ec3f8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec3f8;
    case 0x102ec403u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec403;
    case 0x102ec412u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec412;
    case 0x102ec42au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec42a;
    case 0x102ec438u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec438;
    case 0x102ec440u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec440;
    case 0x102ec44cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec44c;
    case 0x102ec457u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec457;
    case 0x102ec466u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec466;
    case 0x102ec47du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_102ec47d;
    case 0x102ec48bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_102ec48b;
    case 0x102ec495u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec495;
    case 0x102ec4a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec4a3;
    case 0x102ec4acu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec4ac;
    case 0x102ec4b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec4b3;
    case 0x102ec4bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec4bc;
    case 0x102ec4c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec4c1;
    case 0x102ec4c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec4c7;
    case 0x102ec4c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec4c9;
    case 0x102ec4ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec4ce;
    case 0x102ec4d5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec4d5;
    case 0x102ec4e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec4e1;
    case 0x102ec4eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec4ea;
    case 0x102ec4f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec4f5;
    case 0x102ec4f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec4f7;
    case 0x102ec502u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec502;
    case 0x102ec510u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102ec510;
    case 0x102ec51bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102ec51b;
    case 0x102ec529u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_102ec529;
    case 0x102ec530u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_102ec530;
    case 0x102ec539u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_102ec539;
    case 0x102ec540u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_102ec540;
    case 0x102ec545u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_102ec545;
    case 0x102ec54au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec54a;
    case 0x102ec550u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_102ec550;
    case 0x102ec552u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec552;
    case 0x102ec55au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec55a;
    case 0x102ec566u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec566;
    case 0x102ec574u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102ec574;
    case 0x102ec588u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_102ec588;
    case 0x102ec593u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_102ec593;
    case 0x102ec595u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec595;
    case 0x102ec5a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_102ec5a4;
    case 0x102ec5abu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec5ab;
    case 0x102ec5b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_4 = rd32(sp0 - 4u); goto E_102ec5b1;
    case 0x102ec5bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec5bb;
    case 0x102ec5c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec5c8;
    case 0x102ec5cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec5cf;
    case 0x102ec5d4u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec5d4;
    case 0x102ec5ddu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec5dd;
    case 0x102ec5e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec5e8;
    case 0x102ec5eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_4 = rd32(sp0 - 4u); goto E_102ec5ea;
    case 0x102ec5f8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec5f8;
    case 0x102ec604u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec604;
    case 0x102ec60eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ec60e;
    case 0x102ec616u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec616;
    case 0x102ec622u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec622;
    case 0x102ec62cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ec62c;
    case 0x102ec632u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ec632;
    case 0x102ec634u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ec634;
    case 0x102ec639u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec639;
    case 0x102ec647u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102ec647;
    case 0x102ec653u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec653;
    case 0x102ec661u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec661;
    case 0x102ec66cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec66c;
    case 0x102ec678u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec678;
    case 0x102ec67fu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ec67f;
    case 0x102ec694u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec694;
    case 0x102ec697u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_18_f = rdf32(sp0 - 0x18u); goto E_102ec697;
    case 0x102ec69au: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_18_f = rdf32(sp0 - 0x18u); goto E_102ec69a;
    case 0x102ec69du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_18_f = rdf32(sp0 - 0x18u); goto E_102ec69d;
    case 0x102ec6a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_4 = rd32(sp0 - 4u); goto E_102ec6a2;
    case 0x102ec6a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_4 = rd32(sp0 - 4u); goto E_102ec6a3;
    case 0x102ec6aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec6aa;
    case 0x102ec6aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec6ae;
    case 0x102ec6b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec6b6;
    case 0x102ec6bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec6ba;
    case 0x102ec6c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec6c2;
    case 0x102ec6c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec6c6;
    case 0x102ec6ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec6ce;
    case 0x102ec6d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec6d2;
    case 0x102ec6dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec6da;
    case 0x102ec6deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec6de;
    case 0x102ec6e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec6e6;
    case 0x102ec6eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ec6ea;
    case 0x102ec6fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_102ec6fa;
    case 0x102ec6fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_102ec6fd;
    default: break;
    }
#endif

    COW_AT(102ebe77)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x38u, in_ebx);
    wr32(sp0 - 0x3cu, in_esi);
    if (rd32(sp0 + 4u) - 4u > 0x2eu)
    {
        eax = rd32(sp0 + 4u) - 4u;
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
        loc_4 = in_ebp;
        loc_38 = in_ebx;
        loc_3c = in_esi;
        goto L_102ec6a3;
    }
    eax = rd32(sp0 + 4u) - 4u;
    COW_AT(102ebe90)
    wr32(sp0 - 0x40u, in_edi);
    t1 = rd32(COW_IMG(0x102ec703u) + rd8(COW_IMG(0x102ec77fu) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x102ebe9fu: goto L_102ebe9f;
    case 0x102ebef2u: edx = in_edx; loc_4 = in_ebp; loc_38 = in_ebx; loc_3c = in_esi; loc_40 = in_edi; goto L_102ebef2;
    case 0x102ebf03u: goto L_102ebf03;
    case 0x102ebf3bu: goto L_102ebf3b;
    case 0x102ebf89u: goto L_102ebf89;
    case 0x102ebfb9u: goto L_102ebfb9;
    case 0x102ec005u: goto L_102ec005;
    case 0x102ec068u: goto L_102ec068;
    case 0x102ec10bu: goto L_102ec10b;
    case 0x102ec198u: goto L_102ec198;
    case 0x102ec1b2u: goto L_102ec1b2;
    case 0x102ec219u: goto L_102ec219;
    case 0x102ec268u: goto L_102ec268;
    case 0x102ec31au: goto L_102ec31a;
    case 0x102ec38fu: goto L_102ec38f;
    case 0x102ec3acu: goto L_102ec3ac;
    case 0x102ec3f8u: goto L_102ec3f8;
    case 0x102ec44cu: goto L_102ec44c;
    case 0x102ec495u: goto L_102ec495;
    case 0x102ec4d5u: goto L_102ec4d5;
    case 0x102ec502u: goto L_102ec502;
    case 0x102ec55au: goto L_102ec55a;
    case 0x102ec5abu: eax = rd8(COW_IMG(0x102ec77fu) + eax); goto L_102ec5ab;
    case 0x102ec5d4u: eax = rd8(COW_IMG(0x102ec77fu) + eax); goto L_102ec5d4;
    case 0x102ec5f8u: goto L_102ec5f8;
    case 0x102ec616u: goto L_102ec616;
    case 0x102ec639u: goto L_102ec639;
    case 0x102ec653u: goto L_102ec653;
    case 0x102ec66cu: goto L_102ec66c;
    case 0x102ec67fu: goto L_102ec67f;
    case 0x102ec6a2u: eax = rd8(COW_IMG(0x102ec77fu) + eax); edx = in_edx; ebx = in_ebx; loc_4 = in_ebp; loc_38 = in_ebx; loc_3c = in_esi; loc_40 = in_edi; goto L_102ec6a2;
    default: rt_fatal(g, COW_IMG(0x102ebe98u), "switch");
    }
    return;
L_102ebe9f: ;
    COW_AT(102ebe9f)
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x24u, 1, sp0 - 0x10u);
    t185 = g->edx;
    edx = t185;
    COW_AT(102ebead)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x24u, 1, sp0 + 4u);
    t186 = g->edx;
    edx = t186;
    COW_AT(102ebeb8)
    t187 = rd32(sp0 + 4u);
    if (((t187 | rd32(sp0 - 0x10u)) & 0xffffff00u) == 0u)
    {
        eax = t187;
        goto L_102ebeda;
    }
    eax = t187;
    ecx = t187 | rd32(sp0 - 0x10u);
L_102ebec8: ;
    COW_AT(102ebec8)
    wr32(sp0 - 0x44u, COW_IMG(0x10346a4cu));
    loc_44 = COW_IMG(0x10346a4cu);
L_102ebecd: ;
    COW_AT(102ebecd)
    wr32(sp0 - 0x48u, self);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t188 = cow_cdecl(g, COW_IMG(0x102ea931u), 5, self, loc_44, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t189 = g->edx;
    eax = t188;
    edx = t189;
    COW_AT(102ebed3)
    ebx = in_ebx;
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
L_102ec6a2: ;
    COW_AT(102ec6a2)
    edi = loc_40;
L_102ec6a3: ;
    COW_AT(102ec6a3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t192 = cow_thiscall(g, COW_IMG(0x102f5408u), self, 0);
    t193 = g->ecx;
    t194 = g->edx;
    eax = t192;
    ecx = t193;
    edx = t194;
    COW_AT(102ec6aa)
    if ((int32_t)eax < 0) goto L_102ec6ea;
    COW_AT(102ec6ae)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t195 = cow_thiscall(g, COW_IMG(0x102f52d5u), self + 0x14u, 0);
    t196 = g->ecx;
    t197 = g->edx;
    eax = t195;
    ecx = t196;
    edx = t197;
    COW_AT(102ec6b6)
    if ((int32_t)eax < 0) goto L_102ec6ea;
    COW_AT(102ec6ba)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t198 = cow_thiscall(g, COW_IMG(0x102f52d5u), self + 0x24u, 0);
    t199 = g->ecx;
    t200 = g->edx;
    eax = t198;
    ecx = t199;
    edx = t200;
    COW_AT(102ec6c2)
    if ((int32_t)eax < 0) goto L_102ec6ea;
    COW_AT(102ec6c6)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t201 = cow_thiscall(g, COW_IMG(0x102f52d5u), self + 0x44u, 0);
    t202 = g->ecx;
    t203 = g->edx;
    eax = t201;
    ecx = t202;
    edx = t203;
    COW_AT(102ec6ce)
    if ((int32_t)eax < 0) goto L_102ec6ea;
    COW_AT(102ec6d2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t204 = cow_thiscall(g, COW_IMG(0x102f52d5u), self + 0x74u, 0);
    t205 = g->ecx;
    t206 = g->edx;
    eax = t204;
    ecx = t205;
    edx = t206;
    COW_AT(102ec6da)
    if ((int32_t)eax < 0) goto L_102ec6ea;
    COW_AT(102ec6de)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t207 = cow_thiscall(g, COW_IMG(0x102f52d5u), self + 0x34u, 0);
    t208 = g->ecx;
    t209 = g->edx;
    eax = t207;
    ecx = t208;
    edx = t209;
    COW_AT(102ec6e6)
    if ((int32_t)eax >= 0) goto L_102ec6fd;
L_102ec6ea: ;
    COW_AT(102ec6ea)
    wr32(sp0 - 0x40u, 0x3bbu);
    wr32(sp0 - 0x44u, COW_IMG(0x103468d4u));
    wr32(sp0 - 0x48u, self);
    g->ebx = ebx;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102ea931u), 5, self, COW_IMG(0x103468d4u), 0x3bbu, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    COW_AT(102ec6fa)
L_102ec6fd: ;
    COW_AT(102ec6fd)
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    return;
L_102ebeda: ;
    COW_AT(102ebeda)
    wr32(self + 0xacu, 0u);
    eax = eax | 0xfffffe00u;
L_102ebee6: ;
    COW_AT(102ebee6)
    t190 = eax << 8u | rd32(sp0 - 0x10u);
    wr32(self + 0xb4u, t190);
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
L_102ebef2: ;
    COW_AT(102ebef2)
    t191 = rd32(self + 0x1d0u);
    wr32(self + 0x3dcu, t191);
    eax = t191;
    ebx = in_ebx;
    goto L_102ec6a2;
L_102ebf03: ;
    COW_AT(102ebf03)
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x24u, 1, sp0 - 0x10u);
    t183 = g->edx;
    edx = t183;
    COW_AT(102ebf11)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x24u, 1, sp0 + 4u);
    COW_AT(102ebf1c)
    t184 = rd32(sp0 + 4u);
    if (((t184 | rd32(sp0 - 0x10u)) & 0xffffff00u) != 0u)
    {
        eax = t184;
        ecx = 0xffffff00u;
        edx = t184 | rd32(sp0 - 0x10u);
        goto L_102ebec8;
    }
    eax = t184;
    edx = t184 | rd32(sp0 - 0x10u);
    COW_AT(102ebf2d)
    wr32(self + 0xacu, 1u);
    eax = eax | 0xffffff00u;
    goto L_102ebee6;
L_102ebf3b: ;
    COW_AT(102ebf3b)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t175 = g->edx;
    edx = t175;
    COW_AT(102ebf47)
    wr32(sp0 - 0x44u, sp0 - 0x28u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x34u, 1, sp0 - 0x28u);
    t176 = g->edx;
    edx = t176;
    COW_AT(102ebf55)
    wr32(sp0 - 0x44u, sp0 - 0x2cu);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x34u, 1, sp0 - 0x2cu);
    t177 = g->edx;
    edx = t177;
    COW_AT(102ebf60)
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x34u, 1, sp0 - 0x30u);
    t178 = g->edx;
    edx = t178;
    COW_AT(102ebf6b)
    wr32(sp0 - 0x44u, sp0 - 0x34u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x34u, 1, sp0 - 0x34u);
    t179 = g->edx;
    edx = t179;
    COW_AT(102ebf76)
    wr32(sp0 - 0x44u, sp0 - 0x34u);
    t180 = rd32(sp0 + 4u);
    wr32(sp0 - 0x48u, t180);
    g->eax = sp0 - 0x34u;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t181 = cow_thiscall(g, COW_IMG(0x102eb669u), self, 2, t180, sp0 - 0x34u);
    t182 = g->edx;
    eax = t181;
    edx = t182;
    COW_AT(102ebf84)
    ebx = in_ebx;
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_102ec6a2;
L_102ebf89: ;
    COW_AT(102ebf89)
    wr32(sp0 - 0x44u, sp0 - 0x1cu);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x54u, 1, sp0 - 0x1cu);
    t169 = g->edx;
    edx = t169;
    COW_AT(102ebf97)
    wr32(sp0 - 0x44u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t170 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x54u, 1, sp0 - 0xcu);
    t171 = g->edx;
    eax = t170;
    edx = t171;
    COW_AT(102ebfa2)
    t172 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x44u, t172);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t173 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t172);
    t174 = g->edx;
    eax = t173;
    edx = t174;
    COW_AT(102ebfad)
    wr32(self + 0xa0u, rd32(self + 0xa0u) + 4u);
    ebx = in_ebx;
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_102ec6a2;
L_102ebfb9: ;
    COW_AT(102ebfb9)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t160 = g->edx;
    edx = t160;
    COW_AT(102ebfc5)
    wr32(sp0 - 0x44u, sp0 - 0x1cu);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x54u, 1, sp0 - 0x1cu);
    t161 = g->edx;
    edx = t161;
    COW_AT(102ebfd3)
    wr32(sp0 - 0x44u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t162 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x54u, 1, sp0 - 0xcu);
    t163 = g->edx;
    eax = t162;
    edx = t163;
    COW_AT(102ebfde)
    t164 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x44u, t164);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t164);
    t165 = g->edx;
    edx = t165;
    COW_AT(102ebfeb)
    t166 = rd32(sp0 - 0x1cu) | rd32(sp0 + 4u);
    wr32(sp0 - 0x44u, t166);
    g->eax = t166;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t167 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t166);
    t168 = g->edx;
    eax = t167;
    edx = t168;
    COW_AT(102ebff9)
    wr32(self + 0xa0u, rd32(self + 0xa0u) + 8u);
    ebx = in_ebx;
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_102ec6a2;
L_102ec005: ;
    COW_AT(102ec005)
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 - 0x10u);
    t147 = g->edx;
    edx = t147;
    COW_AT(102ec013)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t148 = g->edx;
    edx = t148;
    COW_AT(102ec01e)
    wr32(sp0 - 0x44u, sp0 - 0x1cu);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x54u, 1, sp0 - 0x1cu);
    t149 = g->edx;
    edx = t149;
    COW_AT(102ec02c)
    wr32(sp0 - 0x44u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t150 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x54u, 1, sp0 - 0xcu);
    t151 = g->edx;
    eax = t150;
    edx = t151;
    COW_AT(102ec037)
    t152 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x44u, t152);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t152);
    t153 = g->edx;
    edx = t153;
    COW_AT(102ec044)
    t154 = rd32(sp0 - 0x1cu) | rd32(sp0 + 4u);
    wr32(sp0 - 0x44u, t154);
    g->eax = t154;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t155 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t154);
    t156 = g->edx;
    eax = t155;
    edx = t156;
    COW_AT(102ec052)
    t157 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x44u, t157);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t158 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t157);
    t159 = g->edx;
    eax = t158;
    edx = t159;
    COW_AT(102ec05c)
    wr32(self + 0xa0u, rd32(self + 0xa0u) + 0xcu);
    ebx = in_ebx;
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_102ec6a2;
L_102ec068: ;
    COW_AT(102ec068)
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 - 0x20u);
    t129 = g->edx;
    edx = t129;
    COW_AT(102ec076)
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 - 0x10u);
    t130 = g->edx;
    edx = t130;
    COW_AT(102ec081)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t131 = g->edx;
    edx = t131;
    COW_AT(102ec08c)
    wr32(sp0 - 0x44u, sp0 - 0x1cu);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x54u, 1, sp0 - 0x1cu);
    t132 = g->edx;
    edx = t132;
    COW_AT(102ec09a)
    wr32(sp0 - 0x44u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t133 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x54u, 1, sp0 - 0xcu);
    t134 = g->edx;
    eax = t133;
    edx = t134;
    COW_AT(102ec0a5)
    if (rd32(self + 0xacu) != 0u)
    {
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
    }
    else
    {
    COW_AT(102ec0ae)
        if ((uint16_t)rd32(sp0 - 0xcu) != 3u)
        {
            eax = (uint16_t)rd32(sp0 - 0xcu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_c = rd32(sp0 - 0xcu);
        }
        else
        {
    COW_AT(102ec0bb)
            t135 = rd32(sp0 - 0x20u) ^ 0x1000000u;
            wr32(sp0 - 0x20u, t135);
            t136 = (rd32(sp0 - 0xcu) & 0xffff0002u) | 2u;
            wr32(sp0 - 0xcu, t136);
            eax = t136;
            loc_20 = t135;
            loc_c = t136;
        }
    }
    COW_AT(102ec0d0)
    wr32(sp0 - 0x44u, loc_c);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, loc_c);
    t137 = g->edx;
    edx = t137;
    COW_AT(102ec0dd)
    t138 = rd32(sp0 - 0x1cu) | rd32(sp0 + 4u);
    wr32(sp0 - 0x44u, t138);
    g->eax = t138;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t139 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t138);
    t140 = g->edx;
    eax = t139;
    edx = t140;
    COW_AT(102ec0eb)
    t141 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x44u, t141);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t142 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t141);
    t143 = g->edx;
    eax = t142;
    edx = t143;
    COW_AT(102ec0f5)
    t144 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x44u, t144);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t145 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t144);
    t146 = g->edx;
    eax = t145;
    edx = t146;
    COW_AT(102ec0ff)
    wr32(self + 0xa0u, rd32(self + 0xa0u) + 0x10u);
    ebx = in_ebx;
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_102ec6a2;
L_102ec10b: ;
    COW_AT(102ec10b)
    wr32(sp0 - 0x44u, sp0 - 0x24u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 - 0x24u);
    t108 = g->edx;
    edx = t108;
    COW_AT(102ec119)
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 - 0x20u);
    t109 = g->edx;
    edx = t109;
    COW_AT(102ec124)
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 - 0x10u);
    t110 = g->edx;
    edx = t110;
    COW_AT(102ec12f)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t111 = g->edx;
    edx = t111;
    COW_AT(102ec13a)
    wr32(sp0 - 0x44u, sp0 - 0x1cu);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x54u, 1, sp0 - 0x1cu);
    t112 = g->edx;
    edx = t112;
    COW_AT(102ec148)
    wr32(sp0 - 0x44u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t113 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x54u, 1, sp0 - 0xcu);
    t114 = g->edx;
    eax = t113;
    edx = t114;
    COW_AT(102ec153)
    t115 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x44u, t115);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t115);
    t116 = g->edx;
    edx = t116;
    COW_AT(102ec160)
    t117 = rd32(sp0 - 0x1cu) | rd32(sp0 + 4u);
    wr32(sp0 - 0x44u, t117);
    g->eax = t117;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t118 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t117);
    t119 = g->edx;
    eax = t118;
    edx = t119;
    COW_AT(102ec16e)
    t120 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x44u, t120);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t121 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t120);
    t122 = g->edx;
    eax = t121;
    edx = t122;
    COW_AT(102ec178)
    t123 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x44u, t123);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t124 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t123);
    t125 = g->edx;
    eax = t124;
    edx = t125;
    COW_AT(102ec182)
    t126 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x44u, t126);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t127 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t126);
    t128 = g->edx;
    eax = t127;
    edx = t128;
    COW_AT(102ec18c)
    wr32(self + 0xa0u, rd32(self + 0xa0u) + 0x14u);
    ebx = in_ebx;
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_102ec6a2;
L_102ec198: ;
    COW_AT(102ec198)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    t103 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t104 = g->edx;
    eax = t103;
    edx = t104;
    COW_AT(102ec1a6)
    wr8(sp0 + 6u, rd8(sp0 + 6u) | 0xfu);
L_102ec1aa: ;
    COW_AT(102ec1aa)
    t105 = rd32(sp0 + 4u);
    wr32(sp0 - 0x44u, t105);
    loc_44 = t105;
L_102ec4ce: ;
    COW_AT(102ec4ce)
    ecx = self + 0x44u;
    ebx = in_ebx;
L_102ec69d: ;
    COW_AT(102ec69d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t106 = cow_thiscall(g, COW_IMG(0x102f5233u), ecx, 1, loc_44);
    t107 = g->edx;
    eax = t106;
    edx = t107;
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_102ec6a2;
L_102ec1b2: ;
    COW_AT(102ec1b2)
    wr32(sp0 - 0x44u, sp0 - 0x14u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f53d4u), self, 1, sp0 - 0x14u);
    t89 = g->edx;
    edx = t89;
    COW_AT(102ec1bd)
    wr32(sp0 - 0x44u, self + 0x3e4u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x14u, 1, self + 0x3e4u);
    t90 = g->edx;
    edx = t90;
    COW_AT(102ec1cc)
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(self + 0x3e0u, 1u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t91 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t92 = g->edx;
    eax = t91;
    edx = t92;
    COW_AT(102ec1e4)
    t93 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x44u, t93);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t94 = cow_thiscall(g, COW_IMG(0x102eb17eu), self, 1, t93);
    t95 = g->edx;
    eax = t94;
    edx = t95;
    COW_AT(102ec1ee)
    t96 = eax | (rd32(sp0 + 4u) & 0xfff0ffffu);
    wr32(sp0 + 4u, t96);
    eax = t96;
    ebx = in_ebx;
L_102ec1fc: ;
    COW_AT(102ec1fc)
    wr32(sp0 - 0x44u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t97 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x44u, 1, eax);
    t98 = g->ecx;
    t99 = g->edx;
    eax = t97;
    ecx = t98;
    edx = t99;
    COW_AT(102ec204)
    t100 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x44u, t100);
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t101 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t100);
    t102 = g->edx;
    eax = t101;
    edx = t102;
    COW_AT(102ec20c)
    wr32(self + 0x3e0u, 0u);
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_102ec6a2;
L_102ec219: ;
    COW_AT(102ec219)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    t83 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t84 = g->edx;
    eax = t83;
    edx = t84;
    COW_AT(102ec227)
    t85 = rd32(sp0 + 4u);
    wr32(sp0 - 0x44u, t85);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t86 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x44u, 1, t85);
    t87 = g->ecx;
    t88 = g->edx;
    eax = t86;
    ecx = t87;
    edx = t88;
    COW_AT(102ec231)
    if (rd32(self + 0xb4u) != 0xffff0104u)
    {
        ebx = in_ebx;
        loc_4 = rd32(sp0 - 4u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        goto L_102ec6a2;
    }
    COW_AT(102ec241)
    if ((rd32(sp0 + 4u) & 0x70000000u) != 0x20000000u)
    {
        eax = rd32(sp0 + 4u) & 0x70000000u;
        ebx = in_ebx;
        loc_4 = rd32(sp0 - 4u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        goto L_102ec6a2;
    }
    eax = rd32(sp0 + 4u) & 0x70000000u;
    COW_AT(102ec254)
    if ((rd8(sp0 + 7u) & 0xfu) == 0u)
    {
        ebx = in_ebx;
        loc_4 = rd32(sp0 - 4u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        goto L_102ec6a2;
    }
    COW_AT(102ec25e)
    wr32(sp0 - 0x44u, COW_IMG(0x10346a20u));
    loc_44 = COW_IMG(0x10346a20u);
    goto L_102ebecd;
L_102ec268: ;
    COW_AT(102ec268)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t80 = g->edx;
    edx = t80;
    COW_AT(102ec276)
    if (rd32(self + 0xb4u) != 0xffff0104u)
    {
        ecx = rd32(sp0 + 4u);
        goto L_102ec2a5;
    }
    ecx = rd32(sp0 + 4u);
    COW_AT(102ec285)
    if ((ecx & 0x70000000u) != 0x20000000u) goto L_102ec2a5;
    eax = ecx & 0x70000000u;
    COW_AT(102ec293)
    wr32(sp0 - 0x44u, COW_IMG(0x10346a20u));
    loc_44 = COW_IMG(0x10346a20u);
L_102ec298: ;
    COW_AT(102ec298)
    wr32(sp0 - 0x48u, self);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t81 = cow_cdecl(g, COW_IMG(0x102ea931u), 5, self, loc_44, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t82 = g->edx;
    eax = t81;
    edx = t82;
    COW_AT(102ec29e)
    goto L_102ec1aa;
L_102ec2a5: ;
    COW_AT(102ec2a5)
    if ((ecx & 0xf000000u) == 0u)
    {
        eax = ecx & 0xf000000u;
        goto L_102ec306;
    }
    eax = ecx & 0xf000000u;
    COW_AT(102ec2ae)
    if (eax == 0x2000000u) goto L_102ec2f8;
    COW_AT(102ec2b5)
    if (eax == 0x4000000u) goto L_102ec2ea;
    COW_AT(102ec2bc)
    if (eax == 0x7000000u) goto L_102ec2dc;
    COW_AT(102ec2c3)
    if (eax == 0x9000000u) goto L_102ec2d5;
    COW_AT(102ec2ca)
    if (eax != 0xa000000u) goto L_102ec1aa;
L_102ec2d5: ;
    COW_AT(102ec2d5)
    wr32(sp0 - 0x44u, COW_IMG(0x103469f0u));
    loc_44 = COW_IMG(0x103469f0u);
    goto L_102ec298;
L_102ec2dc: ;
    COW_AT(102ec2dc)
    ecx = (ecx & 0xf8ffffffu) | 0x8000000u;
L_102ec312: ;
    COW_AT(102ec312)
    wr32(sp0 + 4u, ecx);
    goto L_102ec1aa;
L_102ec2ea: ;
    COW_AT(102ec2ea)
    ecx = (ecx & 0xf5ffffffu) | 0x5000000u;
    goto L_102ec312;
L_102ec2f8: ;
    COW_AT(102ec2f8)
    ecx = (ecx & 0xf3ffffffu) | 0x3000000u;
    goto L_102ec312;
L_102ec306: ;
    COW_AT(102ec306)
    ecx = (ecx & 0xf1ffffffu) | 0x1000000u;
    goto L_102ec312;
L_102ec31a: ;
    COW_AT(102ec31a)
    wr32(sp0 - 0x44u, sp0 - 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x24u, 1, sp0 - 8u);
    t74 = g->edx;
    edx = t74;
    COW_AT(102ec326)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t75 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t76 = g->ecx;
    t77 = g->edx;
    eax = t75;
    ecx = t76;
    edx = t77;
    COW_AT(102ec334)
    if (rd32(self + 0xacu) != 0u) goto L_102ec344;
    COW_AT(102ec33d)
    wr32(sp0 - 0x44u, COW_IMG(0x103469c4u));
    loc_44 = COW_IMG(0x103469c4u);
L_102ec371: ;
    COW_AT(102ec371)
    wr32(sp0 - 0x48u, self);
    g->ebx = in_ebx;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102ea931u), 5, self, loc_44, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t78 = g->edx;
    edx = t78;
    COW_AT(102ec377)
L_102ec379: ;
    COW_AT(102ec379)
    t79 = (rd32(sp0 + 4u) & 0xf6ffffffu) | 0x6000000u;
    wr32(sp0 + 4u, t79);
    eax = t79;
L_102ec389: ;
    COW_AT(102ec389)
    wr32(sp0 - 0x44u, eax);
    loc_44 = eax;
    goto L_102ec4ce;
L_102ec344: ;
    COW_AT(102ec344)
    if (rd32(self + 0xb4u) != 0xffff0104u) goto L_102ec366;
    COW_AT(102ec350)
    if ((rd32(sp0 + 4u) & 0x70000000u) != 0x20000000u)
    {
        eax = rd32(sp0 + 4u) & 0x70000000u;
        goto L_102ec366;
    }
    eax = rd32(sp0 + 4u) & 0x70000000u;
    COW_AT(102ec35f)
    wr32(sp0 - 0x44u, COW_IMG(0x10346a20u));
    loc_44 = COW_IMG(0x10346a20u);
    goto L_102ec371;
L_102ec366: ;
    COW_AT(102ec366)
    if ((rd8(sp0 + 7u) & 0xfu) == 0u) goto L_102ec379;
    COW_AT(102ec36c)
    wr32(sp0 - 0x44u, COW_IMG(0x10346994u));
    loc_44 = COW_IMG(0x10346994u);
    goto L_102ec371;
L_102ec38f: ;
    COW_AT(102ec38f)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t73 = g->edx;
    edx = t73;
    COW_AT(102ec39d)
    eax = (rd32(sp0 + 4u) & 0xffe4ffffu) | 0xe40000u;
    goto L_102ec389;
L_102ec3ac: ;
    COW_AT(102ec3ac)
    wr32(sp0 - 0x44u, sp0 - 0x14u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f53d4u), self, 1, sp0 - 0x14u);
    t66 = g->edx;
    edx = t66;
    COW_AT(102ec3b7)
    wr32(sp0 - 0x44u, self + 0x3e4u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x14u, 1, self + 0x3e4u);
    t67 = g->edx;
    edx = t67;
    COW_AT(102ec3c6)
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(self + 0x3e0u, 1u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t68 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t69 = g->edx;
    eax = t68;
    edx = t69;
    COW_AT(102ec3de)
    t70 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x44u, t70);
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t71 = cow_fastcall(g, COW_IMG(0x102eb227u), self, edx, 1, t70);
    t72 = g->edx;
    eax = t71;
    edx = t72;
    COW_AT(102ec3e8)
    eax = eax | (rd32(sp0 + 4u) & 0xff00ffffu);
    ebx = in_ebx;
    goto L_102ec1fc;
L_102ec3f8: ;
    COW_AT(102ec3f8)
    wr32(sp0 - 0x44u, sp0 - 0x14u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f53d4u), self, 1, sp0 - 0x14u);
    t54 = g->edx;
    edx = t54;
    COW_AT(102ec403)
    wr32(sp0 - 0x44u, self + 0x3e4u);
    g->eax = self + 0x3e4u;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t55 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x14u, 1, self + 0x3e4u);
    t56 = g->edx;
    eax = t55;
    edx = t56;
    COW_AT(102ec412)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    t57 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x4cu, t57);
    wr32(self + 0x3e0u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t58 = cow_thiscall(g, COW_IMG(0x102eb2c8u), self, 3, t57, 0u, 0u);
    t59 = g->edx;
    eax = t58;
    edx = t59;
    COW_AT(102ec42a)
    wr32(sp0 - 0x44u, eax | 0x80000000u);
    g->eax = eax | 0x80000000u;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t60 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x44u, 1, eax | 0x80000000u);
    t61 = g->ecx;
    t62 = g->edx;
    eax = t60;
    ecx = t61;
    edx = t62;
    COW_AT(102ec438)
    t63 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x44u, t63);
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t64 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t63);
    t65 = g->edx;
    eax = t64;
    edx = t65;
    COW_AT(102ec440)
    wr32(self + 0x3e0u, 0u);
    ebx = in_ebx;
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_102ec6a2;
L_102ec44c: ;
    COW_AT(102ec44c)
    wr32(sp0 - 0x44u, sp0 - 0x14u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f53d4u), self, 1, sp0 - 0x14u);
    t46 = g->edx;
    edx = t46;
    COW_AT(102ec457)
    wr32(sp0 - 0x44u, self + 0x3e4u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x14u, 1, self + 0x3e4u);
    t47 = g->edx;
    edx = t47;
    COW_AT(102ec466)
    wr32(sp0 - 0x44u, sp0 - 8u);
    wr32(self + 0x3e0u, 1u);
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t48 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 - 8u);
    t49 = g->edx;
    eax = t48;
    edx = t49;
    COW_AT(102ec47d)
    wr32(sp0 - 0x44u, 1u);
    t50 = rd32(sp0 - 8u);
    wr32(sp0 - 0x48u, t50);
    t51 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x4cu, t51);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t52 = cow_thiscall(g, COW_IMG(0x102eb2c8u), self, 3, t51, t50, 1u);
    t53 = g->edx;
    eax = t52;
    edx = t53;
    COW_AT(102ec48b)
    eax = eax | 0x80000000u;
    ebx = 1u;
    goto L_102ec1fc;
L_102ec495: ;
    COW_AT(102ec495)
    wr32(sp0 - 0x44u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    t41 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 - 8u);
    t42 = g->ecx;
    t43 = g->edx;
    eax = t41;
    ecx = t42;
    edx = t43;
    COW_AT(102ec4a3)
    if (rd32(self + 0xacu) == 0u) goto L_102ec4b3;
    COW_AT(102ec4ac)
    wr32(sp0 - 0x44u, COW_IMG(0x103465dcu));
    loc_44 = COW_IMG(0x103465dcu);
L_102ec4c1: ;
    COW_AT(102ec4c1)
    wr32(sp0 - 0x48u, self);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t44 = cow_cdecl(g, COW_IMG(0x102ea931u), 5, self, loc_44, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t45 = g->edx;
    eax = t44;
    edx = t45;
    COW_AT(102ec4c7)
L_102ec4c9: ;
    COW_AT(102ec4c9)
    wr32(sp0 - 0x44u, 0x2000u);
    loc_44 = 0x2000u;
    goto L_102ec4ce;
L_102ec4b3: ;
    COW_AT(102ec4b3)
    if (rd32(sp0 - 8u) == 0xb0000000u) goto L_102ec4c9;
    COW_AT(102ec4bc)
    wr32(sp0 - 0x44u, COW_IMG(0x1034696cu));
    loc_44 = COW_IMG(0x1034696cu);
    goto L_102ec4c1;
L_102ec4d5: ;
    COW_AT(102ec4d5)
    wr32(sp0 - 0x44u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    t35 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x24u, 1, sp0 - 8u);
    t36 = g->ecx;
    t37 = g->edx;
    eax = t35;
    ecx = t36;
    edx = t37;
    COW_AT(102ec4e1)
    if ((rd32(sp0 - 8u) & 0xffffe000u) != 0u)
    {
    COW_AT(102ec4ea)
        wr32(sp0 - 0x44u, COW_IMG(0x10346954u));
        wr32(sp0 - 0x48u, self);
        g->ebx = in_ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t38 = cow_cdecl(g, COW_IMG(0x102ea931u), 5, self, COW_IMG(0x10346954u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
        t39 = g->edx;
        eax = t38;
        edx = t39;
    COW_AT(102ec4f5)
    }
    COW_AT(102ec4f7)
    t40 = rd32(sp0 - 8u);
    wr32(sp0 - 0x44u, t40);
    ecx = self + 0x44u;
    ebx = in_ebx;
    loc_44 = t40;
    goto L_102ec69d;
L_102ec502: ;
    COW_AT(102ec502)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t29 = g->edx;
    edx = t29;
    COW_AT(102ec510)
    wr32(sp0 - 0x44u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t30 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 - 8u);
    t31 = g->ecx;
    t32 = g->edx;
    eax = t30;
    ecx = t31;
    edx = t32;
    COW_AT(102ec51b)
    if (rd32(self + 0xacu) == 0u) goto L_102ec530;
    COW_AT(102ec529)
    wr32(sp0 - 0x44u, COW_IMG(0x103465dcu));
    loc_44 = COW_IMG(0x103465dcu);
L_102ec54a: ;
    COW_AT(102ec54a)
    wr32(sp0 - 0x48u, self);
    g->ebx = self + 0x44u;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102ea931u), 5, self, loc_44, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t33 = g->edx;
    edx = t33;
    COW_AT(102ec550)
L_102ec552: ;
    COW_AT(102ec552)
    t34 = rd32(sp0 + 4u) | 0x2000u;
    wr32(sp0 - 0x44u, t34);
    eax = t34;
    loc_44 = t34;
L_102ec5a4: ;
    COW_AT(102ec5a4)
    ecx = self + 0x44u;
    ebx = self + 0x44u;
    goto L_102ec69d;
L_102ec530: ;
    COW_AT(102ec530)
    if (rd32(sp0 - 8u) == 0xb0000000u) goto L_102ec540;
    COW_AT(102ec539)
    wr32(sp0 - 0x44u, COW_IMG(0x1034696cu));
    loc_44 = COW_IMG(0x1034696cu);
    goto L_102ec54a;
L_102ec540: ;
    COW_AT(102ec540)
    if ((rd32(sp0 + 4u) & 0x2000u) == 0u) goto L_102ec552;
    COW_AT(102ec545)
    wr32(sp0 - 0x44u, COW_IMG(0x10346920u));
    loc_44 = COW_IMG(0x10346920u);
    goto L_102ec54a;
L_102ec55a: ;
    COW_AT(102ec55a)
    wr32(sp0 - 0x44u, sp0 - 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x24u, 1, sp0 - 8u);
    t24 = g->edx;
    edx = t24;
    COW_AT(102ec566)
    wr32(sp0 - 0x44u, sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x44u, 1, sp0 + 4u);
    t25 = g->ecx;
    t26 = g->edx;
    ecx = t25;
    edx = t26;
    COW_AT(102ec574)
    if ((rd32(sp0 - 8u) + (rd32(sp0 + 4u) & 0x1fffu) & 0xffffe000u) != 0u)
    {
        eax = rd32(sp0 - 8u) + (rd32(sp0 + 4u) & 0x1fffu);
    COW_AT(102ec588)
        wr32(sp0 - 0x44u, COW_IMG(0x10346954u));
        wr32(sp0 - 0x48u, self);
        g->ebx = self + 0x44u;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x102ea931u), 5, self, COW_IMG(0x10346954u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
        t27 = g->edx;
        edx = t27;
    COW_AT(102ec593)
    }
    COW_AT(102ec595)
    t28 = ((rd32(sp0 + 4u) + rd32(sp0 - 8u) ^ rd32(sp0 + 4u)) & 0x1fffu) ^ rd32(sp0 + 4u);
    wr32(sp0 - 0x44u, t28);
    eax = rd32(sp0 + 4u);
    loc_44 = t28;
    goto L_102ec5a4;
L_102ec5ab: ;
    COW_AT(102ec5ab)
    t16 = rd32(self + 0x1c8u);
    wr32(sp0 - 0x44u, t16);
    edx = in_edx;
    loc_4 = in_ebp;
    loc_38 = in_ebx;
    loc_3c = in_esi;
    loc_40 = in_edi;
    loc_44 = t16;
L_102ec5b1: ;
    COW_AT(102ec5b1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t17 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x54u, 1, loc_44);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(102ec5bb)
    t19 = rd32(self + 0x1ccu);
    wr32(sp0 - 0x44u, t19);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t20 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x54u, 1, t19);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(102ec5c8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t22 = cow_thiscall(g, COW_IMG(0x102eb7e8u), self, 0);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    COW_AT(102ec5cf)
    ebx = in_ebx;
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_102ec6a2;
L_102ec5d4: ;
    COW_AT(102ec5d4)
    if (rd32(self + 0xacu) != 0u)
    {
        edx = in_edx;
        loc_4 = in_ebp;
        loc_38 = in_ebx;
        loc_3c = in_esi;
        loc_40 = in_edi;
    }
    else
    {
    COW_AT(102ec5dd)
        wr32(sp0 - 0x44u, COW_IMG(0x103468f8u));
        wr32(sp0 - 0x48u, self);
        g->edx = in_edx;
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x102ea931u), 5, self, COW_IMG(0x103468f8u), in_edi, in_esi, in_ebx);
        t14 = g->edx;
        edx = t14;
    COW_AT(102ec5e8)
        loc_4 = rd32(sp0 - 4u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
    }
    COW_AT(102ec5ea)
    t15 = rd32(self + 0x1c8u) | 0x40000000u;
    wr32(sp0 - 0x44u, t15);
    eax = t15;
    loc_44 = t15;
    goto L_102ec5b1;
L_102ec5f8: ;
    COW_AT(102ec5f8)
    wr32(sp0 - 0x44u, sp0 - 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x24u, 1, sp0 - 8u);
    t13 = g->edx;
    edx = t13;
    COW_AT(102ec604)
    if ((int32_t)rd32(sp0 - 8u) >= 0)
    {
        eax = rd32(sp0 - 8u);
        x0 = (double)(int32_t)rd32(sp0 - 8u);
    }
    else
    {
        eax = rd32(sp0 - 8u);
        x0 = (double)(int32_t)rd32(sp0 - 8u);
    COW_AT(102ec60e)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
L_102ec634: ;
    COW_AT(102ec634)
    wrf32(sp0 - 0x18u, (float)(double)(float)x0);
    loc_18_f = (double)(float)x0;
L_102ec697: ;
    COW_AT(102ec697)
L_102ec69a: ;
    COW_AT(102ec69a)
    wr32(sp0 - 0x44u, cow_f2bits(loc_18_f));
    ecx = self + 0x34u;
    ebx = in_ebx;
    loc_44 = cow_f2bits(loc_18_f);
    goto L_102ec69d;
L_102ec616: ;
    COW_AT(102ec616)
    wr32(sp0 - 0x44u, sp0 - 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x24u, 1, sp0 - 8u);
    t12 = g->edx;
    edx = t12;
    COW_AT(102ec622)
    if ((int32_t)rd32(sp0 - 8u) >= 0)
    {
        eax = rd32(sp0 - 8u);
        x0 = (double)(int32_t)rd32(sp0 - 8u);
    }
    else
    {
        eax = rd32(sp0 - 8u);
        x0 = (double)(int32_t)rd32(sp0 - 8u);
    COW_AT(102ec62c)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102ec632)
    x0 = -x0;
    goto L_102ec634;
L_102ec639: ;
    COW_AT(102ec639)
    wr32(sp0 - 0x44u, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    t9 = cow_thiscall(g, COW_IMG(0x102f52a1u), self + 0x34u, 1, sp0 - 0x18u);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(102ec647)
    d11 = (double)rdf32(sp0 - 0x18u);
    wrf32(sp0 - 0x18u, (float)(double)(float)-d11);
    loc_18_f = (double)(float)-d11;
    goto L_102ec69a;
L_102ec653: ;
    COW_AT(102ec653)
    wr32(sp0 - 0x44u, self + 0xc8u);
    g->eax = self + 0xc8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    t6 = cow_thiscall(g, COW_IMG(0x102f5321u), self, 1, self + 0xc8u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(102ec661)
    t8 = rd32(self + 0x1d0u);
    wr32(sp0 - 0x44u, t8);
    ecx = self + 0x14u;
    ebx = in_ebx;
    loc_44 = t8;
    goto L_102ec69d;
L_102ec66c: ;
    COW_AT(102ec66c)
    wr32(sp0 - 0x44u, self + 0xc8u);
    g->eax = self + 0xc8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), self, 1, self + 0xc8u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(102ec678)
    wr32(sp0 - 0x44u, eax);
    ecx = self + 0x24u;
    ebx = in_ebx;
    loc_44 = eax;
    goto L_102ec69d;
L_102ec67f: ;
    COW_AT(102ec67f)
    wr32(sp0 - 0x44u, sp0 - 0x18u);
    wr32(sp0 - 0x48u, COW_IMG(0x103468f4u));
    wr32(sp0 - 0x4cu, self + 0xc8u);
    g->eax = self + 0xc8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    t2 = cow_cdecl(g, COW_IMG(0x10313683u), 3, self + 0xc8u, COW_IMG(0x103468f4u), sp0 - 0x18u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(102ec694)
    loc_18_f = (double)rdf32(sp0 - 0x18u);
    goto L_102ec697;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ebe77(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ebe90u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = self;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ebe9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ebeadu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x24u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102ebeb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ebec8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ebecdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebed3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebedau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ebee6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ebef2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebf03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ebf11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x24u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102ebf1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ebf2du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ecx = 0xffffff00u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ebf3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ebf47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ebf55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ebf60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x102ebf6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x44u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102ebf76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102ebf84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102ebf89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ebf97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x54u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102ebfa2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102ebfadu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebfb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ebfc5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ebfd3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x54u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102ebfdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102ebfebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102ebff9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec005u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec013u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102ec01eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec02cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x54u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102ec037u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102ec044u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102ec052u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102ec05cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec068u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec076u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102ec081u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102ec08cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec09au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x54u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102ec0a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102ec0aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102ec0bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102ec0d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102ec0ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102ec0ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102ec0f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102ec0ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec10bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec119u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102ec124u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102ec12fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102ec13au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec148u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x54u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102ec153u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102ec160u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102ec16eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102ec178u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102ec182u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102ec18cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec198u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec1a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec1aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec1b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec1bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102ec1ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec1e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec1eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec1fcu:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec204u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec20cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec219u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec227u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec231u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec241u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec254u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec25eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec268u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec276u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec285u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec293u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec298u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec29eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec2a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec2aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec2b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec2bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec2c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec2cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec2d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec2dcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec2eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec2f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec306u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec312u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec31au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec326u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec334u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec33du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec344u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec350u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec35fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec366u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec36cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec371u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec377u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec379u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec389u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec38fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec39du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec3acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec3b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102ec3c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec3deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec3e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec3f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec403u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102ec412u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec42au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ec438u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ec440u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ec44cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec457u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102ec466u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec47du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec48bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec495u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec4a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec4acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec4b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec4bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec4c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec4c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec4c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec4ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102ec4d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec4e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec4eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec4f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, COW_IMG(0x10346954u));
        (void)sp0;
        return 1;
    }
    case 0x102ec4f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec502u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec510u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec51bu:
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
        g->esp = sp0 - 0x40u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec529u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x2000u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec530u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x2000u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec539u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x2000u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec540u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x2000u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec545u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x2000u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec54au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x44u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x2000u;
        (void)sp0;
        return 1;
    }
    case 0x102ec550u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x48u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x2000u;
        (void)sp0;
        return 1;
    }
    case 0x102ec552u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x2000u;
        (void)sp0;
        return 1;
    }
    case 0x102ec55au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec566u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec574u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec588u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1fffu;
        wr32(sp0 - 0x44u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ec593u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x48u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1fffu;
        wr32(sp0 - 0x44u, COW_IMG(0x10346954u));
        (void)sp0;
        return 1;
    }
    case 0x102ec595u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1fffu;
        (void)sp0;
        return 1;
    }
    case 0x102ec5a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x44u;
        g->ebx = self + 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec5abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec5b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec5bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102ec5c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec5cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec5d4u:
    {
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
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = self;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec5ddu:
    {
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
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = self;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec5e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, COW_IMG(0x103468f8u));
        (void)sp0;
        return 1;
    }
    case 0x102ec5eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec5f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec604u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec60eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec616u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec622u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec62cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec632u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec634u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102ec639u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec647u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x44u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102ec653u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec661u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec66cu:
    {
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
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = self;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec678u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec67fu:
    {
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
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = self;
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102ec694u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102ec697u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        double loc_18_f;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec69au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        double loc_18_f;
        uint32_t loc_44;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x40u;
        g->ecx = self + 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec69du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_18_f;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6a2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6aau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6aeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6c2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6c6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6d2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6dau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6eau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ec6fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ebe77(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ebe77(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
