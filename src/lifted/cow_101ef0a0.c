/* f_0x101ef0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101ef0a0(Guest* g)
{
    double d103;
    double d104;
    double d110;
    double d114;
    double d115;
    double d121;
    double d125;
    double d126;
    double d127;
    double d131;
    double d132;
    double d136;
    double d140;
    double d144;
    double d145;
    double d148;
    double d151;
    double d158;
    double d159;
    double d160;
    double d164;
    double d168;
    double d169;
    double d170;
    double d174;
    double d175;
    double d179;
    double d180;
    double d181;
    double d182;
    double d183;
    double d186;
    double d187;
    double d19;
    double d191;
    double d192;
    double d193;
    double d194;
    double d195;
    double d219;
    double d220;
    double d23;
    double d24;
    double d27;
    double d28;
    double d29;
    double d47;
    double d48;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d66;
    double d72;
    double d73;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d89;
    double d90;
    double d91;
    double d94;
    double d95;
    double d96;
    double d98;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_14_f;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t146;
    uint32_t t147;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
    uint32_t t157;
    uint32_t t16;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t165;
    uint32_t t166;
    uint32_t t167;
    uint32_t t17;
    uint32_t t171;
    uint32_t t172;
    uint32_t t173;
    uint32_t t176;
    uint32_t t177;
    uint32_t t178;
    uint32_t t18;
    uint32_t t184;
    uint32_t t185;
    uint32_t t188;
    uint32_t t189;
    uint32_t t190;
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
    uint32_t t22;
    uint32_t t221;
    uint32_t t222;
    uint32_t t25;
    uint32_t t26;
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
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
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
    uint32_t t70;
    uint32_t t71;
    uint32_t t74;
    uint32_t t75;
    uint32_t t8;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t9;
    uint32_t t92;
    uint32_t t93;
    uint32_t t97;
    uint32_t t99;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ef0bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_101ef0bd;
    case 0x101ef0c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_101ef0c3;
    case 0x101ef0c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_101ef0c7;
    case 0x101ef0d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_101ef0d4;
    case 0x101ef0d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_101ef0d8;
    case 0x101ef0e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_101ef0e5;
    case 0x101ef0edu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_101ef0ed;
    case 0x101ef0fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_101ef0fa;
    case 0x101ef109u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_101ef109;
    case 0x101ef124u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef124;
    case 0x101ef130u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); goto E_101ef130;
    case 0x101ef14au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); goto E_101ef14a;
    case 0x101ef14eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); goto E_101ef14e;
    case 0x101ef150u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); goto E_101ef150;
    case 0x101ef162u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); goto E_101ef162;
    case 0x101ef172u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); goto E_101ef172;
    case 0x101ef177u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); goto E_101ef177;
    case 0x101ef186u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); goto E_101ef186;
    case 0x101ef194u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); goto E_101ef194;
    case 0x101ef19cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); goto E_101ef19c;
    case 0x101ef1ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); x0 = ST(0); goto E_101ef1cc;
    case 0x101ef1ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); x0 = ST(0); goto E_101ef1ce;
    case 0x101ef1f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef1f0;
    case 0x101ef1fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef1fa;
    case 0x101ef20bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); goto E_101ef20b;
    case 0x101ef213u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); goto E_101ef213;
    case 0x101ef22bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef22b;
    case 0x101ef242u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef242;
    case 0x101ef259u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef259;
    case 0x101ef278u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef278;
    case 0x101ef282u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef282;
    case 0x101ef2acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef2ac;
    case 0x101ef2b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef2b7;
    case 0x101ef2c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef2c7;
    case 0x101ef34eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_101ef34e;
    case 0x101ef356u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_101ef356;
    case 0x101ef37cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); x0 = ST(0); goto E_101ef37c;
    case 0x101ef38bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef38b;
    case 0x101ef38du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); x0 = ST(0); goto E_101ef38d;
    case 0x101ef38fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef38f;
    case 0x101ef3abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef3ab;
    case 0x101ef400u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef400;
    case 0x101ef489u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef489;
    case 0x101ef4d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef4d1;
    case 0x101ef4e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef4e4;
    case 0x101ef4ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef4ec;
    case 0x101ef4fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef4fa;
    case 0x101ef52bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); goto E_101ef52b;
    case 0x101ef533u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); goto E_101ef533;
    case 0x101ef55du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef55d;
    case 0x101ef570u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef570;
    case 0x101ef57fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_101ef57f;
    case 0x101ef590u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef590;
    case 0x101ef5acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef5ac;
    case 0x101ef5bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef5bf;
    case 0x101ef5ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_101ef5ce;
    case 0x101ef5dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef5df;
    case 0x101ef5ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef5ec;
    case 0x101ef5f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef5f0;
    case 0x101ef61au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef61a;
    case 0x101ef624u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef624;
    case 0x101ef62du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef62d;
    case 0x101ef63au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef63a;
    case 0x101ef64fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); x0 = ST(0); goto E_101ef64f;
    case 0x101ef651u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); x0 = ST(0); goto E_101ef651;
    case 0x101ef660u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef660;
    case 0x101ef675u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); x0 = ST(0); goto E_101ef675;
    case 0x101ef677u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); x0 = ST(0); goto E_101ef677;
    case 0x101ef686u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef686;
    case 0x101ef69eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef69e;
    case 0x101ef6cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); goto E_101ef6ca;
    case 0x101ef6d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); goto E_101ef6d2;
    case 0x101ef6e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef6e6;
    case 0x101ef6ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef6ec;
    case 0x101ef6f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef6f0;
    case 0x101ef6f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef6f5;
    case 0x101ef6feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef6fe;
    case 0x101ef724u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef724;
    case 0x101ef739u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); x0 = ST(0); goto E_101ef739;
    case 0x101ef73bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); x0 = ST(0); goto E_101ef73b;
    case 0x101ef748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef748;
    case 0x101ef750u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef750;
    case 0x101ef765u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); x0 = ST(0); goto E_101ef765;
    case 0x101ef767u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); x0 = ST(0); goto E_101ef767;
    case 0x101ef774u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef774;
    case 0x101ef77cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef77c;
    case 0x101ef78du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef78d;
    case 0x101ef79eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef79e;
    case 0x101ef7acu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101ef7ac;
    case 0x101ef7b8u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101ef7b8;
    case 0x101ef7ceu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101ef7ce;
    case 0x101ef7d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef7d3;
    case 0x101ef7e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef7e4;
    case 0x101ef7eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef7ee;
    case 0x101ef7ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef7ff;
    case 0x101ef809u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef809;
    case 0x101ef80fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef80f;
    case 0x101ef820u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef820;
    case 0x101ef831u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef831;
    case 0x101ef83du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14_f = rdf32(sp0 - 0x14u); goto E_101ef83d;
    case 0x101ef851u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef851;
    case 0x101ef87cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef87c;
    case 0x101ef886u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef886;
    case 0x101ef88du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef88d;
    case 0x101ef897u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef897;
    case 0x101ef8a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef8a1;
    case 0x101ef8a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef8a9;
    case 0x101ef8abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef8ab;
    case 0x101ef8c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef8c7;
    case 0x101ef8dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef8df;
    case 0x101ef8ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101ef8eb;
    case 0x101ef8edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef8ed;
    case 0x101ef90cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef90c;
    case 0x101ef91bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef91b;
    case 0x101ef91fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef91f;
    case 0x101ef952u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef952;
    case 0x101ef963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ef963;
    case 0x101ef970u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef970;
    case 0x101ef97bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef97b;
    case 0x101ef982u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101ef982;
    default: break;
    }
#endif

    COW_AT(101ef0a0)
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, 0xffffffffu);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, 0x9au);
    wr32(sp0 - 0x2cu, 0x26u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), in_eax, self, g->edx, 1, 7, 0x26u, 0x9au, 4u, 0xffffffffu, in_esi, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(101ef0c3)
        wr8(self + 0x15u, rd8(self + 0x15u) & 0xfdu);
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(101ef0bd)
        wr8(self + 0x15u, rd8(self + 0x15u) | 2u);
    }
    COW_AT(101ef0c7)
    t4 = rd16(self + 0x14u);
    wr8(sp0 - 0x15u, 0u);
    if ((t4 & 0x40u) == 0u)
    {
        eax = (eax & 0xffff0000u) | t4;
    COW_AT(101ef0fa)
        g->eax = eax;
        g->edx = edx;
        t8 = rd32(COW_IMG(0x10578478u));
        g->esp = sp0 - 0x1cu;
        t9 = cow_thiscall(g, COW_IMG(0x1011ba40u), t8, 0);
        t10 = g->ecx;
        t11 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            eax = t9;
            ecx = t10;
            edx = t11;
            loc_1c = in_esi;
        }
        else
        {
            edx = t11;
    COW_AT(101ef109)
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 1u);
            wr32(sp0 - 0x2cu, 1u);
            t12 = rd32(rd32(COW_IMG(0x10578478u)) + 8u);
            wr32(sp0 - 0x30u, t12);
            g->eax = rd32(COW_IMG(0x10578478u));
            g->edx = edx;
            t13 = rd32(COW_IMG(0x10578478u));
            g->esp = sp0 - 0x1cu;
            t14 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t12, 1u, 1u, 0u, 0u);
            t15 = g->ecx;
            t16 = g->edx;
            eax = t14;
            ecx = t15;
            edx = t16;
            loc_1c = rd32(sp0 - 0x1cu);
        }
    }
    else
    {
        eax = (eax & 0xffff0000u) | t4;
    COW_AT(101ef0d4)
        if ((eax & 0x38u) == 0u) goto L_101ef0e5;
    COW_AT(101ef0d8)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t5 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t6 = g->ecx;
        t7 = g->edx;
        if (t5 < rd32(self + 0xb0u))
        {
            eax = t5;
            ecx = t6;
            edx = t7;
            loc_1c = in_esi;
            goto L_101ef124;
        }
        eax = t5;
        ecx = t6;
        edx = t7;
L_101ef0e5: ;
    COW_AT(101ef0e5)
        if ((int8_t)rd16(self + 0x14u) < 0)
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
            loc_1c = in_esi;
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
    COW_AT(101ef0ed)
            wr8(sp0 - 0x15u, 1u);
            wr16(self + 0x14u, (uint16_t)((eax & 0xffffff00u) | (uint8_t)(eax | 0x80u)));
            eax = (eax & 0xffffff00u) | (uint8_t)(eax | 0x80u);
            loc_1c = in_esi;
        }
    }
L_101ef124: ;
    COW_AT(101ef124)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_edi);
    if ((rd16(self + 0x14u) & 0x20u) == 0u)
    {
        ebx = (in_ebx & 0xffff0000u) | rd16(self + 0x14u);
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        ebx = (in_ebx & 0xffff0000u) | rd16(self + 0x14u);
    COW_AT(101ef130)
        t17 = (uint32_t)(int16_t)rd16(self + 0xa6u);
        if ((int32_t)(t17 - (uint32_t)(int16_t)rd16(self + 0xa8u)) >= 0)
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0xa6u);
            edx = t17;
            ebp = (in_ebp & 0xffff0000u) | rd16(self + 0xa8u);
            edi = t17 - (uint32_t)(int16_t)rd16(self + 0xa8u);
    COW_AT(101ef14e)
            ecx = edi;
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0xa6u);
            ecx = (uint32_t)(int16_t)rd16(self + 0xa8u);
            edx = t17;
            ebp = (in_ebp & 0xffff0000u) | rd16(self + 0xa8u);
    COW_AT(101ef14a)
            ecx = ecx - edx;
        }
    COW_AT(101ef150)
        t18 = (edx & 0xffffff00u) | rd8(self + 0xa4u);
        if ((int32_t)ecx >= (int32_t)(uint8_t)t18)
        {
            edx = t18;
            edi = (uint8_t)t18;
    COW_AT(101ef172)
            if ((int16_t)eax <= (int16_t)ebp)
            {
    COW_AT(101ef186)
                wr16(self + 0xa6u, (uint16_t)(eax + ((ecx & 0xffff0000u) | (uint8_t)edx)));
                ecx = eax + ((ecx & 0xffff0000u) | (uint8_t)edx);
            }
            else
            {
    COW_AT(101ef177)
                wr16(self + 0xa6u, (uint16_t)(eax - ((edx & 0xffff0000u) | (uint8_t)edx)));
                eax = eax - ((edx & 0xffff0000u) | (uint8_t)edx);
                edx = (edx & 0xffff0000u) | (uint8_t)edx;
            }
        }
        else
        {
            edx = t18;
            edi = (uint8_t)t18;
    COW_AT(101ef162)
            wr16(self + 0xa6u, (uint16_t)ebp);
            wr16(self + 0x14u, ebx & 0xffdfu);
            ebx = ebx & 0xffffffdfu;
        }
    }
    COW_AT(101ef194)
    if ((rd16(self + 0x14u) & 0x10u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
    COW_AT(101ef20b)
        if ((eax & 2u) == 0u)
        {
            loc_20 = in_ebx;
            loc_24 = in_ebp;
            loc_28 = in_edi;
        }
        else
        {
    COW_AT(101ef213)
            wr32(sp0 - 0x2cu, 0xffffffffu);
            wr32(sp0 - 0x30u, 1u);
            wr32(sp0 - 0x34u, 0x7du);
            wr32(sp0 - 0x38u, 0x26u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t35 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x26u, 0x7du, 1u, 0xffffffffu, in_edi, in_ebp, in_ebx);
            t36 = g->ecx;
            t37 = g->edx;
            if ((uint8_t)t35 != 0u)
            {
                eax = t35;
                goto L_101ef2ac;
            }
            eax = t35;
            ecx = t36;
            edx = t37;
    COW_AT(101ef22b)
            wr32(sp0 - 0x2cu, 0xffffffffu);
            wr32(sp0 - 0x30u, 4u);
            wr32(sp0 - 0x34u, 0xa4u);
            wr32(sp0 - 0x38u, 0x26u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t38 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x26u, 0xa4u, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t39 = g->ecx;
            t40 = g->edx;
            if ((uint8_t)t38 == 0u)
            {
                eax = t38;
                ecx = t39;
                edx = t40;
                goto L_101ef259;
            }
            eax = t38;
            ecx = t39;
            edx = t40;
    COW_AT(101ef242)
            wr32(sp0 - 0x2cu, 0xffffffffu);
            wr32(sp0 - 0x30u, 4u);
            wr32(sp0 - 0x34u, 0xa5u);
            wr32(sp0 - 0x38u, 0x26u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t41 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x26u, 0xa5u, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t42 = g->ecx;
            t43 = g->edx;
            if ((uint8_t)t41 != 0u)
            {
                eax = t41;
                goto L_101ef2ac;
            }
            eax = t41;
            ecx = t42;
            edx = t43;
L_101ef259: ;
    COW_AT(101ef259)
            wr32(sp0 - 0x2cu, 0x7cu);
            wr32(sp0 - 0x30u, 0x26u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t44 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x26u, 0x7cu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
            t45 = g->ecx;
            t46 = g->edx;
            d47 = cow_take_float(g);
            wrf32(sp0 - 0x14u, (float)(double)(float)d47);
            if ((rd16(self + 0x14u) & 0x200u) == 0u)
            {
                eax = t44;
                ecx = rd16(self + 0x14u) & 0x200u;
                edx = t46;
                loc_14_f = (double)(float)d47;
            }
            else
            {
                eax = t44;
                ecx = rd16(self + 0x14u) & 0x200u;
                edx = t46;
                loc_14_f = (double)(float)d47;
    COW_AT(101ef278)
                d48 = (double)(float)fr(g, loc_14_f + loc_14_f);
                wrf32(sp0 - 0x14u, (float)d48);
                loc_14_f = d48;
            }
    COW_AT(101ef282)
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t49 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t50 = g->ecx;
            t51 = g->edx;
            d52 = cow_take_float(g);
            d53 = fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(COW_IMG(0x1033a060u)));
            d54 = fr(g, d52 * (double)rdf32(COW_IMG(0x10329a08u)));
            wr32(sp0 - 0x2cu, t50);
            d55 = (double)(float)fr(g, d54 * d53);
            wrf32(sp0 - 0x14u, (float)d55);
            d56 = (double)(float)-fr(g, d54 * d53);
            wrf32(sp0 - 0x2cu, (float)d56);
            g->ebx = ebx;
            g->ebp = ebp;
            g->edx = t51;
            t57 = cow_thiscall(g, COW_IMG(0x101ede30u), self, 1, cow_f2bits(d56));
            t58 = g->ecx;
            t59 = g->edx;
            eax = t57;
            ecx = t58;
            edx = t59;
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
    COW_AT(101ef19c)
        d19 = fr(g, fr(g, (double)rdf32(self + 0x5cu) - (double)rdf32(self + 0x58u)) * (double)rdf32(COW_IMG(0x1032a39cu)));
        wrf32(sp0 - 0x14u, (float)(double)(float)d19);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t20 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t21 = g->ecx;
        t22 = g->edx;
        d23 = cow_take_float(g);
        d24 = fr(g, fr(g, d23 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 - 0x14u));
        wrf32(sp0 - 0x14u, (float)(double)(float)d24);
        if (!(d24 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (t20 & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            ecx = t21;
            edx = t22;
            loc_14_f = (double)(float)d24;
            x0 = d24;
        }
        else
        {
            eax = (t20 & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            ecx = t21;
            edx = t22;
            loc_14_f = (double)(float)d24;
            x0 = d24;
    COW_AT(101ef1cc)
            x0 = -x0;
        }
    COW_AT(101ef1ce)
        wrf32(sp0 - 0x10u, (float)(double)(float)x0);
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t25 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t26 = g->edx;
        d27 = cow_take_float(g);
        d28 = fr(g, fr(g, d27 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x1033a064u)));
        d29 = (double)rdf32(sp0 - 0x10u);
        if ((cow_fsw(g, d28, d29, 0u) & 0x4100u) != 0u)
        {
            edx = t26;
        }
        else
        {
    COW_AT(101ef1f0)
            t30 = rd32(self + 0x5cu);
            wr8(self + 0x14u, rd8(self + 0x14u) & 0xefu);
            wr32(self + 0x58u, t30);
            edx = t30;
        }
    COW_AT(101ef1fa)
        t31 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x2cu, t31);
        g->ebx = ebx;
        g->ebp = ebp;
        g->eax = t31;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t32 = cow_thiscall(g, COW_IMG(0x101ede30u), self, 1, t31);
        t33 = g->ecx;
        t34 = g->edx;
        eax = t32;
        ecx = t33;
        edx = t34;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
    }
L_101ef2b7: ;
    COW_AT(101ef2b7)
    if ((rd16(self + 0x14u) & 8u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
        ebx = (ebx & 0xffffff00u) | rd8(sp0 + 4u);
    COW_AT(101ef4e4)
        if (!(eax & 1u))
        {
    COW_AT(101ef87c)
            if ((eax & 0x400u) == 0u)
            {
                eax = eax & 0x400u;
            }
            else
            {
                eax = eax & 0x400u;
    COW_AT(101ef886)
                g->esp = sp0 - 0x28u;
                t205 = cow_call_regs(g, COW_IMG(0x101edee0u), eax, self, edx, 1, 0);
                t206 = g->edx;
                eax = t205;
                edx = t206;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
        else
        {
    COW_AT(101ef4ec)
            if ((eax & 0x100u) == 0u)
            {
                eax = eax & 0x100u;
                goto L_101ef69e;
            }
            eax = eax & 0x100u;
    COW_AT(101ef4fa)
            wr32(sp0 - 0x2cu, 0x9du);
            wr32(sp0 - 0x30u, 0x26u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t118 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x26u, 0x9du, loc_28, loc_24);
            t119 = g->ecx;
            t120 = g->edx;
            d121 = cow_take_float(g);
            wrf32(sp0 + 4u, (float)d121);
            wr32(sp0 - 0x34u, 0x9eu);
            wr32(sp0 - 0x38u, 0x26u);
            g->edx = t120;
            g->esp = sp0 - 0x28u;
            t122 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t119, 4, 0x26u, 0x9eu, 0x26u, 0x9du);
            t123 = g->ecx;
            t124 = g->edx;
            d125 = cow_take_float(g);
            if ((rd16(self + 0x14u) & 0x200u) == 0u)
            {
                eax = rd16(self + 0x14u) & 0x200u;
                ecx = t123;
                edx = t124;
                x1 = (double)rdf32(sp0 + 4u);
                x0 = d125;
            }
            else
            {
                eax = rd16(self + 0x14u) & 0x200u;
                ecx = t123;
                edx = t124;
                x1 = (double)rdf32(sp0 + 4u);
                x0 = d125;
    COW_AT(101ef52b)
                x1 = fr(g, x1 + x1);
                x0 = fr(g, x0 + x0);
            }
    COW_AT(101ef533)
            d126 = fr(g, x1 * (double)rdf32(self + 0x70u));
            wrf32(sp0 + 4u, (float)d126);
            d127 = fr(g, x0 * (double)rdf32(self + 0x70u));
            wrf32(sp0 - 0x14u, (float)(double)(float)d127);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t128 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t129 = g->ecx;
            t130 = g->edx;
            d131 = cow_take_float(g);
            d132 = fr(g, fr(g, d131 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 + 4u));
            if (!(d132 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t128 & 0xffff0000u) | (uint16_t)cow_fsw(g, d132, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                ecx = t129;
                edx = t130;
    COW_AT(101ef570)
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t137 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t138 = g->ecx;
                t139 = g->edx;
                d140 = cow_take_float(g);
                eax = t137;
                ecx = t138;
                edx = t139;
                x0 = fr(g, fr(g, d140 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 + 4u));
            }
            else
            {
                eax = (t128 & 0xffff0000u) | (uint16_t)cow_fsw(g, d132, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                ecx = t129;
                edx = t130;
    COW_AT(101ef55d)
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t133 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t134 = g->ecx;
                t135 = g->edx;
                d136 = cow_take_float(g);
                eax = t133;
                ecx = t134;
                edx = t135;
                x0 = -fr(g, fr(g, d136 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 + 4u));
            }
    COW_AT(101ef57f)
            if (!(x0 < (double)rdf32(COW_IMG(0x10329990u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
                loc_14_f = (double)rdf32(sp0 - 0x14u);
                goto L_101ef6e6;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
    COW_AT(101ef590)
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t141 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t142 = g->ecx;
            t143 = g->edx;
            d144 = cow_take_float(g);
            d145 = fr(g, fr(g, d144 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 - 0x14u));
            if (!(d145 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t141 & 0xffff0000u) | (uint16_t)cow_fsw(g, d145, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                ecx = t142;
                edx = t143;
    COW_AT(101ef5bf)
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t149 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t150 = g->edx;
                d151 = cow_take_float(g);
                eax = t149;
                edx = t150;
                x0 = fr(g, fr(g, d151 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 - 0x14u));
            }
            else
            {
                eax = (t141 & 0xffff0000u) | (uint16_t)cow_fsw(g, d145, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                ecx = t142;
                edx = t143;
    COW_AT(101ef5ac)
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t146 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t147 = g->edx;
                d148 = cow_take_float(g);
                eax = t146;
                edx = t147;
                x0 = -fr(g, fr(g, d148 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 - 0x14u));
            }
    COW_AT(101ef5ce)
            if (!(x0 < (double)rdf32(COW_IMG(0x10329990u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
                loc_14_f = (double)rdf32(sp0 - 0x14u);
                goto L_101ef6e6;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
    COW_AT(101ef5df)
            if (rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4eu) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4eu);
                loc_14_f = (double)rdf32(sp0 - 0x14u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4eu);
                ecx = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(101ef5ec)
                if ((uint8_t)ebx == 0u)
                {
                    loc_14_f = (double)rdf32(sp0 - 0x14u);
                }
                else
                {
    COW_AT(101ef5f0)
                    t152 = rd32(ecx + 4u) - (uint32_t)(int16_t)rd16(self + 0x1cu);
                    t153 = rd32(ecx + 8u);
                    t154 = rd16(self + 0x1cu);
                    wr32(sp0 + 4u, t152);
                    t155 = rd16(self + 0x1eu);
                    t156 = rd32(sp0 + 4u);
                    wrf32(sp0 + 4u, (float)(double)(int32_t)t156);
                    t157 = t153 - (uint32_t)(int16_t)t155;
                    wr32(sp0 - 8u, t157);
                    wrf32(sp0 - 0x14u, (float)(double)(float)(double)(int32_t)t157);
                    eax = (uint32_t)(int16_t)t155;
                    edx = (uint32_t)(int16_t)t154;
                    loc_14_f = (double)(float)(double)(int32_t)t157;
                }
            }
    COW_AT(101ef61a)
            if (rd32(COW_IMG(0x10456a7cu)) == 0u)
            {
                ecx = rd32(COW_IMG(0x10456a7cu));
                goto L_101ef62d;
            }
            ecx = rd32(COW_IMG(0x10456a7cu));
    COW_AT(101ef624)
            if (ecx != 3u) goto L_101ef6ec;
L_101ef62d: ;
    COW_AT(101ef62d)
            if (rd32(COW_IMG(0x10456bf8u)) != 0u)
            {
                eax = rd32(COW_IMG(0x10456bf8u));
            }
            else
            {
                eax = rd32(COW_IMG(0x10456bf8u));
    COW_AT(101ef63a)
                d158 = (double)rdf32(sp0 + 4u);
                if (!(d158 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d158, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = (double)rdf32(sp0 + 4u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d158, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = (double)rdf32(sp0 + 4u);
    COW_AT(101ef64f)
                    x0 = -x0;
                }
    COW_AT(101ef651)
                if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u) == 0u)
                {
                    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u;
                    goto L_101ef686;
                }
                eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u;
    COW_AT(101ef660)
                if (!(loc_14_f < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = loc_14_f;
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = loc_14_f;
    COW_AT(101ef675)
                    x0 = -x0;
                }
    COW_AT(101ef677)
                if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u) != 0u)
                {
                    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u;
                    goto L_101ef6ec;
                }
                eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u;
L_101ef686: ;
    COW_AT(101ef686)
                d159 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(self + 0x58u));
                wrf32(sp0 + 4u, (float)d159);
                d160 = fr(g, loc_14_f * (double)rdf32(self + 0x58u));
                wrf32(sp0 - 0x14u, (float)(double)(float)d160);
                loc_14_f = (double)(float)d160;
            }
L_101ef6ec: ;
    COW_AT(101ef6ec)
            if (ecx == 0u) goto L_101ef6f5;
    COW_AT(101ef6f0)
            if (ecx != 3u) goto L_101ef724;
L_101ef6f5: ;
    COW_AT(101ef6f5)
            if (rd32(COW_IMG(0x10456bf8u)) != 0u)
            {
                eax = rd32(COW_IMG(0x10456bf8u));
            }
            else
            {
                eax = rd32(COW_IMG(0x10456bf8u));
    COW_AT(101ef6fe)
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t171 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t172 = g->ecx;
                t173 = g->edx;
                d174 = cow_take_float(g);
                d175 = fr(g, fr(g, d174 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 + 4u));
                wrf32(sp0 + 4u, (float)d175);
                g->ecx = t172;
                g->edx = t173;
                t176 = cow_call_regs(g, COW_IMG(0x10014cf0u), t171, g->ecx, g->edx, 1, 0);
                t177 = g->ecx;
                t178 = g->edx;
                d179 = cow_take_float(g);
                d180 = fr(g, fr(g, d179 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(sp0 - 0x14u));
                wrf32(sp0 - 0x14u, (float)(double)(float)d180);
                eax = t176;
                ecx = t177;
                edx = t178;
                loc_14_f = (double)(float)d180;
            }
L_101ef724: ;
    COW_AT(101ef724)
            d181 = (double)rdf32(sp0 + 4u);
            if (!(d181 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d181, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = (double)rdf32(sp0 + 4u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d181, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = (double)rdf32(sp0 + 4u);
    COW_AT(101ef739)
                x0 = -x0;
            }
    COW_AT(101ef73b)
            if (!(x0 < (double)rdf32(COW_IMG(0x10329990u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
    COW_AT(101ef748)
                wr32(sp0 + 4u, 0u);
            }
    COW_AT(101ef750)
            if (!(loc_14_f < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = loc_14_f;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = loc_14_f;
    COW_AT(101ef765)
                x0 = -x0;
            }
    COW_AT(101ef767)
            if (!(x0 < (double)rdf32(COW_IMG(0x10329990u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u);
    COW_AT(101ef774)
                wr32(sp0 - 0x14u, 0u);
            }
    COW_AT(101ef77c)
            d182 = (double)rdf32(sp0 + 4u);
            if (d182 != (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d182, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                goto L_101ef79e;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d182, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(101ef78d)
            d183 = (double)rdf32(sp0 - 0x14u);
            if (d183 == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d183, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                goto L_101ef7d3;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d183, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_101ef79e: ;
    COW_AT(101ef79e)
            wr32(sp0 - 0x2cu, 0u);
            if (rd8(self + 0xa2u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0xa2u);
    COW_AT(101ef7b8)
                d186 = (double)(float)-(double)rdf32(sp0 - 0x14u);
                wrf32(sp0 - 0x30u, (float)d186);
                d187 = (double)(float)-(double)rdf32(sp0 + 4u);
                wrf32(sp0 - 0x34u, (float)d187);
            }
            else
            {
    COW_AT(101ef7ac)
                t184 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x30u, t184);
                t185 = rd32(sp0 + 4u);
                wr32(sp0 - 0x34u, t185);
                eax = t185;
                edx = t184;
            }
    COW_AT(101ef7ce)
            g->ebx = ebx;
            g->ebp = ebp;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t188 = cow_call_regs(g, COW_IMG(0x101edaf0u), eax, self, g->edx, 0, 3, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), 0u);
            t189 = g->ecx;
            t190 = g->edx;
            eax = t188;
            ecx = t189;
            edx = t190;
L_101ef7d3: ;
    COW_AT(101ef7d3)
            d191 = (double)rdf32(sp0 + 4u);
            if (!(d191 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d191, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d191, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(101ef7e4)
                d192 = (double)rdf32(sp0 + 4u);
                wrf32(sp0 + 4u, (float)-d192);
            }
    COW_AT(101ef7ee)
            d193 = (double)rdf32(sp0 - 0x14u);
            if (!(d193 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d193, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                loc_14_f = (double)rdf32(sp0 - 0x14u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d193, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(101ef7ff)
                d194 = (double)rdf32(sp0 - 0x14u);
                wrf32(sp0 - 0x14u, (float)(double)(float)-d194);
                loc_14_f = (double)(float)-d194;
            }
    COW_AT(101ef809)
            if ((rd8(self + 0x14u) & 4u) != 0u)
            {
    COW_AT(101ef80f)
                d195 = (double)rdf32(sp0 + 4u);
                if (!(d195 < (double)rdf32(COW_IMG(0x1033a05cu))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d195, (double)rdf32(COW_IMG(0x1033a05cu)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d195, (double)rdf32(COW_IMG(0x1033a05cu)), 0u);
    COW_AT(101ef820)
                    if (!(loc_14_f < (double)rdf32(COW_IMG(0x1033a05cu))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x1033a05cu)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x1033a05cu)), 0u);
    COW_AT(101ef831)
                        wr32(sp0 - 0x2cu, 0x41000000u);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x28u;
                        t196 = cow_thiscall(g, COW_IMG(0x101ed9e0u), self, 1, 0x41000000u);
                        t197 = g->ecx;
                        t198 = g->edx;
                        eax = t196;
                        ecx = t197;
                        edx = t198;
                        loc_14_f = (double)rdf32(sp0 - 0x14u);
                    }
                }
            }
    COW_AT(101ef83d)
            wr32(sp0 - 0x2cu, 0xffffffffu);
            wr32(sp0 - 0x30u, 1u);
            wr32(sp0 - 0x34u, 0x7eu);
            wr32(sp0 - 0x38u, 0x26u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t199 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x26u, 0x7eu, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t200 = g->edx;
            if ((uint8_t)t199 == 0u)
            {
                eax = t199;
                edx = t200;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                eax = t199;
    COW_AT(101ef851)
                t201 = (uint32_t)(int16_t)rd16(self + 0x22u);
                wr32(sp0 - 8u, t201);
                t202 = (uint32_t)(int16_t)rd16(self + 0x20u);
                wr32(sp0 - 8u, t202);
                wrf32(sp0 - 0x2cu, (float)(double)(float)(double)(int32_t)t201);
                wrf32(sp0 - 0x30u, (float)(double)(float)(double)(int32_t)t202);
                g->eax = eax;
                g->edx = t202;
                g->esp = sp0 - 0x28u;
                t203 = cow_thiscall(g, COW_IMG(0x101ef990u), self, 2, cow_f2bits((double)(float)(double)(int32_t)t202), cow_f2bits((double)(float)(double)(int32_t)t201));
                t204 = g->edx;
                eax = t203;
                edx = t204;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
    }
    else
    {
        ebx = (ebx & 0xffffff00u) | rd8(sp0 + 4u);
    COW_AT(101ef2c7)
        t64 = (uint32_t)(int16_t)rd16(self + 0x1cu);
        t65 = rd32(self + 0x24u);
        d66 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u));
        wr32(sp0 + 4u, t64);
        wr32(sp0 - 8u, t65);
        t67 = rd32(self + 0x28u);
        wr32(sp0 - 0xcu, t67);
        t68 = (uint32_t)(int16_t)rd16(self + 0x1eu);
        wr32(sp0 - 0x10u, t68);
        t69 = (uint32_t)(int16_t)rd16(self + 0x6cu);
        t70 = rd16(self + 0x6eu);
        t71 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t69);
        d72 = fr(g, (double)rdf32(self + 0x2cu) - fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t71 * d66) + (double)rdf32(self + 0x24u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)rd32(sp0 + 4u)));
        wrf32(sp0 + 4u, (float)d72);
        wr32(sp0 - 0x10u, (uint32_t)(int16_t)t70);
        d73 = fr(g, (double)rdf32(self + 0x30u) - fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t68 * d66) + (double)rdf32(self + 0x28u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)(uint32_t)(int16_t)t70));
        wrf32(sp0 - 0x14u, (float)(double)(float)d73);
        g->edx = (uint32_t)(int16_t)t70;
        g->esp = sp0 - 0x28u;
        t74 = cow_call_regs(g, COW_IMG(0x10014cf0u), t69, g->ecx, g->edx, 1, 0);
        t75 = g->edx;
        d76 = cow_take_float(g);
        d77 = fr(g, d76 * (double)rdf32(COW_IMG(0x10329a08u)));
        if ((cow_fsw(g, d77, (double)rdf32(COW_IMG(0x10329d38u)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d77, (double)rdf32(COW_IMG(0x10329d38u)), 1u) & 0x4100u;
            edx = t75;
            x0 = d77;
        }
        else
        {
            eax = cow_fsw(g, d77, (double)rdf32(COW_IMG(0x10329d38u)), 1u) & 0x4100u;
            edx = t75;
            x0 = d77;
    COW_AT(101ef34e)
            x0 = (double)rdf32(COW_IMG(0x10329d38u));
        }
    COW_AT(101ef356)
        d78 = fr(g, (double)rdf32(sp0 + 4u) * x0);
        wrf32(sp0 + 4u, (float)d78);
        d79 = fr(g, x0 * (double)rdf32(sp0 - 0x14u));
        wrf32(sp0 - 0x14u, (float)(double)(float)d79);
        d80 = (double)rdf32(self + 0x58u);
        d81 = (double)rdf32(sp0 + 4u);
        d82 = fr(g, d80 + d80);
        if ((cow_fsw(g, d81, d82, 1u) & 0x4100u) == 0u)
        {
            loc_14_f = (double)(float)d79;
            x0 = fr(g, d80 + d80);
            goto L_101ef38d;
        }
        eax = cow_fsw(g, d81, d82, 1u) & 0x4100u;
        loc_14_f = (double)(float)d79;
        x0 = fr(g, d80 + d80);
    COW_AT(101ef37c)
        if ((cow_fsw(g, loc_14_f, x0, 0u) & 0x4100u) != 0u) goto L_101ef3ab;
    COW_AT(101ef38b)
L_101ef38f: ;
    COW_AT(101ef38f)
        d83 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 + 4u, (float)d83);
        d84 = fr(g, loc_14_f * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x14u, (float)(double)(float)d84);
        loc_14_f = (double)(float)d84;
L_101ef3ab: ;
    COW_AT(101ef3ab)
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, cow_f2bits(loc_14_f));
        t85 = rd32(sp0 + 4u);
        wr32(sp0 - 0x34u, t85);
        g->ebx = ebx;
        g->ebp = ebp;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t86 = cow_call_regs(g, COW_IMG(0x101edaf0u), cow_f2bits(loc_14_f), self, g->edx, 0, 3, t85, cow_f2bits(loc_14_f), 0u);
        t87 = g->ecx;
        t88 = g->edx;
        d89 = fr(g, (double)rdf32(sp0 - 8u) - (double)rdf32(self + 0x24u));
        d90 = fr(g, (double)rdf32(sp0 - 0xcu) - (double)rdf32(self + 0x28u));
        d91 = (double)(float)fr(g, fr(g, d89 * d89) + fr(g, d90 * d90));
        wrf32(sp0 - 8u, (float)d91);
        g->edx = t88;
        t92 = cow_call_regs(g, COW_IMG(0x10014cf0u), t86, g->ecx, g->edx, 1, 0);
        t93 = g->edx;
        d94 = cow_take_float(g);
        d95 = fr(g, fr(g, d94 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x10329a34u)));
        d96 = (double)rdf32(sp0 - 8u);
        if ((cow_fsw(g, d95, d96, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d95, d96, 0u) & 0x4100u;
            edx = t93;
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
        else
        {
    COW_AT(101ef400)
            t97 = (uint32_t)(int16_t)rd16(self + 0x1cu);
            d98 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u));
            wr32(sp0 + 4u, t97);
            wr32(sp0 - 0x2cu, 0u);
            t99 = (uint32_t)(int16_t)rd16(self + 0x1eu);
            wr32(sp0 - 8u, t99);
            t100 = (uint32_t)(int16_t)rd16(self + 0x6cu);
            t101 = rd16(self + 0x6eu);
            t102 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t100);
            d103 = fr(g, fr(g, (double)rdf32(self + 0x2cu) - fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t102 * d98) + (double)rdf32(self + 0x24u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)rd32(sp0 + 4u))) * (double)rdf32(self + 0x58u));
            wrf32(sp0 + 4u, (float)d103);
            wr32(sp0 - 8u, (uint32_t)(int16_t)t101);
            d104 = fr(g, fr(g, (double)rdf32(self + 0x30u) - fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t99 * d98) + (double)rdf32(self + 0x28u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)(uint32_t)(int16_t)t101)) * (double)rdf32(self + 0x58u));
            wrf32(sp0 - 0x14u, (float)(double)(float)d104);
            wr32(sp0 - 0x30u, cow_f2bits((double)(float)d104));
            t105 = rd32(sp0 + 4u);
            wr32(sp0 - 0x34u, t105);
            g->ebx = ebx;
            g->ebp = ebp;
            g->esp = sp0 - 0x28u;
            t106 = cow_call_regs(g, COW_IMG(0x101edaf0u), cow_f2bits((double)(float)d104), self, g->edx, 0, 3, t105, cow_f2bits((double)(float)d104), 0u);
            t107 = g->ecx;
            t108 = (edi & 0xffff0000u) | rd16(self + 0x14u);
            if ((t108 & 0x100u) == 0u)
            {
                eax = t106;
                edi = t108;
            }
            else
            {
                ecx = t107;
                edx = t108 & 0x100u;
                edi = t108;
    COW_AT(101ef489)
                t109 = (uint32_t)(int16_t)rd16(self + 0x6cu);
                wr32(sp0 - 8u, t109);
                g->edx = edx;
                d110 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(self + 0x2cu) - (double)(int32_t)t109) - (double)rdf32(self + 0x24u)) * (double)rdf32(self + 0x58u)) + (double)rdf32(COW_IMG(0x10329a08u)));
                fpush(g, d110);
                g->esp = sp0 - 0x28u;
                t111 = cow_call_regs(g, COW_IMG(0x10311c6cu), t109, g->ecx, g->edx, 1, 0);
                t112 = g->edx;
                t113 = (uint32_t)(int16_t)rd16(self + 0x6eu);
                wr32(sp0 - 8u, t113);
                d114 = (double)rdf32(self + 0x30u);
                wr16(self + 0x1cu, (uint16_t)t111);
                d115 = fr(g, fr(g, fr(g, fr(g, d114 - (double)(int32_t)t113) - (double)rdf32(self + 0x28u)) * (double)rdf32(self + 0x58u)) + (double)rdf32(COW_IMG(0x10329a08u)));
                fpush(g, d115);
                t116 = cow_call_regs(g, COW_IMG(0x10311c6cu), t111, g->ecx, g->edx, 1, 0);
                wr16(self + 0x1eu, (uint16_t)t116);
                eax = t116;
            }
    COW_AT(101ef4d1)
            t117 = rd32(self + 8u);
            wr16(self + 0x14u, edi & 0xfff7u);
            wr8(t117 + 0x62u, 1u);
            edx = t117;
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    }
    COW_AT(101ef88d)
    if (rd16(self + 0xa6u) == 0u)
    {
    COW_AT(101ef897)
        if (rd32(self + 0x94u) == 0u)
        {
            eax = rd32(self + 0x94u);
        }
        else
        {
            eax = rd32(self + 0x94u);
    COW_AT(101ef8a1)
            if ((int16_t)rd16(self + 0x7au) > 0)
            {
    COW_AT(101ef8a9)
                ebp = 0u;
                edi = 0u;
L_101ef8ab: ;
    COW_AT(101ef8ab)
                t207 = ebp + rd32(self + 0x94u);
                wr32(sp0 - 0x2cu, t207);
                g->eax = t207;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t208 = cow_thiscall(g, COW_IMG(0x101eef90u), self, 1, t207);
                t209 = g->edx;
                if ((int32_t)(edi + 1u) < (int16_t)rd16(self + 0x7au))
                {
                    edx = t209;
                    ebp = ebp + 0x20u;
                    edi = edi + 1u;
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_28 = rd32(sp0 - 0x28u);
                    goto L_101ef8ab;
                }
                eax = t208;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
    COW_AT(101ef8c7)
        t210 = rd32(self + 0x98u);
        wr32(sp0 - 0x2cu, t210);
        g->edx = t210;
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, COW_IMG(0x101eef90u), self, 1, t210);
        t211 = g->edx;
        if (rd32(self + 0x9cu) == 0u)
        {
            eax = rd32(self + 0x9cu);
            edx = t211;
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
        else
        {
            eax = rd32(self + 0x9cu);
            edx = t211;
    COW_AT(101ef8df)
            if ((int8_t)rd8(self + 0xa1u) <= 0)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0xa1u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
    COW_AT(101ef8eb)
                ebp = 0u;
                edi = 0u;
L_101ef8ed: ;
    COW_AT(101ef8ed)
                t212 = ebp + rd32(self + 0x9cu);
                wr32(sp0 - 0x2cu, t212);
                g->eax = t212;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t213 = cow_thiscall(g, COW_IMG(0x101eef90u), self, 1, t212);
                t214 = g->edx;
                if ((int32_t)(edi + 1u) < (int8_t)rd8(self + 0xa1u))
                {
                    edx = t214;
                    ebp = ebp + 0x20u;
                    edi = edi + 1u;
                    goto L_101ef8ed;
                }
                eax = t213;
                edx = t214;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
    }
    COW_AT(101ef90c)
    if ((rd16(self + 0x14u) & 0x100u) == 0u)
    {
        edx = rd16(self + 0x14u) & 0x100u;
    }
    else
    {
        edx = rd16(self + 0x14u) & 0x100u;
    COW_AT(101ef91b)
        if ((uint8_t)ebx != 0u)
        {
    COW_AT(101ef91f)
            t215 = (uint32_t)(int16_t)rd16(self + 0x1eu);
            wr32(sp0 - 4u, t215);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, sp0 - 8u);
            t216 = (uint32_t)(int16_t)rd16(self + 0x1cu);
            wr32(sp0 - 8u, t216);
            g->edx = sp0 - 8u;
            g->esp = sp0 - 0x28u;
            t217 = cow_call_regs(g, COW_IMG(0x10124700u), t216, rd32(COW_IMG(0x104e1d4cu)), g->edx, 0, 2, sp0 - 8u, 0u);
            t218 = g->edx;
            d219 = (double)rdf32(sp0 + 4u);
            if (d219 != (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (t217 & 0xffff0000u) | (uint16_t)cow_fsw(g, d219, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                edx = t218;
                goto L_101ef963;
            }
            eax = (t217 & 0xffff0000u) | (uint16_t)cow_fsw(g, d219, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            edx = t218;
    COW_AT(101ef952)
            d220 = (double)rdf32(sp0 - 0x14u);
            if (d220 == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d220, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
                goto L_101ef970;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d220, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_101ef963: ;
    COW_AT(101ef963)
            wr32(sp0 - 0x2cu, 0u);
            g->eax = eax;
            g->esp = sp0 - 0x28u;
            t221 = cow_fastcall(g, COW_IMG(0x101252f0u), rd32(COW_IMG(0x104e1d4cu)), edx, 1, 0u);
            t222 = g->edx;
            eax = t221;
            edx = t222;
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    }
L_101ef970: ;
    COW_AT(101ef970)
    if (rd8(sp0 - 0x15u) == 0u)
    {
        ebx = loc_20;
        ebp = loc_24;
        edi = loc_28;
    }
    else
    {
        ebx = loc_20;
        ebp = loc_24;
        edi = loc_28;
    COW_AT(101ef97b)
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(self) + 0x54u), self, 0);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(101ef982)
    g->ebx = ebx;
    g->esi = loc_1c;
    g->edi = edi;
    g->ebp = ebp;
    return;
L_101ef2ac: ;
    COW_AT(101ef2ac)
    t60 = rd32(self + 0x68u);
    wr32(sp0 - 0x2cu, t60);
    g->eax = eax;
    g->edx = t60;
    g->esp = sp0 - 0x28u;
    t61 = cow_thiscall(g, COW_IMG(0x101efac0u), self, 1, t60);
    t62 = g->ecx;
    t63 = g->edx;
    eax = t61;
    ecx = t62;
    edx = t63;
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    goto L_101ef2b7;
L_101ef38d: ;
    COW_AT(101ef38d)
    goto L_101ef38f;
L_101ef69e: ;
    COW_AT(101ef69e)
    wr32(sp0 - 0x2cu, 0x79u);
    wr32(sp0 - 0x30u, 0x26u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t161 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x26u, 0x79u, loc_28, loc_24);
    t162 = g->ecx;
    t163 = g->edx;
    d164 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)d164);
    wr32(sp0 - 0x34u, 0x7au);
    wr32(sp0 - 0x38u, 0x26u);
    g->edx = t163;
    g->esp = sp0 - 0x28u;
    t165 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t162, 4, 0x26u, 0x7au, 0x26u, 0x79u);
    t166 = g->ecx;
    t167 = g->edx;
    d168 = cow_take_float(g);
    if ((rd16(self + 0x14u) & 0x200u) == 0u)
    {
        eax = t165;
        edx = t167;
        x1 = (double)rdf32(sp0 + 4u);
        x0 = d168;
    }
    else
    {
        eax = t165;
        edx = t167;
        x1 = (double)rdf32(sp0 + 4u);
        x0 = d168;
    COW_AT(101ef6ca)
        x1 = fr(g, x1 + x1);
        x0 = fr(g, x0 + x0);
    }
    COW_AT(101ef6d2)
    d169 = fr(g, x1 * (double)rdf32(COW_IMG(0x1033678cu)));
    wrf32(sp0 + 4u, (float)d169);
    d170 = fr(g, x0 * (double)rdf32(COW_IMG(0x1033678cu)));
    wrf32(sp0 - 0x14u, (float)(double)(float)d170);
    loc_14_f = (double)(float)d170;
L_101ef6e6: ;
    COW_AT(101ef6e6)
    ecx = rd32(COW_IMG(0x10456a7cu));
    goto L_101ef6ec;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ef0a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ef0bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ef0c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ef0c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ef0d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ef0d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ef0e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ef0edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ef0fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ef109u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ef124u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ef130u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x24u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x101ef14au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef14eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef150u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef162u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef172u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef177u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef186u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef194u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef19cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef1ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef1ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef1f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef1fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef20bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef213u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef22bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef242u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef259u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef278u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef282u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef2acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef2b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef2c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef34eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef356u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef37cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef38bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef38du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef38fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef3abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef400u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef489u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef4d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef4e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef4ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef4fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef52bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef533u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef55du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef570u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef57fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef590u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef5acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef5bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef5ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef5dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef5ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef5f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef61au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef624u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef62du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef63au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef64fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef651u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef660u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef675u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef677u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef686u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef69eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef6cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef6d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef6e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef6ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef6f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef6f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef6feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef724u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef739u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef73bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef748u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef750u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef765u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef767u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef774u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef77cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef78du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef79eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef7acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = self;
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101ef7b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = self;
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101ef7ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->esi = self;
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101ef7d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef7e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef7eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef7ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef809u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef80fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef820u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef831u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef83du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_14_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14_f = rdf32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef851u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef87cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef886u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef88du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef897u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef8a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef8a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ef8abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef8c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef8dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef8ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ef8edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef90cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef91bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef91fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef952u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101ef963u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101ef970u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101ef97bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ef982u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ef0a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101ef0a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
