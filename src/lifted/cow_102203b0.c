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
    double d115;
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
    double d131;
    double d138;
    double d143;
    double d16;
    double d165;
    double d166;
    double d17;
    double d170;
    double d171;
    double d172;
    double d173;
    double d174;
    double d175;
    double d176;
    double d177;
    double d182;
    double d188;
    double d202;
    double d210;
    double d211;
    double d214;
    double d215;
    double d216;
    double d217;
    double d222;
    double d228;
    double d23;
    double d24;
    double d37;
    double d41;
    double d51;
    double d55;
    double d65;
    double d69;
    double d78;
    double d82;
    double d92;
    double d94;
    double d95;
    double d96;
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
    uint32_t loc_b0;
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
    uint32_t t12;
    uint32_t t124;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t13;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
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
    uint32_t t164;
    uint32_t t167;
    uint32_t t168;
    uint32_t t169;
    uint32_t t178;
    uint32_t t179;
    uint32_t t18;
    uint32_t t180;
    uint32_t t181;
    uint32_t t183;
    uint32_t t184;
    uint32_t t185;
    uint32_t t186;
    uint32_t t187;
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
    uint32_t t203;
    uint32_t t204;
    uint32_t t205;
    uint32_t t206;
    uint32_t t207;
    uint32_t t208;
    uint32_t t209;
    uint32_t t21;
    uint32_t t212;
    uint32_t t213;
    uint32_t t218;
    uint32_t t219;
    uint32_t t22;
    uint32_t t220;
    uint32_t t221;
    uint32_t t223;
    uint32_t t224;
    uint32_t t225;
    uint32_t t226;
    uint32_t t227;
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
    uint32_t t240;
    uint32_t t241;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
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
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
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
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
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
    uint32_t t93;
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
    cow_frame(g, sp0, 264u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102203c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xacu); in_esi = rd32(sp0 - 0xa8u); in_ebp = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); g->ebp = rd32(sp0 - 0xa4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa8u); goto E_102203c5;
    case 0x102203ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102203cc;
    case 0x102203d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102203d3;
    case 0x102203deu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102203de;
    case 0x102203f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102203f9;
    case 0x102203fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102203fd;
    case 0x10220406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220406;
    case 0x10220411u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220411;
    case 0x10220416u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220416;
    case 0x10220450u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_9c_f = rdf32(sp0 - 0x9cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220450;
    case 0x10220458u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_9c_f = rdf32(sp0 - 0x9cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220458;
    case 0x10220465u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_9c_f = rdf32(sp0 - 0x9cu); goto E_10220465;
    case 0x1022046fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_9c_f = rdf32(sp0 - 0x9cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1022046f;
    case 0x10220473u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_9c_f = rdf32(sp0 - 0x9cu); goto E_10220473;
    case 0x1022047cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022047c;
    case 0x10220485u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220485;
    case 0x102204b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102204b1;
    case 0x102204bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_102204bf;
    case 0x102204f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102204f4;
    case 0x102204feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102204fe;
    case 0x10220531u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220531;
    case 0x1022053fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022053f;
    case 0x1022054bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022054b;
    case 0x10220557u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220557;
    case 0x10220561u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220561;
    case 0x10220584u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220584;
    case 0x10220592u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220592;
    case 0x1022059eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022059e;
    case 0x102205aau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102205aa;
    case 0x102205b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102205b4;
    case 0x102205d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102205d7;
    case 0x102205e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102205e5;
    case 0x102205f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102205f1;
    case 0x102205fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102205fd;
    case 0x10220607u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220607;
    case 0x1022062au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022062a;
    case 0x10220638u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220638;
    case 0x10220644u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220644;
    case 0x10220650u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220650;
    case 0x1022065au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022065a;
    case 0x10220663u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220663;
    case 0x10220688u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220688;
    case 0x10220696u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10220696;
    case 0x102206a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102206a0;
    case 0x102206aau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102206aa;
    case 0x102206b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102206b4;
    case 0x102206c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102206c4;
    case 0x102206d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102206d5;
    case 0x102206e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102206e6;
    case 0x102206ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_64 = rd32(sp0 - 0x64u); goto E_102206ec;
    case 0x102206fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_64 = rd32(sp0 - 0x64u); goto E_102206fb;
    case 0x1022070eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_64 = rd32(sp0 - 0x64u); goto E_1022070e;
    case 0x10220717u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10220717;
    case 0x1022071fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_1022071f;
    case 0x10220729u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10220729;
    case 0x10220737u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10220737;
    case 0x1022073bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_1022073b;
    case 0x10220748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10220748;
    case 0x10220756u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10220756;
    case 0x102207c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_102207c9;
    case 0x102207e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_102207e0;
    case 0x102207f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102207f6;
    case 0x102207fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102207fd;
    case 0x1022082fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022082f;
    case 0x10220831u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_10220831;
    case 0x1022084au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1022084a;
    case 0x10220877u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220877;
    case 0x1022087bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1022087b;
    case 0x1022087du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_1022087d;
    case 0x10220882u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_10220882;
    case 0x1022088cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_1022088c;
    case 0x102208a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_102208a1;
    case 0x102208a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_102208a6;
    case 0x102208adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_102208ad;
    case 0x102208b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_102208b2;
    case 0x102208bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_102208bb;
    case 0x102208c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_102208c2;
    case 0x102208c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_102208c9;
    case 0x102208d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_102208d4;
    case 0x102208deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_102208de;
    case 0x102208e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_102208e3;
    case 0x102208f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102208f6;
    case 0x10220909u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220909;
    case 0x10220919u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220919;
    case 0x10220927u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220927;
    case 0x10220931u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_10220931;
    case 0x10220939u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); goto E_10220939;
    case 0x1022093du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_64 = rd32(sp0 - 0x64u); goto E_1022093d;
    case 0x1022094du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_88_f = rdf32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_64 = rd32(sp0 - 0x64u); goto E_1022094d;
    case 0x1022095au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022095a;
    case 0x1022095fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022095f;
    case 0x1022096bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); goto E_1022096b;
    case 0x10220974u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); goto E_10220974;
    case 0x1022097bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_1022097b;
    case 0x10220988u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10220988;
    case 0x1022099du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1022099d;
    case 0x102209a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102209a6;
    case 0x102209adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102209ad;
    case 0x102209b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102209b9;
    case 0x102209c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102209c7;
    case 0x102209d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102209d8;
    case 0x10220a23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220a23;
    case 0x10220a57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220a57;
    case 0x10220a73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220a73;
    case 0x10220a96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220a96;
    case 0x10220aa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220aa2;
    case 0x10220aa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220aa4;
    case 0x10220aa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_98_f = rdf32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); goto E_10220aa6;
    case 0x10220ab9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220ab9;
    case 0x10220acau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); goto E_10220aca;
    case 0x10220adbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220adb;
    case 0x10220af0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_9c_f = rdf32(sp0 - 0x9cu); goto E_10220af0;
    case 0x10220af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10220af7;
    case 0x10220b04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10220b04;
    case 0x10220b19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220b19;
    case 0x10220b22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220b22;
    case 0x10220b29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220b29;
    case 0x10220b35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220b35;
    case 0x10220b43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220b43;
    case 0x10220b54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220b54;
    case 0x10220b8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220b8c;
    case 0x10220ba8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220ba8;
    case 0x10220bcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220bcb;
    case 0x10220bd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10220bd7;
    case 0x10220bebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220beb;
    case 0x10220bf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10220bf7;
    case 0x10220c00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220c00;
    case 0x10220c03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_9c_f = rdf32(sp0 - 0x9cu); goto E_10220c03;
    case 0x10220c0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10220c0c;
    default: break;
    }
#endif

    COW_AT(102203b0)
    wr32(sp0 - 0xa0u, in_ebx);
    wr32(sp0 - 0xa4u, in_ebp);
    wr32(sp0 - 0xa8u, in_esi);
    wr32(sp0 - 0xacu, in_edi);
    wr32(sp0 - 0x6cu, self);
    g->edx = in_edx;
    g->esp = sp0 - 0xacu;
    t1 = cow_thiscall(g, COW_IMG(0x1021f410u), self, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(102203c5)
    g->ebx = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t3 = cow_thiscall(g, COW_IMG(0x1021fce0u), self, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(102203cc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t5 = cow_thiscall(g, COW_IMG(0x1021fe10u), self, 0);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(102203d3)
    if (rd8(self + 0xdu) == 0u) goto L_10220c0c;
    COW_AT(102203de)
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
    eax = t11;
    ecx = t12;
    edx = t13;
    esi = t9;
    edi = t8;
    COW_AT(102203f9)
    if ((uint8_t)eax != 0u) goto L_10220411;
    COW_AT(102203fd)
    wr32(sp0 - 0xb0u, esi);
    wr32(sp0 - 0xb4u, edi);
    g->ebx = self;
    g->esp = sp0 - 0xacu;
    cow_call_regs(g, COW_IMG(0x102201f0u), eax, self, g->edx, 0, 2, edi, esi);
    COW_AT(10220406)
    g->ebx = rd32(sp0 - 0xa0u);
    g->esi = rd32(sp0 - 0xa8u);
    g->edi = rd32(sp0 - 0xacu);
    g->ebp = rd32(sp0 - 0xa4u);
    return;
L_10220411: ;
    COW_AT(10220411)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x10220c20u), ecx, 1, rd32(sp0 - 0xacu));
    t15 = g->edx;
    d16 = cow_take_float(g);
    eax = t14;
    edx = t15;
    x0 = d16;
    COW_AT(10220416)
    d17 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 0x24u)) * (double)rdf32(COW_IMG(0x1032df98u))) + fr(g, (double)rdf32(self + 0x24u) * (double)rdf32(COW_IMG(0x103295d8u)))) + x0);
    wrf32(sp0 - 0x9cu, (float)(double)(float)d17);
    if ((cow_fsw(g, (double)(float)d17, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)(float)d17, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u;
        loc_9c_f = (double)(float)d17;
        x0 = (double)(float)d17;
        goto L_10220458;
    }
    eax = cow_fsw(g, (double)(float)d17, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u;
    x0 = (double)(float)d17;
    COW_AT(10220450)
    x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x1032df90u)));
L_1022046f: ;
    COW_AT(1022046f)
    wrf32(sp0 - 0x9cu, (float)(double)(float)x0);
    loc_9c_f = (double)(float)x0;
L_10220473: ;
    COW_AT(10220473)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t18 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(1022047c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t20 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(10220485)
    t22 = rd32(sp0 - 0x9cu);
    d23 = fr(g, (double)rdf32(self + 0x30u) * (double)rdf32(self + 0x24u));
    wr32(sp0 - 0xb0u, t22);
    d24 = fr(g, d23 * (double)rdf32(COW_IMG(0x1032df40u)));
    wrf32(sp0 - 0x18u, (float)(double)(float)d24);
    wrf32(sp0 - 0x2cu, (float)(double)(float)d24);
    wrf32(sp0 - 0x40u, (float)(double)(float)d24);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t25 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t22);
    t26 = g->edx;
    eax = t25;
    edx = t26;
    COW_AT(102204b1)
    wr32(sp0 - 0xb0u, 0xbf8cbe4cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t27 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, 0xbf8cbe4cu);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    COW_AT(102204bf)
    wr32(sp0 - 0xb0u, 0u);
    t29 = (rd32(self + 0x20u) << 0x18u) + 0x808080u;
    wr32(sp0 - 0xb4u, t29);
    esi = sp0 - 0x40u;
    edi = sp0 - 0xf4u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t30 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0xf8u, t30);
    t31 = rd32(sp0 - 0x68u);
    wr32(sp0 - 0xfcu, t31);
    wr32(sp0 - 0x100u, 0u);
    wr32(sp0 - 0x104u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xfcu;
    t32 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 1u, 0u);
    t33 = g->edx;
    eax = t32;
    edx = t33;
    ebp = t29;
    esi = t30;
    edi = t31;
    COW_AT(102204f4)
    g->esp = sp0 - 0xacu;
    cow_bridge_indirect(g, COW_IMG(0x1011ff70u), 0u, 20u, (const uint32_t[]){rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), 0u}, eax, g->edx, g->eax, 0u);
    COW_AT(102204fe)
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    wr32(sp0 - 0xb4u, sp0 - 0x7cu);
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x8cu, 0x3f800000u);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x94u, 0x430c0000u);
    g->eax = sp0 - 0x7cu;
    g->edx = sp0 - 0x98u;
    g->esp = sp0 - 0xacu;
    t34 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
    t35 = g->ecx;
    t36 = g->edx;
    eax = t34;
    ecx = t35;
    edx = t36;
    COW_AT(10220531)
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, ebp);
    g->ecx = ecx;
    g->edx = edx;
    d37 = (double)rdf32(sp0 - 0x78u);
    fpush(g, d37);
    g->esp = sp0 - 0xb8u;
    t38 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t39 = g->ecx;
    t40 = g->edx;
    eax = t38;
    ecx = t39;
    edx = t40;
    COW_AT(1022053f)
    wr32(sp0 - 0xbcu, eax + esi);
    g->ecx = ecx;
    g->edx = edx;
    d41 = (double)rdf32(sp0 - 0x7cu);
    fpush(g, d41);
    g->esp = sp0 - 0xbcu;
    t42 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax + esi, g->ecx, g->edx, 1, 0);
    t43 = g->ecx;
    t44 = g->edx;
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(1022054b)
    wr32(sp0 - 0xc0u, eax + edi);
    wr32(sp0 - 0xc4u, 4u);
    wr32(sp0 - 0xc8u, 1u);
    g->eax = eax + edi;
    g->edx = edx;
    g->esp = sp0 - 0xc0u;
    t45 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 1u, 4u);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    COW_AT(10220557)
    g->eax = eax;
    g->esp = sp0 - 0xacu;
    t47 = cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
    eax = t47;
    COW_AT(10220561)
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    wr32(sp0 - 0xb4u, sp0 - 0x7cu);
    wr32(sp0 - 0x98u, 0xc30c0000u);
    wr32(sp0 - 0x94u, 0u);
    g->eax = eax;
    g->edx = sp0 - 0x7cu;
    g->esp = sp0 - 0xacu;
    t48 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
    t49 = g->ecx;
    t50 = g->edx;
    eax = t48;
    ecx = t49;
    edx = t50;
    COW_AT(10220584)
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, ebp);
    g->ecx = ecx;
    g->edx = edx;
    d51 = (double)rdf32(sp0 - 0x78u);
    fpush(g, d51);
    g->esp = sp0 - 0xb8u;
    t52 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(10220592)
    wr32(sp0 - 0xbcu, eax + esi);
    g->ecx = ecx;
    g->edx = edx;
    d55 = (double)rdf32(sp0 - 0x7cu);
    fpush(g, d55);
    g->esp = sp0 - 0xbcu;
    t56 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax + esi, g->ecx, g->edx, 1, 0);
    t57 = g->ecx;
    t58 = g->edx;
    eax = t56;
    ecx = t57;
    edx = t58;
    COW_AT(1022059e)
    wr32(sp0 - 0xc0u, eax + edi);
    wr32(sp0 - 0xc4u, 1u);
    wr32(sp0 - 0xc8u, 1u);
    g->eax = eax + edi;
    g->edx = edx;
    g->esp = sp0 - 0xc0u;
    t59 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 1u, 1u);
    t60 = g->edx;
    eax = t59;
    edx = t60;
    COW_AT(102205aa)
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
    t61 = g->edx;
    edx = t61;
    COW_AT(102205b4)
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    wr32(sp0 - 0xb4u, sp0 - 0x7cu);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x94u, 0xc30c0000u);
    g->eax = sp0 - 0x98u;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t62 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
    t63 = g->ecx;
    t64 = g->edx;
    eax = t62;
    ecx = t63;
    edx = t64;
    COW_AT(102205d7)
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, ebp);
    g->ecx = ecx;
    g->edx = edx;
    d65 = (double)rdf32(sp0 - 0x78u);
    fpush(g, d65);
    g->esp = sp0 - 0xb8u;
    t66 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t67 = g->ecx;
    t68 = g->edx;
    eax = t66;
    ecx = t67;
    edx = t68;
    COW_AT(102205e5)
    wr32(sp0 - 0xbcu, eax + esi);
    g->ecx = ecx;
    g->edx = edx;
    d69 = (double)rdf32(sp0 - 0x7cu);
    fpush(g, d69);
    g->esp = sp0 - 0xbcu;
    t70 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax + esi, g->ecx, g->edx, 1, 0);
    t71 = g->ecx;
    t72 = g->edx;
    eax = t70;
    ecx = t71;
    edx = t72;
    COW_AT(102205f1)
    wr32(sp0 - 0xc0u, eax + edi);
    wr32(sp0 - 0xc4u, 3u);
    wr32(sp0 - 0xc8u, 1u);
    g->eax = eax + edi;
    g->edx = edx;
    g->esp = sp0 - 0xc0u;
    t73 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 1u, 3u);
    t74 = g->edx;
    eax = t73;
    edx = t74;
    COW_AT(102205fd)
    g->esp = sp0 - 0xacu;
    cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
    COW_AT(10220607)
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    wr32(sp0 - 0xb4u, sp0 - 0x7cu);
    wr32(sp0 - 0x98u, 0x430c0000u);
    wr32(sp0 - 0x94u, 0u);
    g->eax = sp0 - 0x7cu;
    g->edx = sp0 - 0x98u;
    g->esp = sp0 - 0xacu;
    t75 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
    t76 = g->ecx;
    t77 = g->edx;
    eax = t75;
    ecx = t76;
    edx = t77;
    COW_AT(1022062a)
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, ebp);
    g->ecx = ecx;
    g->edx = edx;
    d78 = (double)rdf32(sp0 - 0x78u);
    fpush(g, d78);
    g->esp = sp0 - 0xb8u;
    t79 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t80 = g->ecx;
    t81 = g->edx;
    eax = t79;
    ecx = t80;
    edx = t81;
    COW_AT(10220638)
    wr32(sp0 - 0xbcu, eax + esi);
    g->ecx = ecx;
    g->edx = edx;
    d82 = (double)rdf32(sp0 - 0x7cu);
    fpush(g, d82);
    g->esp = sp0 - 0xbcu;
    t83 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax + esi, g->ecx, g->edx, 1, 0);
    t84 = g->ecx;
    t85 = g->edx;
    eax = t83;
    ecx = t84;
    edx = t85;
    COW_AT(10220644)
    wr32(sp0 - 0xc0u, eax + edi);
    wr32(sp0 - 0xc4u, 2u);
    wr32(sp0 - 0xc8u, 1u);
    g->eax = eax + edi;
    g->edx = edx;
    g->esp = sp0 - 0xc0u;
    t86 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 1u, 2u);
    t87 = g->edx;
    eax = t86;
    edx = t87;
    COW_AT(10220650)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t88 = cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
    t89 = g->edx;
    eax = t88;
    edx = t89;
    COW_AT(1022065a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t90 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t91 = g->edx;
    eax = t90;
    edx = t91;
    COW_AT(10220663)
    d92 = (double)rdf32(self + 0x24u);
    t93 = rd32(sp0 - 0x9cu);
    wr32(sp0 - 0xb0u, t93);
    d94 = (double)(float)fr(g, d92 + d92);
    wrf32(sp0 - 0x18u, (float)d94);
    d95 = (double)(float)fr(g, d92 + d92);
    wrf32(sp0 - 0x2cu, (float)d95);
    d96 = (double)(float)fr(g, d92 + d92);
    wrf32(sp0 - 0x40u, (float)d96);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t97 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t93);
    t98 = g->edx;
    eax = t97;
    edx = t98;
    COW_AT(10220688)
    wr32(sp0 - 0xb0u, 0xbf8cbe4cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t99 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, 0xbf8cbe4cu);
    t100 = g->edx;
    eax = t99;
    edx = t100;
    COW_AT(10220696)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t101 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t102 = g->edx;
    eax = t101;
    edx = t102;
    COW_AT(102206a0)
    if (eax != 0u)
    {
        esi = eax;
    COW_AT(102206aa)
        g->eax = eax;
        g->esp = sp0 - 0xacu;
        t103 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
        eax = t103;
    COW_AT(102206b4)
        wr32(sp0 - 0x60u, rd32(eax));
        g->eax = rd32(eax);
        t104 = rd32(eax);
        g->esp = sp0 - 0xacu;
        t105 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
        eax = t105;
    COW_AT(102206c4)
        t106 = rd32(eax + 4u);
        wr32(sp0 - 0x5cu, t106);
        g->eax = t106;
        g->esp = sp0 - 0xacu;
        t107 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
        eax = t107;
    COW_AT(102206d5)
        t108 = rd32(eax + 8u);
        wr32(sp0 - 0x58u, t108);
        g->edx = rd32(esi);
        t109 = rd32(esi);
        g->esp = sp0 - 0xacu;
        cow_thiscall(g, rd32(t109 + 0x1bcu), esi, 0);
        t110 = g->edx;
        edx = t110;
    COW_AT(102206e6)
        wr32(sp0 - 0x64u, 0u);
        eax = 0u;
        ebx = self;
        loc_64 = 0u;
        loc_80 = rd32(sp0 - 0x80u);
        loc_98_f = (double)rdf32(sp0 - 0x98u);
        loc_94_f = (double)rdf32(sp0 - 0x94u);
        loc_9c_f = (double)rdf32(sp0 - 0x9cu);
L_102206ec: ;
    COW_AT(102206ec)
        if (eax != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
        {
    COW_AT(102206fb)
            t111 = rd32(COW_IMG(0x10480af0u) + eax * 4u);
            wr32(sp0 - 0x80u, t111);
            if (rd32(COW_IMG(0x10480af0u) + eax * 4u) == 0u)
            {
                loc_80 = t111;
            }
            else
            {
                ebp = t111;
                loc_80 = t111;
    COW_AT(1022070e)
                wr32(sp0 - 0xb0u, 0u);
                g->esp = sp0 - 0xacu;
                t112 = cow_call_regs(g, COW_IMG(0x10098210u), eax, ebp, edx, 0, 1, 0u);
                t113 = g->ecx;
                t114 = g->edx;
                eax = t112;
                ecx = t113;
                edx = t114;
    COW_AT(10220717)
                if ((uint8_t)eax == 0u)
                {
                    loc_98_f = (double)rdf32(sp0 - 0x98u);
                    loc_94_f = (double)rdf32(sp0 - 0x94u);
                    loc_9c_f = (double)rdf32(sp0 - 0x9cu);
                }
                else
                {
    COW_AT(1022071f)
                    if (rd32(ebp + 0xa0u) == 0u)
                    {
                        eax = rd32(ebp + 0xa0u);
                        goto L_10220748;
                    }
                    eax = rd32(ebp + 0xa0u);
    COW_AT(10220729)
                    if ((int8_t)rd8(eax + 0xb2u) < 0)
                    {
                        loc_98_f = (double)rdf32(sp0 - 0x98u);
                        loc_94_f = (double)rdf32(sp0 - 0x94u);
                        loc_9c_f = (double)rdf32(sp0 - 0x9cu);
                        goto L_10220939;
                    }
                    ecx = (ecx & 0xffffff00u) | rd8(eax + 0xb2u);
    COW_AT(10220737)
                    if (eax == 0u) goto L_10220748;
    COW_AT(1022073b)
                    if (rd8(eax + 0xb3u) & 1u)
                    {
                        loc_98_f = (double)rdf32(sp0 - 0x98u);
                        loc_94_f = (double)rdf32(sp0 - 0x94u);
                        loc_9c_f = (double)rdf32(sp0 - 0x9cu);
                        goto L_10220939;
                    }
L_10220748: ;
    COW_AT(10220748)
                    if (rd32(ebp + 0x1d0u) == 0u)
                    {
                        loc_98_f = (double)rdf32(sp0 - 0x98u);
                        loc_94_f = (double)rdf32(sp0 - 0x94u);
                        loc_9c_f = (double)rdf32(sp0 - 0x9cu);
                    }
                    else
                    {
                        ebx = rd32(ebp + 0x1d0u);
    COW_AT(10220756)
                        d115 = fr(g, (double)rdf32(sp0 - 0x60u) - (double)rdf32(ebp + 4u));
                        wrf32(sp0 - 0x98u, (float)(double)(float)d115);
                        d116 = fr(g, fr(g, (double)rdf32(sp0 - 0x58u) - (double)rdf32(ebp + 0xcu)) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                        wrf32(sp0 - 0x94u, (float)(double)(float)d116);
                        d117 = (double)rdf32(sp0 - 0x90u);
                        d118 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, (double)(float)d116 * (double)(float)d116) + fr(g, (double)(float)d115 * (double)(float)d115)) + fr(g, d117 * d117))));
                        wrf32(sp0 - 0x9cu, (float)d118);
                        d119 = fr(g, (double)rdf32(sp0 - 0x5cu) - (double)rdf32(ebp + 8u));
                        d120 = (double)(float)fr(g, sqrt(fr(g, d119 * d119)));
                        wrf32(sp0 - 0x88u, (float)d120);
                        d121 = (double)rdf32(rd32(sp0 - 0x6cu) + 0x34u);
                        if ((cow_fsw(g, d118, d121, 0u) & 0x4100u) == 0u)
                        {
                            edx = rd32(sp0 - 0x6cu);
                            loc_98_f = (double)(float)d115;
                            loc_94_f = (double)(float)d116;
                            loc_9c_f = d118;
                        }
                        else
                        {
                            eax = cow_fsw(g, d118, d121, 0u) & 0x4100u;
                            edx = rd32(sp0 - 0x6cu);
                            loc_98_f = (double)(float)d115;
                            loc_94_f = (double)(float)d116;
                            loc_9c_f = d118;
                            loc_88_f = d120;
    COW_AT(102207c9)
                            if ((cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x1032a3a0u)), 0u) & 0x4100u) != 0u)
                            {
                                eax = cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x1032a3a0u)), 0u) & 0x4100u;
    COW_AT(102207e0)
                                d122 = fr(g, loc_9c_f - (double)rdf32(edx + 0x38u));
                                if (!(d122 <= (double)rdf32(COW_IMG(0x103295d8u))))
                                {
                                    edi = edx;
                                    x0 = d122;
    COW_AT(102207fd)
                                    d123 = fr(g, (double)rdf32(edi + 0x34u) - (double)rdf32(edi + 0x38u));
                                    wr32(sp0 - 0x44u, 0u);
                                    t124 = rd32(edi + 0x20u);
                                    wr32(sp0 - 0x48u, t124);
                                    g->ecx = ecx;
                                    g->edx = edx;
                                    d125 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / d123)) * (double)(int32_t)t124) + fr(g, fr(g, x0 / d123) * (double)rdf32(COW_IMG(0x103295d8u))));
                                    fpush(g, d125);
                                    g->esp = sp0 - 0xacu;
                                    t126 = cow_call_regs(g, COW_IMG(0x10311c6cu), t124, g->ecx, g->edx, 1, 0);
                                    t127 = g->ecx;
                                    t128 = g->edx;
                                    eax = t126;
                                    ecx = t127;
                                    edx = t128;
    COW_AT(1022082f)
                                    esi = eax;
                                    loc_98_f = (double)rdf32(sp0 - 0x98u);
                                    loc_94_f = (double)rdf32(sp0 - 0x94u);
                                    loc_9c_f = (double)rdf32(sp0 - 0x9cu);
                                    loc_88_f = (double)rdf32(sp0 - 0x88u);
                                }
                                else
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d122, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                    edi = edx;
                                    x0 = d122;
    COW_AT(102207f6)
                                    esi = rd32(edi + 0x20u);
                                }
    COW_AT(10220831)
                                d129 = fr(g, loc_88_f - (double)rdf32(COW_IMG(0x10329990u)));
                                if ((cow_fsw(g, d129, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
                                {
                                    eax = cow_fsw(g, d129, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
                                    x0 = d129;
    COW_AT(1022087b)
                                }
                                else
                                {
                                    eax = cow_fsw(g, d129, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
                                    x0 = d129;
    COW_AT(1022084a)
                                    d130 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329a08u)));
                                    wr32(sp0 - 0x50u, esi);
                                    wr32(sp0 - 0x4cu, 0u);
                                    g->edx = edx;
                                    d131 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d130) * (double)(int32_t)esi) + fr(g, d130 * (double)rdf32(COW_IMG(0x103295d8u))));
                                    fpush(g, d131);
                                    g->esp = sp0 - 0xacu;
                                    t132 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                    t133 = g->edx;
                                    eax = t132;
                                    edx = t133;
    COW_AT(10220877)
                                    esi = eax;
                                    loc_98_f = (double)rdf32(sp0 - 0x98u);
                                    loc_94_f = (double)rdf32(sp0 - 0x94u);
                                    loc_9c_f = (double)rdf32(sp0 - 0x9cu);
                                }
    COW_AT(1022087d)
                                if (!(ebx & 1u)) goto L_102208a1;
    COW_AT(10220882)
                                if (rd16(ebp + 0x210u) != 0u) goto L_102208a1;
    COW_AT(1022088c)
                                ebx = (-((ebx & 0xcu) != 0u) & 0x301ff0u) + 0x40f0u;
L_102208e3: ;
    COW_AT(102208e3)
                                wr32(sp0 - 0xb0u, sp0 - 0x98u);
                                wr32(sp0 - 0xb4u, sp0 - 0x7cu);
                                g->eax = eax;
                                g->edx = sp0 - 0x7cu;
                                g->esp = sp0 - 0xacu;
                                t134 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
                                t135 = g->ecx;
                                t136 = g->edx;
                                eax = t134;
                                ecx = t135;
                                edx = t136;
    COW_AT(102208f6)
                                wr32(sp0 - 0xb0u, 0u);
                                wr32(sp0 - 0xb4u, 0u);
                                t137 = esi << 0x18u | ebx;
                                wr32(sp0 - 0xb8u, t137);
                                g->edx = edx;
                                d138 = (double)rdf32(sp0 - 0x78u);
                                fpush(g, d138);
                                g->esp = sp0 - 0xb8u;
                                t139 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                t140 = g->edx;
                                eax = t139;
                                edx = t140;
    COW_AT(10220909)
                                t141 = eax + rd32(sp0 - 0x84u);
                                wr32(sp0 - 0xbcu, t141);
                                g->ecx = rd32(sp0 - 0x84u);
                                g->edx = edx;
                                t142 = rd32(sp0 - 0x84u);
                                d143 = (double)rdf32(sp0 - 0x7cu);
                                fpush(g, d143);
                                g->esp = sp0 - 0xbcu;
                                t144 = cow_call_regs(g, COW_IMG(0x10311c6cu), t141, g->ecx, g->edx, 1, 0);
                                t145 = g->ecx;
                                t146 = g->edx;
                                eax = t144;
                                ecx = t145;
                                edx = t146;
    COW_AT(10220919)
                                t147 = eax + rd32(sp0 - 0x68u);
                                wr32(sp0 - 0xc0u, t147);
                                wr32(sp0 - 0xc4u, 5u);
                                wr32(sp0 - 0xc8u, 1u);
                                g->eax = t147;
                                g->edx = edx;
                                g->esp = sp0 - 0xc0u;
                                t148 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 1u, 5u);
                                t149 = g->edx;
                                eax = t148;
                                edx = t149;
    COW_AT(10220927)
                                g->edx = edx;
                                g->esp = sp0 - 0xacu;
                                cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
                                t150 = g->edx;
                                edx = t150;
                                loc_98_f = (double)rdf32(sp0 - 0x98u);
                                loc_94_f = (double)rdf32(sp0 - 0x94u);
                                loc_9c_f = (double)rdf32(sp0 - 0x9cu);
                            }
                        }
                    }
L_10220931: ;
    COW_AT(10220931)
                    ebx = rd32(sp0 - 0x6cu);
                    edi = rd32(sp0 - 0x68u);
                }
L_10220939: ;
    COW_AT(10220939)
                eax = rd32(sp0 - 0x64u);
                loc_80 = rd32(sp0 - 0x80u);
            }
        }
    COW_AT(1022093d)
        wr32(sp0 - 0x64u, eax + 1u);
        if ((int32_t)(eax + 1u) < 2304)
        {
            loc_64 = eax + 1u;
            eax = eax + 1u;
            goto L_102206ec;
        }
    COW_AT(1022094d)
        t151 = rd32(sp0 - 0x84u);
        wr32(sp0 - 0xb0u, t151);
        wr32(sp0 - 0xb4u, edi);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0xacu;
        t152 = cow_call_regs(g, COW_IMG(0x102201f0u), t151, ebx, g->edx, 0, 2, edi, t151);
        t153 = g->ecx;
        t154 = g->edx;
        eax = t152;
        ecx = t153;
        edx = t154;
    COW_AT(1022095a)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xacu;
        t155 = cow_thiscall(g, COW_IMG(0x100f94d0u), ecx, 0);
        t156 = g->ecx;
        t157 = g->edx;
        eax = t155;
        ecx = t156;
        edx = t157;
    COW_AT(1022095f)
        wr32(sp0 - 0x88u, eax);
        if (eax == 0u) goto L_10220aca;
        loc_88 = eax;
    COW_AT(1022096b)
        if (rd32(eax) != 1u) goto L_10220aca;
    COW_AT(10220974)
        wr32(sp0 - 0xb0u, 0xcu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xacu;
        t158 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0xcu);
        t159 = g->ecx;
        t160 = g->edx;
        eax = t158;
        ecx = t159;
        edx = t160;
    COW_AT(1022097b)
        if (eax != 0u)
        {
            ebp = eax;
    COW_AT(10220988)
            t161 = (uint32_t)(int8_t)rd8(ebx + 0xfu);
            wr32(sp0 - 0x80u, t161);
            wrf32(sp0 - 0x80u, (float)(double)(float)(double)(int32_t)t161);
            g->ecx = t161;
            g->edx = edx;
            g->esp = sp0 - 0xacu;
            t162 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t163 = g->ecx;
            t164 = g->edx;
            d165 = cow_take_float(g);
            eax = t162;
            ecx = t163;
            edx = t164;
            x0 = d165;
    COW_AT(1022099d)
            g->ecx = ecx;
            d166 = fr(g, (double)rdf32(sp0 - 0x80u) - x0);
            fpush(g, d166);
            g->esp = sp0 - 0xacu;
            t167 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t168 = g->ecx;
            eax = t167;
            ecx = t168;
    COW_AT(102209a6)
            wr8(ebx + 0xfu, (uint8_t)eax);
            if ((int8_t)eax < 0)
            {
    COW_AT(102209ad)
                t169 = rd8(ebx + 0xeu);
                wr8(ebx + 0xfu, 5u);
                wr8(ebx + 0xeu, (uint8_t)((uint8_t)t169 + 1u));
            }
    COW_AT(102209b9)
            if (rd32(rd32(ebp) + (uint32_t)(int8_t)rd8(ebx + 0xeu) * 4u) != 0u)
            {
                esi = rd32(rd32(ebp) + (uint32_t)(int8_t)rd8(ebx + 0xeu) * 4u);
                goto L_102209d8;
            }
            eax = rd32(ebp);
    COW_AT(102209c7)
            wr8(ebx + 0xeu, 0u);
            if (rd32(rd32(ebp)) == 0u)
            {
                ecx = rd32(ebp);
                goto L_10220aa6;
            }
            ecx = rd32(ebp);
            esi = rd32(rd32(ebp));
L_102209d8: ;
    COW_AT(102209d8)
            d170 = fr(g, (double)rdf32(sp0 - 0x60u) - (double)rdf32(rd32(sp0 - 0x88u) + 4u));
            wrf32(sp0 - 0x98u, (float)(double)(float)d170);
            d171 = fr(g, fr(g, (double)rdf32(sp0 - 0x58u) - (double)rdf32(rd32(sp0 - 0x88u) + 0xcu)) * (double)rdf32(COW_IMG(0x1032a3f0u)));
            wrf32(sp0 - 0x94u, (float)(double)(float)d171);
            d172 = (double)rdf32(sp0 - 0x90u);
            d173 = fr(g, sqrt(fr(g, fr(g, fr(g, d171 * (double)(float)d171) + fr(g, (double)(float)d170 * (double)(float)d170)) + fr(g, d172 * d172))));
            if (d173 == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (rd32(sp0 - 0x88u) & 0xffff0000u) | (uint16_t)cow_fsw(g, d173, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = d173;
    COW_AT(10220aa4)
            }
            else
            {
                loc_98_f = (double)(float)d170;
                loc_94_f = (double)(float)d171;
                x0 = d173;
    COW_AT(10220a23)
                d174 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
                wr32(sp0 - 0xb0u, sp0 - 0x98u);
                wr32(sp0 - 0xb4u, sp0 - 0x7cu);
                d175 = fr(g, loc_98_f * fr(g, fr(g, d174 * (double)rdf32(ebx + 0x34u)) * (double)rdf32(COW_IMG(0x10329a34u))));
                d176 = fr(g, fr(g, d174 * (double)rdf32(ebx + 0x34u)) * (double)rdf32(COW_IMG(0x10329a34u)));
                wrf32(sp0 - 0x98u, (float)(double)(float)d175);
                d177 = (double)(float)fr(g, d176 * loc_94_f);
                wrf32(sp0 - 0x94u, (float)d177);
                g->eax = sp0 - 0x7cu;
                g->edx = sp0 - 0x98u;
                g->esp = sp0 - 0xacu;
                t178 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
                t179 = g->edx;
                eax = t178;
                edx = t179;
    COW_AT(10220a57)
                wr32(sp0 - 0xb0u, 0u);
                wr32(sp0 - 0xb4u, 0u);
                wr32(sp0 - 0xb8u, 0x802080f0u);
                t180 = rd16(esi + 0x24u);
                t181 = rd16(esi + 0x26u);
                d182 = (double)rdf32(sp0 - 0x78u);
                fpush(g, d182);
                g->esp = sp0 - 0xb8u;
                t183 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                eax = t183;
                ebx = (uint32_t)(int16_t)t180 - (uint32_t)(int16_t)t181;
    COW_AT(10220a73)
                t184 = eax + ebx + rd32(sp0 - 0x84u);
                wr32(sp0 - 0xbcu, t184);
                t185 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu);
                g->edx = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu);
                t186 = rd16(esi + 0x22u);
                t187 = rd16(esi + 0x20u);
                d188 = (double)rdf32(sp0 - 0x7cu);
                fpush(g, d188);
                g->esp = sp0 - 0xbcu;
                t189 = cow_call_regs(g, COW_IMG(0x10311c6cu), t185, g->ecx, g->edx, 1, 0);
                t190 = g->edx;
                eax = t189;
                edx = t190;
                ebx = (uint32_t)((int32_t)t185 >> 1u);
    COW_AT(10220a96)
                t191 = eax + edi - ebx;
                wr32(sp0 - 0xc0u, t191);
                g->eax = t191;
                g->esp = sp0 - 0xacu;
                t192 = cow_thiscall(g, COW_IMG(0x1011fb60u), esi, 5, t191, rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
                t193 = g->ecx;
                eax = t192;
                ecx = t193;
    COW_AT(10220aa2)
            }
        }
L_10220aa6: ;
    COW_AT(10220aa6)
        wr32(sp0 - 0xb0u, 0x80808080u);
        t194 = (eax & 0xffff0000u) | rd16(rd32(sp0 - 0x88u) + 0x10u);
        wr32(sp0 - 0xb4u, t194);
        g->eax = t194;
        g->edx = rd32(sp0 - 0x88u);
        t195 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb0u;
        t196 = cow_cdecl(g, COW_IMG(0x1008a8e0u), 1, t194);
        t197 = g->edx;
        eax = t196;
        edx = t197;
    COW_AT(10220ab9)
        wr32(sp0 - 0xb4u, eax);
        t198 = rd32(sp0 - 0x84u) + 0x1au;
        wr32(sp0 - 0xb8u, t198);
        ecx = t198;
        loc_b0 = 0x80808080u;
        loc_b4 = eax;
        loc_b8 = t198;
L_10220bf7: ;
    COW_AT(10220bf7)
        wr32(sp0 - 0xbcu, edi + 0x24u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        t240 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, edi + 0x24u, loc_b8, loc_b4, loc_b0, rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
        t241 = g->edx;
        eax = t240;
        edx = t241;
    COW_AT(10220c00)
    }
L_10220c03: ;
    COW_AT(10220c03)
    g->esp = sp0 - 0xacu;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
L_10220c0c: ;
    COW_AT(10220c0c)
    g->ebx = rd32(sp0 - 0xa0u);
    g->esi = rd32(sp0 - 0xa8u);
    g->edi = rd32(sp0 - 0xacu);
    g->ebp = rd32(sp0 - 0xa4u);
    return;
L_10220458: ;
    COW_AT(10220458)
    if (!(x0 < (double)rdf32(COW_IMG(0x1033bf74u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1033bf74u)), 0u);
        goto L_10220473;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1033bf74u)), 0u);
    COW_AT(10220465)
    x0 = fr(g, loc_9c_f + (double)rdf32(COW_IMG(0x1032df90u)));
    goto L_1022046f;
L_102208a1: ;
    COW_AT(102208a1)
    if (!(ebx >> 8u & 1u)) goto L_102208ad;
    COW_AT(102208a6)
    ebx = 0x30d000u;
    goto L_102208e3;
L_102208ad: ;
    COW_AT(102208ad)
    if ((ebx & 2u) == 0u) goto L_102208c2;
    COW_AT(102208b2)
    if (rd32(ebp + 0x170u) == 0x31u) goto L_10220931;
    COW_AT(102208bb)
    ebx = 0xb040u;
    goto L_102208e3;
L_102208c2: ;
    COW_AT(102208c2)
    if (rd8(edi + 0x2fu) == 0u) goto L_10220931;
    eax = (eax & 0xffffff00u) | rd8(edi + 0x2fu);
    COW_AT(102208c9)
    if (rd32(ebp + 0x170u) == 2u) goto L_102208de;
    ebp = rd32(ebp + 0x170u);
    COW_AT(102208d4)
    if (ebp != 3u)
    {
        ebx = 0x808080u;
        goto L_102208e3;
    }
L_102208de: ;
    COW_AT(102208de)
    ebx = 0x206060u;
    goto L_102208e3;
L_10220aca: ;
    COW_AT(10220aca)
    wr32(sp0 - 0xb0u, sp0 - 0x80u);
    wr32(sp0 - 0xb4u, sp0 - 0x98u);
    g->eax = sp0 - 0x98u;
    g->ecx = ebx;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0xacu;
    t199 = cow_stdcall(g, COW_IMG(0x1021f030u), 2, sp0 - 0x98u, sp0 - 0x80u);
    t200 = g->ecx;
    t201 = g->edx;
    d202 = cow_take_float(g);
    eax = t199;
    ecx = t200;
    edx = t201;
    x0 = d202;
    COW_AT(10220adb)
    wrf32(sp0 - 0x9cu, (float)(double)(float)x0);
    if (x0 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10220c03;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    loc_9c_f = (double)(float)x0;
    COW_AT(10220af0)
    wr32(sp0 - 0xb0u, 0xcu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t203 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0xcu);
    t204 = g->ecx;
    t205 = g->edx;
    eax = t203;
    ecx = t204;
    edx = t205;
    COW_AT(10220af7)
    if (eax != 0u)
    {
        ebp = eax;
    COW_AT(10220b04)
        t206 = (uint32_t)(int8_t)rd8(ebx + 0xfu);
        wr32(sp0 - 0x88u, t206);
        wrf32(sp0 - 0x88u, (float)(double)(float)(double)(int32_t)t206);
        g->ecx = t206;
        g->edx = edx;
        g->esp = sp0 - 0xacu;
        t207 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t208 = g->ecx;
        t209 = g->edx;
        d210 = cow_take_float(g);
        eax = t207;
        ecx = t208;
        edx = t209;
        x0 = d210;
    COW_AT(10220b19)
        d211 = fr(g, (double)rdf32(sp0 - 0x88u) - x0);
        fpush(g, d211);
        g->esp = sp0 - 0xacu;
        t212 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        eax = t212;
    COW_AT(10220b22)
        wr8(ebx + 0xfu, (uint8_t)eax);
        if ((int8_t)eax < 0)
        {
    COW_AT(10220b29)
            t213 = rd8(ebx + 0xeu);
            wr8(ebx + 0xfu, 5u);
            wr8(ebx + 0xeu, (uint8_t)((uint8_t)t213 + 1u));
        }
    COW_AT(10220b35)
        if (rd32(rd32(ebp) + (uint32_t)(int8_t)rd8(ebx + 0xeu) * 4u) != 0u)
        {
            esi = rd32(rd32(ebp) + (uint32_t)(int8_t)rd8(ebx + 0xeu) * 4u);
            goto L_10220b54;
        }
    COW_AT(10220b43)
        wr8(ebx + 0xeu, 0u);
        if (rd32(rd32(ebp)) == 0u)
        {
            ecx = rd32(ebp);
            goto L_10220bd7;
        }
        esi = rd32(rd32(ebp));
L_10220b54: ;
    COW_AT(10220b54)
        d214 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x9cu));
        wr32(sp0 - 0xb0u, sp0 - 0x98u);
        wr32(sp0 - 0xb4u, sp0 - 0x7cu);
        d215 = fr(g, (double)rdf32(sp0 - 0x98u) * fr(g, fr(g, d214 * (double)rdf32(ebx + 0x34u)) * (double)rdf32(COW_IMG(0x10329a34u))));
        d216 = fr(g, fr(g, d214 * (double)rdf32(ebx + 0x34u)) * (double)rdf32(COW_IMG(0x10329a34u)));
        wrf32(sp0 - 0x98u, (float)(double)(float)d215);
        d217 = fr(g, d216 * (double)rdf32(sp0 - 0x94u));
        wrf32(sp0 - 0x94u, (float)(double)(float)d217);
        g->eax = sp0 - 0x7cu;
        g->edx = sp0 - 0x98u;
        g->esp = sp0 - 0xacu;
        t218 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x40u, 2, sp0 - 0x7cu, sp0 - 0x98u);
        t219 = g->edx;
        eax = t218;
        edx = t219;
    COW_AT(10220b8c)
        wr32(sp0 - 0xb0u, 0u);
        wr32(sp0 - 0xb4u, 0u);
        wr32(sp0 - 0xb8u, 0x80802020u);
        t220 = rd16(esi + 0x24u);
        t221 = rd16(esi + 0x26u);
        d222 = (double)rdf32(sp0 - 0x78u);
        fpush(g, d222);
        g->esp = sp0 - 0xb8u;
        t223 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        eax = t223;
        ebx = (uint32_t)(int16_t)t220 - (uint32_t)(int16_t)t221;
    COW_AT(10220ba8)
        t224 = eax + ebx + rd32(sp0 - 0x84u);
        wr32(sp0 - 0xbcu, t224);
        t225 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu);
        g->edx = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu);
        t226 = rd16(esi + 0x22u);
        t227 = rd16(esi + 0x20u);
        d228 = (double)rdf32(sp0 - 0x7cu);
        fpush(g, d228);
        g->esp = sp0 - 0xbcu;
        t229 = cow_call_regs(g, COW_IMG(0x10311c6cu), t225, g->ecx, g->edx, 1, 0);
        t230 = g->edx;
        eax = t229;
        edx = t230;
        ebx = (uint32_t)((int32_t)t225 >> 1u);
    COW_AT(10220bcb)
        t231 = eax + edi - ebx;
        wr32(sp0 - 0xc0u, t231);
        g->esp = sp0 - 0xacu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), esi, 5, t231, rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
        t232 = g->ecx;
        ecx = t232;
    }
L_10220bd7: ;
    COW_AT(10220bd7)
    wr32(sp0 - 0xb0u, rd32(COW_IMG(0x104e1bb8u)));
    t233 = (ecx & 0xffff0000u) | rd16(rd32(sp0 - 0x80u) + 0x74u);
    wr32(sp0 - 0xb4u, t233);
    g->eax = rd32(COW_IMG(0x104e1bb8u));
    g->ecx = t233;
    g->edx = rd32(sp0 - 0x80u);
    t234 = rd32(COW_IMG(0x104e1bb8u));
    t235 = rd32(sp0 - 0x80u);
    g->esp = sp0 - 0xb0u;
    t236 = cow_cdecl(g, COW_IMG(0x1008a8e0u), 1, t233);
    t237 = g->ecx;
    t238 = g->edx;
    eax = t236;
    ecx = t237;
    edx = t238;
    COW_AT(10220beb)
    wr32(sp0 - 0xb4u, eax);
    t239 = rd32(sp0 - 0x84u) + 0x1au;
    wr32(sp0 - 0xb8u, t239);
    loc_b0 = rd32(sp0 - 0xb0u);
    loc_b4 = eax;
    eax = t239;
    loc_b8 = t239;
    goto L_10220bf7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102203b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102203c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xacu);
        in_esi = rd32(sp0 - 0xa8u);
        in_ebp = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0x6cu, self);
        (void)sp0;
        return 1;
    }
    case 0x102203ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102203d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102203deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102203f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102203fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220406u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220411u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220416u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220450u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_9c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_9c_f = rdf32(sp0 - 0x9cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220458u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_9c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_9c_f = rdf32(sp0 - 0x9cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220465u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_9c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_9c_f = rdf32(sp0 - 0x9cu);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022046fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_9c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_9c_f = rdf32(sp0 - 0x9cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220473u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_9c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_9c_f = rdf32(sp0 - 0x9cu);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022047cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220485u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102204b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102204bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102204f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x104u;
        wr32(sp0 - 0xb0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102204feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220531u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x7cu);
        wr32(sp0 - 0xb0u, sp0 - 0x98u);
        wr32(sp0 - 0x90u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1022053fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xb4u, 0u);
        wr32(sp0 - 0xb0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1022054bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x10220557u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10220561u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220584u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x7cu);
        wr32(sp0 - 0xb0u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10220592u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xb4u, 0u);
        wr32(sp0 - 0xb0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1022059eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x102205aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x102205b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102205d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x7cu);
        wr32(sp0 - 0xb0u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x102205e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xb4u, 0u);
        wr32(sp0 - 0xb0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102205f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x102205fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10220607u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022062au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x7cu);
        wr32(sp0 - 0xb0u, sp0 - 0x98u);
        wr32(sp0 - 0x98u, 0x430c0000u);
        wr32(sp0 - 0x94u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220638u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xb4u, 0u);
        wr32(sp0 - 0xb0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220644u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x10220650u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x1022065au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220663u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220688u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220696u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102206a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102206aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102206b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102206c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102206d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102206e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102206ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_80;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102206fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_80;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022070eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_80;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220717u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022071fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220729u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220737u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022073bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220748u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220756u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102207c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102207e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102207f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102207fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022082fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220831u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022084au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220877u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022087bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022087du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220882u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022088cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102208a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102208a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102208adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102208b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102208bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102208c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102208c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102208d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102208deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102208e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102208f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x7cu);
        wr32(sp0 - 0xb0u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10220909u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xb4u, 0u);
        wr32(sp0 - 0xb0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220919u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x10220927u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10220931u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220939u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022093du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_80;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022094du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_80;
        double loc_88_f;
        double loc_94_f;
        double loc_98_f;
        double loc_9c_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022095au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022095fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022096bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220974u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022097bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10220988u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1022099du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102209a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102209adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102209b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102209c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102209d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220a23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_94_f;
        double loc_98_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220a57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x7cu);
        wr32(sp0 - 0xb0u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10220a73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xb8u, 0x802080f0u);
        wr32(sp0 - 0xb4u, 0u);
        wr32(sp0 - 0xb0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220a96u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x10220aa2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220aa4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_94_f;
        double loc_98_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220aa6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_94_f;
        double loc_98_f;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_98_f = rdf32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220ab9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xb0u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x10220acau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220adbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        wr32(sp0 - 0xb0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10220af0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_9c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_9c_f = rdf32(sp0 - 0x9cu);
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        wr32(sp0 - 0xb0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10220af7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10220b04u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10220b19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10220b22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10220b29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10220b35u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10220b43u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10220b54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10220b8cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb4u, sp0 - 0x7cu);
        wr32(sp0 - 0xb0u, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x10220ba8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xb8u, 0x80802020u);
        wr32(sp0 - 0xb4u, 0u);
        wr32(sp0 - 0xb0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220bcbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x10220bd7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220bebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x10220bf7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10220c00u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x10220c03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_9c_f;
        uint32_t loc_b0;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_9c_f = rdf32(sp0 - 0x9cu);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10220c0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102203b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102203b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
