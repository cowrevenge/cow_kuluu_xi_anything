/* f_0x1015fa00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015fa00(Guest* g)
{
    double d138;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015fa20u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x20u); goto E_1015fa20;
    case 0x1015fa27u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x20u); goto E_1015fa27;
    case 0x1015fa3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1015fa3e;
    case 0x1015fa45u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1015fa45;
    case 0x1015fa5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1015fa5c;
    case 0x1015fa63u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1015fa63;
    case 0x1015fa7au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1015fa7a;
    case 0x1015fa81u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1015fa81;
    case 0x1015faa8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1015faa8;
    case 0x1015faafu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1015faaf;
    case 0x1015fab9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1015fab9;
    case 0x1015fabeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fabe;
    case 0x1015fac8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fac8;
    case 0x1015facdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015facd;
    case 0x1015faedu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015faed;
    case 0x1015fb00u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fb00;
    case 0x1015fb07u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fb07;
    case 0x1015fb0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fb0c;
    case 0x1015fb13u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fb13;
    case 0x1015fb25u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fb25;
    case 0x1015fb2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fb2d;
    case 0x1015fb35u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fb35;
    case 0x1015fb47u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fb47;
    case 0x1015fb5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fb5f;
    case 0x1015fb66u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fb66;
    case 0x1015fb6du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fb6d;
    case 0x1015fb84u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fb84;
    case 0x1015fb9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fb9c;
    case 0x1015fba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fba4;
    case 0x1015fbacu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fbac;
    case 0x1015fbb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fbb0;
    case 0x1015fbb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fbb8;
    case 0x1015fbcau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fbca;
    case 0x1015fbe0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fbe0;
    case 0x1015fbf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fbf5;
    case 0x1015fbfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fbfe;
    case 0x1015fc05u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fc05;
    case 0x1015fc0du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fc0d;
    case 0x1015fc0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fc0f;
    case 0x1015fc1au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fc1a;
    case 0x1015fc35u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fc35;
    case 0x1015fc3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fc3f;
    case 0x1015fc57u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fc57;
    case 0x1015fc69u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fc69;
    case 0x1015fc7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fc7e;
    case 0x1015fca9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_1015fca9;
    case 0x1015fcabu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1015fcab;
    case 0x1015fcccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fccc;
    case 0x1015fcd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fcd0;
    case 0x1015fceau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fcea;
    case 0x1015fd11u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fd11;
    case 0x1015fd16u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fd16;
    case 0x1015fd1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fd1f;
    case 0x1015fd31u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fd31;
    case 0x1015fd43u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fd43;
    case 0x1015fd58u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fd58;
    case 0x1015fd66u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fd66;
    case 0x1015fd7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fd7b;
    case 0x1015fd80u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fd80;
    case 0x1015fd92u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fd92;
    case 0x1015fd9au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fd9a;
    case 0x1015fda4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1015fda4;
    case 0x1015fdc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fdc1;
    case 0x1015fdd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fdd4;
    case 0x1015fddbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fddb;
    case 0x1015fde2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fde2;
    case 0x1015fde9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fde9;
    case 0x1015fdf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fdf0;
    case 0x1015fdf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fdf8;
    case 0x1015fe01u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe01;
    case 0x1015fe08u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe08;
    case 0x1015fe10u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fe10;
    case 0x1015fe24u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fe24;
    case 0x1015fe29u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fe29;
    case 0x1015fe3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe3e;
    case 0x1015fe47u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe47;
    case 0x1015fe50u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe50;
    case 0x1015fe55u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe55;
    case 0x1015fe67u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe67;
    case 0x1015fe6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe6c;
    case 0x1015fe73u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe73;
    case 0x1015fe79u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe79;
    case 0x1015fe80u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe80;
    case 0x1015fe8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe8e;
    case 0x1015fe94u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe94;
    case 0x1015fe96u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fe96;
    case 0x1015fe9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fe9e;
    case 0x1015feb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015feb0;
    case 0x1015fec9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fec9;
    case 0x1015fed7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015fed7;
    case 0x1015feeau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015feea;
    case 0x1015feffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015feff;
    case 0x1015ff0au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015ff0a;
    case 0x1015ff29u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015ff29;
    case 0x1015ff3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015ff3b;
    case 0x1015ff45u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_14 = rd32(sp0 - 0x14u); goto E_1015ff45;
    case 0x1015ff58u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1015ff58;
    case 0x1015ff5du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1015ff5d;
    case 0x1015ff68u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1015ff68;
    case 0x1015ff6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1015ff6f;
    case 0x1015ff77u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015ff77;
    case 0x1015ff80u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015ff80;
    case 0x1015ff87u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015ff87;
    case 0x1015ff99u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015ff99;
    case 0x1015ffa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_14 = rd32(sp0 - 0x14u); goto E_1015ffa3;
    case 0x1015ffb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1015ffb6;
    case 0x1015ffbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1015ffbb;
    case 0x1015ffc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1015ffc6;
    case 0x1015ffccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1015ffcc;
    case 0x1015ffd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015ffd4;
    case 0x1015ffdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015ffdb;
    case 0x1015ffe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015ffe7;
    case 0x1015fff0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1015fff0;
    case 0x10160015u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160015;
    case 0x1016001au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1016001a;
    case 0x10160024u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160024;
    case 0x10160029u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160029;
    case 0x10160033u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160033;
    case 0x10160038u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160038;
    case 0x10160042u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160042;
    case 0x10160047u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160047;
    case 0x10160051u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160051;
    case 0x10160056u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160056;
    case 0x10160060u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160060;
    case 0x10160065u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160065;
    case 0x1016006fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1016006f;
    case 0x10160074u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160074;
    case 0x1016007eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1016007e;
    case 0x10160083u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160083;
    case 0x1016008du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1016008d;
    case 0x10160092u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160092;
    case 0x1016009cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1016009c;
    case 0x101600a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600a1;
    case 0x101600abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600ab;
    case 0x101600b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600b0;
    case 0x101600bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600ba;
    case 0x101600bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600bf;
    case 0x101600c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600c9;
    case 0x101600ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600ce;
    case 0x101600d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600d8;
    case 0x101600ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600dd;
    case 0x101600e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600e7;
    case 0x101600ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600ec;
    case 0x101600f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600f6;
    case 0x101600fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101600fb;
    case 0x1016010au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1016010a;
    case 0x10160113u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160113;
    case 0x1016011eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1016011e;
    case 0x1016012cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1016012c;
    case 0x10160140u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160140;
    case 0x10160181u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160181;
    case 0x1016018au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1016018a;
    case 0x10160195u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10160195;
    case 0x101601a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101601a3;
    case 0x101601b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101601b7;
    case 0x101601bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101601bc;
    default: break;
    }
#endif

    COW_AT(1015fa00)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, 0xffffffffu);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, 0x8bu);
    wr32(sp0 - 0x34u, 0x3eu);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), in_eax, self, g->edx, 1, 7, 0x3eu, 0x8bu, 4u, 0xffffffffu, in_edi, in_esi, in_ebp);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        edx = t3;
    COW_AT(1015fa20)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t4 = cow_thiscall(g, COW_IMG(0x1015dd90u), self, 0);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    COW_AT(1015fa27)
    wr32(sp0 - 0x28u, 0xffffffffu);
    wr32(sp0 - 0x2cu, 5u);
    wr32(sp0 - 0x30u, 0x8bu);
    wr32(sp0 - 0x34u, 0x3eu);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t7 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 5u, 0xffffffffu, in_edi, in_esi, in_ebp);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 1u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    else
    {
        eax = t7;
        edx = t9;
    COW_AT(1015fa3e)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t10 = cow_thiscall(g, COW_IMG(0x1015de50u), self, 0);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    COW_AT(1015fa45)
    wr32(sp0 - 0x28u, 0xffffffffu);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 0x8cu);
    wr32(sp0 - 0x34u, 0x3eu);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t13 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8cu, 1u, 0xffffffffu, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 != 1u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    else
    {
        eax = t13;
        edx = t15;
    COW_AT(1015fa5c)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t16 = cow_thiscall(g, COW_IMG(0x1015dee0u), self, 0);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    COW_AT(1015fa63)
    wr32(sp0 - 0x28u, 0xffffffffu);
    wr32(sp0 - 0x2cu, 5u);
    wr32(sp0 - 0x30u, 0x8cu);
    wr32(sp0 - 0x34u, 0x3eu);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t19 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8cu, 5u, 0xffffffffu, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 != 1u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    else
    {
        eax = t19;
        edx = t21;
    COW_AT(1015fa7a)
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t22 = cow_fastcall(g, COW_IMG(0x1015def0u), self, edx, 0);
        t23 = g->ecx;
        t24 = g->edx;
        eax = t22;
        ecx = t23;
        edx = t24;
    }
    COW_AT(1015fa81)
    wr32(sp0 - 0x28u, 0xffffffffu);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 0x96u);
    wr32(sp0 - 0x34u, 0x3eu);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t25 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x96u, 1u, 0xffffffffu, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x38u, 0xffffffffu);
    wr32(sp0 - 0x3cu, 5u);
    wr32(sp0 - 0x40u, 0x96u);
    wr32(sp0 - 0x44u, 0x3eu);
    g->edx = t27;
    g->esp = sp0 - 0x28u;
    t28 = cow_call_regs(g, COW_IMG(0x10123a70u), t25, t26, g->edx, 1, 7, 0x3eu, 0x96u, 5u, 0xffffffffu, 0x3eu, 0x96u, 1u);
    t29 = g->edx;
    if ((uint8_t)t28 != 1u)
    {
        eax = t28;
        edx = t29;
    }
    else
    {
        eax = t28;
        edx = t29;
    COW_AT(1015faa8)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t30 = cow_thiscall(g, COW_IMG(0x1015df20u), self, 0);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
    COW_AT(1015faaf)
    if (rd32(COW_IMG(0x105781acu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781acu));
    COW_AT(1015fab9)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t32 = cow_thiscall(g, COW_IMG(0x101304d0u), ecx, 0);
        t33 = g->edx;
        eax = t32;
        edx = t33;
    }
    COW_AT(1015fabe)
    if (rd32(COW_IMG(0x10621944u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10621944u));
    COW_AT(1015fac8)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t34 = cow_thiscall(g, COW_IMG(0x101630c0u), ecx, 0);
        t35 = g->edx;
        eax = t34;
        edx = t35;
    }
    COW_AT(1015facd)
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t36 = cow_call_regs(g, COW_IMG(0x101604b0u), g->eax, g->ecx, edx, 1, 0);
    t37 = g->edx;
    g->esp = sp0 - 0x10u;
    t38 = cow_call_regs(g, COW_IMG(0x1015ef60u), g->eax, COW_IMG(0x10621838u), t37, 1, 5, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t39 = g->edx;
    g->edx = t39;
    g->esp = sp0 - 0x24u;
    t40 = cow_thiscall(g, COW_IMG(0x10126500u), self, 0);
    t41 = g->edx;
    wr32(sp0 - 0x14u, t40);
    if (t40 == 0u)
    {
        eax = t40;
        edx = t41;
        goto L_1015fb35;
    }
    edx = t41;
    loc_14 = t40;
L_1015faed: ;
    COW_AT(1015faed)
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    g->eax = sp0 - 0x14u;
    g->ecx = COW_IMG(0x10621838u);
    g->esp = sp0 - 0x24u;
    t42 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x14u);
    t43 = g->ecx;
    t44 = g->edx;
    if (t42 == 0u)
    {
        edx = t44;
    }
    else
    {
        eax = t42;
        ecx = t43;
        edx = t44;
    COW_AT(1015fb00)
        if (rd8(eax + 0x70u) != 0u)
        {
    COW_AT(1015fb07)
            if (eax != rd32(self + 0x54u))
            {
    COW_AT(1015fb0c)
                if ((int8_t)rd8(eax + 0x6fu) <= 0)
                {
                    edx = (edx & 0xffffff00u) | rd8(eax + 0x6fu);
                }
                else
                {
                    edx = (edx & 0xffffff00u) | rd8(eax + 0x6fu);
    COW_AT(1015fb13)
                    wr16(rd32(COW_IMG(0x1057876cu)) + 0x6au, (uint16_t)(rd16(rd32(COW_IMG(0x1057876cu)) + 0x6au) - (uint16_t)(uint32_t)(int8_t)edx));
                    wr8(eax + 0x6fu, 0u);
                    edx = (edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)edx;
                }
    COW_AT(1015fb25)
                wr32(sp0 - 0x28u, eax);
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                cow_thiscall(g, COW_IMG(0x1015e8a0u), self, 1, eax);
                t45 = g->edx;
                edx = t45;
            }
        }
    }
    COW_AT(1015fb2d)
    if (rd32(sp0 - 0x14u) != 0u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1015faed;
    }
    eax = rd32(sp0 - 0x14u);
L_1015fb35: ;
    COW_AT(1015fb35)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t46 = cow_thiscall(g, COW_IMG(0x10126500u), COW_IMG(0x10621838u), 0);
    t47 = g->edx;
    wr32(sp0 - 0x14u, t46);
    if (t46 == 0u)
    {
        eax = t46;
        edx = t47;
        goto L_1015fbb8;
    }
    edx = t47;
    loc_14 = t46;
L_1015fb47: ;
    COW_AT(1015fb47)
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    g->eax = sp0 - 0x14u;
    g->esp = sp0 - 0x24u;
    t48 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x14u);
    t49 = g->edx;
    if (rd8(t48 + 0x6eu) != 0u)
    {
        edx = t49;
        loc_14 = rd32(sp0 - 0x14u);
    }
    else
    {
        eax = (t48 & 0xffffff00u) | rd8(t48 + 0x6eu);
        edx = t49;
        esi = t48;
    COW_AT(1015fb5f)
        if (rd8(esi + 0x75u) == 0u)
        {
            loc_14 = rd32(sp0 - 0x14u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 0x75u);
    COW_AT(1015fb66)
            if (rd8(esi + 0x76u) == 0u)
            {
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(esi + 0x76u);
    COW_AT(1015fb6d)
                wr32(sp0 - 0x28u, esi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t50 = cow_thiscall(g, COW_IMG(0x1015dbd0u), self, 1, esi);
                t51 = g->edx;
                g->edx = t51;
                t52 = cow_thiscall(g, COW_IMG(0x10126500u), self, 0);
                t53 = g->edx;
                wr32(sp0 - 0x14u, t52);
                if (t52 == 0u)
                {
                    edx = t53;
                    loc_14 = t52;
                    goto L_1015fbac;
                }
                eax = t52;
                edx = t53;
                loc_14 = t52;
L_1015fb84: ;
    COW_AT(1015fb84)
                wr32(sp0 - 0x28u, sp0 - 0x14u);
                g->eax = eax;
                g->esp = sp0 - 0x24u;
                t54 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x14u);
                t55 = g->edx;
                if ((rd16(esi + 0x38u) & rd16(t54 + 0x38u)) != 0u)
                {
                    edx = (t55 & 0xffff0000u) | rd16(t54 + 0x38u);
                    edi = eax;
                    eax = t54;
                    goto L_1015fc0f;
                }
                edx = (t55 & 0xffff0000u) | rd16(t54 + 0x38u);
    COW_AT(1015fb9c)
                if (rd32(sp0 - 0x14u) != 0u)
                {
                    eax = rd32(sp0 - 0x14u);
                    loc_14 = rd32(sp0 - 0x14u);
                    goto L_1015fb84;
                }
                eax = rd32(sp0 - 0x14u);
    COW_AT(1015fba4)
                wr32(sp0 - 0x28u, esi);
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                cow_thiscall(g, COW_IMG(0x10126480u), self, 1, esi);
                t56 = g->edx;
                edx = t56;
                loc_14 = rd32(sp0 - 0x14u);
L_1015fbac: ;
    COW_AT(1015fbac)
                wr8(esi + 0x76u, 0u);
            }
        }
    }
    COW_AT(1015fbb0)
    if (loc_14 != 0u) goto L_1015fb47;
    eax = loc_14;
L_1015fbb8: ;
    COW_AT(1015fbb8)
    if (rd8(COW_IMG(0x10621898u)) <= 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10621898u));
        goto L_1015fc7e;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10621898u));
    edi = 1u;
L_1015fbca: ;
    COW_AT(1015fbca)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t58 = cow_thiscall(g, COW_IMG(0x10126500u), COW_IMG(0x10621838u), 0);
    t59 = g->edx;
    wr32(sp0 - 0x14u, t58);
    if (t58 == 0u)
    {
        eax = t58;
        edx = t59;
        goto L_1015fc69;
    }
    edx = t59;
    loc_14 = t58;
L_1015fbe0: ;
    COW_AT(1015fbe0)
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    g->eax = sp0 - 0x14u;
    g->esp = sp0 - 0x24u;
    t60 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x14u);
    t61 = g->edx;
    if (t60 == 0u)
    {
        edx = t61;
        goto L_1015fc05;
    }
    eax = t60;
    edx = t61;
    esi = t60;
    COW_AT(1015fbf5)
    if (rd8(esi + 0x71u) != edi) goto L_1015fc05;
    COW_AT(1015fbfe)
    if (rd8(esi + 0x6eu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x6eu);
        goto L_1015fc1a;
    }
L_1015fc05: ;
    COW_AT(1015fc05)
    if (rd32(sp0 - 0x14u) != 0u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1015fbe0;
    }
    eax = rd32(sp0 - 0x14u);
    COW_AT(1015fc0d)
L_1015fc69: ;
    COW_AT(1015fc69)
    if ((int32_t)(edi + 1u) < (int32_t)(uint8_t)rd32(COW_IMG(0x10621898u)))
    {
        edi = edi + 1u;
        goto L_1015fbca;
    }
L_1015fc7e: ;
    COW_AT(1015fc7e)
    wr8(COW_IMG(0x10621898u), 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t72 = cow_thiscall(g, COW_IMG(0x1015e7e0u), self, 0);
    t73 = g->edx;
    wr32(sp0 - 0x28u, t72);
    cow_thiscall(g, COW_IMG(0x1015e850u), self, 1, t72);
    t74 = rd32(rd32(COW_IMG(0x10456a28u)));
    wr32(sp0 - 0x10u, t74);
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        eax = t74;
        edx = rd32(COW_IMG(0x10456a28u));
        loc_10 = t74;
    }
    else
    {
        eax = t74;
        edx = rd32(COW_IMG(0x10456a28u));
        loc_10 = t74;
    COW_AT(1015fca9)
        edi = 0u;
L_1015fcab: ;
    COW_AT(1015fcab)
        wr32(sp0 - 0x28u, edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t75 = cow_thiscall(g, COW_IMG(0x1015f9e0u), self, 1, edi);
        t76 = g->edx;
        wr32(sp0 - 0x28u, t75);
        wr32(sp0 - 0x2cu, edi);
        g->edx = t76;
        g->esp = sp0 - 0x28u;
        t77 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, edi);
        t78 = g->edx;
        wr32(sp0 - 0x2cu, t77);
        g->edx = t78;
        g->esp = sp0 - 0x24u;
        t79 = cow_stdcall(g, COW_IMG(0x1015f8f0u), 2, t77, rd32(sp0 - 0x28u));
        t80 = g->edx;
        if ((uint8_t)t79 == 0u)
        {
            eax = t79;
            edx = t80;
        }
        else
        {
            eax = t79;
            edx = t80;
    COW_AT(1015fccc)
            if (edi != 0u)
            {
    COW_AT(1015fd11)
                if (edi == 4u)
                {
    COW_AT(1015fd16)
                    if (rd32(COW_IMG(0x106643a8u)) == 0u)
                    {
                        eax = rd32(COW_IMG(0x106643a8u));
                    }
                    else
                    {
                        eax = rd32(COW_IMG(0x106643a8u));
    COW_AT(1015fd1f)
                        wr32(sp0 - 0x28u, edi);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x24u;
                        t89 = cow_thiscall(g, COW_IMG(0x1015f9c0u), self, 1, edi);
                        t90 = g->edx;
                        wr16(rd32(COW_IMG(0x106643a8u)) + 0x3eu, (uint16_t)t89);
                        eax = t89;
                        edx = t90;
                    }
                }
            }
            else
            {
    COW_AT(1015fcd0)
                wr32(sp0 - 0x28u, edi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t81 = cow_thiscall(g, COW_IMG(0x1015f9c0u), self, 1, edi);
                t82 = g->ecx;
                t83 = g->edx;
                wr32(sp0 - 0x28u, t81);
                g->edx = t83;
                cow_thiscall_cdecl(g, COW_IMG(0x1021ee20u), t82, 1, t81);
                t84 = g->edx;
                if (rd32(COW_IMG(0x106643a8u)) == 0u)
                {
                    eax = rd32(COW_IMG(0x106643a8u));
                    edx = t84;
                }
                else
                {
                    eax = rd32(COW_IMG(0x106643a8u));
                    edx = t84;
    COW_AT(1015fcea)
                    wr32(sp0 - 0x28u, edi);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x24u;
                    t85 = cow_thiscall(g, COW_IMG(0x1015f9c0u), self, 1, edi);
                    t86 = g->edx;
                    wr32(sp0 - 0x28u, 4u);
                    wr16(rd32(COW_IMG(0x106643a8u)) + 0x3cu, (uint16_t)t85);
                    t87 = cow_thiscall(g, COW_IMG(0x1015f9c0u), self, 1, 4u);
                    t88 = rd32(COW_IMG(0x106643a8u));
                    wr16(t88 + 0x3eu, (uint16_t)t87);
                    eax = t87;
                    edx = t88;
                }
            }
    COW_AT(1015fd31)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t91 = cow_thiscall(g, COW_IMG(0x10126500u), COW_IMG(0x10621838u), 0);
            t92 = g->edx;
            wr32(sp0 - 0x14u, t91);
            if (t91 == 0u)
            {
                eax = t91;
                edx = t92;
                goto L_1015fd9a;
            }
            eax = t91;
            loc_14 = t91;
L_1015fd43: ;
    COW_AT(1015fd43)
            wr32(sp0 - 0x28u, sp0 - 0x14u);
            g->eax = eax;
            g->esp = sp0 - 0x24u;
            t93 = cow_call_regs(g, COW_IMG(0x1015ee00u), g->eax, g->ecx, sp0 - 0x14u, 0, 1, sp0 - 0x14u);
            t94 = g->edx;
            if (t93 == 0u)
            {
                edx = t94;
            }
            else
            {
                edx = t94;
                esi = t93;
    COW_AT(1015fd58)
                if ((rd32(esi + 0x34u) & rd32(COW_IMG(0x1037629cu) + edi * 4u)) != 0u)
                {
                    eax = rd32(COW_IMG(0x1037629cu) + edi * 4u);
    COW_AT(1015fd66)
                    wr32(sp0 - 0x28u, esi);
                    wr32(sp0 - 0x2cu, edi);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x28u;
                    t95 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, edi);
                    t96 = g->edx;
                    wr32(sp0 - 0x2cu, t95);
                    g->edx = t96;
                    g->esp = sp0 - 0x24u;
                    t97 = cow_stdcall(g, COW_IMG(0x1015f790u), 2, t95, rd32(sp0 - 0x28u));
                    t98 = g->edx;
                    if ((uint8_t)t97 != 0u)
                    {
                        edx = t98;
                    }
                    else
                    {
                        eax = t97;
                        edx = t98;
    COW_AT(1015fd7b)
                        if (edi == 2u)
                        {
    COW_AT(1015fd80)
                            wr32(sp0 - 0x28u, esi);
                            wr32(sp0 - 0x2cu, 1u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x28u;
                            t99 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, 1u);
                            t100 = g->edx;
                            wr32(sp0 - 0x2cu, t99);
                            g->edx = t100;
                            g->esp = sp0 - 0x24u;
                            cow_stdcall(g, COW_IMG(0x1015f790u), 2, t99, rd32(sp0 - 0x28u));
                            t101 = g->edx;
                            edx = t101;
                        }
                    }
                }
            }
    COW_AT(1015fd92)
            if (rd32(sp0 - 0x14u) != 0u)
            {
                eax = rd32(sp0 - 0x14u);
                loc_14 = rd32(sp0 - 0x14u);
                goto L_1015fd43;
            }
            eax = rd32(sp0 - 0x14u);
        }
L_1015fd9a: ;
    COW_AT(1015fd9a)
        if ((int32_t)(edi + 1u) < 5)
        {
            edi = edi + 1u;
            loc_10 = rd32(sp0 - 0x10u);
            goto L_1015fcab;
        }
        loc_10 = rd32(sp0 - 0x10u);
    }
    COW_AT(1015fda4)
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t102 = cow_call_regs(g, COW_IMG(0x10125360u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
    t103 = g->edx;
    g->edx = t103;
    t104 = cow_thiscall(g, COW_IMG(0x10126500u), COW_IMG(0x10621838u), 0);
    t105 = g->edx;
    wr32(sp0 - 0x14u, t104);
    if (t104 == 0u)
    {
        eax = t104;
        edx = t105;
        goto L_1015fe10;
    }
    eax = t104;
    edx = t105;
    loc_14 = t104;
L_1015fdc1: ;
    COW_AT(1015fdc1)
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    g->eax = eax;
    g->ecx = COW_IMG(0x10621838u);
    g->esp = sp0 - 0x24u;
    t106 = cow_call_regs(g, COW_IMG(0x1015ee00u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x14u);
    t107 = g->ecx;
    t108 = g->edx;
    if (t106 == 0u)
    {
        edx = t108;
    }
    else
    {
        eax = t106;
        ecx = t107;
        edx = t108;
    COW_AT(1015fdd4)
        if (rd8(eax + 0x6eu) == 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax + 0x6eu);
    COW_AT(1015fddb)
            if (rd8(eax + 0x70u) == 0u)
            {
    COW_AT(1015fde2)
                if (rd32(eax + 0xcu) != 0u)
                {
                    ecx = rd32(eax + 0xcu);
    COW_AT(1015fde9)
                    if (rd32(ecx + 8u) == 0u)
                    {
                        edx = rd32(ecx + 8u);
                    }
                    else
                    {
                        edx = rd32(ecx + 8u);
    COW_AT(1015fdf0)
                        if (eax != rd32(COW_IMG(0x1062188cu)))
                        {
    COW_AT(1015fe01)
                            wr32(sp0 - 0x28u, 0u);
                            g->edx = edx;
                            g->esp = sp0 - 0x24u;
                            cow_thiscall(g, rd32(rd32(ecx) + 0x28u), ecx, 1, 0u);
                            t111 = g->edx;
                            edx = t111;
                        }
                        else
                        {
    COW_AT(1015fdf8)
                            wr32(sp0 - 0x28u, 1u);
                            g->edx = rd32(ecx);
                            t109 = rd32(ecx);
                            g->esp = sp0 - 0x24u;
                            cow_thiscall(g, rd32(t109 + 0x28u), ecx, 1, 1u);
                            t110 = g->edx;
                            edx = t110;
                        }
                    }
                }
            }
        }
    }
    COW_AT(1015fe08)
    if (rd32(sp0 - 0x14u) != 0u)
    {
        eax = rd32(sp0 - 0x14u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1015fdc1;
    }
    eax = rd32(sp0 - 0x14u);
L_1015fe10: ;
    COW_AT(1015fe10)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t112 = cow_thiscall(g, COW_IMG(0x10126510u), COW_IMG(0x10621838u), 0);
    t113 = g->ecx;
    t114 = g->edx;
    wr32(sp0 - 0x14u, t112);
    if (t112 == 0u)
    {
        ecx = t113;
        edx = t114;
    }
    else
    {
        eax = t112;
        edx = t114;
        loc_14 = t112;
    COW_AT(1015fe24)
        edi = 0u;
L_1015fe29: ;
    COW_AT(1015fe29)
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        g->eax = eax;
        g->ecx = COW_IMG(0x10621838u);
        g->esp = sp0 - 0x24u;
        t115 = cow_call_regs(g, COW_IMG(0x1015ee20u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x14u);
        t116 = g->ecx;
        t117 = g->edx;
        if (t115 == 0u)
        {
            ecx = t116;
            edx = t117;
        }
        else
        {
            eax = t115;
            ecx = t116;
            edx = t117;
            esi = t115;
    COW_AT(1015fe3e)
            if (rd16(esi + 0x38u) != 0u)
            {
                eax = (eax & 0xffff0000u) | rd16(esi + 0x38u);
    COW_AT(1015fe47)
                if ((uint16_t)(eax & edi) == 0u)
                {
                    edx = eax & edi;
    COW_AT(1015fe67)
                    if (rd32(esi + 0x10u) != 0xeu) goto L_1015fe94;
    COW_AT(1015fe6c)
                    if (rd8(esi + 0x6eu) != 0u)
                    {
                        ecx = (ecx & 0xffffff00u) | rd8(esi + 0x6eu);
                    }
                    else
                    {
                        ecx = (ecx & 0xffffff00u) | rd8(esi + 0x6eu);
    COW_AT(1015fe73)
                        if (rd8(esi + 0x73u) == 1u)
                        {
    COW_AT(1015fe79)
                            if (rd8(esi + 0x75u) == 0u)
                            {
                                ecx = (ecx & 0xffffff00u) | rd8(esi + 0x75u);
                            }
                            else
                            {
    COW_AT(1015fe80)
                                wr32(sp0 - 0x28u, esi);
                                g->ebx = 0xeu;
                                g->edx = edx;
                                g->esp = sp0 - 0x24u;
                                t120 = cow_call_regs(g, COW_IMG(0x1015e530u), eax, self, g->edx, 0, 1, esi);
                                t121 = g->ecx;
                                t122 = g->edx;
                                eax = (t120 & 0xffff0000u) | rd16(esi + 0x38u);
                                ecx = t121;
                                edx = t122;
                                edi = edi | (t120 & 0xffff0000u) | rd16(esi + 0x38u);
                            }
                        }
                    }
    COW_AT(1015fe8e)
                    if (rd8(esi + 0x72u) != 1u) goto L_1015fe96;
L_1015fe94: ;
    COW_AT(1015fe94)
                    edi = edi | eax;
                }
                else
                {
                    edx = eax & edi;
    COW_AT(1015fe50)
                    if (rd32(esi + 0x10u) != 0xeu)
                    {
    COW_AT(1015fe55)
                        wr32(sp0 - 0x28u, 1u);
                        wr32(sp0 - 0x2cu, 0u);
                        wr32(sp0 - 0x30u, 1u);
                        wr32(sp0 - 0x34u, 1u);
                        wr32(sp0 - 0x38u, esi);
                        g->edx = edx;
                        g->esp = sp0 - 0x24u;
                        cow_thiscall(g, COW_IMG(0x1015e6e0u), self, 5, esi, 1u, 1u, 0u, 1u);
                        t118 = g->ecx;
                        t119 = g->edx;
                        ecx = t118;
                        edx = t119;
                    }
                }
            }
        }
L_1015fe96: ;
    COW_AT(1015fe96)
        if (rd32(sp0 - 0x14u) != 0u)
        {
            eax = rd32(sp0 - 0x14u);
            loc_14 = rd32(sp0 - 0x14u);
            goto L_1015fe29;
        }
    }
    COW_AT(1015fe9e)
    if (rd32(sp0 - 0x10u) == 0x60u)
    {
        eax = rd32(sp0 - 0x10u);
    COW_AT(1015feb0)
        g->eax = eax;
        g->edx = edx;
        t123 = rd32(COW_IMG(0x1057847cu));
        g->esp = sp0 - 0x24u;
        t124 = cow_thiscall(g, COW_IMG(0x10221740u), t123 + 0xa4u, 0);
        t125 = g->ecx;
        t126 = g->edx;
        if ((uint8_t)t124 == 0u)
        {
            ecx = t125;
            edx = t126;
            goto L_1015ff80;
        }
        eax = t124;
        ecx = t125;
        edx = t126;
        esi = t123;
    COW_AT(1015fec9)
        if (rd16(esi + 0x448u) != 0u) goto L_1015ff80;
    COW_AT(1015fed7)
        g->eax = eax;
        g->edx = edx;
        t127 = rd32(COW_IMG(0x10578480u));
        g->esp = sp0 - 0x24u;
        t128 = cow_thiscall(g, COW_IMG(0x10150d90u), t127, 0);
        t129 = g->ecx;
        t130 = g->edx;
        if ((uint8_t)t128 == 0u)
        {
            ecx = t129;
            edx = t130;
            goto L_1015ff80;
        }
        edx = t130;
    COW_AT(1015feea)
        g->eax = rd32(COW_IMG(0x105781f8u));
        g->edx = edx;
        t131 = rd32(COW_IMG(0x105781f8u));
        g->esp = sp0 - 0x24u;
        t132 = cow_thiscall(g, COW_IMG(0x10221740u), t131 + 0x20u, 0);
        t133 = g->ecx;
        t134 = g->edx;
        if ((uint8_t)t132 == 0u)
        {
            ecx = t133;
            edx = t134;
            goto L_1015ff80;
        }
        ecx = t133;
        edx = t134;
    COW_AT(1015feff)
        if ((int32_t)rd32(self + 0x78u) > 0)
        {
            eax = rd32(self + 0x78u);
    COW_AT(1015ff0a)
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t135 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t136 = g->ecx;
            t137 = g->edx;
            d138 = cow_take_float(g);
            g->edx = t137;
            fpush(g, d138);
            t139 = cow_call_regs(g, COW_IMG(0x10311c6cu), t135, g->ecx, g->edx, 1, 0);
            t140 = g->edx;
            t141 = rd32(self + 0x78u) - (uint32_t)(int16_t)t139;
            wr32(self + 0x78u, t141);
            if ((int32_t)t141 > 0)
            {
                ecx = t141;
                edx = t140;
            }
            else
            {
                eax = t141;
                edx = t140;
    COW_AT(1015ff29)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t142 = cow_thiscall(g, COW_IMG(0x10126500u), COW_IMG(0x10621838u), 0);
                t143 = g->ecx;
                t144 = g->edx;
                wr32(sp0 - 0x14u, t142);
                if (t142 == 0u)
                {
                    ecx = t143;
                    edx = t144;
                }
                else
                {
                    eax = t142;
                    edx = t144;
                    loc_14 = t142;
    COW_AT(1015ff3b)
L_1015ff45: ;
    COW_AT(1015ff45)
                    wr32(sp0 - 0x28u, sp0 - 0x14u);
                    g->eax = eax;
                    g->ecx = COW_IMG(0x10621838u);
                    g->esp = sp0 - 0x24u;
                    t145 = cow_call_regs(g, COW_IMG(0x1015ee00u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x14u);
                    t146 = g->ecx;
                    t147 = g->edx;
                    if (t145 == 0u)
                    {
                        ecx = t146;
                        edx = t147;
                    }
                    else
                    {
                        eax = t145;
                        ecx = t146;
                        edx = t147;
    COW_AT(1015ff58)
                        if ((rd32(eax + 0x34u) & 0x8000u) != 0u)
                        {
    COW_AT(1015ff5d)
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x24u;
                            t148 = cow_thiscall(g, COW_IMG(0x10118220u), eax, 0);
                            t149 = g->ecx;
                            t150 = g->edx;
                            if (t148 == 0u)
                            {
                                ecx = t149;
                                edx = t150;
                            }
                            else
                            {
                                eax = t148;
                                ecx = t149;
                                edx = t150;
    COW_AT(1015ff68)
                                wr8(eax + 0x44u, 2u);
                                wr32(eax + 0x48u, 0x14u);
                            }
                        }
                    }
    COW_AT(1015ff6f)
                    if (rd32(sp0 - 0x14u) != 0u)
                    {
                        eax = rd32(sp0 - 0x14u);
                        loc_14 = rd32(sp0 - 0x14u);
                        goto L_1015ff45;
                    }
                }
    COW_AT(1015ff77)
                wr32(self + 0x78u, 0u);
            }
        }
    }
L_1015ffdb: ;
    COW_AT(1015ffdb)
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)));
        goto L_1015fff0;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)));
    COW_AT(1015ffe7)
    if (eax != 0x70u) goto L_1016010a;
L_1015fff0: ;
    COW_AT(1015fff0)
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t160 = cow_call_regs(g, COW_IMG(0x1021ed90u), g->eax, g->ecx, edx, 1, 0);
    t161 = g->edx;
    g->ebx = 3u;
    g->edx = t161;
    t162 = cow_thiscall(g, COW_IMG(0x1021c4c0u), rd32(COW_IMG(0x10666e2cu)), 0);
    t163 = g->edx;
    g->ebx = 3u;
    g->edx = t163;
    t164 = cow_thiscall(g, COW_IMG(0x1021c4c0u), rd32(COW_IMG(0x10666e30u)), 0);
    t165 = g->edx;
    if (rd32(COW_IMG(0x10666e34u)) == 0u)
    {
        eax = t164;
        edx = t165;
    }
    else
    {
        eax = t164;
        ecx = rd32(COW_IMG(0x10666e34u));
        edx = t165;
    COW_AT(10160015)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t166 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t167 = g->edx;
        eax = t166;
        edx = t167;
    }
    COW_AT(1016001a)
    if (rd32(COW_IMG(0x10666e38u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e38u));
    COW_AT(10160024)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t168 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t169 = g->edx;
        eax = t168;
        edx = t169;
    }
    COW_AT(10160029)
    if (rd32(COW_IMG(0x10666e3cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e3cu));
    COW_AT(10160033)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t170 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t171 = g->edx;
        eax = t170;
        edx = t171;
    }
    COW_AT(10160038)
    if (rd32(COW_IMG(0x10666e40u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e40u));
    COW_AT(10160042)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t172 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t173 = g->edx;
        eax = t172;
        edx = t173;
    }
    COW_AT(10160047)
    if (rd32(COW_IMG(0x10666e44u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e44u));
    COW_AT(10160051)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t174 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t175 = g->edx;
        eax = t174;
        edx = t175;
    }
    COW_AT(10160056)
    if (rd32(COW_IMG(0x10666e48u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e48u));
    COW_AT(10160060)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t176 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t177 = g->edx;
        eax = t176;
        edx = t177;
    }
    COW_AT(10160065)
    if (rd32(COW_IMG(0x10666e4cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e4cu));
    COW_AT(1016006f)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t178 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t179 = g->edx;
        eax = t178;
        edx = t179;
    }
    COW_AT(10160074)
    if (rd32(COW_IMG(0x10666e50u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e50u));
    COW_AT(1016007e)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t180 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t181 = g->edx;
        eax = t180;
        edx = t181;
    }
    COW_AT(10160083)
    if (rd32(COW_IMG(0x10666e54u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e54u));
    COW_AT(1016008d)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t182 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t183 = g->edx;
        eax = t182;
        edx = t183;
    }
    COW_AT(10160092)
    if (rd32(COW_IMG(0x10666e58u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e58u));
    COW_AT(1016009c)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t184 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t185 = g->edx;
        eax = t184;
        edx = t185;
    }
    COW_AT(101600a1)
    if (rd32(COW_IMG(0x10666e5cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e5cu));
    COW_AT(101600ab)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t186 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t187 = g->edx;
        eax = t186;
        edx = t187;
    }
    COW_AT(101600b0)
    if (rd32(COW_IMG(0x10666e60u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e60u));
    COW_AT(101600ba)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t188 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t189 = g->edx;
        eax = t188;
        edx = t189;
    }
    COW_AT(101600bf)
    if (rd32(COW_IMG(0x10666e64u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e64u));
    COW_AT(101600c9)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t190 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t191 = g->edx;
        eax = t190;
        edx = t191;
    }
    COW_AT(101600ce)
    if (rd32(COW_IMG(0x10666e68u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e68u));
    COW_AT(101600d8)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t192 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t193 = g->edx;
        eax = t192;
        edx = t193;
    }
    COW_AT(101600dd)
    if (rd32(COW_IMG(0x10666e6cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e6cu));
    COW_AT(101600e7)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t194 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t195 = g->edx;
        eax = t194;
        edx = t195;
    }
    COW_AT(101600ec)
    if (rd32(COW_IMG(0x10666e70u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10666e70u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10666e70u));
    COW_AT(101600f6)
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t196 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t197 = g->ecx;
        t198 = g->edx;
        eax = t196;
        ecx = t197;
        edx = t198;
    }
    COW_AT(101600fb)
    g->ebx = 3u;
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t199 = cow_fastcall(g, COW_IMG(0x1022b290u), ecx, edx, 0);
    t200 = g->ecx;
    t201 = g->edx;
    g->ecx = t200;
    g->edx = t201;
    t202 = cow_stdcall(g, COW_IMG(0x10222df0u), 0);
    t203 = g->ecx;
    t204 = g->edx;
    g->ecx = t203;
    g->edx = t204;
    t205 = cow_stdcall(g, COW_IMG(0x10226540u), 0);
    t206 = g->ecx;
    t207 = g->edx;
    eax = t205;
    ecx = t206;
    edx = t207;
L_1016010a: ;
    COW_AT(1016010a)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t208 = cow_stdcall(g, COW_IMG(0x1021ede0u), 0);
    t209 = g->ecx;
    t210 = g->edx;
    if (t208 != 0u)
    {
        eax = t208;
        ecx = t209;
        edx = t210;
        goto L_10160181;
    }
    eax = t208;
    edx = t210;
    COW_AT(10160113)
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_10160181;
    }
    ecx = rd32(COW_IMG(0x10456a28u));
    COW_AT(1016011e)
    wr32(sp0 - 0x28u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t211 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t212 = g->ecx;
    t213 = g->edx;
    if ((uint8_t)t211 != 0u)
    {
        eax = t211;
        ecx = t212;
        edx = t213;
        goto L_10160181;
    }
    eax = t211;
    edx = t213;
    COW_AT(1016012c)
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 4u);
    g->ebx = 3u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t214 = cow_thiscall(g, COW_IMG(0x1015ed10u), COW_IMG(0x10621838u), 3, 4u, 0u, 0u);
    t215 = g->ecx;
    t216 = g->edx;
    if ((uint8_t)t214 != 0u)
    {
        eax = t214;
        ecx = t215;
        edx = t216;
        goto L_10160181;
    }
    eax = t214;
    COW_AT(10160140)
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    wr32(sp0 - 0x10u, 0x58u);
    wr32(sp0 - 0xcu, 0x2au);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x101602f0u), self, 3, sp0 - 0x10u, 0u, 0u);
    t217 = g->ecx;
    t218 = g->edx;
    wr32(sp0 - 0x28u, 0x58u);
    g->eax = 0x58u;
    g->edx = t218;
    t219 = cow_thiscall_cdecl(g, COW_IMG(0x1021ee00u), t217, 1, 0x58u);
    t220 = g->ecx;
    t221 = g->edx;
    g->edx = t221;
    t222 = cow_stdcall(g, COW_IMG(0x1021edc0u), 0);
    t223 = g->edx;
    cow_call_regs(g, COW_IMG(0x10160650u), g->eax, g->ecx, t223, 1, 0);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return;
L_1015fc0f: ;
    COW_AT(1015fc0f)
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x2cu, edi);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x101266b0u), self, 2, edi, esi);
    t57 = g->edx;
    edx = t57;
    loc_14 = rd32(sp0 - 0x14u);
    goto L_1015fbac;
L_1015fc1a: ;
    COW_AT(1015fc1a)
    wr32(sp0 - 0x28u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t62 = cow_thiscall(g, COW_IMG(0x1015dbd0u), self, 1, esi);
    t63 = g->edx;
    wr32(sp0 - 0x28u, esi);
    g->edx = t63;
    t64 = cow_thiscall(g, COW_IMG(0x1015db10u), self, 1, esi);
    t65 = g->edx;
    t66 = rd8(esi + 0x34u);
    wr8(esi + 0x71u, 0u);
    if (!(t66 & 1u))
    {
        eax = (t64 & 0xffffff00u) | t66;
        edx = t65;
        goto L_1015fc3f;
    }
    eax = (t64 & 0xffffff00u) | t66;
    edx = t65;
    COW_AT(1015fc35)
    if (rd8(esi + 0x98u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x98u);
        goto L_1015fc69;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 0x98u);
L_1015fc3f: ;
    COW_AT(1015fc3f)
    wr32(sp0 - 0x28u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t67 = cow_thiscall(g, COW_IMG(0x1015e850u), self, 1, esi);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->edi = edi;
    g->edx = sp0 - 8u;
    t68 = cow_thiscall(g, COW_IMG(0x1011abf0u), esi, 1, sp0 - 8u);
    t69 = g->edx;
    if ((uint8_t)t68 == 0u)
    {
        eax = t68;
        edx = t69;
    }
    else
    {
        edx = t69;
    COW_AT(1015fc57)
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t70 = cow_call_regs(g, COW_IMG(0x10124700u), sp0 - 8u, rd32(COW_IMG(0x104e1d4cu)), g->edx, 0, 2, sp0 - 8u, 0u);
        t71 = g->edx;
        eax = t70;
        edx = t71;
    }
    goto L_1015fc69;
L_1015ff80: ;
    COW_AT(1015ff80)
    if ((int32_t)rd32(self + 0x78u) <= 0)
    {
        eax = rd32(self + 0x78u);
    COW_AT(1015ff87)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t151 = cow_thiscall(g, COW_IMG(0x10126500u), COW_IMG(0x10621838u), 0);
        t152 = g->ecx;
        t153 = g->edx;
        wr32(sp0 - 0x14u, t151);
        if (t151 == 0u)
        {
            ecx = t152;
            edx = t153;
        }
        else
        {
            eax = t151;
            loc_14 = t151;
    COW_AT(1015ff99)
L_1015ffa3: ;
    COW_AT(1015ffa3)
            wr32(sp0 - 0x28u, sp0 - 0x14u);
            g->eax = eax;
            g->ecx = COW_IMG(0x10621838u);
            g->esp = sp0 - 0x24u;
            t154 = cow_call_regs(g, COW_IMG(0x1015ee00u), g->eax, g->ecx, sp0 - 0x14u, 0, 1, sp0 - 0x14u);
            t155 = g->ecx;
            t156 = g->edx;
            if (t154 == 0u)
            {
                ecx = t155;
                edx = t156;
            }
            else
            {
                eax = t154;
                ecx = t155;
                edx = t156;
    COW_AT(1015ffb6)
                if ((rd32(eax + 0x34u) & 0x8000u) != 0u)
                {
    COW_AT(1015ffbb)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x24u;
                    t157 = cow_thiscall(g, COW_IMG(0x10118220u), eax, 0);
                    t158 = g->ecx;
                    t159 = g->edx;
                    if (t157 == 0u)
                    {
                        ecx = t158;
                        edx = t159;
                    }
                    else
                    {
                        eax = t157;
                        ecx = t158;
                        edx = t159;
    COW_AT(1015ffc6)
                        wr8(eax + 0x44u, 3u);
                        wr32(eax + 0x48u, 0x14u);
                    }
                }
            }
    COW_AT(1015ffcc)
            if (rd32(sp0 - 0x14u) != 0u)
            {
                eax = rd32(sp0 - 0x14u);
                loc_14 = rd32(sp0 - 0x14u);
                goto L_1015ffa3;
            }
        }
    COW_AT(1015ffd4)
        wr32(self + 0x78u, 0xb4u);
    }
    goto L_1015ffdb;
L_10160181: ;
    COW_AT(10160181)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t224 = cow_stdcall(g, COW_IMG(0x1021ede0u), 0);
    t225 = g->edx;
    if (t224 != 3u)
    {
        eax = t224;
        edx = t225;
    }
    else
    {
        eax = t224;
        edx = t225;
    COW_AT(1016018a)
        if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
        {
            ecx = rd32(COW_IMG(0x10456a28u));
            goto L_101601b7;
        }
        ecx = rd32(COW_IMG(0x10456a28u));
    COW_AT(10160195)
        wr32(sp0 - 0x28u, 0u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t226 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
        t227 = g->ecx;
        t228 = g->edx;
        if ((uint8_t)t226 != 0u)
        {
            eax = t226;
            ecx = t227;
            edx = t228;
            goto L_101601b7;
        }
        eax = t226;
        edx = t228;
    COW_AT(101601a3)
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 4u);
        g->ebx = 3u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t229 = cow_thiscall(g, COW_IMG(0x1015ed10u), COW_IMG(0x10621838u), 3, 4u, 0u, 0u);
        t230 = g->ecx;
        t231 = g->edx;
        if ((uint8_t)t229 == 0u)
        {
            eax = t229;
            edx = t231;
            goto L_101601bc;
        }
        eax = t229;
        ecx = t230;
        edx = t231;
L_101601b7: ;
    COW_AT(101601b7)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t232 = cow_stdcall(g, COW_IMG(0x1021edd0u), 0);
        t233 = g->edx;
        eax = t232;
        edx = t233;
    }
L_101601bc: ;
    COW_AT(101601bc)
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10160650u), g->eax, g->ecx, edx, 1, 0);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1015fa00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015fa20u:
    {
        uint32_t eax;
        uint32_t ecx;
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x24u, in_edi);
        wr32(sp0 - 0x18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1015fa27u:
    {
        uint32_t eax;
        uint32_t ecx;
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x24u, in_edi);
        wr32(sp0 - 0x18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1015fa3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fa45u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fa5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fa63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fa7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fa81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015faa8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015faafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fab9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fabeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fac8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015facdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015faedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fb00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fb07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fb0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fb13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fb25u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fb2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fb35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fb47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fb5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fb66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fb6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fb84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fb9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fba4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fbacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fbb0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fbb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fbcau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fbe0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fbf5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fbfeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fc05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fc0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fc0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fc1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fc35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fc3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fc57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015fc69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fc7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fca9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fcabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fcccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fcd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fceau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fd11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fd16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fd1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fd31u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fd43u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fd58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fd66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fd7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fd80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fd92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fd9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fda4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fdc1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fdd4u:
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
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fddbu:
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
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fde2u:
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
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fde9u:
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
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fdf0u:
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
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fdf8u:
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
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fe01u:
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
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fe08u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fe10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015fe24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015fe29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        (void)sp0;
        return 1;
    }
    case 0x1015fe3eu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fe47u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fe50u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fe55u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fe67u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fe6cu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fe73u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fe79u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fe80u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015fe8eu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        (void)sp0;
        return 1;
    }
    case 0x1015fe94u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        (void)sp0;
        return 1;
    }
    case 0x1015fe96u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0xeu;
        (void)sp0;
        return 1;
    }
    case 0x1015fe9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015feb0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015fec9u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015fed7u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015feeau:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015feffu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015ff0au:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015ff29u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015ff3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015ff45u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        g->esi = 0x14u;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x1015ff58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        g->esi = 0x14u;
        g->edi = 0x8000u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015ff5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        g->esi = 0x14u;
        g->edi = 0x8000u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015ff68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        g->esi = 0x14u;
        g->edi = 0x8000u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015ff6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        g->esi = 0x14u;
        g->edi = 0x8000u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015ff77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015ff80u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015ff87u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015ff99u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015ffa3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        g->esi = 0x14u;
        g->edi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x1015ffb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        g->esi = 0x14u;
        g->edi = 0x8000u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015ffbbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        g->esi = 0x14u;
        g->edi = 0x8000u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015ffc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        g->esi = 0x14u;
        g->edi = 0x8000u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015ffccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        g->esi = 0x14u;
        g->edi = 0x8000u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1015ffd4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015ffdbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015ffe7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1015fff0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160015u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1016001au:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160024u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160029u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160033u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160038u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160042u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160047u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160051u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160056u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160060u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160065u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1016006fu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160074u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1016007eu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160083u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1016008du:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160092u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1016009cu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600a1u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600abu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600b0u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600bau:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600bfu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600c9u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600ceu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600d8u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600ddu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600e7u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600ecu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600f6u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101600fbu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1016010au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160113u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1016011eu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1016012cu:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160140u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10160181u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1016018au:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10160195u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101601a3u:
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
        g->esp = sp0 - 0x24u;
        g->ebx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101601b7u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101601bcu:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1015fa00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1015fa00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
