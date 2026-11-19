/* f_0x1017c9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1017c9c0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d127;
    double d129;
    double d13;
    double d14;
    double d15;
    double d156;
    double d158;
    double d16;
    double d17;
    double d172;
    double d173;
    double d174;
    double d175;
    double d176;
    double d18;
    double d2;
    double d20;
    double d21;
    double d219;
    double d22;
    double d23;
    double d3;
    double d4;
    double d5;
    double d56;
    double d57;
    double d58;
    double d59;
    double d6;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d7;
    double d70;
    double d71;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d8;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    double d88;
    double d9;
    double d90;
    double d91;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1ac;
    uint32_t loc_1bc;
    uint32_t loc_1c0;
    double loc_1c0_f;
    uint32_t loc_1c4;
    uint32_t loc_1c8;
    uint32_t loc_1cc;
    uint32_t loc_1d0;
    uint32_t loc_1d4;
    uint32_t loc_1d8;
    uint32_t loc_1dc;
    uint32_t t1;
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
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t128;
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
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t157;
    uint32_t t159;
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
    uint32_t t170;
    uint32_t t171;
    uint32_t t177;
    uint32_t t178;
    uint32_t t179;
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
    uint32_t t210;
    uint32_t t211;
    uint32_t t212;
    uint32_t t213;
    uint32_t t214;
    uint32_t t215;
    uint32_t t216;
    uint32_t t217;
    uint32_t t218;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t68;
    uint32_t t69;
    uint32_t t72;
    uint32_t t80;
    uint32_t t81;
    uint32_t t89;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 492u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1017c9d8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1d4u); in_esi = rd32(sp0 - 0x1d0u); in_ebp = rd32(sp0 - 0x1ccu); in_ebx = rd32(sp0 - 0x1c8u); g->ebp = rd32(sp0 - 0x1ccu); g->ebx = rd32(sp0 - 0x1c8u); g->edi = rd32(sp0 - 0x1d4u); g->esi = rd32(sp0 - 0x1d0u); goto E_1017c9d8;
    case 0x1017c9f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017c9f7;
    case 0x1017caa0u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1c0_f = rdf32(sp0 - 0x1c0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017caa0;
    case 0x1017cab4u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1c0_f = rdf32(sp0 - 0x1c0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017cab4;
    case 0x1017cac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1c0_f = rdf32(sp0 - 0x1c0u); goto E_1017cac7;
    case 0x1017caddu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1d4u); in_esi = rd32(sp0 - 0x1d0u); in_ebp = rd32(sp0 - 0x1ccu); in_ebx = rd32(sp0 - 0x1c8u); g->ebp = rd32(sp0 - 0x1ccu); g->ebx = rd32(sp0 - 0x1c8u); g->edi = rd32(sp0 - 0x1d4u); g->esi = rd32(sp0 - 0x1d0u); goto E_1017cadd;
    case 0x1017cb20u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1d4u); in_esi = rd32(sp0 - 0x1d0u); in_ebp = rd32(sp0 - 0x1ccu); in_ebx = rd32(sp0 - 0x1c8u); loc_1c0_f = rdf32(sp0 - 0x1c0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 0x1ccu); g->ebx = rd32(sp0 - 0x1c8u); g->edi = rd32(sp0 - 0x1d4u); g->esi = rd32(sp0 - 0x1d0u); goto E_1017cb20;
    case 0x1017cb32u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1d4u); in_esi = rd32(sp0 - 0x1d0u); in_ebp = rd32(sp0 - 0x1ccu); in_ebx = rd32(sp0 - 0x1c8u); loc_1c0_f = rdf32(sp0 - 0x1c0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 0x1ccu); g->ebx = rd32(sp0 - 0x1c8u); g->edi = rd32(sp0 - 0x1d4u); g->esi = rd32(sp0 - 0x1d0u); goto E_1017cb32;
    case 0x1017cb45u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1d4u); in_esi = rd32(sp0 - 0x1d0u); in_ebp = rd32(sp0 - 0x1ccu); in_ebx = rd32(sp0 - 0x1c8u); loc_1c0_f = rdf32(sp0 - 0x1c0u); g->ebp = rd32(sp0 - 0x1ccu); g->ebx = rd32(sp0 - 0x1c8u); g->edi = rd32(sp0 - 0x1d4u); g->esi = rd32(sp0 - 0x1d0u); goto E_1017cb45;
    case 0x1017cb53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d4 = rd32(sp0 - 0x1d4u); loc_1d0 = rd32(sp0 - 0x1d0u); loc_1cc = rd32(sp0 - 0x1ccu); loc_1c8 = rd32(sp0 - 0x1c8u); loc_1c0_f = rdf32(sp0 - 0x1c0u); goto E_1017cb53;
    case 0x1017cb5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017cb5a;
    case 0x1017cb62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017cb62;
    case 0x1017cb7cu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017cb7c;
    case 0x1017cb81u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017cb81;
    case 0x1017cb94u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017cb94;
    case 0x1017cb99u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017cb99;
    case 0x1017cb9cu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017cb9c;
    case 0x1017cba8u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cba8;
    case 0x1017cbd0u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cbd0;
    case 0x1017cbdau: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cbda;
    case 0x1017cbe8u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cbe8;
    case 0x1017cbf2u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cbf2;
    case 0x1017cbf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cbf7;
    case 0x1017cc18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017cc18;
    case 0x1017cc2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1017cc2b;
    case 0x1017cc2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cc2d;
    case 0x1017cc47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017cc47;
    case 0x1017cc51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017cc51;
    case 0x1017cc58u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cc58;
    case 0x1017cc6cu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cc6c;
    case 0x1017cc76u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cc76;
    case 0x1017cc84u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cc84;
    case 0x1017cc8eu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cc8e;
    case 0x1017cc93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cc93;
    case 0x1017ccb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017ccb4;
    case 0x1017ccc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1017ccc7;
    case 0x1017ccc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017ccc9;
    case 0x1017cce3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017cce3;
    case 0x1017ccedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017cced;
    case 0x1017ccf4u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017ccf4;
    case 0x1017cd08u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cd08;
    case 0x1017cd12u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cd12;
    case 0x1017cd20u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cd20;
    case 0x1017cd2au: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cd2a;
    case 0x1017cd2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cd2f;
    case 0x1017cd50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017cd50;
    case 0x1017cd63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1017cd63;
    case 0x1017cd65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cd65;
    case 0x1017cd7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017cd7f;
    case 0x1017cd89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017cd89;
    case 0x1017cd90u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cd90;
    case 0x1017cda4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cda4;
    case 0x1017cdaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cdae;
    case 0x1017cdbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cdbc;
    case 0x1017cdc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cdc6;
    case 0x1017cdcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cdcb;
    case 0x1017cdebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017cdeb;
    case 0x1017cdfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017cdfe;
    case 0x1017ce00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017ce00;
    case 0x1017ce1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017ce1b;
    case 0x1017ce25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017ce25;
    case 0x1017ce31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017ce31;
    case 0x1017ce38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017ce38;
    case 0x1017ce51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017ce51;
    case 0x1017ce66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1017ce66;
    case 0x1017ce78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1017ce78;
    case 0x1017ce7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017ce7d;
    case 0x1017ce94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017ce94;
    case 0x1017ce9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017ce9d;
    case 0x1017ceb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017ceb1;
    case 0x1017cebcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cebc;
    case 0x1017cec9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017cec9;
    case 0x1017cf67u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); goto E_1017cf67;
    case 0x1017d00du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d00d;
    case 0x1017d073u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); goto E_1017d073;
    case 0x1017d081u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); goto E_1017d081;
    case 0x1017d11eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d11e;
    case 0x1017d171u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); goto E_1017d171;
    case 0x1017d17fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); goto E_1017d17f;
    case 0x1017d21cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d21c;
    case 0x1017d26eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); goto E_1017d26e;
    case 0x1017d27cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); goto E_1017d27c;
    case 0x1017d319u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d319;
    case 0x1017d35eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); goto E_1017d35e;
    case 0x1017d37bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d37b;
    case 0x1017d37fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d37f;
    case 0x1017d39bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d39b;
    case 0x1017d3b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d3b5;
    case 0x1017d3ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d3ce;
    case 0x1017d3dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d3da;
    case 0x1017d3deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d3de;
    case 0x1017d3e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d3e6;
    case 0x1017d3f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d3f6;
    case 0x1017d411u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d411;
    case 0x1017d41fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d41f;
    case 0x1017d43bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d43b;
    case 0x1017d452u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d452;
    case 0x1017d466u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d466;
    case 0x1017d46eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d46e;
    case 0x1017d489u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d489;
    case 0x1017d4fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d4fb;
    case 0x1017d534u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d534;
    case 0x1017d54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d54e;
    case 0x1017d558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d558;
    case 0x1017d56eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d56e;
    case 0x1017d582u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d582;
    case 0x1017d58du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d58d;
    case 0x1017d597u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d597;
    case 0x1017d5a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1017d5a4;
    case 0x1017d5b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1017d5b7;
    case 0x1017d5c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d5c1;
    case 0x1017d5c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d5c9;
    case 0x1017d5d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d5d1;
    case 0x1017d5dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1017d5dc;
    case 0x1017d5fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d5fc;
    case 0x1017d615u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d615;
    case 0x1017d62fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d62f;
    case 0x1017d645u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d645;
    case 0x1017d650u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d650;
    case 0x1017d65fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d65f;
    case 0x1017d66cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d66c;
    case 0x1017d67au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d67a;
    case 0x1017d6cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d6cd;
    case 0x1017d707u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d707;
    case 0x1017d748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d748;
    case 0x1017d74au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d74a;
    case 0x1017d75du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1017d75d;
    case 0x1017d773u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d773;
    case 0x1017d78cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d78c;
    case 0x1017d7a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d7a9;
    case 0x1017d7c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d7c3;
    case 0x1017d7ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d7dd;
    case 0x1017d7e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d7e6;
    case 0x1017d7f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d7f7;
    case 0x1017d806u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d806;
    case 0x1017d80eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d80e;
    case 0x1017d819u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d819;
    case 0x1017d82eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d82e;
    case 0x1017d84eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d84e;
    case 0x1017d850u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d850;
    case 0x1017d86cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d86c;
    case 0x1017d872u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d872;
    case 0x1017d899u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017d899;
    case 0x1017d8b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d8b7;
    case 0x1017d940u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d940;
    case 0x1017d94du: ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d94d;
    case 0x1017d951u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c4 = rd32(sp0 - 0x1c4u); loc_1c0 = rd32(sp0 - 0x1c0u); goto E_1017d951;
    case 0x1017d961u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d961;
    case 0x1017d970u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d970;
    case 0x1017d985u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d985;
    case 0x1017d989u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d989;
    case 0x1017d98bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d98b;
    case 0x1017d997u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d997;
    case 0x1017d9a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d9a6;
    case 0x1017d9bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d9bb;
    case 0x1017d9bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d9bf;
    case 0x1017d9c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d9c1;
    case 0x1017d9cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017d9ca;
    case 0x1017d9d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d9d4;
    case 0x1017d9e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d9e7;
    case 0x1017d9f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d9f2;
    case 0x1017d9f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d9f5;
    case 0x1017d9f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017d9f8;
    case 0x1017da0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017da0e;
    case 0x1017da26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017da26;
    case 0x1017da2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017da2a;
    case 0x1017da2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017da2e;
    case 0x1017da30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017da30;
    case 0x1017da44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017da44;
    case 0x1017da5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017da5c;
    case 0x1017da5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017da5e;
    case 0x1017da74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017da74;
    case 0x1017da7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017da7b;
    case 0x1017da83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017da83;
    case 0x1017da9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017da9d;
    case 0x1017dab2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dab2;
    case 0x1017dabau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017daba;
    case 0x1017dad1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dad1;
    case 0x1017dae1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dae1;
    case 0x1017daf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017daf8;
    case 0x1017db03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017db03;
    case 0x1017db19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017db19;
    case 0x1017db2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017db2a;
    case 0x1017db35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017db35;
    case 0x1017db4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017db4b;
    case 0x1017db5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017db5a;
    case 0x1017db66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017db66;
    case 0x1017db72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017db72;
    case 0x1017db7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017db7c;
    case 0x1017db88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017db88;
    case 0x1017db9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017db9b;
    case 0x1017db9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017db9f;
    case 0x1017dba1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dba1;
    case 0x1017dbacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dbac;
    case 0x1017dbbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dbbb;
    case 0x1017dbbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dbbf;
    case 0x1017dbc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dbc6;
    case 0x1017dbc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dbc9;
    case 0x1017dbdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017dbde;
    case 0x1017dbe9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017dbe9;
    case 0x1017dbf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017dbf7;
    case 0x1017dc01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017dc01;
    case 0x1017dc08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017dc08;
    case 0x1017dc0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017dc0c;
    case 0x1017dc0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017dc0f;
    case 0x1017dc24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017dc24;
    case 0x1017dc26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dc26;
    case 0x1017dc3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dc3c;
    case 0x1017dc47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dc47;
    case 0x1017dc52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dc52;
    case 0x1017dc60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dc60;
    case 0x1017dc75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dc75;
    case 0x1017dc92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dc92;
    case 0x1017dca5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017dca5;
    case 0x1017dcaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dcaa;
    case 0x1017dcaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dcae;
    case 0x1017dcb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dcb5;
    case 0x1017dcb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dcb9;
    case 0x1017dcbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dcbc;
    case 0x1017dcd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017dcd1;
    case 0x1017dcd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dcd3;
    case 0x1017dce8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dce8;
    case 0x1017dcf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dcf2;
    case 0x1017dd07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017dd07;
    case 0x1017dd13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017dd13;
    case 0x1017dd29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dd29;
    case 0x1017dd45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dd45;
    case 0x1017dd5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dd5f;
    case 0x1017dd7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017dd7a;
    case 0x1017dd7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dd7c;
    case 0x1017dd83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017dd83;
    case 0x1017dd9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1017dd9b;
    case 0x1017ddb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017ddb0;
    case 0x1017ddb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_1017ddb4;
    case 0x1017ddbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017ddba;
    case 0x1017ddcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1017ddcb;
    case 0x1017dde4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1c0 = rd32(sp0 - 0x1c0u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017dde4;
    case 0x1017ddffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); loc_1d8 = rd32(sp0 - 0x1d8u); loc_1d4 = rd32(sp0 - 0x1d4u); loc_1d0 = rd32(sp0 - 0x1d0u); loc_1cc = rd32(sp0 - 0x1ccu); loc_1c8 = rd32(sp0 - 0x1c8u); loc_1bc = rd32(sp0 - 0x1bcu); loc_1ac = rd32(sp0 - 0x1acu); goto E_1017ddff;
    default: break;
    }
#endif

    COW_AT(1017c9c0)
    wr32(sp0 - 0x1c8u, in_ebx);
    wr32(sp0 - 0x1ccu, in_ebp);
    wr32(sp0 - 0x1d0u, in_esi);
    wr32(sp0 - 0x1d4u, in_edi);
    if (arg3 == 0u) goto L_1017cadd;
    COW_AT(1017c9d8)
    wr32(sp0 - 0x1d8u, self + 0x38e1cu);
    wr32(sp0 - 0x1dcu, arg2 + 0x40u);
    wr32(sp0 - 0x1e0u, sp0 - 0x100u);
    g->edx = in_edx;
    g->esp = sp0 - 0x1d4u;
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x100u, arg2 + 0x40u, self + 0x38e1cu);
    t1 = g->edx;
    edx = t1;
    COW_AT(1017c9f7)
    d2 = fr(g, (double)rdf32(self + 0x38e3cu) * (double)rdf32(arg2 + 0x24u));
    d3 = fr(g, (double)rdf32(self + 0x38e2cu) * (double)rdf32(arg2 + 0x20u));
    esi = sp0 - 0x100u;
    edi = sp0 - 0xc0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    d4 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(self + 0x38e34u) * (double)rdf32(arg2 + 0x20u)) + fr(g, (double)rdf32(self + 0x38e24u) * (double)rdf32(arg2 + 0x1cu))) + fr(g, (double)rdf32(self + 0x38e44u) * (double)rdf32(arg2 + 0x24u))) + (double)rdf32(self + 0x38e54u));
    d5 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(self + 0x38e30u) * (double)rdf32(arg2 + 0x20u)) + fr(g, (double)rdf32(self + 0x38e20u) * (double)rdf32(arg2 + 0x1cu))) + fr(g, (double)rdf32(self + 0x38e40u) * (double)rdf32(arg2 + 0x24u))) + (double)rdf32(self + 0x38e50u));
    d6 = fr(g, fr(g, fr(g, d3 + d2) + fr(g, (double)rdf32(self + 0x38e1cu) * (double)rdf32(arg2 + 0x1cu))) + (double)rdf32(self + 0x38e4cu));
    wrf32(sp0 - 0x1b0u, (float)(double)(float)d4);
    d7 = fr(g, d6 - (double)rdf32(self + 0x390f0u));
    wrf32(sp0 - 0x1c0u, (float)(double)(float)d7);
    d8 = fr(g, (double)(float)d4 - (double)rdf32(self + 0x390f8u));
    d9 = fr(g, d5 - (double)rdf32(self + 0x390f4u));
    d10 = (double)(float)fr(g, fr(g, fr(g, d8 * d8) + fr(g, d9 * d9)) + fr(g, (double)(float)d7 * (double)(float)d7));
    wrf32(sp0 - 0x1c0u, (float)d10);
    if (rd8(arg2 + 0xbu) == 0u)
    {
        loc_1c0_f = d10;
        x0 = fr(g, fr(g, fr(g, d8 * d8) + fr(g, d9 * d9)) + fr(g, (double)(float)d7 * (double)(float)d7));
        goto L_1017cab4;
    }
    loc_1c0_f = d10;
    x0 = fr(g, fr(g, fr(g, d8 * d8) + fr(g, d9 * d9)) + fr(g, (double)(float)d7 * (double)(float)d7));
    COW_AT(1017caa0)
    d11 = fr(g, (double)rdf32(self + 0x39428u) * (double)rdf32(arg2 + 0xd0u));
    if ((cow_fsw(g, x0, d11, 0u) & 0x4100u) == 0u)
    {
        loc_1c8 = rd32(sp0 - 0x1c8u);
        loc_1cc = rd32(sp0 - 0x1ccu);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        loc_1d4 = rd32(sp0 - 0x1d4u);
        goto L_1017ddff;
    }
    edx = arg2;
L_1017cac7: ;
    COW_AT(1017cac7)
    wr32(sp0 - 0x1d8u, arg2 + 0xf4u);
    wr32(sp0 - 0x1dcu, self + 0x38edcu);
    eax = arg2 + 0xf4u;
    loc_1dc = self + 0x38edcu;
    loc_1c8 = rd32(sp0 - 0x1c8u);
    loc_1cc = rd32(sp0 - 0x1ccu);
    loc_1d0 = rd32(sp0 - 0x1d0u);
    loc_1d4 = rd32(sp0 - 0x1d4u);
L_1017cb53: ;
    COW_AT(1017cb53)
    g->esp = sp0 - 0x1d4u;
    t19 = cow_call_regs(g, COW_IMG(0x10181bb0u), eax, g->ecx, g->edx, 0, 2, loc_1dc, arg2 + 0xf4u);
    eax = t19;
    COW_AT(1017cb5a)
    if (eax != 0u)
    {
        loc_1c8 = rd32(sp0 - 0x1c8u);
        loc_1cc = rd32(sp0 - 0x1ccu);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        loc_1d4 = rd32(sp0 - 0x1d4u);
        goto L_1017ddff;
    }
    COW_AT(1017cb62)
    d20 = (double)rdf32(sp0 - 0x1c0u);
    d21 = (double)rdf32(arg2 + 0xccu);
    if ((cow_fsw(g, d20, d21, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d20, d21, 0u) & 0x4100u;
    COW_AT(1017cb81)
        d22 = (double)rdf32(sp0 - 0x1c0u);
        d23 = (double)rdf32(arg2 + 0xc8u);
        if ((cow_fsw(g, d22, d23, 0u) & 0x4100u) != 0u)
        {
    COW_AT(1017cb99)
            ebx = rd32(arg2 + 0x18u);
        }
        else
        {
    COW_AT(1017cb94)
            ebx = rd32(arg2 + 0x14u);
        }
    }
    else
    {
    COW_AT(1017cb7c)
        ebx = rd32(arg2 + 0x10u);
    }
    COW_AT(1017cb9c)
    wr32(sp0 - 0x1c0u, ebx);
    if (ebx == 0u)
    {
        loc_1c8 = rd32(sp0 - 0x1c8u);
        loc_1cc = rd32(sp0 - 0x1ccu);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        loc_1d4 = rd32(sp0 - 0x1d4u);
        goto L_1017ddff;
    }
    loc_1c0 = ebx;
    COW_AT(1017cba8)
    t24 = rd32(self + 0x39448u) + 1u;
    t25 = rd32(self + 0x39100u);
    wr32(self + 0x39448u, t24);
    if (t25 != rd32(arg2 + 0xe4u))
    {
        eax = rd32(arg2 + 0xe4u);
    COW_AT(1017cbd0)
        wr32(self + 0x39100u, eax);
        if (eax == 0u) goto L_1017cc2d;
    COW_AT(1017cbda)
        if (rd32(arg1 + eax * 0x4cu - 0x48u) == 0u) goto L_1017cc58;
        eax = rd32(arg1 + eax * 0x4cu - 0x48u);
    COW_AT(1017cbe8)
        if (rd32(eax + 8u) == 0u) goto L_1017cc58;
        esi = eax + 8u;
    COW_AT(1017cbf2)
        if (rd8(eax) == 0x63u) goto L_1017cc58;
    COW_AT(1017cbf7)
        wr32(self + 0x3945cu, esi);
        wr32(sp0 - 0x1d8u, 1u);
        t26 = rd32(self + 0x394b0u);
        wr32(sp0 - 0x1dcu, t26);
        t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t27);
        g->eax = t27;
        g->esp = sp0 - 0x1d4u;
        t28 = cow_thiscall(g, rd32(rd32(t27) + 0xb8u), t26, 3, t27, t26, 1u);
        eax = t28;
    COW_AT(1017cc18)
        wr32(sp0 - 0x1d8u, esi);
        t29 = rd32(self + 0x394b0u);
        wr32(sp0 - 0x1dcu, t29);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t29, esi);
    COW_AT(1017cc2b)
L_1017cc51: ;
    COW_AT(1017cc51)
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
L_1017cc58: ;
    COW_AT(1017cc58)
    if (rd32(self + 0x39104u) != rd32(arg2 + 0xe8u))
    {
        eax = rd32(arg2 + 0xe8u);
    COW_AT(1017cc6c)
        wr32(self + 0x39104u, eax);
        if (eax == 0u) goto L_1017ccc9;
    COW_AT(1017cc76)
        if (rd32(arg1 + eax * 0x4cu - 0x48u) == 0u) goto L_1017ccf4;
        eax = rd32(arg1 + eax * 0x4cu - 0x48u);
    COW_AT(1017cc84)
        if (rd32(eax + 8u) == 0u) goto L_1017ccf4;
        esi = eax + 8u;
    COW_AT(1017cc8e)
        if (rd8(eax) == 0x63u) goto L_1017ccf4;
    COW_AT(1017cc93)
        wr32(self + 0x39460u, esi);
        wr32(sp0 - 0x1d8u, 1u);
        t32 = rd32(self + 0x394b4u);
        wr32(sp0 - 0x1dcu, t32);
        t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t33);
        g->eax = t33;
        g->esp = sp0 - 0x1d4u;
        t34 = cow_thiscall(g, rd32(rd32(t33) + 0xb8u), t32, 3, t33, t32, 1u);
        eax = t34;
    COW_AT(1017ccb4)
        wr32(sp0 - 0x1d8u, esi);
        t35 = rd32(self + 0x394b4u);
        wr32(sp0 - 0x1dcu, t35);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t35, esi);
    COW_AT(1017ccc7)
L_1017cced: ;
    COW_AT(1017cced)
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
L_1017ccf4: ;
    COW_AT(1017ccf4)
    if (rd32(self + 0x39108u) == rd32(arg2 + 0xecu))
    {
        edx = rd32(self + 0x39108u);
    }
    else
    {
        eax = rd32(arg2 + 0xecu);
    COW_AT(1017cd08)
        wr32(self + 0x39108u, eax);
        if (eax == 0u) goto L_1017cd65;
    COW_AT(1017cd12)
        if (rd32(arg1 + eax * 0x4cu - 0x48u) == 0u)
        {
            edx = eax * 9u;
            goto L_1017cd90;
        }
        eax = rd32(arg1 + eax * 0x4cu - 0x48u);
    COW_AT(1017cd20)
        if (rd32(eax + 8u) == 0u)
        {
            edx = rd32(eax + 8u);
            goto L_1017cd90;
        }
        edx = rd32(eax + 8u);
        esi = eax + 8u;
    COW_AT(1017cd2a)
        if (rd8(eax) == 0x63u) goto L_1017cd90;
    COW_AT(1017cd2f)
        wr32(self + 0x39464u, esi);
        wr32(sp0 - 0x1d8u, 1u);
        t38 = rd32(self + 0x394b8u);
        wr32(sp0 - 0x1dcu, t38);
        t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t39);
        g->eax = t39;
        g->esp = sp0 - 0x1d4u;
        t40 = cow_thiscall(g, rd32(rd32(t39) + 0xb8u), t38, 3, t39, t38, 1u);
        eax = t40;
    COW_AT(1017cd50)
        wr32(sp0 - 0x1d8u, esi);
        t41 = rd32(self + 0x394b8u);
        wr32(sp0 - 0x1dcu, t41);
        g->edx = t41;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t41, esi);
        t42 = g->edx;
        edx = t42;
    COW_AT(1017cd63)
L_1017cd89: ;
    COW_AT(1017cd89)
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
L_1017cd90: ;
    COW_AT(1017cd90)
    if (rd32(self + 0x3910cu) != rd32(arg2 + 0xf0u))
    {
        eax = rd32(arg2 + 0xf0u);
    COW_AT(1017cda4)
        wr32(self + 0x3910cu, eax);
        if (eax == 0u)
        {
    COW_AT(1017ce00)
            wr32(sp0 - 0x1d8u, 0u);
            t51 = rd32(self + 0x394bcu);
            wr32(sp0 - 0x1dcu, t51);
            t52 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x1e0u, t52);
            g->edx = rd32(t52);
            t53 = rd32(t52);
            g->esp = sp0 - 0x1d4u;
            cow_thiscall(g, rd32(t53 + 0xb8u), t51, 3, t52, t51, 0u);
            t54 = g->edx;
            edx = t54;
    COW_AT(1017ce1b)
            wr32(self + 0x39468u, 0u);
            loc_1c0 = rd32(sp0 - 0x1c0u);
        }
        else
        {
    COW_AT(1017cdae)
            if (rd32(arg1 + eax * 0x4cu - 0x48u) == 0u)
            {
                edx = eax * 0x13u;
            }
            else
            {
                edx = eax * 0x13u;
                eax = rd32(arg1 + eax * 0x4cu - 0x48u);
    COW_AT(1017cdbc)
                if (rd32(eax + 8u) != 0u)
                {
                    esi = eax + 8u;
    COW_AT(1017cdc6)
                    if (rd8(eax) != 0x63u)
                    {
    COW_AT(1017cdcb)
                        t46 = rd32(self + 0x394bcu);
                        wr32(self + 0x39468u, esi);
                        wr32(sp0 - 0x1d8u, 1u);
                        wr32(sp0 - 0x1dcu, t46);
                        t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x1e0u, t47);
                        g->edx = t46;
                        g->esp = sp0 - 0x1d4u;
                        cow_thiscall(g, rd32(rd32(t47) + 0xb8u), rd32(t47), 3, t47, t46, 1u);
                        t48 = g->edx;
                        edx = t48;
    COW_AT(1017cdeb)
                        wr32(sp0 - 0x1d8u, esi);
                        t49 = rd32(self + 0x394bcu);
                        wr32(sp0 - 0x1dcu, t49);
                        g->edx = edx;
                        g->esp = sp0 - 0x1d4u;
                        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t49, esi);
                        t50 = g->edx;
                        edx = t50;
    COW_AT(1017cdfe)
                        loc_1c0 = rd32(sp0 - 0x1c0u);
                    }
                }
            }
        }
    }
    COW_AT(1017ce25)
    if (rd32(ebx + 0x1cu) > 3u)
    {
        loc_1c4 = rd32(sp0 - 0x1c4u);
        goto L_1017d3da;
    }
    eax = rd32(ebx + 0x1cu);
    COW_AT(1017ce31)
    t55 = rd32(COW_IMG(0x1017de0cu) + eax * 4u);
    switch (t55 - RD)
    {
    case 0x1017ce38u: goto L_1017ce38;
    case 0x1017ce7du: goto L_1017ce7d;
    case 0x1017cebcu: goto L_1017cebc;
    default: rt_fatal(g, COW_IMG(0x1017ce31u), "switch");
    }
    return;
L_1017cab4: ;
    COW_AT(1017cab4)
    d12 = (double)rdf32(self + 0x39424u);
    if ((cow_fsw(g, x0, d12, 0u) & 0x4100u) == 0u)
    {
        loc_1c8 = rd32(sp0 - 0x1c8u);
        loc_1cc = rd32(sp0 - 0x1ccu);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        loc_1d4 = rd32(sp0 - 0x1d4u);
        goto L_1017ddff;
    }
    goto L_1017cac7;
L_1017cadd: ;
    COW_AT(1017cadd)
    d13 = fr(g, (double)rdf32(arg2 + 0x24u) - (double)rdf32(self + 0x390f8u));
    d14 = fr(g, (double)rdf32(arg2 + 0x20u) - (double)rdf32(self + 0x390f4u));
    d15 = fr(g, (double)rdf32(arg2 + 0x1cu) - (double)rdf32(self + 0x390f0u));
    d16 = (double)(float)fr(g, fr(g, fr(g, d13 * d13) + fr(g, d14 * d14)) + fr(g, d15 * d15));
    wrf32(sp0 - 0x1c0u, (float)d16);
    if (rd8(arg2 + 0xbu) == 0u)
    {
        eax = (arg3 & 0xffffff00u) | rd8(arg2 + 0xbu);
        loc_1c0_f = d16;
        x0 = fr(g, fr(g, fr(g, d13 * d13) + fr(g, d14 * d14)) + fr(g, d15 * d15));
        goto L_1017cb32;
    }
    eax = (arg3 & 0xffffff00u) | rd8(arg2 + 0xbu);
    loc_1c0_f = d16;
    x0 = fr(g, fr(g, fr(g, d13 * d13) + fr(g, d14 * d14)) + fr(g, d15 * d15));
    COW_AT(1017cb20)
    d17 = fr(g, (double)rdf32(self + 0x39428u) * (double)rdf32(arg2 + 0xd0u));
    if ((cow_fsw(g, x0, d17, 0u) & 0x4100u) == 0u)
    {
        loc_1c8 = in_ebx;
        loc_1cc = in_ebp;
        loc_1d0 = in_esi;
        loc_1d4 = in_edi;
        goto L_1017ddff;
    }
    eax = cow_fsw(g, x0, d17, 0u) & 0x4100u;
L_1017cb45: ;
    COW_AT(1017cb45)
    wr32(sp0 - 0x1d8u, arg2 + 0xf4u);
    wr32(sp0 - 0x1dcu, self + 0x38fdcu);
    edx = self + 0x38fdcu;
    loc_1dc = self + 0x38fdcu;
    loc_1c8 = in_ebx;
    loc_1cc = in_ebp;
    loc_1d0 = in_esi;
    loc_1d4 = in_edi;
    goto L_1017cb53;
L_1017cb32: ;
    COW_AT(1017cb32)
    d18 = (double)rdf32(self + 0x39424u);
    if ((cow_fsw(g, x0, d18, 0u) & 0x4100u) == 0u)
    {
        loc_1c8 = in_ebx;
        loc_1cc = in_ebp;
        loc_1d0 = in_esi;
        loc_1d4 = in_edi;
        goto L_1017ddff;
    }
    eax = cow_fsw(g, x0, d18, 0u) & 0x4100u;
    goto L_1017cb45;
L_1017cc2d: ;
    COW_AT(1017cc2d)
    wr32(sp0 - 0x1d8u, 0u);
    t30 = rd32(self + 0x394b0u);
    wr32(sp0 - 0x1dcu, t30);
    t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t31);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t31) + 0xb8u), rd32(t31), 3, t31, t30, 0u);
    COW_AT(1017cc47)
    wr32(self + 0x3945cu, 0u);
    goto L_1017cc51;
L_1017ccc9: ;
    COW_AT(1017ccc9)
    wr32(sp0 - 0x1d8u, 0u);
    t36 = rd32(self + 0x394b4u);
    wr32(sp0 - 0x1dcu, t36);
    t37 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t37);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t37) + 0xb8u), rd32(t37), 3, t37, t36, 0u);
    COW_AT(1017cce3)
    wr32(self + 0x39460u, 0u);
    goto L_1017cced;
L_1017cd65: ;
    COW_AT(1017cd65)
    wr32(sp0 - 0x1d8u, 0u);
    t43 = rd32(self + 0x394b8u);
    wr32(sp0 - 0x1dcu, t43);
    t44 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t44);
    g->edx = t43;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t44) + 0xb8u), rd32(t44), 3, t44, t43, 0u);
    t45 = g->edx;
    edx = t45;
    COW_AT(1017cd7f)
    wr32(self + 0x39464u, 0u);
    goto L_1017cd89;
L_1017ce38: ;
    COW_AT(1017ce38)
    t110 = rd32(self + 0x39454u);
    wr32(sp0 - 0x1d8u, t110);
    t111 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1dcu, t111);
    g->edx = t110;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t111) + 0x130u), rd32(t111), 2, t111, t110);
    t112 = g->edx;
    edx = t112;
    COW_AT(1017ce51)
    wr32(sp0 - 0x1c4u, 0u);
    if (rd32(self + 0x3949cu) != 1u)
    {
        edi = 0u;
        loc_1c4 = 0u;
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
    else
    {
    COW_AT(1017ce66)
        wr32(sp0 - 0x1d8u, 0u);
        t113 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1dcu, t113);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t113) + 0x160u), rd32(t113), 2, t113, 0u);
        t114 = g->edx;
        edx = t114;
    COW_AT(1017ce78)
        edi = 0u;
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
L_1017d3de: ;
    COW_AT(1017d3de)
    if (rd32(self + 0x39134u) != edi)
    {
    COW_AT(1017d3e6)
        wr32(self + 0x39134u, edi);
        wr32(self + 0x39138u, 0xffffffffu);
    }
    COW_AT(1017d3f6)
    if (rd32(self + 0x39138u) == rd32(arg2 + 0xe0u)) goto L_1017d806;
    ecx = rd32(arg2 + 0xe0u);
    COW_AT(1017d411)
    wr32(self + 0x39138u, ecx);
    if (ecx == 0u) goto L_1017d66c;
    COW_AT(1017d41f)
    wr32(sp0 - 0x1d8u, 0u);
    wr32(sp0 - 0x1dcu, self + 0x3933cu);
    wr32(sp0 - 0x1e0u, self + 0x39338u);
    wr32(sp0 - 0x1e4u, self + 0x39334u);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x10189120u), ecx, 4, self + 0x39334u, self + 0x39338u, self + 0x3933cu, 0u);
    COW_AT(1017d43b)
    t115 = rd32(self + 0x39334u);
    wr32(sp0 - 0x1d8u, t115);
    wr32(sp0 - 0x1dcu, 0x22u);
    t116 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t116);
    g->eax = t116;
    g->edx = t115;
    g->esp = sp0 - 0x1d4u;
    t117 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t116, 0x22u, t115);
    t118 = g->edx;
    eax = t117;
    edx = t118;
    COW_AT(1017d452)
    if (edi == 0u)
    {
        ecx = rd32(self + 0x39138u);
        goto L_1017d58d;
    }
    ecx = rd32(self + 0x39138u);
    COW_AT(1017d466)
    wr32(sp0 - 0x1d8u, 0u);
    wr32(sp0 - 0x1dcu, self + 0x39260u);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x10188ca0u), ecx, 2, self + 0x39260u, 0u);
    t119 = g->edx;
    edx = t119;
    COW_AT(1017d46e)
    esi = self + 0x39260u;
    edi = sp0 - 0x1a8u;
    ecx = 0x1au;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x1a8u);
    COW_AT(1017d489)
    t120 = rd32(self + 0x392a0u);
    wr32(sp0 - 0x1b8u, t120);
    t121 = rd32(self + 0x392a4u);
    wr32(sp0 - 0x1b4u, t121);
    t122 = rd32(self + 0x392a8u);
    wr32(sp0 - 0x1b0u, t122);
    wr32(self + 0x394dcu, 0u);
    wr32(self + 0x39540u, t120);
    wr32(self + 0x39544u, t121);
    t123 = rd32(sp0 - 0x1a4u);
    wr32(self + 0x394d0u, t123);
    wr32(self + 0x39548u, t122);
    t124 = rd32(sp0 - 0x1a0u);
    t125 = rd32(sp0 - 0x19cu);
    wr32(self + 0x394d4u, t124);
    wr32(sp0 - 0x1d8u, self + 0x394e0u);
    t126 = rd32(self + 0x39138u);
    wr32(self + 0x394d8u, t125);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x10188fa0u), t126, 1, self + 0x394e0u);
    COW_AT(1017d4fb)
    d127 = fr(g, (double)rdf32(self + 0x39338u) - (double)rdf32(self + 0x3933cu));
    wr32(sp0 - 0x1d8u, 5u);
    t128 = rd32(self + 0x39338u);
    wr32(self + 0x39508u, t128);
    d129 = fr(g, (double)rdf32(self + 0x3954cu) / d127);
    wrf32(self + 0x39500u, (float)d129);
    wr32(sp0 - 0x1dcu, self + 0x394c0u);
    wr32(sp0 - 0x1e0u, 5u);
    t130 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t130);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x13cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t130, 5u, self + 0x394c0u, 5u);
    COW_AT(1017d534)
    t131 = rd32(self + 0x3933cu);
    wr32(sp0 - 0x1d8u, t131);
    wr32(sp0 - 0x1dcu, 0x24u);
    t132 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t132);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t132) + 0xc8u), rd32(t132), 3, t132, 0x24u, t131);
    COW_AT(1017d54e)
    t133 = rd32(self + 0x39338u);
    wr32(sp0 - 0x1d8u, t133);
    wr32(sp0 - 0x1dcu, 0x25u);
    edx = t133;
    loc_1dc = 0x25u;
    loc_1d8 = t133;
L_1017d7e6: ;
    COW_AT(1017d7e6)
    t169 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t169);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t169) + 0xc8u), rd32(t169), 3, t169, loc_1dc, loc_1d8);
    t170 = g->edx;
    edx = t170;
    COW_AT(1017d7f7)
    ebx = rd32(sp0 - 0x1c0u);
    edi = rd32(sp0 - 0x1c4u);
    loc_1c4 = rd32(sp0 - 0x1c4u);
    loc_1c0 = rd32(sp0 - 0x1c0u);
L_1017d806: ;
    COW_AT(1017d806)
    if (edi == 0u) goto L_1017d650;
    COW_AT(1017d80e)
    if (arg3 == 0u)
    {
    COW_AT(1017d850)
        wr32(sp0 - 0x1d8u, self + 0x38f5cu);
        wr32(sp0 - 0x1dcu, arg2 + 0x40u);
        wr32(sp0 - 0x1e0u, sp0 - 0x1a8u);
        g->esp = sp0 - 0x1d4u;
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x1a8u, arg2 + 0x40u, self + 0x38f5cu);
    COW_AT(1017d86c)
        ebx = arg2 + 0x80u;
    }
    else
    {
    COW_AT(1017d819)
        wr32(sp0 - 0x1d8u, sp0 - 0xc0u);
        wr32(sp0 - 0x1dcu, sp0 - 0x80u);
        g->esp = sp0 - 0x1d4u;
        cow_stdcall(g, COW_IMG(0x102d716cu), 2, sp0 - 0x80u, sp0 - 0xc0u);
    COW_AT(1017d82e)
        wr32(sp0 - 0x1d8u, self + 0x38f5cu);
        wr32(sp0 - 0x1dcu, sp0 - 0xc0u);
        wr32(sp0 - 0x1e0u, sp0 - 0x1a8u);
        g->esp = sp0 - 0x1d4u;
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x1a8u, sp0 - 0xc0u, self + 0x38f5cu);
    COW_AT(1017d84e)
        ebx = sp0 - 0x80u;
    }
    COW_AT(1017d872)
    wr32(sp0 - 0x1d8u, sp0 - 0x100u);
    esi = sp0 - 0x1a8u;
    edi = sp0 - 0x100u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1dcu, sp0 - 0x40u);
    g->esp = sp0 - 0x1d4u;
    cow_stdcall(g, COW_IMG(0x102d716cu), 2, sp0 - 0x40u, sp0 - 0x100u);
    COW_AT(1017d899)
    wr32(sp0 - 0x1d8u, 4u);
    wr32(sp0 - 0x1dcu, sp0 - 0x40u);
    wr32(sp0 - 0x1e0u, 0u);
    t171 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t171);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x13cu), sp0 - 0x40u, 4, t171, 0u, sp0 - 0x40u, 4u);
    COW_AT(1017d8b7)
    d172 = fr(g, (double)rdf32(ebx + 0x20u) * (double)rdf32(self + 0x39548u));
    d173 = fr(g, (double)rdf32(ebx + 0x10u) * (double)rdf32(self + 0x39544u));
    wr32(sp0 - 0x1d8u, 1u);
    d174 = fr(g, fr(g, d173 + d172) + fr(g, (double)rdf32(self + 0x39540u) * (double)rdf32(ebx)));
    wrf32(sp0 - 0x1b8u, (float)(double)(float)-d174);
    d175 = fr(g, fr(g, fr(g, (double)rdf32(ebx + 0x14u) * (double)rdf32(self + 0x39544u)) + fr(g, (double)rdf32(ebx + 0x24u) * (double)rdf32(self + 0x39548u))) + fr(g, (double)rdf32(ebx + 4u) * (double)rdf32(self + 0x39540u)));
    wrf32(sp0 - 0x1b4u, (float)(double)(float)-d175);
    d176 = fr(g, fr(g, fr(g, (double)rdf32(ebx + 0x18u) * (double)rdf32(self + 0x39544u)) + fr(g, (double)rdf32(ebx + 0x28u) * (double)rdf32(self + 0x39548u))) + fr(g, (double)rdf32(ebx + 8u) * (double)rdf32(self + 0x39540u)));
    wrf32(sp0 - 0x1b0u, (float)(double)(float)-d176);
    wr32(sp0 - 0x1dcu, sp0 - 0x1b8u);
    wr32(sp0 - 0x1e0u, 4u);
    t177 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t177);
    g->edx = sp0 - 0x1b8u;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x13cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t177, 4u, sp0 - 0x1b8u, 1u);
    t178 = g->edx;
    edx = t178;
    COW_AT(1017d940)
    ebx = rd32(sp0 - 0x1c0u);
L_1017d961: ;
    COW_AT(1017d961)
    if (rd32(self + 0x39118u) != rd8(arg2 + 0xeu))
    {
        eax = rd8(arg2 + 0xeu);
    COW_AT(1017d970)
        wr32(self + 0x39118u, eax);
        if (eax != 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017d989)
            wr32(sp0 - 0x1d8u, 1u);
            loc_1d8 = 1u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017d985)
            wr32(sp0 - 0x1d8u, 0u);
            loc_1d8 = 0u;
        }
    COW_AT(1017d98b)
        wr32(sp0 - 0x1dcu, 0x8fu);
        wr32(sp0 - 0x1e0u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x8fu, loc_1d8);
        t180 = g->edx;
        edx = t180;
    }
    COW_AT(1017d997)
    if (rd32(self + 0x390fcu) != (uint32_t)(int16_t)rd16(arg2 + 0xd4u))
    {
        eax = (uint32_t)(int16_t)rd16(arg2 + 0xd4u);
    COW_AT(1017d9a6)
        wr32(self + 0x390fcu, eax);
        if (eax == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017d9bf)
            wr32(sp0 - 0x1d8u, 3u);
            loc_1d8 = 3u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017d9bb)
            wr32(sp0 - 0x1d8u, 2u);
            loc_1d8 = 2u;
        }
    COW_AT(1017d9c1)
        wr32(sp0 - 0x1dcu, 0x16u);
        wr32(sp0 - 0x1e0u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x16u, loc_1d8);
        t181 = g->edx;
        edx = t181;
    COW_AT(1017d9ca)
        wr32(self + 0x39120u, 0u);
    }
    COW_AT(1017d9d4)
    if (rd32(self + 0x39110u) != (uint32_t)(int16_t)rd16(arg2 + 0xd6u))
    {
        eax = (uint32_t)(int16_t)rd16(arg2 + 0xd6u);
    COW_AT(1017d9e7)
        wr32(self + 0x39110u, eax);
        if (eax == 0u) goto L_1017da2e;
    COW_AT(1017d9f2)
        if (eax == 1u) goto L_1017da2a;
        eax = eax - 1u;
    COW_AT(1017d9f5)
        if (eax != 1u) goto L_1017da74;
    COW_AT(1017d9f8)
        wr32(sp0 - 0x1d8u, 0u);
        wr32(sp0 - 0x1dcu, 0xfu);
        t182 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t182);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t182) + 0xc8u), rd32(t182), 3, t182, 0xfu, 0u);
    COW_AT(1017da0e)
        wr32(sp0 - 0x1d8u, 3u);
        wr32(sp0 - 0x1dcu, 0xdu);
        wr32(sp0 - 0x1e0u, 0u);
        t183 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e4u, t183);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t183) + 0xfcu), rd32(t183), 4, t183, 0u, 0xdu, 3u);
    COW_AT(1017da26)
        wr32(sp0 - 0x1d8u, 3u);
        loc_1d8 = 3u;
L_1017da5e: ;
    COW_AT(1017da5e)
        wr32(sp0 - 0x1dcu, 0xeu);
        wr32(sp0 - 0x1e0u, 0u);
        t186 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e4u, t186);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t187 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t186) + 0xfcu), rd32(t186), 4, t186, 0u, 0xeu, loc_1d8);
        t188 = g->edx;
        edx = t188;
    }
L_1017da74: ;
    COW_AT(1017da74)
    if (rd32(ebx + 0x68u) != 0u)
    {
        eax = rd32(ebx + 0x68u);
    COW_AT(1017da7b)
        wr32(sp0 - 0x1d8u, arg2);
        g->esp = sp0 - 0x1d4u;
        cow_fastcall(g, COW_IMG(0x1017a3f0u), self, edx, 1, arg2);
        t189 = g->edx;
        edx = t189;
    }
    COW_AT(1017da83)
    t190 = rd32(ebx + 0x60u);
    wr32(sp0 - 0x1acu, t190);
    wr32(sp0 - 0x1bcu, 0u);
    if ((int32_t)rd32(ebx + 0x44u) <= 0)
    {
        loc_1c8 = rd32(sp0 - 0x1c8u);
        loc_1cc = rd32(sp0 - 0x1ccu);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        loc_1d4 = rd32(sp0 - 0x1d4u);
        goto L_1017ddff;
    }
    edi = t190;
    loc_1ac = t190;
    loc_1bc = 0u;
L_1017da9d: ;
    COW_AT(1017da9d)
    wr32(sp0 - 0x1c0u, 0u);
    if ((int32_t)rd32(edi) <= 0) goto L_1017dde4;
    esi = rd32(edi + 4u);
    loc_1c0 = 0u;
L_1017dab2: ;
    COW_AT(1017dab2)
    if (rd32(sp0 - 0x1c4u) == 0u)
    {
        eax = rd32(sp0 - 0x1c4u);
    COW_AT(1017daba)
        wr32(sp0 - 0x1d8u, COW_IMG(0x10621c08u));
        t191 = rd32(self + 0x394a8u);
        wr32(sp0 - 0x1dcu, t191);
        g->edx = t191;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t191, COW_IMG(0x10621c08u));
        t192 = g->edx;
        edx = t192;
        loc_1ac = rd32(sp0 - 0x1acu);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
    COW_AT(1017dad1)
    if ((uint32_t)(int16_t)rd16(esi + 0x20u) != rd32(self + 0x39114u))
    {
        eax = (uint32_t)(int16_t)rd16(esi + 0x20u);
    COW_AT(1017dae1)
        wr32(self + 0x39114u, eax);
        if (rd16(esi + 0x20u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    COW_AT(1017db2a)
            wr32(sp0 - 0x1d8u, 0u);
            wr32(sp0 - 0x1dcu, 0x1bu);
            wr32(sp0 - 0x1e0u, eax);
            g->esp = sp0 - 0x1d4u;
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x1bu, 0u);
    COW_AT(1017db35)
            wr32(sp0 - 0x1d8u, 1u);
            wr32(sp0 - 0x1dcu, 0xeu);
            t194 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x1e0u, t194);
            g->esp = sp0 - 0x1d4u;
            cow_thiscall(g, rd32(rd32(t194) + 0xc8u), rd32(t194), 3, t194, 0xeu, 1u);
    COW_AT(1017db4b)
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            edx = rd32(COW_IMG(0x10632038u));
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    COW_AT(1017daf8)
            wr32(sp0 - 0x1d8u, 1u);
            wr32(sp0 - 0x1dcu, 0x1bu);
            wr32(sp0 - 0x1e0u, eax);
            g->esp = sp0 - 0x1d4u;
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x1bu, 1u);
    COW_AT(1017db03)
            wr32(sp0 - 0x1d8u, 0u);
            wr32(sp0 - 0x1dcu, 0xeu);
            t193 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x1e0u, t193);
            g->esp = sp0 - 0x1d4u;
            cow_thiscall(g, rd32(rd32(t193) + 0xc8u), rd32(t193), 3, t193, 0xeu, 0u);
    COW_AT(1017db19)
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            edx = rd32(COW_IMG(0x10631f18u));
        }
    COW_AT(1017db5a)
        wr32(sp0 - 0x1d8u, edx);
        wr32(sp0 - 0x1dcu, 0x2fu);
        wr32(sp0 - 0x1e0u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x2fu, edx);
        t195 = g->edx;
        edx = t195;
        loc_1ac = rd32(sp0 - 0x1acu);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
    COW_AT(1017db66)
    if ((uint32_t)(int16_t)rd16(esi + 0x24u) != rd32(self + 0x39120u))
    {
        eax = (uint32_t)(int16_t)rd16(esi + 0x24u);
    COW_AT(1017db72)
        wr32(self + 0x39120u, eax);
        if (eax == 0u)
        {
    COW_AT(1017db88)
            if (rd32(self + 0x390fcu) == 0u)
            {
                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017db9f)
                wr32(sp0 - 0x1d8u, 3u);
                loc_1d8 = 3u;
            }
            else
            {
                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017db9b)
                wr32(sp0 - 0x1d8u, 2u);
                loc_1d8 = 2u;
            }
        }
        else
        {
    COW_AT(1017db7c)
            wr32(sp0 - 0x1d8u, 1u);
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            loc_1d8 = 1u;
        }
    COW_AT(1017dba1)
        wr32(sp0 - 0x1dcu, 0x16u);
        wr32(sp0 - 0x1e0u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x16u, loc_1d8);
        t196 = g->edx;
        edx = t196;
        loc_1ac = rd32(sp0 - 0x1acu);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1c0 = rd32(sp0 - 0x1c0u);
    }
    COW_AT(1017dbac)
    if (rd32(sp0 - 0x1c4u) == 0u)
    {
        eax = rd32(esi + 4u);
        goto L_1017dcaa;
    }
    eax = rd32(esi + 4u);
    COW_AT(1017dbbb)
    if (eax == 0u) goto L_1017dc26;
    COW_AT(1017dbbf)
    if (rd32(eax + 0x40u) != 0u)
    {
        ecx = rd32(eax + 0x40u);
    }
    else
    {
    COW_AT(1017dbc6)
        ecx = rd32(eax + 0x44u);
    }
    COW_AT(1017dbc9)
    wr32(sp0 - 0x1d8u, ecx);
    wr32(sp0 - 0x1dcu, 0u);
    t197 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t197);
    g->edx = rd32(t197);
    t198 = rd32(t197);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(t198 + 0xf4u), ecx, 3, t197, 0u, ecx);
    t199 = g->edx;
    edx = t199;
    COW_AT(1017dbde)
    if (rd32(esi + 0x1cu) == 0u) goto L_1017ddba;
    COW_AT(1017dbe9)
    if (rd32(esi + 0xb4u) == 0u) goto L_1017ddcb;
    COW_AT(1017dbf7)
    if (rd32(esi + 0xbcu) == 0u) goto L_1017dc60;
    eax = rd32(esi + 0xbcu);
    COW_AT(1017dc01)
    if (rd32(eax + 0x40u) == 0u)
    {
    COW_AT(1017dc0c)
        eax = rd32(eax + 0x44u);
    }
    else
    {
        ecx = rd32(eax + 0x40u);
    COW_AT(1017dc08)
        eax = ecx;
    }
    COW_AT(1017dc0f)
    wr32(sp0 - 0x1d8u, eax);
    wr32(sp0 - 0x1dcu, 1u);
    t200 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t200);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t200) + 0xf4u), t200, 3, t200, 1u, eax);
    COW_AT(1017dc24)
L_1017dc75: ;
    COW_AT(1017dc75)
    wr32(sp0 - 0x1d8u, 0x30u);
    t205 = rd32(esi + 0xb4u);
    wr32(sp0 - 0x1dcu, t205);
    wr32(sp0 - 0x1e0u, 0u);
    t206 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t206);
    g->edx = t205;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t206, 0u, t205, 0x30u);
    t207 = g->edx;
    edx = t207;
    COW_AT(1017dc92)
    t208 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x1d8u, t208);
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 4u);
    g->ebx = ebx;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, 4u, 0u, t208);
    COW_AT(1017dca5)
L_1017ddb4: ;
    COW_AT(1017ddb4)
    wr32(self + 0x39430u, rd32(self + 0x39430u) + 1u);
L_1017ddba: ;
    COW_AT(1017ddba)
    t236 = rd32(esi + 0x18u) + rd32(self + 0x3942cu);
    t237 = rd32(esi + 0x18u);
    wr32(self + 0x3942cu, t236);
    edx = t237;
L_1017ddcb: ;
    COW_AT(1017ddcb)
    t238 = rd32(sp0 - 0x1c0u) + 1u;
    t239 = rd32(sp0 - 0x1c0u);
    wr32(sp0 - 0x1c0u, t238);
    if ((int32_t)(t239 + 1u) < (int32_t)rd32(edi))
    {
        esi = esi + 0xc0u;
        loc_1ac = rd32(sp0 - 0x1acu);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1c0 = t238;
        goto L_1017dab2;
    }
    loc_1bc = rd32(sp0 - 0x1bcu);
L_1017dde4: ;
    COW_AT(1017dde4)
    wr32(sp0 - 0x1bcu, loc_1bc + 1u);
    wr32(sp0 - 0x1acu, edi + 0x24u);
    if ((int32_t)(loc_1bc + 1u) < (int32_t)rd32(ebx + 0x44u))
    {
        loc_1ac = edi + 0x24u;
        edi = edi + 0x24u;
        loc_1bc = loc_1bc + 1u;
        goto L_1017da9d;
    }
    loc_1c8 = rd32(sp0 - 0x1c8u);
    loc_1cc = rd32(sp0 - 0x1ccu);
    loc_1d0 = rd32(sp0 - 0x1d0u);
    loc_1d4 = rd32(sp0 - 0x1d4u);
L_1017ddff: ;
    COW_AT(1017ddff)
    g->ebx = loc_1c8;
    g->esi = loc_1d0;
    g->edi = loc_1d4;
    g->ebp = loc_1cc;
    return;
L_1017ce7d: ;
    COW_AT(1017ce7d)
    wr32(sp0 - 0x1d8u, 0x152u);
    t104 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1dcu, t104);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t105 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t104) + 0x130u), rd32(t104), 2, t104, 0x152u);
    t106 = g->edx;
    edx = t106;
    COW_AT(1017ce94)
    if (rd32(self + 0x3949cu) == 1u)
    {
    COW_AT(1017ce9d)
        wr32(sp0 - 0x1d8u, 0u);
        t107 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1dcu, t107);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t108 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t107) + 0x160u), rd32(t107), 2, t107, 0u);
        t109 = g->edx;
        edx = t109;
    }
    COW_AT(1017ceb1)
    wr32(sp0 - 0x1c4u, 0u);
    edi = 0u;
    loc_1c4 = 0u;
    loc_1c0 = rd32(sp0 - 0x1c0u);
    goto L_1017d3de;
L_1017cebc: ;
    COW_AT(1017cebc)
    if (rd32(self + 0x3949cu) != 1u) goto L_1017d558;
    COW_AT(1017cec9)
    wr32(COW_IMG(0x10639048u), 0u);
    wr32(COW_IMG(0x10639058u), 0u);
    wr32(COW_IMG(0x10639068u), 0u);
    wr32(COW_IMG(0x1063904cu), 0u);
    wr32(COW_IMG(0x1063905cu), 0u);
    wr32(COW_IMG(0x1063906cu), 0u);
    wr32(COW_IMG(0x10639050u), 0u);
    wr32(COW_IMG(0x10639060u), 0u);
    wr32(COW_IMG(0x10639070u), 0u);
    wr32(COW_IMG(0x10639054u), 0u);
    wr32(COW_IMG(0x10639064u), 0u);
    wr32(COW_IMG(0x10639074u), 0u);
    wr32(sp0 - 0x1bcu, 0u);
    wr32(sp0 - 0x1c4u, sp0 - 0x140u);
    if (rd32(self + 0x3945cu) == 0u)
    {
        edx = sp0 - 0x140u;
        ebx = COW_IMG(0x10639048u);
        loc_1bc = 0u;
        loc_1c4 = sp0 - 0x140u;
    }
    else
    {
        esi = rd32(self + 0x3945cu);
    COW_AT(1017cf67)
        d56 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
        wrf32(sp0 - 0x140u, (float)(double)(float)d56);
        d57 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb4u));
        wrf32(sp0 - 0x13cu, (float)(double)(float)d57);
        d58 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb8u));
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        wrf32(sp0 - 0x138u, (float)(double)(float)d58);
        edi = sp0 - 0x1a8u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x1a8u);
    COW_AT(1017d00d)
        wr32(sp0 - 0x1bcu, 1u);
        d59 = fr(g, (double)rdf32(rd32(self + 0x3945cu) + 0x60u) * (double)rdf32(sp0 - 0x1a4u));
        wrf32(COW_IMG(0x10639048u), (float)d59);
        d60 = fr(g, (double)rdf32(rd32(self + 0x3945cu) + 0x60u) * (double)rdf32(sp0 - 0x1a0u));
        wr32(sp0 - 0x1c4u, sp0 - 0x130u);
        wrf32(COW_IMG(0x10639058u), (float)d60);
        d61 = fr(g, (double)rdf32(rd32(self + 0x3945cu) + 0x60u) * (double)rdf32(sp0 - 0x19cu));
        wrf32(COW_IMG(0x10639068u), (float)d61);
        d62 = (double)rdf32(rd32(self + 0x3945cu) + 0x4cu);
        wrf32(COW_IMG(0x10639078u), (float)fr(g, d62 * d62));
        edx = sp0 - 0x130u;
        ebx = COW_IMG(0x1063904cu);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = 1u;
        loc_1c4 = sp0 - 0x130u;
    }
    COW_AT(1017d073)
    if (rd32(self + 0x39460u) != 0u)
    {
        esi = rd32(self + 0x39460u);
    COW_AT(1017d081)
        d63 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
        wrf32(loc_1c4, (float)d63);
        d64 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(esi + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(esi + 0x38u))) + (double)rdf32(arg2 + 0xb4u));
        wrf32(loc_1c4 + 4u, (float)d64);
        d65 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(esi + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(esi + 0x38u))) + (double)rdf32(arg2 + 0xb8u));
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        wrf32(loc_1c4 + 8u, (float)d65);
        edi = sp0 - 0x1a8u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x1a8u);
    COW_AT(1017d11e)
        d66 = fr(g, (double)rdf32(rd32(self + 0x39460u) + 0x60u) * (double)rdf32(sp0 - 0x1a4u));
        wrf32(ebx, (float)d66);
        d67 = fr(g, (double)rdf32(rd32(self + 0x39460u) + 0x60u) * (double)rdf32(sp0 - 0x1a0u));
        t68 = rd32(sp0 - 0x1bcu) + 1u;
        wr32(sp0 - 0x1bcu, t68);
        t69 = rd32(self + 0x39460u);
        wrf32(ebx + 0x10u, (float)d67);
        d70 = fr(g, (double)rdf32(rd32(self + 0x39460u) + 0x60u) * (double)rdf32(sp0 - 0x19cu));
        wrf32(ebx + 0x20u, (float)d70);
        d71 = (double)rdf32(rd32(self + 0x39460u) + 0x4cu);
        t72 = rd32(sp0 - 0x1c4u) + 0x10u;
        wr32(sp0 - 0x1c4u, t72);
        wrf32(ebx + 0x30u, (float)fr(g, d71 * d71));
        edx = t69;
        ebx = ebx + 4u;
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = t68;
        loc_1c4 = t72;
    }
    COW_AT(1017d171)
    if (rd32(self + 0x39464u) != 0u)
    {
        esi = rd32(self + 0x39464u);
    COW_AT(1017d17f)
        d73 = fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(esi + 0x38u));
        d74 = fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(esi + 0x3cu));
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        d75 = fr(g, fr(g, fr(g, d74 + d73) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
        wrf32(loc_1c4, (float)d75);
        d76 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb4u));
        wrf32(loc_1c4 + 4u, (float)d76);
        d77 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb8u));
        wrf32(loc_1c4 + 8u, (float)d77);
        edi = sp0 - 0x1a8u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x1a8u);
    COW_AT(1017d21c)
        d78 = fr(g, (double)rdf32(rd32(self + 0x39464u) + 0x60u) * (double)rdf32(sp0 - 0x1a4u));
        wrf32(ebx, (float)d78);
        d79 = fr(g, (double)rdf32(rd32(self + 0x39464u) + 0x60u) * (double)rdf32(sp0 - 0x1a0u));
        t80 = rd32(sp0 - 0x1c4u) + 0x10u;
        wr32(sp0 - 0x1c4u, t80);
        wrf32(ebx + 0x10u, (float)d79);
        t81 = rd32(sp0 - 0x1bcu) + 1u;
        d82 = fr(g, (double)rdf32(rd32(self + 0x39464u) + 0x60u) * (double)rdf32(sp0 - 0x19cu));
        wr32(sp0 - 0x1bcu, t81);
        wrf32(ebx + 0x20u, (float)d82);
        d83 = (double)rdf32(rd32(self + 0x39464u) + 0x4cu);
        wrf32(ebx + 0x30u, (float)fr(g, d83 * d83));
        edx = t81;
        ebx = ebx + 4u;
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = t81;
        loc_1c4 = t80;
    }
    COW_AT(1017d26e)
    if (rd32(self + 0x39468u) != 0u)
    {
        esi = rd32(self + 0x39468u);
    COW_AT(1017d27c)
        d84 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(esi + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(esi + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
        wrf32(loc_1c4, (float)d84);
        d85 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(esi + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(esi + 0x38u))) + (double)rdf32(arg2 + 0xb4u));
        wrf32(loc_1c4 + 4u, (float)d85);
        d86 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(esi + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(esi + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(esi + 0x38u))) + (double)rdf32(arg2 + 0xb8u));
        wrf32(loc_1c4 + 8u, (float)d86);
        edi = sp0 - 0x1a8u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x1a8u);
    COW_AT(1017d319)
        d87 = fr(g, (double)rdf32(rd32(self + 0x39468u) + 0x60u) * (double)rdf32(sp0 - 0x1a4u));
        wrf32(ebx, (float)d87);
        d88 = fr(g, (double)rdf32(rd32(self + 0x39468u) + 0x60u) * (double)rdf32(sp0 - 0x1a0u));
        t89 = rd32(sp0 - 0x1bcu) + 1u;
        wr32(sp0 - 0x1bcu, t89);
        wrf32(ebx + 0x10u, (float)d88);
        d90 = fr(g, (double)rdf32(rd32(self + 0x39468u) + 0x60u) * (double)rdf32(sp0 - 0x19cu));
        wrf32(ebx + 0x20u, (float)d90);
        d91 = (double)rdf32(rd32(self + 0x39468u) + 0x4cu);
        wrf32(ebx + 0x30u, (float)fr(g, d91 * d91));
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = t89;
    }
    COW_AT(1017d35e)
    t92 = rd32(self + loc_1bc * 4u + 0x39480u);
    wr32(sp0 - 0x1d8u, t92);
    t93 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1dcu, t93);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t93) + 0x130u), rd32(t93), 2, t93, t92);
    esi = loc_1bc;
    COW_AT(1017d37b)
    if (esi != 0u)
    {
    COW_AT(1017d37f)
        wr32(sp0 - 0x1d8u, esi);
        wr32(sp0 - 0x1dcu, sp0 - 0x140u);
        wr32(sp0 - 0x1e0u, 0xbu);
        t94 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e4u, t94);
        g->edx = sp0 - 0x140u;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t94) + 0x13cu), rd32(t94), 4, t94, 0xbu, sp0 - 0x140u, esi);
        t95 = g->edx;
        edx = t95;
    COW_AT(1017d39b)
        wr32(sp0 - 0x1d8u, 4u);
        wr32(sp0 - 0x1dcu, COW_IMG(0x10639048u));
        wr32(sp0 - 0x1e0u, 0xfu);
        t96 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e4u, t96);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t96) + 0x13cu), rd32(t96), 4, t96, 0xfu, COW_IMG(0x10639048u), 4u);
    }
    COW_AT(1017d3b5)
    t97 = rd32(self + 0x39494u);
    wr32(sp0 - 0x1d8u, t97);
    t98 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1dcu, t98);
    g->edx = t97;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t98) + 0x160u), rd32(t98), 2, t98, t97);
    t99 = g->edx;
    edx = t99;
    COW_AT(1017d3ce)
    wr32(sp0 - 0x1c4u, 1u);
    ebx = rd32(sp0 - 0x1c0u);
    loc_1c0 = rd32(sp0 - 0x1c0u);
    loc_1c4 = 1u;
L_1017d3da: ;
    COW_AT(1017d3da)
    edi = loc_1c4;
    goto L_1017d3de;
L_1017d558: ;
    COW_AT(1017d558)
    wr32(sp0 - 0x1d8u, 0x152u);
    t100 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1dcu, t100);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t100) + 0x130u), rd32(t100), 2, t100, 0x152u);
    COW_AT(1017d56e)
    wr32(sp0 - 0x1d8u, 0u);
    t101 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1dcu, t101);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t102 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t101) + 0x160u), rd32(t101), 2, t101, 0u);
    t103 = g->edx;
    edx = t103;
    COW_AT(1017d582)
    wr32(sp0 - 0x1c4u, 0u);
    edi = 0u;
    loc_1c4 = 0u;
    loc_1c0 = rd32(sp0 - 0x1c0u);
    goto L_1017d3de;
L_1017d58d: ;
    COW_AT(1017d58d)
    if (rd32(self + 0x394a4u) == 0u)
    {
        eax = rd32(self + 0x394a4u);
    COW_AT(1017d5c1)
        wr32(sp0 - 0x1d8u, 0u);
        wr32(sp0 - 0x1dcu, self + 0x39260u);
        g->eax = eax;
        g->esp = sp0 - 0x1d4u;
        t139 = cow_thiscall(g, COW_IMG(0x10188ca0u), ecx, 2, self + 0x39260u, 0u);
        eax = t139;
    COW_AT(1017d5c9)
        wr32(sp0 - 0x1d8u, self + 0x39260u);
        t140 = rd32(self + 0x394a8u);
        wr32(sp0 - 0x1dcu, t140);
        edx = t140;
        loc_1d8 = self + 0x39260u;
        loc_1dc = t140;
    }
    else
    {
        eax = rd32(self + 0x394a4u);
    COW_AT(1017d597)
        wr32(sp0 - 0x1d8u, self + 0x392c8u);
        wr32(sp0 - 0x1dcu, self + 0x39260u);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x10188b70u), ecx, 2, self + 0x39260u, self + 0x392c8u);
        t134 = g->edx;
        edx = t134;
    COW_AT(1017d5a4)
        wr32(sp0 - 0x1d8u, self + 0x39260u);
        t135 = rd32(self + 0x394a8u);
        wr32(sp0 - 0x1dcu, t135);
        g->eax = t135;
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        t136 = cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t135, self + 0x39260u);
        t137 = g->edx;
        eax = t136;
        edx = t137;
    COW_AT(1017d5b7)
        wr32(sp0 - 0x1d8u, self + 0x392c8u);
        t138 = rd32(self + 0x394acu);
        wr32(sp0 - 0x1dcu, t138);
        loc_1d8 = self + 0x392c8u;
        loc_1dc = t138;
    }
    COW_AT(1017d5d1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t141 = cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, loc_1dc, loc_1d8);
    t142 = g->edx;
    eax = t141;
    edx = t142;
    COW_AT(1017d5dc)
    esi = self + 0x39260u;
    edi = COW_IMG(0x10621c08u);
    ecx = 0x1au;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1d8u, 0u);
    wr32(sp0 - 0x1dcu, self + 0x39330u);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x10188e00u), rd32(self + 0x39138u), 2, self + 0x39330u, 0u);
    COW_AT(1017d5fc)
    t143 = rd32(self + 0x39330u);
    wr32(sp0 - 0x1d8u, t143);
    wr32(sp0 - 0x1dcu, 0x8bu);
    t144 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t144);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t144) + 0xc8u), rd32(t144), 3, t144, 0x8bu, t143);
    COW_AT(1017d615)
    t145 = rd32(self + 0x3933cu);
    wr32(sp0 - 0x1d8u, t145);
    wr32(sp0 - 0x1dcu, 0x24u);
    t146 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t146);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t146) + 0xc8u), rd32(t146), 3, t146, 0x24u, t145);
    COW_AT(1017d62f)
    t147 = rd32(self + 0x39338u);
    wr32(sp0 - 0x1d8u, t147);
    wr32(sp0 - 0x1dcu, 0x25u);
    t148 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t148);
    g->edx = t147;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t148) + 0xc8u), rd32(t148), 3, t148, 0x25u, t147);
    t149 = g->edx;
    edx = t149;
    COW_AT(1017d645)
    ebx = rd32(sp0 - 0x1c0u);
    loc_1c4 = rd32(sp0 - 0x1c4u);
L_1017d650: ;
    COW_AT(1017d650)
    if (arg3 == 0u)
    {
    COW_AT(1017d94d)
        wr32(sp0 - 0x1d8u, arg2 + 0x40u);
        eax = arg3;
        loc_1d8 = arg2 + 0x40u;
    }
    else
    {
    COW_AT(1017d65f)
        wr32(sp0 - 0x1d8u, sp0 - 0xc0u);
        eax = sp0 - 0xc0u;
        loc_1d8 = sp0 - 0xc0u;
    }
    COW_AT(1017d951)
    wr32(sp0 - 0x1dcu, 0x100u);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, loc_1d8);
    t179 = g->edx;
    edx = t179;
    goto L_1017d961;
L_1017d66c: ;
    COW_AT(1017d66c)
    if (edi == 0u)
    {
    COW_AT(1017d74a)
        wr32(sp0 - 0x1d8u, self + 0x39180u);
        t160 = rd32(self + 0x394a8u);
        wr32(sp0 - 0x1dcu, t160);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t160, self + 0x39180u);
    COW_AT(1017d75d)
        esi = self + 0x39180u;
        edi = COW_IMG(0x10621c08u);
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (rd32(self + 0x394a4u) != 0u)
        {
            eax = rd32(self + 0x394a4u);
    COW_AT(1017d773)
            wr32(sp0 - 0x1d8u, self + 0x391e8u);
            t161 = rd32(self + 0x394acu);
            wr32(sp0 - 0x1dcu, t161);
            g->esp = sp0 - 0x1d4u;
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t161, self + 0x391e8u);
        }
    COW_AT(1017d78c)
        t162 = rd32(self + 0x39250u);
        wr32(sp0 - 0x1d8u, t162);
        wr32(sp0 - 0x1dcu, 0x8bu);
        t163 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t163);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(t163) + 0xc8u), rd32(t163), 3, t163, 0x8bu, t162);
    }
    else
    {
    COW_AT(1017d67a)
        t150 = rd32(self + 0x391c0u);
        wr32(sp0 - 0x1b8u, t150);
        t151 = rd32(self + 0x391c4u);
        wr32(sp0 - 0x1b4u, t151);
        t152 = rd32(self + 0x391c8u);
        wr32(sp0 - 0x1b0u, t152);
        wr32(self + 0x39540u, t150);
        wr32(self + 0x39544u, t151);
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        wr32(self + 0x39548u, t152);
        esi = self + 0x39180u;
        edi = sp0 - 0x1a8u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x1a8u);
    COW_AT(1017d6cd)
        t153 = rd32(sp0 - 0x1a4u);
        t154 = rd32(sp0 - 0x1a0u);
        t155 = rd32(sp0 - 0x19cu);
        wr32(self + 0x394d0u, t153);
        wr32(self + 0x394d4u, t154);
        wr32(self + 0x394d8u, t155);
        wr32(self + 0x394dcu, 0u);
        wr32(sp0 - 0x1d8u, self + 0x394e0u);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, COW_IMG(0x10188fa0u), rd32(COW_IMG(0x1065cb04u)), 1, self + 0x394e0u);
    COW_AT(1017d707)
        d156 = fr(g, (double)rdf32(self + 0x39258u) - (double)rdf32(self + 0x3925cu));
        wr32(sp0 - 0x1d8u, 5u);
        t157 = rd32(self + 0x39258u);
        wr32(self + 0x39508u, t157);
        d158 = fr(g, (double)rdf32(self + 0x3954cu) / d156);
        wrf32(self + 0x39500u, (float)d158);
        wr32(sp0 - 0x1dcu, self + 0x394c0u);
        wr32(sp0 - 0x1e0u, 5u);
        t159 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e4u, t159);
        g->esp = sp0 - 0x1d4u;
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x13cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t159, 5u, self + 0x394c0u, 5u);
    COW_AT(1017d748)
    }
    COW_AT(1017d7a9)
    t164 = rd32(self + 0x3925cu);
    wr32(sp0 - 0x1d8u, t164);
    wr32(sp0 - 0x1dcu, 0x24u);
    t165 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t165);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t165) + 0xc8u), rd32(t165), 3, t165, 0x24u, t164);
    COW_AT(1017d7c3)
    t166 = rd32(self + 0x39258u);
    wr32(sp0 - 0x1d8u, t166);
    wr32(sp0 - 0x1dcu, 0x25u);
    t167 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t167);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t167) + 0xc8u), rd32(t167), 3, t167, 0x25u, t166);
    COW_AT(1017d7dd)
    t168 = rd32(self + 0x39254u);
    wr32(sp0 - 0x1d8u, t168);
    wr32(sp0 - 0x1dcu, 0x22u);
    edx = t168;
    loc_1dc = 0x22u;
    loc_1d8 = t168;
    goto L_1017d7e6;
L_1017da2a: ;
    COW_AT(1017da2a)
    wr32(sp0 - 0x1d8u, 1u);
    loc_1d8 = 1u;
L_1017da30: ;
    COW_AT(1017da30)
    wr32(sp0 - 0x1dcu, 0xfu);
    t184 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t184);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t184) + 0xc8u), rd32(t184), 3, t184, 0xfu, loc_1d8);
    COW_AT(1017da44)
    wr32(sp0 - 0x1d8u, 1u);
    wr32(sp0 - 0x1dcu, 0xdu);
    wr32(sp0 - 0x1e0u, 0u);
    t185 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t185);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t185) + 0xfcu), rd32(t185), 4, t185, 0u, 0xdu, 1u);
    COW_AT(1017da5c)
    wr32(sp0 - 0x1d8u, 1u);
    loc_1d8 = 1u;
    goto L_1017da5e;
L_1017da2e: ;
    COW_AT(1017da2e)
    wr32(sp0 - 0x1d8u, 0u);
    loc_1d8 = 0u;
    goto L_1017da30;
L_1017dc26: ;
    COW_AT(1017dc26)
    wr32(sp0 - 0x1d8u, 0u);
    wr32(sp0 - 0x1dcu, 0u);
    t201 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t201);
    g->edx = rd32(t201);
    t202 = rd32(t201);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(t202 + 0xf4u), rd32(COW_IMG(0x1045666cu)), 3, t201, 0u, 0u);
    t203 = g->edx;
    edx = t203;
    COW_AT(1017dc3c)
    if (rd32(esi + 0x28u) == 0u) goto L_1017ddcb;
    COW_AT(1017dc47)
    if (rd32(esi + 0x1cu) == 0u) goto L_1017ddba;
    COW_AT(1017dc52)
    if (rd32(esi + 0xb4u) == 0u) goto L_1017ddcb;
L_1017dc60: ;
    COW_AT(1017dc60)
    wr32(sp0 - 0x1d8u, 0u);
    wr32(sp0 - 0x1dcu, 1u);
    t204 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t204);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t204) + 0xf4u), rd32(t204), 3, t204, 1u, 0u);
    goto L_1017dc75;
L_1017dcaa: ;
    COW_AT(1017dcaa)
    if (eax == 0u)
    {
    COW_AT(1017dcd3)
        wr32(sp0 - 0x1d8u, 0u);
        wr32(sp0 - 0x1dcu, 0u);
        t214 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t214);
        g->eax = t214;
        g->edx = edx;
        t215 = rd32(t214);
        g->esp = sp0 - 0x1d4u;
        t216 = cow_thiscall(g, rd32(t215 + 0xf4u), t215, 3, t214, 0u, 0u);
        t217 = g->ecx;
        t218 = g->edx;
        eax = t216;
        ecx = t217;
        edx = t218;
    }
    else
    {
    COW_AT(1017dcae)
        if (rd32(eax + 0x40u) == 0u)
        {
    COW_AT(1017dcb9)
            eax = rd32(eax + 0x44u);
        }
        else
        {
            ecx = rd32(eax + 0x40u);
    COW_AT(1017dcb5)
            eax = ecx;
        }
    COW_AT(1017dcbc)
        wr32(sp0 - 0x1d8u, eax);
        wr32(sp0 - 0x1dcu, 0u);
        t209 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x1e0u, t209);
        g->eax = eax;
        g->edx = rd32(t209);
        t210 = rd32(t209);
        g->esp = sp0 - 0x1d4u;
        t211 = cow_thiscall(g, rd32(t210 + 0xf4u), t209, 3, t209, 0u, eax);
        t212 = g->ecx;
        t213 = g->edx;
        eax = t211;
        ecx = t212;
        edx = t213;
    COW_AT(1017dcd1)
    }
    COW_AT(1017dce8)
    if (rd32(ebx + 0x1cu) != 2u) goto L_1017dd7c;
    COW_AT(1017dcf2)
    g->edx = arg2;
    d219 = fr(g, (double)rdf32(ebx + 0x6cu) * (double)rdf32(arg2 + 0x15cu));
    fpush(g, d219);
    g->esp = sp0 - 0x1d4u;
    t220 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t221 = g->edx;
    eax = t220;
    edx = t221;
    COW_AT(1017dd07)
    if (rd32(eax * 4u + esi + 0x30u) == 0u) goto L_1017ddcb;
    ecx = rd32(eax * 4u + esi + 0x30u);
    COW_AT(1017dd13)
    wr32(sp0 - 0x1d8u, 0xcu);
    wr32(sp0 - 0x1dcu, ecx);
    wr32(sp0 - 0x1e0u, 0u);
    t222 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t222);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t222) + 0x14cu), ecx, 4, t222, 0u, ecx, 0xcu);
    COW_AT(1017dd29)
    wr32(sp0 - 0x1d8u, 0x18u);
    t223 = rd32(esi + 0xb0u);
    wr32(sp0 - 0x1dcu, t223);
    wr32(sp0 - 0x1e0u, 1u);
    t224 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t224);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t224) + 0x14cu), rd32(t224), 4, t224, 1u, t223, 0x18u);
    COW_AT(1017dd45)
    wr32(sp0 - 0x1d8u, 0u);
    t225 = rd32(esi + 0xb8u);
    wr32(sp0 - 0x1dcu, t225);
    t226 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e0u, t226);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(rd32(t226) + 0x154u), rd32(t226), 3, t226, t225, 0u);
    COW_AT(1017dd5f)
    t227 = rd32(esi + 0x18u);
    wr32(sp0 - 0x1d8u, t227);
    wr32(sp0 - 0x1dcu, 0u);
    t228 = rd32(esi + 8u);
    wr32(sp0 - 0x1e0u, t228);
    wr32(sp0 - 0x1e4u, 0u);
    t229 = rd32(ebx + 0x2cu);
    wr32(sp0 - 0x1e8u, t229);
    g->ebx = ebx;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, t229, 0u, t228, 0u, t227);
    COW_AT(1017dd7a)
    goto L_1017ddba;
L_1017dd7c: ;
    COW_AT(1017dd7c)
    if (rd32(esi + 0x28u) == 0u) goto L_1017ddcb;
    ecx = rd32(esi + 0x28u);
    COW_AT(1017dd83)
    t230 = rd32(ebx + 0x24u);
    wr32(sp0 - 0x1d8u, t230);
    wr32(sp0 - 0x1dcu, ecx);
    wr32(sp0 - 0x1e0u, 0u);
    t231 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1e4u, t231);
    g->edx = rd32(t231);
    t232 = rd32(t231);
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, rd32(t232 + 0x14cu), ecx, 4, t231, 0u, ecx, t230);
    t233 = g->edx;
    edx = t233;
    COW_AT(1017dd9b)
    t234 = rd32(esi + 0x18u);
    wr32(sp0 - 0x1d8u, t234);
    wr32(sp0 - 0x1dcu, 0u);
    t235 = rd32(ebx + 0x2cu);
    wr32(sp0 - 0x1e0u, t235);
    g->ebx = ebx;
    g->esp = sp0 - 0x1d4u;
    cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, t235, 0u, t234);
    COW_AT(1017ddb0)
    edi = rd32(sp0 - 0x1acu);
    goto L_1017ddb4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1017c9c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1017c9d8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1d4u);
        in_esi = rd32(sp0 - 0x1d0u);
        in_ebp = rd32(sp0 - 0x1ccu);
        in_ebx = rd32(sp0 - 0x1c8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017c9f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x38e1cu;
        wr32(sp0 - 0x1e0u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017caa0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_1c0_f;
        uint32_t loc_1dc;
        double x0;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1c0_f = rdf32(sp0 - 0x1c0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1d4u;
        g->eax = arg2;
        wr32(sp0 - 0x1e0u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017cab4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_1c0_f;
        uint32_t loc_1dc;
        double x0;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1c0_f = rdf32(sp0 - 0x1c0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1d4u;
        g->eax = arg2;
        wr32(sp0 - 0x1e0u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017cac7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_1c0_f;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1c0_f = rdf32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        wr32(sp0 - 0x1e0u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017caddu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1d4u);
        in_esi = rd32(sp0 - 0x1d0u);
        in_ebp = rd32(sp0 - 0x1ccu);
        in_ebx = rd32(sp0 - 0x1c8u);
        g->esp = sp0 - 0x1d4u;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1017cb20u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c0_f;
        double x0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1d4u);
        in_esi = rd32(sp0 - 0x1d0u);
        in_ebp = rd32(sp0 - 0x1ccu);
        in_ebx = rd32(sp0 - 0x1c8u);
        loc_1c0_f = rdf32(sp0 - 0x1c0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017cb32u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c0_f;
        double x0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1d4u);
        in_esi = rd32(sp0 - 0x1d0u);
        in_ebp = rd32(sp0 - 0x1ccu);
        in_ebx = rd32(sp0 - 0x1c8u);
        loc_1c0_f = rdf32(sp0 - 0x1c0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017cb45u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c0_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1d4u);
        in_esi = rd32(sp0 - 0x1d0u);
        in_ebp = rd32(sp0 - 0x1ccu);
        in_ebx = rd32(sp0 - 0x1c8u);
        loc_1c0_f = rdf32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017cb53u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_1c0_f;
        uint32_t loc_1c8;
        uint32_t loc_1cc;
        uint32_t loc_1d0;
        uint32_t loc_1d4;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d4 = rd32(sp0 - 0x1d4u);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        loc_1cc = rd32(sp0 - 0x1ccu);
        loc_1c8 = rd32(sp0 - 0x1c8u);
        loc_1c0_f = rdf32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1dcu;
        wr32(sp0 - 0x1d8u, arg2 + 0xf4u);
        (void)sp0;
        return 1;
    }
    case 0x1017cb5au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017cb62u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017cb7cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017cb81u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017cb94u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017cb99u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017cb9cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017cba8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017cbd0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cbdau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cbe8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cbf2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cbf7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cc18u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cc2bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cc2du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cc47u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cc51u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cc58u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cc6cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cc76u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cc84u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cc8eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cc93u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017ccb4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017ccc7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017ccc9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cce3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017ccedu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017ccf4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cd08u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cd12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cd20u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cd2au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cd2fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cd50u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cd63u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cd65u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cd7fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cd89u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cd90u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->ecx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cda4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cdaeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017cdbcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017cdc6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017cdcbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017cdebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017cdfeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ce00u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ce1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ce25u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ce31u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ce38u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ce51u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ce66u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x1d4u;
        g->edi = 0u;
        wr32(sp0 - 0x1c4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1017ce78u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x1d4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017ce7du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ce94u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ce9du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ceb1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017cebcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017cec9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017cf67u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        g->esp = sp0 - 0x1d4u;
        g->edx = sp0 - 0x140u;
        wr32(sp0 - 0x1c4u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x1017d00du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        wr32(sp0 - 0x1c4u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x1017d073u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d081u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d11eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        (void)sp0;
        return 1;
    }
    case 0x1017d171u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d17fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d21cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        (void)sp0;
        return 1;
    }
    case 0x1017d26eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d27cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d319u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        (void)sp0;
        return 1;
    }
    case 0x1017d35eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d37bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d37fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d39bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        wr32(sp0 - 0x1dcu, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x1017d3b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d3ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d3dau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d3deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d3e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d3f6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d411u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d41fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d43bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        g->esi = self + 0x39334u;
        (void)sp0;
        return 1;
    }
    case 0x1017d452u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        (void)sp0;
        return 1;
    }
    case 0x1017d466u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        g->esi = self + 0x39260u;
        (void)sp0;
        return 1;
    }
    case 0x1017d46eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        g->esi = self + 0x39260u;
        (void)sp0;
        return 1;
    }
    case 0x1017d489u:
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
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        (void)sp0;
        return 1;
    }
    case 0x1017d4fbu:
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
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        (void)sp0;
        return 1;
    }
    case 0x1017d534u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        (void)sp0;
        return 1;
    }
    case 0x1017d54eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        (void)sp0;
        return 1;
    }
    case 0x1017d558u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d56eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d582u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d58du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        g->esi = self + 0x39260u;
        (void)sp0;
        return 1;
    }
    case 0x1017d597u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        g->esi = self + 0x39260u;
        (void)sp0;
        return 1;
    }
    case 0x1017d5a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        g->esi = self + 0x39260u;
        g->edi = self + 0x392c8u;
        (void)sp0;
        return 1;
    }
    case 0x1017d5b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        g->esi = self + 0x39260u;
        g->edi = self + 0x392c8u;
        (void)sp0;
        return 1;
    }
    case 0x1017d5c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        g->esi = self + 0x39260u;
        (void)sp0;
        return 1;
    }
    case 0x1017d5c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        g->esi = self + 0x39260u;
        (void)sp0;
        return 1;
    }
    case 0x1017d5d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1dcu;
        g->ebx = self + 0x39338u;
        g->esi = self + 0x39260u;
        (void)sp0;
        return 1;
    }
    case 0x1017d5dcu:
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
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        g->esi = self + 0x39260u;
        (void)sp0;
        return 1;
    }
    case 0x1017d5fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        g->esi = self + 0x39330u;
        (void)sp0;
        return 1;
    }
    case 0x1017d615u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        (void)sp0;
        return 1;
    }
    case 0x1017d62fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        g->ebx = self + 0x39338u;
        (void)sp0;
        return 1;
    }
    case 0x1017d645u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d650u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d65fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d66cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d67au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017d6cdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        wr32(sp0 - 0x1d8u, sp0 - 0x1a8u);
        (void)sp0;
        return 1;
    }
    case 0x1017d707u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d748u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d74au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017d75du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        g->esi = self + 0x39180u;
        (void)sp0;
        return 1;
    }
    case 0x1017d773u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d78cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d7a9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d7c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d7ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d7e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1dcu;
        (void)sp0;
        return 1;
    }
    case 0x1017d7f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d806u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d80eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d819u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d82eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        wr32(sp0 - 0x1dcu, sp0 - 0x80u);
        wr32(sp0 - 0x1d8u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017d84eu:
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
        g->esp = sp0 - 0x1d4u;
        g->ebx = sp0 - 0x80u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1a8u);
        wr32(sp0 - 0x1dcu, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017d850u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017d86cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        g->ebx = arg2;
        wr32(sp0 - 0x1e0u, sp0 - 0x1a8u);
        (void)sp0;
        return 1;
    }
    case 0x1017d872u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1a8u);
        (void)sp0;
        return 1;
    }
    case 0x1017d899u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1a8u);
        wr32(sp0 - 0x1dcu, sp0 - 0x40u);
        wr32(sp0 - 0x1d8u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017d8b7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        wr32(sp0 - 0x1dcu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1017d940u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        wr32(sp0 - 0x1dcu, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x1017d94du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d4u;
        g->eax = arg3;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d951u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c0;
        uint32_t loc_1c4;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c4 = rd32(sp0 - 0x1c4u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        g->esp = sp0 - 0x1d8u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d961u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d970u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d985u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d989u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d98bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d8u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d997u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d9a6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d9bbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d9bfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d9c1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d8u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d9cau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d9d4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d9e7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d9f2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d9f5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017d9f8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017da0eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017da26u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017da2au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017da2eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017da30u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d8u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017da44u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017da5cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017da5eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d8u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017da74u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017da7bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017da83u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017da9du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dab2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dabau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dad1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dae1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017daf8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017db03u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017db19u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017db2au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017db35u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017db4bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017db5au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017db66u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017db72u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017db7cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017db88u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017db9bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017db9fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dba1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x1017dbacu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dbbbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dbbfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dbc6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dbc9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dbdeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dbe9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dbf7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dc01u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dc08u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dc0cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dc0fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dc24u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dc26u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dc3cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dc47u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dc52u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dc60u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dc75u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dc92u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dca5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dcaau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dcaeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dcb5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dcb9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dcbcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dcd1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dcd3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dce8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dcf2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dd07u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dd13u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dd29u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dd45u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dd5fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dd7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dd7cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dd83u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dd9bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ddb0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ddb4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ddbau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ddcbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dde4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c0;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1c0 = rd32(sp0 - 0x1c0u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ddffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1ac;
        uint32_t loc_1bc;
        uint32_t loc_1c8;
        uint32_t loc_1cc;
        uint32_t loc_1d0;
        uint32_t loc_1d4;
        uint32_t loc_1d8;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        loc_1d4 = rd32(sp0 - 0x1d4u);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        loc_1cc = rd32(sp0 - 0x1ccu);
        loc_1c8 = rd32(sp0 - 0x1c8u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1ac = rd32(sp0 - 0x1acu);
        g->esp = sp0 - 0x1d4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1017c9c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1017c9c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
