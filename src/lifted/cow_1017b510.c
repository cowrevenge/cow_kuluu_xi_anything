/* f_0x1017b510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1017b510(Guest* g)
{
    double d130;
    double d131;
    double d149;
    double d150;
    double d152;
    double d155;
    double d156;
    double d159;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_100;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
    uint32_t loc_124;
    uint32_t loc_128;
    uint32_t loc_f8;
    uint32_t loc_fc;
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
    uint32_t t15;
    uint32_t t151;
    uint32_t t153;
    uint32_t t154;
    uint32_t t157;
    uint32_t t158;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 316u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1017b531u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_1017b531;
    case 0x1017b54au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017b54a;
    case 0x1017b55fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017b55f;
    case 0x1017b574u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017b574;
    case 0x1017b589u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017b589;
    case 0x1017b59eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017b59e;
    case 0x1017b5b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017b5b3;
    case 0x1017b5c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017b5c8;
    case 0x1017b5f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b5f0;
    case 0x1017b604u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1017b604;
    case 0x1017b609u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1017b609;
    case 0x1017b61bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1017b61b;
    case 0x1017b620u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b620;
    case 0x1017b625u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b625;
    case 0x1017b630u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b630;
    case 0x1017b64bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b64b;
    case 0x1017b660u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b660;
    case 0x1017b677u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b677;
    case 0x1017b68du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b68d;
    case 0x1017b6a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b6a4;
    case 0x1017b6bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b6bb;
    case 0x1017b6d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b6d3;
    case 0x1017b6e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b6e9;
    case 0x1017b6ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b6ff;
    case 0x1017b717u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b717;
    case 0x1017b72fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b72f;
    case 0x1017b747u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b747;
    case 0x1017b75fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b75f;
    case 0x1017b777u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b777;
    case 0x1017b78fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b78f;
    case 0x1017b7a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b7a4;
    case 0x1017b7b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b7b9;
    case 0x1017b7cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b7cf;
    case 0x1017b7e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b7e5;
    case 0x1017b7fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b7fb;
    case 0x1017b811u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b811;
    case 0x1017b829u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b829;
    case 0x1017b83fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b83f;
    case 0x1017b854u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b854;
    case 0x1017b86cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b86c;
    case 0x1017b882u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b882;
    case 0x1017b898u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b898;
    case 0x1017b8aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b8ae;
    case 0x1017b8c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b8c4;
    case 0x1017b8dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b8db;
    case 0x1017b8f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b8f2;
    case 0x1017b908u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_124 = rd32(sp0 - 0x124u); goto E_1017b908;
    case 0x1017b91fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b91f;
    case 0x1017b935u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b935;
    case 0x1017b94cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b94c;
    case 0x1017b963u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017b963;
    case 0x1017b979u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b979;
    case 0x1017b98fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b98f;
    case 0x1017b9a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1017b9a4;
    case 0x1017b9bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1017b9ba;
    case 0x1017b9d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b9d1;
    case 0x1017b9d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b9d8;
    case 0x1017b9e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); goto E_1017b9e7;
    case 0x1017b9f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1017b9f4;
    case 0x1017b9f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017b9f6;
    case 0x1017ba03u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017ba03;
    case 0x1017ba12u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017ba12;
    case 0x1017ba25u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017ba25;
    case 0x1017ba2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017ba2e;
    case 0x1017ba3au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017ba3a;
    case 0x1017ba4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017ba4c;
    case 0x1017ba58u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017ba58;
    case 0x1017ba5au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017ba5a;
    case 0x1017ba62u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017ba62;
    case 0x1017ba74u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017ba74;
    case 0x1017ba89u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017ba89;
    case 0x1017ba92u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017ba92;
    case 0x1017ba9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017ba9e;
    case 0x1017bab2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bab2;
    case 0x1017babeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017babe;
    case 0x1017bad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017bad5;
    case 0x1017baddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017badd;
    case 0x1017bae1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bae1;
    case 0x1017bae9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bae9;
    case 0x1017bafcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017bafc;
    case 0x1017bb09u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bb09;
    case 0x1017bb14u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bb14;
    case 0x1017bb2au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bb2a;
    case 0x1017bb32u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bb32;
    case 0x1017bb33u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017bb33;
    case 0x1017bb49u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017bb49;
    case 0x1017bb65u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017bb65;
    case 0x1017bb6au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017bb6a;
    case 0x1017bb70u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017bb70;
    case 0x1017bb7du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1017bb7d;
    case 0x1017bb97u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1017bb97;
    case 0x1017bbb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1017bbb0;
    case 0x1017bbc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1017bbc9;
    case 0x1017bbe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1017bbe2;
    case 0x1017bbfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1017bbfb;
    case 0x1017bc0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1017bc0f;
    case 0x1017bc19u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017bc19;
    case 0x1017bc1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017bc1c;
    case 0x1017bc23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017bc23;
    case 0x1017bc38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bc38;
    case 0x1017bc4du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bc4d;
    case 0x1017bc80u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bc80;
    case 0x1017bcb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1017bcb8;
    case 0x1017bccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1017bccb;
    case 0x1017bcdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bcdb;
    case 0x1017bce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1017bce9;
    case 0x1017bcf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017bcf1;
    case 0x1017bcfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1017bcfc;
    case 0x1017bd10u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1017bd10;
    case 0x1017bd2au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bd2a;
    case 0x1017bd4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1017bd4c;
    case 0x1017bd59u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1017bd59;
    case 0x1017bdcau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017bdca;
    case 0x1017be09u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017be09;
    case 0x1017be90u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); goto E_1017be90;
    case 0x1017bea8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); goto E_1017bea8;
    case 0x1017bec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bec2;
    case 0x1017bedcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bedc;
    case 0x1017bef6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bef6;
    case 0x1017bf0au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bf0a;
    case 0x1017bf0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017bf0f;
    case 0x1017bf2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bf2e;
    case 0x1017bf3au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017bf3a;
    case 0x1017bf58u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017bf58;
    case 0x1017bfb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017bfb9;
    case 0x1017bfcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017bfcb;
    case 0x1017bff7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017bff7;
    case 0x1017c0a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017c0a6;
    case 0x1017c0d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017c0d0;
    case 0x1017c0d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017c0d5;
    case 0x1017c0e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017c0e5;
    case 0x1017c134u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); goto E_1017c134;
    case 0x1017c14cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); goto E_1017c14c;
    case 0x1017c196u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1017c196;
    case 0x1017c1afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1017c1af;
    case 0x1017c1c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1017c1c8;
    case 0x1017c1e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1017c1e1;
    case 0x1017c1f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c1f6;
    case 0x1017c21au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c21a;
    case 0x1017c23cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c23c;
    case 0x1017c244u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c244;
    case 0x1017c264u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017c264;
    case 0x1017c28cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017c28c;
    case 0x1017c2a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c2a8;
    case 0x1017c2b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c2b4;
    case 0x1017c2bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c2bd;
    case 0x1017c2ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c2dd;
    case 0x1017c2e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c2e7;
    case 0x1017c2ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c2eb;
    case 0x1017c2f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c2f0;
    case 0x1017c2feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c2fe;
    case 0x1017c33du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c33d;
    case 0x1017c34cu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c34c;
    case 0x1017c356u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017c356;
    case 0x1017c358u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c358;
    case 0x1017c362u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c362;
    case 0x1017c37cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c37c;
    case 0x1017c385u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c385;
    case 0x1017c389u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c389;
    case 0x1017c3a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c3a4;
    case 0x1017c3aau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c3aa;
    case 0x1017c3b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c3b8;
    case 0x1017c3c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c3c6;
    case 0x1017c3cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c3cb;
    case 0x1017c3e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c3e1;
    case 0x1017c3e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c3e7;
    case 0x1017c3ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c3ec;
    case 0x1017c3f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c3f9;
    case 0x1017c438u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c438;
    case 0x1017c445u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c445;
    case 0x1017c451u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017c451;
    case 0x1017c453u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c453;
    case 0x1017c45fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1017c45f;
    case 0x1017c47du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1017c47d;
    case 0x1017c496u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1017c496;
    case 0x1017c49au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1017c49a;
    case 0x1017c4acu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017c4ac;
    case 0x1017c4bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017c4ba;
    case 0x1017c4bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1017c4bc;
    case 0x1017c4c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1017c4c0;
    case 0x1017c4d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017c4d2;
    case 0x1017c4e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1017c4e0;
    case 0x1017c4e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1017c4e9;
    case 0x1017c4fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1017c4fc;
    case 0x1017c504u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1017c504;
    case 0x1017c519u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c519;
    case 0x1017c52fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c52f;
    case 0x1017c54au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1017c54a;
    case 0x1017c553u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); goto E_1017c553;
    case 0x1017c560u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); goto E_1017c560;
    case 0x1017c57au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); goto E_1017c57a;
    case 0x1017c590u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c590;
    case 0x1017c5a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c5a6;
    case 0x1017c5bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c5bc;
    case 0x1017c5d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c5d2;
    case 0x1017c5e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017c5e6;
    case 0x1017c5fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c5fb;
    case 0x1017c610u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c610;
    case 0x1017c625u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c625;
    case 0x1017c63au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c63a;
    case 0x1017c64fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c64f;
    case 0x1017c664u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c664;
    case 0x1017c679u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c679;
    case 0x1017c68eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c68e;
    case 0x1017c6a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c6a4;
    case 0x1017c6bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c6ba;
    case 0x1017c6d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c6d0;
    case 0x1017c6e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c6e9;
    case 0x1017c6feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c6fe;
    case 0x1017c713u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c713;
    case 0x1017c72bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); goto E_1017c72b;
    case 0x1017c741u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c741;
    case 0x1017c74au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c74a;
    case 0x1017c75du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c75d;
    case 0x1017c774u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c774;
    case 0x1017c78cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c78c;
    case 0x1017c7a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c7a4;
    case 0x1017c7bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c7bc;
    case 0x1017c7d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c7d4;
    case 0x1017c7ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c7ec;
    case 0x1017c804u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); goto E_1017c804;
    default: break;
    }
#endif

    COW_AT(1017b510)
    wr32(sp0 - 0x114u, in_ebx);
    wr32(sp0 - 0x118u, in_ebp);
    wr32(sp0 - 0x11cu, in_esi);
    wr32(sp0 - 0x120u, in_edi);
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0u);
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t1);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xf4u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t1, 0u, 0u);
    COW_AT(1017b531)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 1u);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t2);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t2) + 0xf4u), rd32(t2), 3, t2, 1u, 0u);
    COW_AT(1017b54a)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 2u);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t3);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t3) + 0xf4u), rd32(t3), 3, t3, 2u, 0u);
    COW_AT(1017b55f)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 3u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t4);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t4) + 0xf4u), rd32(t4), 3, t4, 3u, 0u);
    COW_AT(1017b574)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 4u);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t5);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t5) + 0xf4u), rd32(t5), 3, t5, 4u, 0u);
    COW_AT(1017b589)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 5u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t6);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t6) + 0xf4u), rd32(t6), 3, t6, 5u, 0u);
    COW_AT(1017b59e)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 6u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t7);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t7) + 0xf4u), rd32(t7), 3, t7, 6u, 0u);
    COW_AT(1017b5b3)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 7u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t8);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t9 = rd32(t8);
    t10 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(t9 + 0xf4u), t9, 3, t8, 7u, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    ecx = t11;
    edx = t12;
    COW_AT(1017b5c8)
    wr32(self + 0x38d44u, 0u);
    wr32(self + 0x38d48u, 0u);
    wr32(COW_IMG(0x1065c4c8u), 0u);
    wr32(COW_IMG(0x10631f14u), 0u);
    t13 = rd32(self + 0x38d94u);
    wr8(sp0 - 0x10du, 0u);
    if (t13 != 0u) goto L_1017b620;
    COW_AT(1017b5f0)
    wr32(sp0 - 0x124u, self + 0x38d94u);
    wr32(sp0 - 0x128u, 1u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t14);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t14) + 0xe4u), rd32(t14), 3, t14, 1u, self + 0x38d94u);
    COW_AT(1017b604)
    if (rd32(self + 0x38d94u) == 0xffffffffu) goto L_1017b630;
    COW_AT(1017b609)
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x124u, t15);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t16 = rd32(t15);
    t17 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(t16 + 0xd0u), t16, 1, t15);
    t18 = g->ecx;
    t19 = g->edx;
    ecx = t18;
    edx = t19;
    COW_AT(1017b61b)
    wr8(sp0 - 0x10du, 1u);
L_1017b620: ;
    COW_AT(1017b620)
    if (rd32(self + 0x38d94u) == 0xffffffffu) goto L_1017b630;
    COW_AT(1017b625)
    if (rd8(sp0 - 0x10du) != 1u) goto L_1017b9d1;
L_1017b630: ;
    COW_AT(1017b630)
    wr32(sp0 - 0x124u, rd32(COW_IMG(0x10632038u)));
    wr32(sp0 - 0x128u, 0x2fu);
    t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t20);
    g->edx = rd32(COW_IMG(0x10632038u));
    t21 = rd32(COW_IMG(0x10632038u));
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t20, 0x2fu, t21);
    t22 = g->edx;
    edx = t22;
    COW_AT(1017b64b)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0x11u);
    wr32(sp0 - 0x12cu, 0u);
    t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t23);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t23) + 0xfcu), rd32(t23), 4, t23, 0u, 0x11u, 1u);
    COW_AT(1017b660)
    wr32(sp0 - 0x124u, 2u);
    wr32(sp0 - 0x128u, 0x10u);
    wr32(sp0 - 0x12cu, 0u);
    t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t24);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t24) + 0xfcu), rd32(t24), 4, t24, 0u, 0x10u, 2u);
    COW_AT(1017b677)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0x11u);
    wr32(sp0 - 0x12cu, 1u);
    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t25);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 1u, 0x11u, 1u);
    COW_AT(1017b68d)
    wr32(sp0 - 0x124u, 2u);
    wr32(sp0 - 0x128u, 0x10u);
    wr32(sp0 - 0x12cu, 1u);
    t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t26);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t26) + 0xfcu), rd32(t26), 4, t26, 1u, 0x10u, 2u);
    COW_AT(1017b6a4)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0x11u);
    wr32(sp0 - 0x12cu, 2u);
    t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t27);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t27) + 0xfcu), rd32(t27), 4, t27, 2u, 0x11u, 1u);
    COW_AT(1017b6bb)
    wr32(sp0 - 0x124u, 2u);
    wr32(sp0 - 0x128u, 0x10u);
    wr32(sp0 - 0x12cu, 2u);
    t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t28);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t28) + 0xfcu), rd32(t28), 4, t28, 2u, 0x10u, 2u);
    COW_AT(1017b6d3)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0xbu);
    wr32(sp0 - 0x12cu, 0u);
    t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t29);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t29) + 0xfcu), rd32(t29), 4, t29, 0u, 0xbu, 0u);
    COW_AT(1017b6e9)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0xbu);
    wr32(sp0 - 0x12cu, 1u);
    t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t30);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t30) + 0xfcu), rd32(t30), 4, t30, 1u, 0xbu, 1u);
    COW_AT(1017b6ff)
    wr32(sp0 - 0x124u, 2u);
    wr32(sp0 - 0x128u, 0xbu);
    wr32(sp0 - 0x12cu, 2u);
    t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t31);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t31) + 0xfcu), rd32(t31), 4, t31, 2u, 0xbu, 2u);
    COW_AT(1017b717)
    wr32(sp0 - 0x124u, 3u);
    wr32(sp0 - 0x128u, 0xbu);
    wr32(sp0 - 0x12cu, 3u);
    t32 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t32);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t32, 3u, 0xbu, 3u);
    COW_AT(1017b72f)
    wr32(sp0 - 0x124u, 4u);
    wr32(sp0 - 0x128u, 0xbu);
    wr32(sp0 - 0x12cu, 4u);
    t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t33);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t33) + 0xfcu), rd32(t33), 4, t33, 4u, 0xbu, 4u);
    COW_AT(1017b747)
    wr32(sp0 - 0x124u, 5u);
    wr32(sp0 - 0x128u, 0xbu);
    wr32(sp0 - 0x12cu, 5u);
    t34 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t34);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t34) + 0xfcu), rd32(t34), 4, t34, 5u, 0xbu, 5u);
    COW_AT(1017b75f)
    wr32(sp0 - 0x124u, 6u);
    wr32(sp0 - 0x128u, 0xbu);
    wr32(sp0 - 0x12cu, 6u);
    t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t35);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t35) + 0xfcu), rd32(t35), 4, t35, 6u, 0xbu, 6u);
    COW_AT(1017b777)
    wr32(sp0 - 0x124u, 7u);
    wr32(sp0 - 0x128u, 0xbu);
    wr32(sp0 - 0x12cu, 7u);
    t36 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t36);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t36) + 0xfcu), rd32(t36), 4, t36, 7u, 0xbu, 7u);
    COW_AT(1017b78f)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0x1bu);
    t37 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t37);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t37) + 0xc8u), rd32(t37), 3, t37, 0x1bu, 0u);
    COW_AT(1017b7a4)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0xfu);
    t38 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t38);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t38) + 0xc8u), rd32(t38), 3, t38, 0xfu, 0u);
    COW_AT(1017b7b9)
    wr32(sp0 - 0x124u, 5u);
    wr32(sp0 - 0x128u, 0x19u);
    t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t39);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t39) + 0xc8u), rd32(t39), 3, t39, 0x19u, 5u);
    COW_AT(1017b7cf)
    wr32(sp0 - 0x124u, 0x60u);
    wr32(sp0 - 0x128u, 0x18u);
    t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t40);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t40) + 0xc8u), rd32(t40), 3, t40, 0x18u, 0x60u);
    COW_AT(1017b7e5)
    wr32(sp0 - 0x124u, 5u);
    wr32(sp0 - 0x128u, 0x13u);
    t41 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t41);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t41) + 0xc8u), rd32(t41), 3, t41, 0x13u, 5u);
    COW_AT(1017b7fb)
    wr32(sp0 - 0x124u, 6u);
    wr32(sp0 - 0x128u, 0x14u);
    t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t42);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t42) + 0xc8u), rd32(t42), 3, t42, 0x14u, 6u);
    COW_AT(1017b811)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0x89u);
    t43 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t43);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t43) + 0xc8u), rd32(t43), 3, t43, 0x89u, 1u);
    COW_AT(1017b829)
    wr32(sp0 - 0x124u, 2u);
    wr32(sp0 - 0x128u, 9u);
    t44 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t44);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t44) + 0xc8u), rd32(t44), 3, t44, 9u, 2u);
    COW_AT(1017b83f)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0x1cu);
    t45 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t45);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t45) + 0xc8u), rd32(t45), 3, t45, 0x1cu, 1u);
    COW_AT(1017b854)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0x8fu);
    t46 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t46);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t46) + 0xc8u), rd32(t46), 3, t46, 0x8fu, 0u);
    COW_AT(1017b86c)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0xdu);
    wr32(sp0 - 0x12cu, 0u);
    t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t47);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t47) + 0xfcu), rd32(t47), 4, t47, 0u, 0xdu, 1u);
    COW_AT(1017b882)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0xeu);
    wr32(sp0 - 0x12cu, 0u);
    t48 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t48);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t48) + 0xfcu), rd32(t48), 4, t48, 0u, 0xeu, 1u);
    COW_AT(1017b898)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0xdu);
    wr32(sp0 - 0x12cu, 1u);
    t49 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t49);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t49) + 0xfcu), rd32(t49), 4, t49, 1u, 0xdu, 1u);
    COW_AT(1017b8ae)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0xeu);
    wr32(sp0 - 0x12cu, 1u);
    t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t50);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t50) + 0xfcu), rd32(t50), 4, t50, 1u, 0xeu, 1u);
    COW_AT(1017b8c4)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0xdu);
    wr32(sp0 - 0x12cu, 2u);
    t51 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t51);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t51) + 0xfcu), rd32(t51), 4, t51, 2u, 0xdu, 1u);
    COW_AT(1017b8db)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0xeu);
    wr32(sp0 - 0x12cu, 2u);
    t52 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t52);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t52) + 0xfcu), rd32(t52), 4, t52, 2u, 0xeu, 1u);
    COW_AT(1017b8f2)
    wr32(sp0 - 0x124u, 5u);
    wr32(sp0 - 0x128u, 1u);
    wr32(sp0 - 0x12cu, 0u);
    t53 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t53);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t53, 0u, 1u, 5u);
    COW_AT(1017b908)
    wr32(sp0 - 0x124u, 2u);
    wr32(sp0 - 0x128u, 2u);
    wr32(sp0 - 0x12cu, 0u);
    t54 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t54);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t54) + 0xfcu), rd32(t54), 4, t54, 0u, 2u, 2u);
    COW_AT(1017b91f)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 3u);
    wr32(sp0 - 0x12cu, 0u);
    t55 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t55);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t55) + 0xfcu), rd32(t55), 4, t55, 0u, 3u, 1u);
    COW_AT(1017b935)
    wr32(sp0 - 0x124u, 6u);
    wr32(sp0 - 0x128u, 4u);
    wr32(sp0 - 0x12cu, 0u);
    t56 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t56);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t56) + 0xfcu), rd32(t56), 4, t56, 0u, 4u, 6u);
    COW_AT(1017b94c)
    wr32(sp0 - 0x124u, 2u);
    wr32(sp0 - 0x128u, 5u);
    wr32(sp0 - 0x12cu, 0u);
    t57 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t57);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t57) + 0xfcu), rd32(t57), 4, t57, 0u, 5u, 2u);
    COW_AT(1017b963)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 6u);
    wr32(sp0 - 0x12cu, 0u);
    t58 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t58);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t58) + 0xfcu), rd32(t58), 4, t58, 0u, 6u, 1u);
    COW_AT(1017b979)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 4u);
    wr32(sp0 - 0x12cu, 1u);
    t59 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t59);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t59) + 0xfcu), rd32(t59), 4, t59, 1u, 4u, 1u);
    COW_AT(1017b98f)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 1u);
    wr32(sp0 - 0x12cu, 1u);
    t60 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t60);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t60) + 0xfcu), rd32(t60), 4, t60, 1u, 1u, 1u);
    COW_AT(1017b9a4)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 1u);
    wr32(sp0 - 0x12cu, 2u);
    t61 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t61);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t61) + 0xfcu), rd32(t61), 4, t61, 2u, 1u, 1u);
    COW_AT(1017b9ba)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 4u);
    wr32(sp0 - 0x12cu, 2u);
    t62 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t62);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t63 = rd32(t62);
    t64 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(t63 + 0xfcu), t63, 4, t62, 2u, 4u, 1u);
    t65 = g->ecx;
    t66 = g->edx;
    ecx = t65;
    edx = t66;
L_1017b9d1: ;
    COW_AT(1017b9d1)
    if (rd32(self + 0x38d94u) != 0xffffffffu)
    {
        eax = rd32(self + 0x38d94u);
    COW_AT(1017b9d8)
        if (rd8(sp0 - 0x10du) != 1u)
        {
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017b9f6)
            wr32(sp0 - 0x124u, eax);
            t71 = rd32(edx + 0xcu);
            wr32(sp0 - 0x128u, t71);
            g->edx = rd32(t71);
            t72 = rd32(t71);
            g->esp = sp0 - 0x120u;
            cow_thiscall(g, rd32(t72 + 0xd8u), t71, 2, t71, eax);
            t73 = g->ecx;
            t74 = g->edx;
            ecx = t73;
            edx = t74;
        }
        else
        {
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017b9e7)
            wr32(sp0 - 0x124u, self + 0x38d94u);
            t67 = rd32(edx + 0xcu);
            wr32(sp0 - 0x128u, t67);
            g->edx = edx;
            t68 = rd32(t67);
            g->esp = sp0 - 0x120u;
            cow_thiscall(g, rd32(t68 + 0xd4u), t68, 2, t67, self + 0x38d94u);
            t69 = g->ecx;
            t70 = g->edx;
            ecx = t69;
            edx = t70;
    COW_AT(1017b9f4)
        }
    }
    COW_AT(1017ba03)
    if (rd32(self + 0x3949cu) != 1u)
    {
        eax = rd32(COW_IMG(0x1045666cu));
        goto L_1017ba5a;
    }
    eax = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017ba12)
    wr32(sp0 - 0x124u, 3u);
    wr32(sp0 - 0x128u, 0x8cu);
    t75 = rd32(eax + 0xcu);
    wr32(sp0 - 0x12cu, t75);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t75) + 0xc8u), rd32(t75), 3, t75, 0x8cu, 3u);
    COW_AT(1017ba25)
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    edx = rd32(COW_IMG(0x1045666cu));
L_1017ba2e: ;
    COW_AT(1017ba2e)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0x23u);
    wr32(sp0 - 0x12cu, eax);
    g->edx = edx;
    t83 = rd32(eax);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(t83 + 0xc8u), t83, 3, eax, 0x23u, 0u);
    t84 = g->ecx;
    t85 = g->edx;
    ecx = t84;
    edx = t85;
    COW_AT(1017ba3a)
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        goto L_1017ba92;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu);
    COW_AT(1017ba4c)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0x30u);
    wr32(sp0 - 0x12cu, eax);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), ecx, 3, eax, 0x30u, 1u);
    COW_AT(1017ba58)
L_1017ba9e: ;
    COW_AT(1017ba9e)
    if (rd32(COW_IMG(0x10456a98u)) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        edx = rd32(COW_IMG(0x1045666cu));
        goto L_1017bb09;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017bab2)
    wr32(sp0 - 0x124u, 2u);
    wr32(sp0 - 0x128u, 0x12u);
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x130u, eax);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 4, eax, 0u, 0x12u, 2u);
    COW_AT(1017babe)
    wr32(sp0 - 0x124u, 2u);
    wr32(sp0 - 0x128u, 0x12u);
    wr32(sp0 - 0x12cu, 1u);
    t86 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t86);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t87 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t86) + 0xfcu), rd32(t86), 4, t86, 1u, 0x12u, 2u);
    t88 = g->edx;
    edx = t88;
    COW_AT(1017bad5)
    if (rd32(self + 0x3949cu) != 1u) goto L_1017bb49;
    COW_AT(1017badd)
    wr32(sp0 - 0x124u, 2u);
    loc_124 = 2u;
L_1017bb33: ;
    COW_AT(1017bb33)
    wr32(sp0 - 0x128u, 0x12u);
    wr32(sp0 - 0x12cu, 2u);
    t92 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t92);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t93 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t92) + 0xfcu), rd32(t92), 4, t92, 2u, 0x12u, loc_124);
    t94 = g->edx;
    edx = t94;
L_1017bb49: ;
    COW_AT(1017bb49)
    t95 = rd32(self + 0x3949cu);
    wr32(self + 0x39114u, 0u);
    wr32(self + 0x39110u, 0u);
    wr32(self + 0x394a4u, 1u);
    if (t95 == 1u)
    {
        eax = t95;
        goto L_1017bb6a;
    }
    eax = t95;
    COW_AT(1017bb65)
    if (eax != 2u) goto L_1017bb70;
L_1017bb6a: ;
    COW_AT(1017bb6a)
    wr32(self + 0x394a4u, 0u);
L_1017bb70: ;
    COW_AT(1017bb70)
    wr32(self + 0x39118u, 0u);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, COW_IMG(0x10177fa0u), self, 0);
    COW_AT(1017bb7d)
    wr32(sp0 - 0x124u, 1u);
    t96 = rd32(self + 0x394a8u);
    wr32(sp0 - 0x128u, t96);
    t97 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t97);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t97) + 0xb8u), rd32(t97), 3, t97, t96, 1u);
    COW_AT(1017bb97)
    wr32(sp0 - 0x124u, 1u);
    t98 = rd32(self + 0x394b0u);
    wr32(sp0 - 0x128u, t98);
    t99 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t99);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t99) + 0xb8u), rd32(t99), 3, t99, t98, 1u);
    COW_AT(1017bbb0)
    wr32(sp0 - 0x124u, 1u);
    t100 = rd32(self + 0x394b4u);
    wr32(sp0 - 0x128u, t100);
    t101 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t101);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t101) + 0xb8u), rd32(t101), 3, t101, t100, 1u);
    COW_AT(1017bbc9)
    wr32(sp0 - 0x124u, 1u);
    t102 = rd32(self + 0x394b8u);
    wr32(sp0 - 0x128u, t102);
    t103 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t103);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t103) + 0xb8u), rd32(t103), 3, t103, t102, 1u);
    COW_AT(1017bbe2)
    wr32(sp0 - 0x124u, 1u);
    t104 = rd32(self + 0x394bcu);
    wr32(sp0 - 0x128u, t104);
    t105 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t105);
    g->edx = t104;
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t105) + 0xb8u), rd32(t105), 3, t105, t104, 1u);
    t106 = g->edx;
    edx = t106;
    COW_AT(1017bbfb)
    if (rd32(self + 0x394a4u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    COW_AT(1017bc19)
        wr32(sp0 - 0x124u, 0u);
        wr32(sp0 - 0x128u, 5u);
        loc_124 = 0u;
        loc_128 = 5u;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    COW_AT(1017bc0f)
        wr32(sp0 - 0x124u, 1u);
        t107 = rd32(self + 0x394acu);
        wr32(sp0 - 0x128u, t107);
        edx = t107;
        loc_124 = 1u;
        loc_128 = t107;
    }
    COW_AT(1017bc1c)
    wr32(sp0 - 0x12cu, eax);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(ecx + 0xb8u), ecx, 3, eax, loc_128, loc_124);
    COW_AT(1017bc23)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 6u);
    t108 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t108);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t108) + 0xb8u), rd32(t108), 3, t108, 6u, 0u);
    COW_AT(1017bc38)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 7u);
    t109 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t109);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t110 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t109) + 0xb8u), rd32(t109), 3, t109, 7u, 0u);
    t111 = g->edx;
    edx = t111;
    COW_AT(1017bc4d)
    edi = self + 0x39180u;
    eax = 0u;
    ecx = 0x1au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = self + 0x39260u;
    ecx = 0x1au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = self + 0x39340u;
    ecx = 0x1au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(self + 0x394a4u) == 0u)
    {
    COW_AT(1017bcdb)
        wr32(sp0 - 0x124u, 0u);
        wr32(sp0 - 0x128u, 0u);
        wr32(sp0 - 0x12cu, self + 0x39180u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t116 = cow_thiscall(g, COW_IMG(0x1018b9a0u), rd32(COW_IMG(0x1065cb04u)), 3, self + 0x39180u, 0u, 0u);
        t117 = g->edx;
        eax = t116;
        edx = t117;
    COW_AT(1017bce9)
        wr32(sp0 - 0x124u, self + 0x39180u);
        t118 = rd32(self + 0x394a8u);
        wr32(sp0 - 0x128u, t118);
        loc_124 = self + 0x39180u;
        loc_128 = t118;
    }
    else
    {
    COW_AT(1017bc80)
        edi = self + 0x391e8u;
        eax = 0u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        edi = self + 0x392c8u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        edi = self + 0x393a8u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x124u, self + 0x391e8u);
        wr32(sp0 - 0x128u, self + 0x39180u);
        g->eax = eax;
        g->esp = sp0 - 0x120u;
        t112 = cow_thiscall(g, COW_IMG(0x10188b70u), rd32(COW_IMG(0x1065cb04u)), 2, self + 0x39180u, self + 0x391e8u);
        eax = t112;
    COW_AT(1017bcb8)
        wr32(sp0 - 0x124u, self + 0x39180u);
        t113 = rd32(self + 0x394a8u);
        wr32(sp0 - 0x128u, t113);
        g->edx = t113;
        g->esp = sp0 - 0x120u;
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t113, self + 0x39180u);
        t114 = g->edx;
        edx = t114;
    COW_AT(1017bccb)
        wr32(sp0 - 0x124u, self + 0x391e8u);
        t115 = rd32(self + 0x394acu);
        wr32(sp0 - 0x128u, t115);
        eax = t115;
        loc_124 = self + 0x391e8u;
        loc_128 = t115;
    }
    COW_AT(1017bcf1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t119 = cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, loc_128, loc_124);
    t120 = g->edx;
    eax = t119;
    edx = t120;
    COW_AT(1017bcfc)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0u);
    wr32(sp0 - 0x12cu, self + 0x39250u);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, COW_IMG(0x1018b9e0u), rd32(COW_IMG(0x1065cb04u)), 3, self + 0x39250u, 0u, 0u);
    COW_AT(1017bd10)
    t121 = rd32(self + 0x39250u);
    wr32(sp0 - 0x124u, t121);
    wr32(sp0 - 0x128u, 0x8bu);
    t122 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t122);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t122, 0x8bu, t121);
    COW_AT(1017bd2a)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0u);
    wr32(sp0 - 0x12cu, self + 0x3925cu);
    wr32(sp0 - 0x130u, self + 0x39258u);
    wr32(sp0 - 0x134u, self + 0x39254u);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, COW_IMG(0x1018ba20u), rd32(COW_IMG(0x1065cb04u)), 5, self + 0x39254u, self + 0x39258u, self + 0x3925cu, 0u, 0u);
    COW_AT(1017bd4c)
    if ((int32_t)rd32(self + 0x3949cu) >= 1)
    {
    COW_AT(1017bd59)
        t123 = rd32(self + 0x391c0u);
        wr32(sp0 - 0xf4u, t123);
        t124 = rd32(self + 0x391c4u);
        wr32(sp0 - 0xf0u, t124);
        t125 = rd32(self + 0x391c8u);
        wr32(sp0 - 0xecu, t125);
        wr32(self + 0x39540u, t123);
        wr32(self + 0x394c0u, 0u);
        wr32(self + 0x394c4u, 0u);
        wr32(self + 0x39544u, t124);
        wr32(self + 0x394c8u, 0u);
        wr32(self + 0x394ccu, 0u);
        wr32(self + 0x39548u, t125);
        esi = self + 0x39180u;
        edi = sp0 - 0x68u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x124u, sp0 - 0x68u);
        g->esp = sp0 - 0x120u;
        cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x68u);
    COW_AT(1017bdca)
        t126 = rd32(sp0 - 0x64u);
        t127 = rd32(sp0 - 0x60u);
        t128 = rd32(sp0 - 0x5cu);
        wr32(self + 0x394d0u, t126);
        wr32(self + 0x394d4u, t127);
        wr32(self + 0x394d8u, t128);
        wr32(self + 0x394dcu, 0u);
        wr32(sp0 - 0x124u, self + 0x394e0u);
        g->esp = sp0 - 0x120u;
        cow_thiscall(g, COW_IMG(0x10188fa0u), rd32(COW_IMG(0x1065cb04u)), 1, self + 0x394e0u);
    COW_AT(1017be09)
        t129 = rd32(self + 0x39258u);
        d130 = fr(g, (double)rdf32(self + 0x39258u) - (double)rdf32(self + 0x3925cu));
        wr32(self + 0x394f0u, 0x3f000000u);
        wr32(self + 0x394f4u, 0x3f000000u);
        d131 = fr(g, (double)rdf32(self + 0x3954cu) / d130);
        wr32(self + 0x394f8u, 0x3f000000u);
        wr32(self + 0x394fcu, 0x3f000000u);
        wr32(self + 0x39504u, 0u);
        wr32(self + 0x39508u, t129);
        wr32(self + 0x3950cu, 0u);
        wr32(self + 0x39510u, 0x3f800000u);
        wr32(self + 0x39514u, 0x3f800000u);
        wr32(self + 0x39518u, 0x3f800000u);
        wr32(self + 0x3951cu, 0x3f800000u);
        wr32(sp0 - 0x124u, 6u);
        wr32(sp0 - 0x128u, self + 0x394c0u);
        wr32(sp0 - 0x12cu, 5u);
        wrf32(self + 0x39500u, (float)d131);
        t132 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x130u, t132);
        g->esp = sp0 - 0x120u;
        cow_thiscall(g, rd32(rd32(t132) + 0x13cu), self + 0x394c0u, 4, t132, 5u, self + 0x394c0u, 6u);
    COW_AT(1017be90)
        wr32(self + 0x3945cu, 0u);
        wr32(self + 0x39460u, 0u);
        wr32(self + 0x39464u, 0u);
        wr32(self + 0x39468u, 0u);
    }
    COW_AT(1017bea8)
    t133 = rd32(self + 0x39254u);
    wr32(sp0 - 0x124u, t133);
    wr32(sp0 - 0x128u, 0x22u);
    t134 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t134);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t134) + 0xc8u), rd32(t134), 3, t134, 0x22u, t133);
    COW_AT(1017bec2)
    t135 = rd32(self + 0x3925cu);
    wr32(sp0 - 0x124u, t135);
    wr32(sp0 - 0x128u, 0x24u);
    t136 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t136);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t136) + 0xc8u), rd32(t136), 3, t136, 0x24u, t135);
    COW_AT(1017bedc)
    t137 = rd32(self + 0x39258u);
    wr32(sp0 - 0x124u, t137);
    wr32(sp0 - 0x128u, 0x25u);
    t138 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t138);
    g->edx = t137;
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t138) + 0xc8u), rd32(t138), 3, t138, 0x25u, t137);
    t139 = g->edx;
    edx = t139;
    COW_AT(1017bef6)
    wr32(sp0 - 0x124u, self + 0x38d9cu);
    wr32(sp0 - 0x128u, 2u);
    g->eax = self + 0x38d9cu;
    g->edx = edx;
    t140 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x120u;
    t141 = cow_thiscall(g, COW_IMG(0x1000bdb0u), t140, 2, 2u, self + 0x38d9cu);
    t142 = g->ecx;
    t143 = g->edx;
    eax = t141;
    ecx = t142;
    edx = t143;
    COW_AT(1017bf0a)
    g->eax = eax;
    g->esp = sp0 - 0x120u;
    t144 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    eax = t144;
    COW_AT(1017bf0f)
    esi = eax;
    edi = self + 0x38ddcu;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x124u, self + 0x38ddcu);
    wr32(sp0 - 0x128u, 3u);
    g->eax = eax;
    g->edx = self + 0x38ddcu;
    g->esp = sp0 - 0x120u;
    t145 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 3u, self + 0x38ddcu);
    t146 = g->edx;
    eax = t145;
    edx = t146;
    COW_AT(1017bf2e)
    wr32(sp0 - 0x124u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t147 = cow_thiscall(g, COW_IMG(0x1018b8f0u), rd32(COW_IMG(0x1065cb04u)), 1, 0u);
    t148 = g->edx;
    d149 = cow_take_float(g);
    eax = t147;
    edx = t148;
    x0 = d149;
    COW_AT(1017bf3a)
    wrf32(self + 0x39420u, (float)x0);
    wr32(sp0 - 0x124u, 0u);
    wrf32(self + 0x39424u, (float)fr(g, x0 * x0));
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, COW_IMG(0x101892b0u), rd32(COW_IMG(0x1065cb04u)), 1, 0u);
    d150 = cow_take_float(g);
    x0 = d150;
    COW_AT(1017bf58)
    wrf32(self + 0x39428u, (float)x0);
    t151 = rd32(self + 0x39420u);
    d152 = fr(g, (double)rdf32(COW_IMG(0x1032a698u)) / (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2f0u));
    wr32(sp0 - 0x124u, t151);
    wr32(sp0 - 0x128u, 0x3e4ccccdu);
    wr32(sp0 - 0x12cu, t151);
    t153 = rd32(self + 0x355b4u);
    wrf32(self + 0x355b0u, (float)d152);
    t154 = rd32(self + 0x355b0u);
    d155 = fr(g, d152 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x164u, (float)d155);
    d156 = (double)(float)(double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2f4u);
    wrf32(sp0 - 0x12cu, (float)d156);
    wr32(sp0 - 0x130u, t153);
    wr32(sp0 - 0x134u, t154);
    wr32(sp0 - 0x138u, self + 0x38e5cu);
    g->ecx = self;
    g->esp = sp0 - 0x120u;
    cow_stdcall(g, COW_IMG(0x10182490u), 6, self + 0x38e5cu, t154, t153, cow_f2bits(d156), 0x3e4ccccdu, t151);
    t157 = g->ecx;
    ecx = t157;
    COW_AT(1017bfb9)
    wr32(sp0 - 0x124u, self + 0x38e5cu);
    wr32(sp0 - 0x128u, self + 0x38d9cu);
    wr32(sp0 - 0x12cu, sp0 - 0xa8u);
    g->edx = sp0 - 0xa8u;
    g->esp = sp0 - 0x120u;
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0xa8u, self + 0x38d9cu, self + 0x38e5cu);
    t158 = g->edx;
    edx = t158;
    COW_AT(1017bfcb)
    wr32(sp0 - 0x124u, self + 0x38ddcu);
    wr32(sp0 - 0x128u, self + 0x38d9cu);
    esi = sp0 - 0xa8u;
    edi = self + 0x38fdcu;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x12cu, sp0 - 0xa8u);
    g->esp = sp0 - 0x120u;
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0xa8u, self + 0x38d9cu, self + 0x38ddcu);
    COW_AT(1017bff7)
    wr32(sp0 - 0x124u, sp0 - 0xe8u);
    d159 = (double)rdf32(self + 0x168u);
    esi = sp0 - 0xa8u;
    edi = self + 0x38f5cu;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wrf32(sp0 - 0xd4u, (float)(double)(float)-d159);
    wr32(sp0 - 0x128u, self + 0x38f5cu);
    wr32(sp0 - 0xe4u, 0u);
    wr32(sp0 - 0x12cu, sp0 - 0xa8u);
    wr32(sp0 - 0xe0u, 0u);
    wr32(sp0 - 0xdcu, 0u);
    wr32(sp0 - 0xd8u, 0u);
    wr32(sp0 - 0xd0u, 0u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc0u, 0x3f800000u);
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xacu, 0x3f800000u);
    t160 = rd32(self + 0x164u);
    wr32(sp0 - 0xe8u, t160);
    g->esp = sp0 - 0x120u;
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0xa8u, self + 0x38f5cu, sp0 - 0xe8u);
    COW_AT(1017c0a6)
    esi = sp0 - 0xa8u;
    edi = self + 0x38f9cu;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x124u, self + 0x3913cu);
    t161 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x128u, t161);
    g->eax = t161;
    g->edx = rd32(t161);
    t162 = rd32(t161);
    g->esp = sp0 - 0x120u;
    t163 = cow_thiscall(g, rd32(t162 + 0xa8u), self + 0x3913cu, 2, t161, self + 0x3913cu);
    t164 = g->ecx;
    t165 = g->edx;
    eax = t163;
    ecx = t164;
    edx = t165;
    COW_AT(1017c0d0)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x120u;
    t166 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t167 = g->ecx;
    eax = t166;
    ecx = t167;
    COW_AT(1017c0d5)
    wr32(sp0 - 0x124u, eax + 0x44u);
    wr32(sp0 - 0x128u, self + 0x390f0u);
    g->esp = sp0 - 0x120u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x390f0u, eax + 0x44u);
    COW_AT(1017c0e5)
    t168 = rd32(self + 0x3912cu);
    wr32(self + 0x3911cu, 0u);
    wr32(self + 0x3944cu, 0u);
    wr32(self + 0x39448u, 0u);
    wr32(self + 0x3942cu, 0u);
    wr32(self + 0x39430u, 0u);
    wr32(self + 0x39134u, 0xffffffffu);
    wr32(self + 0x38d40u, 0u);
    wr32(sp0 - 0x100u, t168);
    wr32(sp0 - 0x108u, self + 0x98u);
    wr32(sp0 - 0xfcu, 2u);
    esi = self + 0x98u;
    loc_100 = t168;
    loc_108 = self + 0x98u;
    loc_fc = 2u;
L_1017c134: ;
    COW_AT(1017c134)
    wr32(self + 0x39138u, 0xffffffffu);
    t169 = rd32(esi - 0x38u);
    wr32(sp0 - 0xf8u, t169);
    if (rd32(esi - 0x38u) == 0u)
    {
        edi = 0xffffffffu;
    }
    else
    {
        loc_f8 = t169;
    COW_AT(1017c14c)
        wr32(self + 0x39100u, 0u);
        wr32(self + 0x39104u, 0u);
        wr32(self + 0x39108u, 0u);
        wr32(self + 0x3910cu, 0u);
        wr32(self + 0x3945cu, 0u);
        wr32(self + 0x39460u, 0u);
        wr32(self + 0x39464u, 0u);
        wr32(self + 0x39468u, 0u);
        wr32(sp0 - 0x124u, 0u);
        t170 = rd32(self + 0x394b0u);
        wr32(sp0 - 0x128u, t170);
        t171 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x12cu, t171);
        g->esp = sp0 - 0x120u;
        cow_thiscall(g, rd32(rd32(t171) + 0xb8u), rd32(t171), 3, t171, t170, 0u);
    COW_AT(1017c196)
        wr32(sp0 - 0x124u, 0u);
        t172 = rd32(self + 0x394b4u);
        wr32(sp0 - 0x128u, t172);
        t173 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x12cu, t173);
        g->esp = sp0 - 0x120u;
        cow_thiscall(g, rd32(rd32(t173) + 0xb8u), rd32(t173), 3, t173, t172, 0u);
    COW_AT(1017c1af)
        wr32(sp0 - 0x124u, 0u);
        t174 = rd32(self + 0x394b8u);
        wr32(sp0 - 0x128u, t174);
        t175 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x12cu, t175);
        g->esp = sp0 - 0x120u;
        cow_thiscall(g, rd32(rd32(t175) + 0xb8u), rd32(t175), 3, t175, t174, 0u);
    COW_AT(1017c1c8)
        wr32(sp0 - 0x124u, 0u);
        t176 = rd32(self + 0x394bcu);
        wr32(sp0 - 0x128u, t176);
        t177 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x12cu, t177);
        g->edx = t176;
        g->esp = sp0 - 0x120u;
        cow_thiscall(g, rd32(rd32(t177) + 0xb8u), rd32(t177), 3, t177, t176, 0u);
        t178 = g->edx;
        edx = t178;
    COW_AT(1017c1e1)
        wr32(sp0 - 0x124u, 3u);
        wr32(sp0 - 0x128u, 0x16u);
        t179 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x12cu, t179);
        g->esp = sp0 - 0x120u;
        cow_thiscall(g, rd32(rd32(t179) + 0xc8u), rd32(t179), 3, t179, 0x16u, 3u);
    COW_AT(1017c1f6)
        wr32(self + 0x39120u, 0u);
        wr32(self + 0x390fcu, 0u);
        wr32(sp0 - 0x124u, 0u);
        wr32(sp0 - 0x128u, 0x8fu);
        t180 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x12cu, t180);
        g->esp = sp0 - 0x120u;
        cow_thiscall(g, rd32(rd32(t180) + 0xc8u), rd32(t180), 3, t180, 0x8fu, 0u);
    COW_AT(1017c21a)
        t181 = rd32(sp0 - 0xf8u);
        wr32(self + 0x39118u, 0u);
        wr32(self + 0x39110u, 0xffffffffu);
        t182 = rd32(esi + 0x2cu);
        wr32(sp0 - 0x104u, t182);
        wr32(sp0 - 0x10cu, 0u);
        if (t181 != 3u)
        {
            edx = t182;
            edi = 0u;
            loc_104 = t182;
        }
        else
        {
            edx = t182;
            loc_104 = t182;
    COW_AT(1017c23c)
            if (rd32(self + 0x158u) == 0u)
            {
                edi = 0u;
            }
            else
            {
    COW_AT(1017c244)
                wr32(sp0 - 0x124u, self + 0x38d9cu);
                wr32(sp0 - 0x128u, self + 0x38e1cu);
                wr32(sp0 - 0x12cu, sp0 - 0xa8u);
                wr32(sp0 - 0x10cu, 1u);
                g->esp = sp0 - 0x120u;
                cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0xa8u, self + 0x38e1cu, self + 0x38d9cu);
    COW_AT(1017c264)
                esi = sp0 - 0xa8u;
                edi = self + 0x38edcu;
                ecx = 0x10u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(sp0 - 0x124u, self + 0x38e5cu);
                wr32(sp0 - 0x128u, self + 0x38edcu);
                wr32(sp0 - 0x12cu, sp0 - 0x68u);
                g->edx = sp0 - 0x68u;
                g->esp = sp0 - 0x120u;
                cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x68u, self + 0x38edcu, self + 0x38e5cu);
                t183 = g->edx;
                edx = t183;
    COW_AT(1017c28c)
                esi = sp0 - 0x68u;
                edi = self + 0x38edcu;
                ecx = 0x10u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                esi = rd32(sp0 - 0x108u);
                edi = rd32(sp0 - 0x10cu);
                loc_104 = rd32(sp0 - 0x104u);
            }
        }
    COW_AT(1017c2a8)
        if (rd32(sp0 - 0x100u) == 0u) goto L_1017c385;
        eax = rd32(sp0 - 0x100u);
    COW_AT(1017c2b4)
        if (rd32(esi - 4u) == 0u) goto L_1017c385;
    COW_AT(1017c2bd)
        wr32(sp0 - 0x10cu, 0u);
        t184 = rd32(self + 0x3944cu) | 1u;
        wr32(self + 0x3944cu, t184);
        if ((int32_t)rd32(eax) <= 0)
        {
            edx = t184;
            goto L_1017c37c;
        }
        ecx = rd32(eax);
        edx = t184;
        esi = eax + 4u;
        loc_10c = 0u;
L_1017c2dd: ;
    COW_AT(1017c2dd)
        if (rd8(rd32(esi) + 8u) != 1u)
        {
            eax = rd32(esi);
            ecx = (ecx & 0xffffff00u) | rd8(rd32(esi) + 8u);
    COW_AT(1017c2e7)
            if ((uint8_t)ecx != 0u)
            {
    COW_AT(1017c2eb)
                if (rd8(eax + 0xfu) == 0u)
                {
    COW_AT(1017c33d)
                    wr32(sp0 - 0x124u, edi);
                    wr32(sp0 - 0x128u, eax);
                    if (rd32(self + 0x3949cu) != 2u)
                    {
                        loc_128 = eax;
                        loc_124 = edi;
    COW_AT(1017c358)
                        wr32(sp0 - 0x12cu, loc_104);
                        g->esp = sp0 - 0x120u;
                        cow_thiscall(g, COW_IMG(0x1017c9c0u), self, 3, loc_104, loc_128, loc_124);
                        loc_104 = rd32(sp0 - 0x104u);
                        loc_10c = rd32(sp0 - 0x10cu);
                    }
                    else
                    {
                        loc_128 = eax;
                        loc_124 = edi;
    COW_AT(1017c34c)
                        wr32(sp0 - 0x12cu, loc_104);
                        g->ebx = 0u;
                        g->esp = sp0 - 0x120u;
                        cow_thiscall(g, COW_IMG(0x1017de20u), self, 3, loc_104, loc_128, loc_124);
    COW_AT(1017c356)
                        loc_104 = rd32(sp0 - 0x104u);
                        loc_10c = rd32(sp0 - 0x10cu);
                    }
                }
                else
                {
    COW_AT(1017c2f0)
                    if ((int32_t)rd32(self + 0x38d40u) < 512)
                    {
                        ecx = rd32(self + 0x38d40u);
    COW_AT(1017c2fe)
                        wr32(ecx * 0xcu + self + 0x37540u, eax);
                        wr32(self + rd32(self + 0x38d40u) * 0xcu + 0x37544u, loc_104);
                        wr32(self + rd32(self + 0x38d40u) * 0xcu + 0x37548u, edi);
                        t185 = rd32(self + 0x38d40u) + 1u;
                        wr32(self + 0x38d40u, t185);
                    }
                }
            }
        }
    COW_AT(1017c362)
        wr32(sp0 - 0x10cu, loc_10c + 1u);
        if ((int32_t)(loc_10c + 1u) < (int32_t)rd32(rd32(sp0 - 0x100u)))
        {
            ecx = rd32(sp0 - 0x100u);
            edx = rd32(rd32(sp0 - 0x100u));
            esi = esi + 4u;
            loc_10c = loc_10c + 1u;
            goto L_1017c2dd;
        }
        edx = rd32(rd32(sp0 - 0x100u));
L_1017c37c: ;
    COW_AT(1017c37c)
        wr32(sp0 - 0x100u, 0u);
        loc_100 = 0u;
L_1017c47d: ;
    COW_AT(1017c47d)
        if (rd32(self + 0x3949cu) != 2u)
        {
            eax = rd32(self + 0x38d40u);
    COW_AT(1017c4bc)
            if ((int32_t)eax <= 0)
            {
                edi = 0u;
                goto L_1017c4e0;
            }
            esi = self + 0x37540u;
            edi = 0u;
L_1017c4c0: ;
    COW_AT(1017c4c0)
            t192 = rd32(esi + 8u);
            wr32(sp0 - 0x124u, t192);
            wr32(sp0 - 0x128u, rd32(esi));
            t193 = rd32(esi + 4u);
            wr32(sp0 - 0x12cu, t193);
            g->edx = t192;
            g->esp = sp0 - 0x120u;
            cow_thiscall(g, COW_IMG(0x1017c9c0u), self, 3, t193, rd32(esi), t192);
            t194 = g->edx;
            edx = t194;
    COW_AT(1017c4d2)
            if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x38d40u))
            {
                esi = esi + 0xcu;
                edi = edi + 1u;
                loc_100 = rd32(sp0 - 0x100u);
                goto L_1017c4c0;
            }
            edi = edi + 1u;
            loc_100 = rd32(sp0 - 0x100u);
        }
        else
        {
            eax = rd32(self + 0x38d40u);
    COW_AT(1017c496)
            if ((int32_t)eax <= 0)
            {
                edi = 0u;
                goto L_1017c4e0;
            }
            esi = self + 0x37540u;
            edi = 0u;
L_1017c49a: ;
    COW_AT(1017c49a)
            t189 = rd32(esi + 8u);
            wr32(sp0 - 0x124u, t189);
            wr32(sp0 - 0x128u, rd32(esi));
            t190 = rd32(esi + 4u);
            wr32(sp0 - 0x12cu, t190);
            g->ebx = 0u;
            g->edx = t189;
            g->esp = sp0 - 0x120u;
            cow_thiscall(g, COW_IMG(0x1017de20u), self, 3, t190, rd32(esi), t189);
            t191 = g->edx;
            edx = t191;
    COW_AT(1017c4ac)
            if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x38d40u))
            {
                esi = esi + 0xcu;
                edi = edi + 1u;
                loc_100 = rd32(sp0 - 0x100u);
                goto L_1017c49a;
            }
            edi = edi + 1u;
    COW_AT(1017c4ba)
            loc_100 = rd32(sp0 - 0x100u);
        }
L_1017c4e0: ;
    COW_AT(1017c4e0)
        if (rd32(self + 0x3949cu) == 1u)
        {
    COW_AT(1017c4e9)
            wr32(sp0 - 0x124u, 0u);
            t195 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x128u, t195);
            g->edx = rd32(COW_IMG(0x1045666cu));
            t196 = rd32(COW_IMG(0x1045666cu));
            g->esp = sp0 - 0x120u;
            cow_thiscall(g, rd32(rd32(t195) + 0x160u), rd32(t195), 2, t195, 0u);
            t197 = g->edx;
            edx = t197;
            loc_100 = rd32(sp0 - 0x100u);
        }
    COW_AT(1017c4fc)
        if (rd32(self + 0x39114u) != 0u)
        {
    COW_AT(1017c504)
            wr32(sp0 - 0x124u, 0u);
            wr32(sp0 - 0x128u, 0x1bu);
            t198 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x12cu, t198);
            g->esp = sp0 - 0x120u;
            cow_thiscall(g, rd32(rd32(t198) + 0xc8u), rd32(t198), 3, t198, 0x1bu, 0u);
    COW_AT(1017c519)
            wr32(sp0 - 0x124u, 1u);
            wr32(sp0 - 0x128u, 0xeu);
            t199 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x12cu, t199);
            g->esp = sp0 - 0x120u;
            cow_thiscall(g, rd32(rd32(t199) + 0xc8u), rd32(t199), 3, t199, 0xeu, 1u);
    COW_AT(1017c52f)
            wr32(sp0 - 0x124u, rd32(COW_IMG(0x10632038u)));
            wr32(sp0 - 0x128u, 0x2fu);
            t200 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x12cu, t200);
            g->edx = rd32(COW_IMG(0x10632038u));
            t201 = rd32(COW_IMG(0x10632038u));
            g->esp = sp0 - 0x120u;
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t200, 0x2fu, t201);
            t202 = g->edx;
            edx = t202;
            loc_100 = rd32(sp0 - 0x100u);
        }
    COW_AT(1017c54a)
        if (rd32(rd32(sp0 - 0x108u) + 4u) == 0u)
        {
            loc_108 = rd32(sp0 - 0x108u);
            loc_fc = rd32(sp0 - 0xfcu);
        }
        else
        {
            eax = rd32(sp0 - 0x108u);
    COW_AT(1017c553)
            wr32(sp0 - 0x124u, eax - 0x38u);
            g->esp = sp0 - 0x120u;
            cow_fastcall(g, COW_IMG(0x1017ade0u), self, edx, 1, eax - 0x38u);
            loc_100 = rd32(sp0 - 0x100u);
            loc_108 = rd32(sp0 - 0x108u);
            loc_fc = rd32(sp0 - 0xfcu);
        }
    }
    COW_AT(1017c560)
    wr32(sp0 - 0x108u, loc_108 + 0x78u);
    wr32(sp0 - 0xfcu, loc_fc - 1u);
    if (loc_fc != 1u)
    {
        esi = loc_108 + 0x78u;
        loc_108 = loc_108 + 0x78u;
        loc_fc = loc_fc - 1u;
        goto L_1017c134;
    }
    COW_AT(1017c57a)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0x16u);
    t203 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t203);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t203) + 0xc8u), rd32(t203), 3, t203, 0x16u, 1u);
    COW_AT(1017c590)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0xfu);
    t204 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t204);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t204) + 0xc8u), rd32(t204), 3, t204, 0xfu, 1u);
    COW_AT(1017c5a6)
    wr32(sp0 - 0x124u, 8u);
    wr32(sp0 - 0x128u, 0x19u);
    t205 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t205);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t205) + 0xc8u), rd32(t205), 3, t205, 0x19u, 8u);
    COW_AT(1017c5bc)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0x12u);
    wr32(sp0 - 0x12cu, 0u);
    t206 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t206);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t206) + 0xfcu), rd32(t206), 4, t206, 0u, 0x12u, 0u);
    COW_AT(1017c5d2)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0u);
    t207 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t207);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t207) + 0xb8u), rd32(t207), 3, t207, 0u, 0u);
    COW_AT(1017c5e6)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 1u);
    t208 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t208);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t208) + 0xb8u), rd32(t208), 3, t208, 1u, 0u);
    COW_AT(1017c5fb)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 2u);
    t209 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t209);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t209) + 0xb8u), rd32(t209), 3, t209, 2u, 0u);
    COW_AT(1017c610)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 3u);
    t210 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t210);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t210) + 0xb8u), rd32(t210), 3, t210, 3u, 0u);
    COW_AT(1017c625)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 4u);
    t211 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t211);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t211) + 0xb8u), rd32(t211), 3, t211, 4u, 0u);
    COW_AT(1017c63a)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 5u);
    t212 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t212);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t212) + 0xb8u), rd32(t212), 3, t212, 5u, 0u);
    COW_AT(1017c64f)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 6u);
    t213 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t213);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t213) + 0xb8u), rd32(t213), 3, t213, 6u, 0u);
    COW_AT(1017c664)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 7u);
    t214 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t214);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xb8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t214, 7u, 0u);
    COW_AT(1017c679)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0x1bu);
    t215 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t215);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t215) + 0xc8u), rd32(t215), 3, t215, 0x1bu, 0u);
    COW_AT(1017c68e)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0xeu);
    t216 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t216);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t216) + 0xc8u), rd32(t216), 3, t216, 0xeu, 1u);
    COW_AT(1017c6a4)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0xfu);
    t217 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t217);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t217) + 0xc8u), rd32(t217), 3, t217, 0xfu, 1u);
    COW_AT(1017c6ba)
    wr32(sp0 - 0x124u, 8u);
    wr32(sp0 - 0x128u, 0x19u);
    t218 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t218);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t218) + 0xc8u), rd32(t218), 3, t218, 0x19u, 8u);
    COW_AT(1017c6d0)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0x89u);
    t219 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t219);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t219) + 0xc8u), rd32(t219), 3, t219, 0x89u, 1u);
    COW_AT(1017c6e9)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0x1cu);
    t220 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t220);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t220) + 0xc8u), rd32(t220), 3, t220, 0x1cu, 0u);
    COW_AT(1017c6fe)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0x30u);
    t221 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t221);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t221) + 0xc8u), rd32(t221), 3, t221, 0x30u, 0u);
    COW_AT(1017c713)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0x8fu);
    t222 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t222);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t222) + 0xc8u), rd32(t222), 3, t222, 0x8fu, 0u);
    COW_AT(1017c72b)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0x16u);
    t223 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t223);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t223) + 0xc8u), rd32(t223), 3, t223, 0x16u, 1u);
    COW_AT(1017c741)
    if (rd32(self + 0x3949cu) == 1u)
    {
    COW_AT(1017c74a)
        wr32(sp0 - 0x124u, 0u);
        t224 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x128u, t224);
        g->esp = sp0 - 0x120u;
        cow_thiscall(g, rd32(rd32(t224) + 0x160u), rd32(t224), 2, t224, 0u);
    }
    COW_AT(1017c75d)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 0x1cu);
    wr32(sp0 - 0x12cu, 0u);
    t225 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t225);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t225) + 0xfcu), rd32(t225), 4, t225, 0u, 0x1cu, 1u);
    COW_AT(1017c774)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 4u);
    wr32(sp0 - 0x12cu, 1u);
    t226 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t226);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t226) + 0xfcu), rd32(t226), 4, t226, 1u, 4u, 1u);
    COW_AT(1017c78c)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 1u);
    wr32(sp0 - 0x12cu, 1u);
    t227 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t227);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t227) + 0xfcu), rd32(t227), 4, t227, 1u, 1u, 1u);
    COW_AT(1017c7a4)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 4u);
    wr32(sp0 - 0x12cu, 2u);
    t228 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t228);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t228) + 0xfcu), rd32(t228), 4, t228, 2u, 4u, 1u);
    COW_AT(1017c7bc)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 1u);
    wr32(sp0 - 0x12cu, 2u);
    t229 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t229);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t229) + 0xfcu), rd32(t229), 4, t229, 2u, 1u, 1u);
    COW_AT(1017c7d4)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 4u);
    wr32(sp0 - 0x12cu, 3u);
    t230 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t230);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t230) + 0xfcu), rd32(t230), 4, t230, 3u, 4u, 1u);
    COW_AT(1017c7ec)
    wr32(sp0 - 0x124u, 1u);
    wr32(sp0 - 0x128u, 1u);
    wr32(sp0 - 0x12cu, 3u);
    t231 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t231);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t231) + 0xfcu), rd32(t231), 4, t231, 3u, 1u, 1u);
    COW_AT(1017c804)
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    return;
L_1017ba5a: ;
    COW_AT(1017ba5a)
    if (rd8(eax + 0x92du) == 0u) goto L_1017bae1;
    COW_AT(1017ba62)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0x8cu);
    t76 = rd32(eax + 0xcu);
    wr32(sp0 - 0x12cu, t76);
    g->edx = rd32(t76);
    t77 = rd32(t76);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(t77 + 0xc8u), ecx, 3, t76, 0x8cu, 0u);
    t78 = g->edx;
    edx = t78;
    COW_AT(1017ba74)
    wr32(sp0 - 0x124u, 3u);
    wr32(sp0 - 0x128u, 0x23u);
    t79 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x12cu, t79);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t79) + 0xc8u), rd32(t79), 3, t79, 0x23u, 3u);
    COW_AT(1017ba89)
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    edx = rd32(COW_IMG(0x1045666cu));
L_1017ba92: ;
    COW_AT(1017ba92)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0x30u);
    wr32(sp0 - 0x12cu, eax);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x30u, 0u);
    goto L_1017ba9e;
L_1017bae1: ;
    COW_AT(1017bae1)
    if (rd8(eax + 0x92eu) == 0u) goto L_1017ba9e;
    COW_AT(1017bae9)
    wr32(sp0 - 0x124u, 3u);
    wr32(sp0 - 0x128u, 0x8cu);
    t80 = rd32(eax + 0xcu);
    wr32(sp0 - 0x12cu, t80);
    g->edx = rd32(t80);
    t81 = rd32(t80);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(t81 + 0xc8u), ecx, 3, t80, 0x8cu, 3u);
    t82 = g->edx;
    edx = t82;
    COW_AT(1017bafc)
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    goto L_1017ba2e;
L_1017bb09: ;
    COW_AT(1017bb09)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0x12u);
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x130u, eax);
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 4, eax, 0u, 0x12u, 0u);
    COW_AT(1017bb14)
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0x12u);
    wr32(sp0 - 0x12cu, 1u);
    t89 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x130u, t89);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t90 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, rd32(rd32(t89) + 0xfcu), rd32(t89), 4, t89, 1u, 0x12u, 0u);
    t91 = g->edx;
    edx = t91;
    COW_AT(1017bb2a)
    if (rd32(self + 0x3949cu) != 1u) goto L_1017bb49;
    COW_AT(1017bb32)
    wr32(sp0 - 0x124u, 0u);
    loc_124 = 0u;
    goto L_1017bb33;
L_1017c385: ;
    COW_AT(1017c385)
    if (rd32(esi) == 0u)
    {
    COW_AT(1017c3cb)
        wr32(sp0 - 0x10cu, 0u);
        if ((int32_t)rd32(rd32(sp0 - 0x108u) - 0x14u) <= 0)
        {
            loc_100 = rd32(sp0 - 0x100u);
            goto L_1017c47d;
        }
        esi = rd32(rd32(sp0 - 0x108u) - 0x10u);
        loc_10c = 0u;
L_1017c3e1: ;
    COW_AT(1017c3e1)
        if (rd8(esi + 8u) > 1u)
        {
    COW_AT(1017c3e7)
            if (rd8(esi + 0xfu) == 0u)
            {
    COW_AT(1017c438)
                wr32(sp0 - 0x124u, edi);
                wr32(sp0 - 0x128u, esi);
                if (rd32(self + 0x3949cu) != 2u)
                {
                    eax = rd32(self + 0x3949cu);
                    loc_128 = esi;
                    loc_124 = edi;
    COW_AT(1017c453)
                    wr32(sp0 - 0x12cu, loc_104);
                    g->esp = sp0 - 0x120u;
                    cow_thiscall(g, COW_IMG(0x1017c9c0u), self, 3, loc_104, loc_128, loc_124);
                    loc_104 = rd32(sp0 - 0x104u);
                    loc_10c = rd32(sp0 - 0x10cu);
                }
                else
                {
                    eax = rd32(self + 0x3949cu);
                    loc_128 = esi;
                    loc_124 = edi;
    COW_AT(1017c445)
                    wr32(sp0 - 0x12cu, loc_104);
                    g->ebx = 0u;
                    g->esp = sp0 - 0x120u;
                    cow_thiscall(g, COW_IMG(0x1017de20u), self, 3, loc_104, loc_128, loc_124);
    COW_AT(1017c451)
                    loc_104 = rd32(sp0 - 0x104u);
                    loc_10c = rd32(sp0 - 0x10cu);
                }
            }
            else
            {
    COW_AT(1017c3ec)
                if ((int32_t)rd32(self + 0x38d40u) < 512)
                {
                    eax = rd32(self + 0x38d40u);
    COW_AT(1017c3f9)
                    wr32(eax * 0xcu + self + 0x37540u, esi);
                    wr32(self + rd32(self + 0x38d40u) * 0xcu + 0x37544u, loc_104);
                    wr32(self + rd32(self + 0x38d40u) * 0xcu + 0x37548u, edi);
                    t188 = rd32(self + 0x38d40u) + 1u;
                    wr32(self + 0x38d40u, t188);
                }
            }
        }
    COW_AT(1017c45f)
        wr32(sp0 - 0x10cu, loc_10c + 1u);
        if ((int32_t)(loc_10c + 1u) < (int32_t)rd32(rd32(sp0 - 0x108u) - 0x14u))
        {
            edx = rd32(rd32(sp0 - 0x108u) - 0x14u);
            esi = esi + 0x16cu;
            loc_10c = loc_10c + 1u;
            goto L_1017c3e1;
        }
        edx = rd32(rd32(sp0 - 0x108u) - 0x14u);
        loc_100 = rd32(sp0 - 0x100u);
    }
    else
    {
    COW_AT(1017c389)
        wr32(sp0 - 0x10cu, 4u);
        t186 = (rd32(self + 0x3944cu) & 0xffffff00u) | (uint8_t)(rd32(self + 0x3944cu) | 2u);
        wr32(self + 0x3944cu, t186);
        esi = rd32(esi) + 0x68u;
        loc_10c = 4u;
L_1017c3a4: ;
    COW_AT(1017c3a4)
        if (rd32(esi) != 0u)
        {
            eax = rd32(esi);
    COW_AT(1017c3aa)
            wr32(sp0 - 0x124u, edi);
            wr32(sp0 - 0x128u, eax);
            wr32(sp0 - 0x12cu, loc_104);
            g->edx = loc_104;
            g->esp = sp0 - 0x120u;
            cow_call_regs(g, COW_IMG(0x1017c8b0u), eax, self, g->edx, 0, 3, loc_104, eax, edi);
            t187 = g->edx;
            edx = t187;
            loc_104 = rd32(sp0 - 0x104u);
            loc_10c = rd32(sp0 - 0x10cu);
        }
    COW_AT(1017c3b8)
        wr32(sp0 - 0x10cu, loc_10c - 1u);
        if (loc_10c != 1u)
        {
            esi = esi + 4u;
            loc_10c = loc_10c - 1u;
            goto L_1017c3a4;
        }
    COW_AT(1017c3c6)
        loc_100 = rd32(sp0 - 0x100u);
    }
    goto L_1017c47d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1017b510(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1017b531u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017b54au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b55fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b574u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b589u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b59eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b5b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b5c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b5f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b604u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b609u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b61bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b620u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b625u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b630u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b64bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b660u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b677u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b68du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b6a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b6bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b6d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b6e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b6ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b717u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b72fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b747u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b75fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b777u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b78fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b7a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b7b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b7cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b7e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b7fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b811u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b829u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b83fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b854u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b86cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b882u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b898u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b8aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b8c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b8dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b8f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b908u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b91fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b935u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b94cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b963u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b979u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b98fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b9a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b9bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b9d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b9d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b9e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38d94u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b9f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017b9f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba25u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017ba9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bab2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017babeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bad5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017baddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bae1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bae9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bafcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bb09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bb14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bb2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bb32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bb33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x124u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bb49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bb65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bb6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bb70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bb7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bb97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bbb0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bbc9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bbe2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bbfbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bc0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1017bc19u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bc1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x128u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bc23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bc38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bc4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bc80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017bcb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017bccbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017bcdbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017bce9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017bcf1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x128u;
        g->ebx = 0u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017bcfcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017bd10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x39180u;
        g->edi = self + 0x39250u;
        (void)sp0;
        return 1;
    }
    case 0x1017bd2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017bd4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017bd59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017bdcau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        wr32(sp0 - 0x124u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x1017be09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017be90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bea8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bec2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bedcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bef6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bf0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bf0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bf2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bf3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bf58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017bfb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x38e5cu;
        (void)sp0;
        return 1;
    }
    case 0x1017bfcbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        wr32(sp0 - 0x12cu, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    case 0x1017bff7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        wr32(sp0 - 0x12cu, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    case 0x1017c0a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        wr32(sp0 - 0x12cu, sp0 - 0xa8u);
        wr32(sp0 - 0x124u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x1017c0d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        wr32(sp0 - 0x12cu, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    case 0x1017c0d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        wr32(sp0 - 0x12cu, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    case 0x1017c0e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        g->ebx = 0u;
        wr32(sp0 - 0x12cu, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    case 0x1017c134u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_128;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c14cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_128;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1017c196u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1017c1afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1017c1c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1017c1e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1017c1f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1017c21au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1017c23cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c244u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c264u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        wr32(sp0 - 0x12cu, sp0 - 0xa8u);
        wr32(sp0 - 0x10cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1017c28cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        wr32(sp0 - 0x12cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x1017c2a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c2b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c2bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c2ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c2e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c2ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c2f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c2feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c33du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c34cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x128u;
        g->ebx = 0u;
        g->ebp = self;
        (void)sp0;
        return 1;
    }
    case 0x1017c356u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c358u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x128u;
        g->ebx = 0u;
        g->ebp = self;
        (void)sp0;
        return 1;
    }
    case 0x1017c362u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c37cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c385u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c389u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c3a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c3aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c3b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c3c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c3cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c3e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c3e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c3ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c3f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c438u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c445u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x128u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c451u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c453u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x128u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c45fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c47du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c496u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x37540u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c49au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c4acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c4bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c4bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->esi = self + 0x37540u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c4c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c4d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c4e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c4e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c4fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c504u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c519u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c52fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c54au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c553u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c560u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_128;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c57au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_128;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c590u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c5a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c5bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c5d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c5e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c5fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c610u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c625u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c63au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c64fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c664u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c679u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c68eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c6a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c6bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c6d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c6e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c6feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c713u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c72bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c741u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c74au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c75du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017c774u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x1017c78cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x1017c7a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x1017c7bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x1017c7d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x1017c7ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x1017c804u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1017b510(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1017b510(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
