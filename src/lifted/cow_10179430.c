/* f_0x10179430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10179430(Guest* g)
{
    double d102;
    double d103;
    double d104;
    double d108;
    double d111;
    double d114;
    double d116;
    double d117;
    double d118;
    double d119;
    double d120;
    double d128;
    double d129;
    double d130;
    double d131;
    double d134;
    double d136;
    double d27;
    double d28;
    double d29;
    double d32;
    double d33;
    double d34;
    double d52;
    double d53;
    double d54;
    double d55;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_518;
    uint32_t loc_51c;
    uint32_t loc_520;
    uint32_t loc_524;
    uint32_t loc_528;
    uint32_t loc_530;
    uint32_t loc_534;
    uint32_t loc_538;
    double loc_538_f;
    uint32_t loc_53c;
    double loc_53c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t112;
    uint32_t t113;
    uint32_t t115;
    uint32_t t12;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t13;
    uint32_t t132;
    uint32_t t133;
    uint32_t t135;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 1376u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10179459u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x54cu); in_esi = rd32(sp0 - 0x548u); in_ebp = rd32(sp0 - 0x544u); in_ebx = rd32(sp0 - 0x540u); loc_528 = rd32(sp0 - 0x528u); g->ebp = rd32(sp0 - 0x544u); g->ebx = rd32(sp0 - 0x540u); g->edi = rd32(sp0 - 0x54cu); g->esi = rd32(sp0 - 0x548u); goto E_10179459;
    case 0x1017948du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x54cu); in_esi = rd32(sp0 - 0x548u); in_ebp = rd32(sp0 - 0x544u); in_ebx = rd32(sp0 - 0x540u); loc_534 = rd32(sp0 - 0x534u); loc_528 = rd32(sp0 - 0x528u); loc_524 = rd32(sp0 - 0x524u); loc_518 = rd32(sp0 - 0x518u); g->ebp = rd32(sp0 - 0x544u); g->ebx = rd32(sp0 - 0x540u); g->edi = rd32(sp0 - 0x54cu); g->esi = rd32(sp0 - 0x548u); goto E_1017948d;
    case 0x101794acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x54cu); in_esi = rd32(sp0 - 0x548u); in_ebp = rd32(sp0 - 0x544u); in_ebx = rd32(sp0 - 0x540u); loc_534 = rd32(sp0 - 0x534u); loc_528 = rd32(sp0 - 0x528u); loc_524 = rd32(sp0 - 0x524u); loc_518 = rd32(sp0 - 0x518u); g->ebp = rd32(sp0 - 0x544u); g->ebx = rd32(sp0 - 0x540u); g->edi = rd32(sp0 - 0x54cu); g->esi = rd32(sp0 - 0x548u); goto E_101794ac;
    case 0x101794b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x54cu); in_esi = rd32(sp0 - 0x548u); in_ebp = rd32(sp0 - 0x544u); in_ebx = rd32(sp0 - 0x540u); loc_534 = rd32(sp0 - 0x534u); loc_528 = rd32(sp0 - 0x528u); loc_524 = rd32(sp0 - 0x524u); loc_518 = rd32(sp0 - 0x518u); g->ebp = rd32(sp0 - 0x544u); g->ebx = rd32(sp0 - 0x540u); g->edi = rd32(sp0 - 0x54cu); g->esi = rd32(sp0 - 0x548u); goto E_101794b5;
    case 0x101794bbu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x54cu); in_esi = rd32(sp0 - 0x548u); in_ebp = rd32(sp0 - 0x544u); in_ebx = rd32(sp0 - 0x540u); loc_534 = rd32(sp0 - 0x534u); loc_528 = rd32(sp0 - 0x528u); loc_524 = rd32(sp0 - 0x524u); loc_518 = rd32(sp0 - 0x518u); g->ebp = rd32(sp0 - 0x544u); g->ebx = rd32(sp0 - 0x540u); g->edi = rd32(sp0 - 0x54cu); g->esi = rd32(sp0 - 0x548u); goto E_101794bb;
    case 0x101794bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x54cu); in_esi = rd32(sp0 - 0x548u); in_ebp = rd32(sp0 - 0x544u); in_ebx = rd32(sp0 - 0x540u); loc_534 = rd32(sp0 - 0x534u); loc_528 = rd32(sp0 - 0x528u); loc_524 = rd32(sp0 - 0x524u); loc_518 = rd32(sp0 - 0x518u); g->ebp = rd32(sp0 - 0x544u); g->ebx = rd32(sp0 - 0x540u); g->edi = rd32(sp0 - 0x54cu); g->esi = rd32(sp0 - 0x548u); goto E_101794bf;
    case 0x101794cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x54cu); in_esi = rd32(sp0 - 0x548u); in_ebp = rd32(sp0 - 0x544u); in_ebx = rd32(sp0 - 0x540u); loc_534 = rd32(sp0 - 0x534u); loc_528 = rd32(sp0 - 0x528u); loc_524 = rd32(sp0 - 0x524u); loc_518 = rd32(sp0 - 0x518u); g->ebp = rd32(sp0 - 0x544u); g->ebx = rd32(sp0 - 0x540u); g->edi = rd32(sp0 - 0x54cu); g->esi = rd32(sp0 - 0x548u); goto E_101794cd;
    case 0x101794d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x54cu); in_esi = rd32(sp0 - 0x548u); in_ebp = rd32(sp0 - 0x544u); in_ebx = rd32(sp0 - 0x540u); loc_534 = rd32(sp0 - 0x534u); loc_528 = rd32(sp0 - 0x528u); loc_524 = rd32(sp0 - 0x524u); loc_518 = rd32(sp0 - 0x518u); g->ebp = rd32(sp0 - 0x544u); g->ebx = rd32(sp0 - 0x540u); g->edi = rd32(sp0 - 0x54cu); g->esi = rd32(sp0 - 0x548u); goto E_101794d5;
    case 0x101794e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x54cu); in_esi = rd32(sp0 - 0x548u); in_ebp = rd32(sp0 - 0x544u); in_ebx = rd32(sp0 - 0x540u); loc_534 = rd32(sp0 - 0x534u); loc_528 = rd32(sp0 - 0x528u); loc_524 = rd32(sp0 - 0x524u); loc_518 = rd32(sp0 - 0x518u); g->ebp = rd32(sp0 - 0x544u); g->ebx = rd32(sp0 - 0x540u); g->edi = rd32(sp0 - 0x54cu); g->esi = rd32(sp0 - 0x548u); goto E_101794e3;
    case 0x10179548u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x54cu); in_esi = rd32(sp0 - 0x548u); in_ebp = rd32(sp0 - 0x544u); in_ebx = rd32(sp0 - 0x540u); loc_534 = rd32(sp0 - 0x534u); loc_528 = rd32(sp0 - 0x528u); loc_524 = rd32(sp0 - 0x524u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); g->ebp = rd32(sp0 - 0x544u); g->ebx = rd32(sp0 - 0x540u); g->edi = rd32(sp0 - 0x54cu); g->esi = rd32(sp0 - 0x548u); goto E_10179548;
    case 0x1017954fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x54cu); in_esi = rd32(sp0 - 0x548u); in_ebp = rd32(sp0 - 0x544u); in_ebx = rd32(sp0 - 0x540u); loc_534 = rd32(sp0 - 0x534u); loc_528 = rd32(sp0 - 0x528u); loc_524 = rd32(sp0 - 0x524u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); g->ebp = rd32(sp0 - 0x544u); g->ebx = rd32(sp0 - 0x540u); g->edi = rd32(sp0 - 0x54cu); g->esi = rd32(sp0 - 0x548u); goto E_1017954f;
    case 0x1017955cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x54cu); in_esi = rd32(sp0 - 0x548u); in_ebp = rd32(sp0 - 0x544u); in_ebx = rd32(sp0 - 0x540u); loc_534 = rd32(sp0 - 0x534u); self = rd32(sp0 - 0x52cu); loc_528 = rd32(sp0 - 0x528u); loc_524 = rd32(sp0 - 0x524u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); g->ebp = rd32(sp0 - 0x544u); g->ebx = rd32(sp0 - 0x540u); g->edi = rd32(sp0 - 0x54cu); g->esi = rd32(sp0 - 0x548u); goto E_1017955c;
    case 0x101795b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_520 = rd32(sp0 - 0x520u); goto E_101795b2;
    case 0x1017986eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_534 = rd32(sp0 - 0x534u); loc_530 = rd32(sp0 - 0x530u); loc_524 = rd32(sp0 - 0x524u); loc_520 = rd32(sp0 - 0x520u); goto E_1017986e;
    case 0x1017987bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_534 = rd32(sp0 - 0x534u); loc_530 = rd32(sp0 - 0x530u); loc_524 = rd32(sp0 - 0x524u); loc_520 = rd32(sp0 - 0x520u); goto E_1017987b;
    case 0x1017987du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_534 = rd32(sp0 - 0x534u); loc_530 = rd32(sp0 - 0x530u); loc_524 = rd32(sp0 - 0x524u); loc_520 = rd32(sp0 - 0x520u); goto E_1017987d;
    case 0x1017988cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_534 = rd32(sp0 - 0x534u); loc_530 = rd32(sp0 - 0x530u); loc_524 = rd32(sp0 - 0x524u); loc_520 = rd32(sp0 - 0x520u); goto E_1017988c;
    case 0x101798fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); goto E_101798fc;
    case 0x101798feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); goto E_101798fe;
    case 0x10179914u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); goto E_10179914;
    case 0x10179916u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); goto E_10179916;
    case 0x10179930u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c_f = rdf32(sp0 - 0x53cu); x1 = ST(0); x0 = ST(1); goto E_10179930;
    case 0x10179932u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c_f = rdf32(sp0 - 0x53cu); x1 = ST(0); x0 = ST(1); goto E_10179932;
    case 0x10179943u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c_f = rdf32(sp0 - 0x53cu); loc_538_f = rdf32(sp0 - 0x538u); x0 = ST(0); goto E_10179943;
    case 0x10179950u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c_f = rdf32(sp0 - 0x53cu); loc_538_f = rdf32(sp0 - 0x538u); goto E_10179950;
    case 0x10179961u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c_f = rdf32(sp0 - 0x53cu); loc_538_f = rdf32(sp0 - 0x538u); goto E_10179961;
    case 0x10179972u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c_f = rdf32(sp0 - 0x53cu); loc_538_f = rdf32(sp0 - 0x538u); goto E_10179972;
    case 0x10179986u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10179986;
    case 0x1017998cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c_f = rdf32(sp0 - 0x53cu); loc_538_f = rdf32(sp0 - 0x538u); x0 = ST(0); goto E_1017998c;
    case 0x1017998eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c_f = rdf32(sp0 - 0x53cu); loc_538_f = rdf32(sp0 - 0x538u); goto E_1017998e;
    case 0x10179a80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); goto E_10179a80;
    case 0x10179a9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); goto E_10179a9e;
    case 0x10179ab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); x0 = ST(0); goto E_10179ab3;
    case 0x10179ac2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); x0 = ST(0); goto E_10179ac2;
    case 0x10179ad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); goto E_10179ad5;
    case 0x10179ae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); goto E_10179ae5;
    case 0x10179bd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); goto E_10179bd0;
    case 0x10179beeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); goto E_10179bee;
    case 0x10179c03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); x0 = ST(0); goto E_10179c03;
    case 0x10179c12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); x0 = ST(0); goto E_10179c12;
    case 0x10179c25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); goto E_10179c25;
    case 0x10179c35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); goto E_10179c35;
    case 0x10179d27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); goto E_10179d27;
    case 0x10179d45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); goto E_10179d45;
    case 0x10179d5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); x0 = ST(0); goto E_10179d5a;
    case 0x10179d69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); x0 = ST(0); goto E_10179d69;
    case 0x10179d7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); goto E_10179d7c;
    case 0x10179d8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_53c = rd32(sp0 - 0x53cu); loc_538 = rd32(sp0 - 0x538u); goto E_10179d8c;
    case 0x10179f98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10179f98;
    case 0x10179fa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10179fa7;
    case 0x10179fafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10179faf;
    case 0x10179fbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10179fbf;
    case 0x10179fd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10179fd1;
    case 0x10179fdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10179fdc;
    case 0x10179fecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10179fec;
    case 0x10179ffeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10179ffe;
    case 0x1017a009u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a009;
    case 0x1017a156u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a156;
    case 0x1017a15bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a15b;
    case 0x1017a15eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); goto E_1017a15e;
    case 0x1017a1b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a1b3;
    case 0x1017a1bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a1bc;
    case 0x1017a1c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a1c3;
    case 0x1017a1d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a1d4;
    case 0x1017a1dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a1da;
    case 0x1017a1ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a1ec;
    case 0x1017a212u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a212;
    case 0x1017a22au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a22a;
    case 0x1017a271u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_534 = rd32(sp0 - 0x534u); loc_530 = rd32(sp0 - 0x530u); loc_524 = rd32(sp0 - 0x524u); loc_520 = rd32(sp0 - 0x520u); goto E_1017a271;
    case 0x1017a28eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_534 = rd32(sp0 - 0x534u); loc_530 = rd32(sp0 - 0x530u); loc_524 = rd32(sp0 - 0x524u); loc_520 = rd32(sp0 - 0x520u); goto E_1017a28e;
    case 0x1017a2b8u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_534 = rd32(sp0 - 0x534u); loc_530 = rd32(sp0 - 0x530u); loc_524 = rd32(sp0 - 0x524u); loc_520 = rd32(sp0 - 0x520u); goto E_1017a2b8;
    case 0x1017a2d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_534 = rd32(sp0 - 0x534u); loc_530 = rd32(sp0 - 0x530u); loc_524 = rd32(sp0 - 0x524u); loc_520 = rd32(sp0 - 0x520u); goto E_1017a2d2;
    case 0x1017a309u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1017a309;
    case 0x1017a311u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1017a311;
    case 0x1017a343u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a343;
    case 0x1017a351u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a351;
    case 0x1017a35du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1017a35d;
    case 0x1017a361u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1017a361;
    case 0x1017a37fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a37f;
    case 0x1017a387u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a387;
    case 0x1017a389u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a389;
    case 0x1017a39bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a39b;
    case 0x1017a3a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a3a4;
    case 0x1017a3b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a3b6;
    case 0x1017a3bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a3bb;
    case 0x1017a3c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017a3c0;
    default: break;
    }
#endif

    COW_AT(10179430)
    wr32(sp0 - 0x540u, in_ebx);
    wr32(sp0 - 0x544u, in_ebp);
    wr32(sp0 - 0x548u, in_esi);
    wr32(sp0 - 0x54cu, in_edi);
    wr32(sp0 - 0x52cu, self);
    t1 = rd8(arg1 + 3u);
    wr32(sp0 - 0x528u, t1);
    if ((int32_t)rd8(arg1 + 3u) < 27)
    {
        loc_528 = t1;
    }
    else
    {
        loc_528 = t1;
    COW_AT(10179459)
        t2 = (((uint32_t)rd8(arg1 + 2u) << 8u | rd8(arg1 + 1u)) << 8u | rd8(arg1)) - 8u;
        wr32(sp0 - 0x534u, t2);
        wr32(sp0 - 0x524u, 0u);
        if ((int32_t)t2 <= 0) goto L_101794e3;
        edx = 0u;
        ebx = rd8(COW_IMG(0x10376fefu) - rd8(arg1 + 7u));
        esi = 0u;
        loc_534 = t2;
        loc_524 = 0u;
L_1017948d: ;
    COW_AT(1017948d)
        t3 = ebx + edx + 1u;
        wr32(sp0 - 0x518u, t3);
        if (!(ebx & 1u))
        {
            eax = ((uint32_t)((int32_t)(uint8_t)ebx >> 4u) & 7u) + 0x10u;
            edx = edx + 1u;
            ebx = t3;
        }
        else
        {
            eax = ((uint32_t)((int32_t)(uint8_t)ebx >> 4u) & 7u) + 0x10u;
            edx = edx + 1u;
            ebx = t3;
            loc_518 = t3;
    COW_AT(101794ac)
            if ((int32_t)(eax + esi) < (int32_t)loc_534)
            {
    COW_AT(101794b5)
                if ((int32_t)eax > 0)
                {
    COW_AT(101794bb)
                    ecx = 0u;
                    esi = arg1 + esi + 8u;
L_101794bf: ;
    COW_AT(101794bf)
                    t4 = rd8(ecx + esi);
                    wr8(ecx + esi, (uint8_t)~t4);
                    if ((int32_t)(ecx + 1u) < (int32_t)eax)
                    {
                        ecx = ecx + 1u;
                        ebx = (ebx & 0xffffff00u) | (uint8_t)~t4;
                        goto L_101794bf;
                    }
    COW_AT(101794cd)
                    ebx = loc_518;
                    esi = loc_524;
                }
            }
        }
    COW_AT(101794d5)
        wr32(sp0 - 0x524u, eax + esi);
        if ((int32_t)(eax + esi) < (int32_t)loc_534)
        {
            loc_524 = eax + esi;
            esi = eax + esi;
            goto L_1017948d;
        }
    }
L_101794e3: ;
    COW_AT(101794e3)
    t5 = rd8(arg1 + 0x1cu);
    wr32(self + rd32(self + 0x38u) * 4u + 0x58u, arg1);
    t6 = self + rd32(self + 0x38u) * 0x78u + 0x60u;
    wr32(sp0 - 0x51cu, t6);
    wr32(t6, t5 + 1u);
    wr32(t6 + 8u, arg1);
    wr32(t6 + 0x5cu, arg2);
    t7 = rd8(arg1 + 0xcu);
    wr32(t6 + 0x10u, t7);
    t8 = rd8(arg1 + 0xdu);
    wr32(t6 + 0x14u, t8);
    t9 = rd8(arg1 + 0xeu);
    wr32(t6 + 0x18u, t9);
    t10 = rd8(arg1 + 0xfu);
    wr32(t6 + 0x1cu, t10);
    t11 = rd32(arg1 + 4u);
    wr32(t6 + 0x64u, 0u);
    wr32(t6 + 0x24u, t11 & 0xffffffu);
    if (rd32(arg1 + 0x18u) == 0u)
    {
        esi = t6;
        loc_51c = t6;
    }
    else
    {
        eax = rd32(arg1 + 0x18u);
        edx = t9;
        esi = t6;
        loc_51c = t6;
    COW_AT(10179548)
        if ((int32_t)loc_528 >= 18)
        {
    COW_AT(1017954f)
            wr32(sp0 - 0x550u, arg1 + eax);
            wr32(esi + 0x64u, arg1 + eax);
            g->esp = sp0 - 0x54cu;
            cow_thiscall(g, COW_IMG(0x1017a6d0u), self, 1, arg1 + eax);
            loc_528 = rd32(sp0 - 0x528u);
            loc_51c = rd32(sp0 - 0x51cu);
        }
    }
    COW_AT(1017955c)
    wr32(sp0 - 0x550u, 4u);
    wr32(sp0 - 0x530u, arg1 + 0x20u);
    t12 = rd32(esi + 0x24u) * 0x16cu;
    wr32(sp0 - 0x554u, t12);
    g->esp = sp0 - 0x54cu;
    t13 = cow_call_regs(g, COW_IMG(0x10028640u), t12, rd32(esi + 0x24u) * 5u, rd32(esi + 0x24u) * 0x2du, 1, 2, t12, 4u);
    t14 = rd32(esi + 0x24u);
    wr32(esi + 0x28u, t13);
    wr32(sp0 - 0x520u, t13);
    wr32(sp0 - 0x524u, 0u);
    edi = t13;
    eax = 0u;
    ecx = t14 * 0x16cu >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t14 * 0x16cu & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if ((int32_t)rd32(esi + 0x24u) <= 0)
    {
        edx = t14 * 0x16cu;
    }
    else
    {
        loc_520 = t13;
    COW_AT(101795b2)
        wr32(sp0 - 0x47cu, 0u);
        wr32(sp0 - 0x478u, 0u);
        wr32(sp0 - 0x474u, 0u);
        wr32(sp0 - 0x470u, 0u);
        wr32(sp0 - 0x468u, 0u);
        wr32(sp0 - 0x464u, 0u);
        wr32(sp0 - 0x460u, 0u);
        wr32(sp0 - 0x45cu, 0u);
        wr32(sp0 - 0x454u, 0u);
        wr32(sp0 - 0x450u, 0u);
        wr32(sp0 - 0x44cu, 0u);
        wr32(sp0 - 0x448u, 0u);
        wr32(sp0 - 0x444u, 0x3f800000u);
        wr32(sp0 - 0x400u, 0x3f800000u);
        wr32(sp0 - 0x3fcu, 0u);
        wr32(sp0 - 0x3f8u, 0u);
        wr32(sp0 - 0x3f4u, 0u);
        wr32(sp0 - 0x3f0u, 0u);
        wr32(sp0 - 0x3e4u, 0u);
        wr32(sp0 - 0x3e0u, 0u);
        wr32(sp0 - 0x3d4u, 0u);
        wr32(sp0 - 0x3d0u, 0u);
        wr32(sp0 - 0x3ccu, 0u);
        wr32(sp0 - 0x3c8u, 0u);
        wr32(sp0 - 0x3c4u, 0x3f800000u);
        wr32(sp0 - 0x37cu, 0u);
        wr32(sp0 - 0x374u, 0u);
        wr32(sp0 - 0x370u, 0u);
        wr32(sp0 - 0x36cu, 0x3f800000u);
        wr32(sp0 - 0x368u, 0u);
        wr32(sp0 - 0x364u, 0u);
        wr32(sp0 - 0x35cu, 0u);
        wr32(sp0 - 0x354u, 0u);
        wr32(sp0 - 0x350u, 0u);
        wr32(sp0 - 0x34cu, 0u);
        wr32(sp0 - 0x348u, 0u);
        wr32(sp0 - 0x344u, 0x3f800000u);
        wr32(sp0 - 0x3b8u, 0u);
        wr32(sp0 - 0x3b4u, 0u);
        wr32(sp0 - 0x3a8u, 0u);
        wr32(sp0 - 0x3a4u, 0u);
        wr32(sp0 - 0x3a0u, 0u);
        wr32(sp0 - 0x39cu, 0u);
        wr32(sp0 - 0x398u, 0x3f800000u);
        wr32(sp0 - 0x394u, 0u);
        wr32(sp0 - 0x390u, 0u);
        wr32(sp0 - 0x38cu, 0u);
        wr32(sp0 - 0x388u, 0u);
        wr32(sp0 - 0x384u, 0x3f800000u);
        wr32(sp0 - 0x2c0u, 0x3f800000u);
        wr32(sp0 - 0x2bcu, 0u);
        wr32(sp0 - 0x2b8u, 0u);
        wr32(sp0 - 0x2b4u, 0u);
        wr32(sp0 - 0x2b0u, 0u);
        wr32(sp0 - 0x2acu, 0x3f800000u);
        wr32(sp0 - 0x2a8u, 0u);
        wr32(sp0 - 0x2a4u, 0u);
        wr32(sp0 - 0x2a0u, 0u);
        wr32(sp0 - 0x29cu, 0u);
        wr32(sp0 - 0x298u, 0x3f800000u);
        wr32(sp0 - 0x294u, 0u);
        wr32(sp0 - 0x284u, 0x3f800000u);
        t15 = rd32(sp0 - 0x530u) + 0x10u;
        wr32(sp0 - 0x534u, t15);
        ebp = loc_520 + 0x3cu;
        loc_524 = 0u;
        loc_534 = t15;
        loc_530 = rd32(sp0 - 0x530u);
L_1017986e: ;
    COW_AT(1017986e)
        if ((int32_t)rd32(sp0 - 0x528u) < 27)
        {
            esi = loc_530;
        }
        else
        {
            esi = loc_530;
    COW_AT(1017987b)
            eax = 0u;
            ebx = 0u;
L_1017987d: ;
    COW_AT(1017987d)
            t16 = rd8(eax + esi);
            wr8(eax + esi, (uint8_t)(t16 ^ 0x55u));
            if ((int32_t)(eax + 1u) < 16)
            {
                eax = eax + 1u;
                ebx = (ebx & 0xffffff00u) | (t16 ^ 0x55u);
                goto L_1017987d;
            }
        }
    COW_AT(1017988c)
        wr32(sp0 - 0x550u, esi);
        wr32(sp0 - 0x554u, loc_520);
        t17 = rd32(sp0 - 0x51cu);
        wr32(sp0 - 0x558u, t17);
        g->esp = sp0 - 0x54cu;
        cow_thiscall(g, COW_IMG(0x1017af80u), rd32(sp0 - 0x52cu), 3, t17, loc_520, esi);
        t18 = rd32(sp0 - 0x534u);
        wr32(ebp - 0x20u, rd32(t18));
        t19 = rd32(t18 + 4u);
        wr32(ebp - 0x1cu, t19);
        t20 = rd32(t18 + 8u);
        wr32(ebp - 0x18u, t20);
        t21 = rd32(t18 + 0xcu);
        wr32(ebp - 0x14u, t21);
        t22 = rd32(t18 + 0x10u);
        wr32(ebp - 0x10u, t22);
        t23 = rd32(t18 + 0x14u);
        wr32(ebp - 0xcu, t23);
        t24 = rd32(t18 + 0x18u);
        wr32(ebp - 8u, t24);
        t25 = rd32(t18 + 0x1cu);
        wr32(ebp - 4u, t25);
        t26 = rd32(t18 + 0x20u);
        wr32(ebp, t26);
        d27 = fr(g, (double)rdf32(t18) - (double)rdf32(COW_IMG(0x1033677cu)));
        if (!(d27 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (t26 & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            ecx = t18;
            edx = ebp - 8u;
            ebx = ebp - 8u;
            edi = ebp - 0x14u;
            x0 = d27;
        }
        else
        {
            eax = (t26 & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            ecx = t18;
            edx = ebp - 8u;
            ebx = ebp - 8u;
            edi = ebp - 0x14u;
            x0 = d27;
    COW_AT(101798fc)
            x0 = -x0;
        }
    COW_AT(101798fe)
        d28 = fr(g, (double)rdf32(ecx + 4u) - (double)rdf32(COW_IMG(0x10336778u)));
        if (!(d28 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            x1 = d28;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            x1 = d28;
    COW_AT(10179914)
            x1 = -x1;
        }
    COW_AT(10179916)
        wrf32(sp0 - 0x53cu, (float)(double)(float)x1);
        d29 = fr(g, (double)rdf32(ecx + 8u) - (double)rdf32(COW_IMG(0x10336774u)));
        if (!(d29 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            loc_53c_f = (double)(float)x1;
            x1 = d29;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            loc_53c_f = (double)(float)x1;
            x1 = d29;
    COW_AT(10179930)
            x1 = -x1;
        }
    COW_AT(10179932)
        wrf32(sp0 - 0x538u, (float)(double)(float)x1);
    COW_AT(1017998c)
        if (rd32(rd32(sp0 - 0x52cu) + 0x3cu) == 0xd5u)
        {
            ecx = rd32(sp0 - 0x52cu);
            loc_538_f = (double)(float)x1;
    COW_AT(10179943)
            if (x0 < (double)rdf32(COW_IMG(0x1032a3e0u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u);
    COW_AT(10179950)
                if (loc_53c_f < (double)rdf32(COW_IMG(0x1032a3e0u)))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_53c_f, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u);
    COW_AT(10179961)
                    if (loc_538_f < (double)rdf32(COW_IMG(0x1032a3e0u)))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_538_f, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u);
    COW_AT(10179972)
                        wr32(sp0 - 0x550u, 7u);
                        wr32(sp0 - 0x554u, COW_IMG(0x10377888u));
                        wr32(sp0 - 0x558u, esi);
                        g->eax = eax;
                        g->esp = sp0 - 0x544u;
                        t30 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, COW_IMG(0x10377888u), 7u, rd32(sp0 - 0x54cu), rd32(sp0 - 0x548u));
                        if (t30 == 0u)
                        {
    COW_AT(10179986)
                            wr8(ebp - 0x2eu, 1u);
                        }
                    }
                }
            }
        }
    COW_AT(1017998e)
        wr32(sp0 - 0x480u, rd32(ebx));
        t31 = rd32(ebp - 4u);
        wr32(sp0 - 0x46cu, t31);
        wr32(sp0 - 0x458u, rd32(ebp));
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x514u, 0x3f800000u);
        wr32(sp0 - 0x510u, 0u);
        wr32(sp0 - 0x50cu, 0u);
        wr32(sp0 - 0x508u, 0u);
        wr32(sp0 - 0x504u, 0u);
        wr32(sp0 - 0x500u, 0x3f800000u);
        wr32(sp0 - 0x4fcu, 0u);
        wr32(sp0 - 0x4f8u, 0u);
        wr32(sp0 - 0x4f4u, 0u);
        wr32(sp0 - 0x4f0u, 0u);
        wr32(sp0 - 0x4ecu, 0x3f800000u);
        wr32(sp0 - 0x4e8u, 0u);
        wr32(sp0 - 0x4e4u, 0u);
        wr32(sp0 - 0x4e0u, 0u);
        wr32(sp0 - 0x4dcu, 0u);
        wr32(sp0 - 0x4d8u, 0x3f800000u);
        g->esp = sp0 - 0x54cu;
        cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x514u, sp0 - 0x514u, sp0 - 0x480u);
        wr32(sp0 - 0x4d4u, rd32(edi));
        wr32(sp0 - 0x53cu, 0u);
        d32 = fr(g, cos(cow_bits2f(rd32(edi))));
        wrf32(sp0 - 0x3ecu, (float)(double)(float)d32);
        d33 = fr(g, sin(cow_bits2f(rd32(edi))));
        wrf32(sp0 - 0x3e8u, (float)(double)(float)d33);
        wrf32(sp0 - 0x3dcu, (float)(double)(float)-d33);
        wrf32(sp0 - 0x3d8u, (float)(double)(float)d32);
        loc_53c = 0u;
L_10179a80: ;
    COW_AT(10179a80)
        wr32(sp0 - 0x538u, 4u);
        ebx = loc_53c + sp0 - 0x514u;
        esi = loc_53c + sp0 - 0x300u;
        edi = sp0 - 0x400u;
        loc_538 = 4u;
L_10179a9e: ;
    COW_AT(10179a9e)
        d34 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(esi, 0u);
        eax = edi;
        ecx = ebx;
        edx = 4u;
        x0 = d34;
L_10179ab3: ;
    COW_AT(10179ab3)
        if (edx != 1u)
        {
            edx = edx - 1u;
            x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
            eax = eax + 0x10u;
            ecx = ecx + 4u;
            goto L_10179ab3;
        }
        x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
    COW_AT(10179ac2)
        wrf32(esi, (float)x0);
        wr32(sp0 - 0x538u, loc_538 - 1u);
        if (loc_538 != 1u)
        {
            esi = esi + 4u;
            edi = edi + 4u;
            loc_538 = loc_538 - 1u;
            goto L_10179a9e;
        }
    COW_AT(10179ad5)
        wr32(sp0 - 0x53cu, loc_53c + 0x10u);
        if ((int32_t)(loc_53c + 0x10u) < 64)
        {
            loc_53c = loc_53c + 0x10u;
            goto L_10179a80;
        }
    COW_AT(10179ae5)
        t35 = rd32(sp0 - 0x2fcu);
        wr32(sp0 - 0x510u, t35);
        t36 = rd32(sp0 - 0x2f0u);
        wr32(sp0 - 0x504u, t36);
        t37 = rd32(sp0 - 0x2e4u);
        wr32(sp0 - 0x4f8u, t37);
        t38 = rd32(sp0 - 0x2d8u);
        wr32(sp0 - 0x4ecu, t38);
        t39 = rd32(sp0 - 0x2ccu);
        wr32(sp0 - 0x4e0u, t39);
        t40 = rd32(ebp - 0x10u);
        wr32(sp0 - 0x4d0u, t40);
        t41 = rd32(sp0 - 0x300u);
        wr32(sp0 - 0x514u, t41);
        t42 = rd32(sp0 - 0x2f8u);
        wr32(sp0 - 0x50cu, t42);
        t43 = rd32(sp0 - 0x2f4u);
        wr32(sp0 - 0x508u, t43);
        t44 = rd32(sp0 - 0x2ecu);
        wr32(sp0 - 0x500u, t44);
        t45 = rd32(sp0 - 0x2e8u);
        wr32(sp0 - 0x4fcu, t45);
        t46 = rd32(sp0 - 0x2e0u);
        wr32(sp0 - 0x4f4u, t46);
        t47 = rd32(sp0 - 0x2dcu);
        wr32(sp0 - 0x4f0u, t47);
        t48 = rd32(sp0 - 0x2d4u);
        wr32(sp0 - 0x4e8u, t48);
        t49 = rd32(sp0 - 0x2d0u);
        wr32(sp0 - 0x4e4u, t49);
        t50 = rd32(sp0 - 0x2c8u);
        wr32(sp0 - 0x4dcu, t50);
        t51 = rd32(sp0 - 0x2c4u);
        wr32(sp0 - 0x4d8u, t51);
        wr32(sp0 - 0x53cu, 0u);
        d52 = (double)(float)fr(g, cos(cow_bits2f(t40)));
        wrf32(sp0 - 0x380u, (float)d52);
        d53 = fr(g, sin(cow_bits2f(t40)));
        wrf32(sp0 - 0x378u, (float)(double)(float)-d53);
        wrf32(sp0 - 0x360u, (float)(double)(float)d53);
        d54 = (double)(float)fr(g, cos(cow_bits2f(t40)));
        wrf32(sp0 - 0x358u, (float)d54);
        loc_53c = 0u;
L_10179bd0: ;
    COW_AT(10179bd0)
        wr32(sp0 - 0x538u, 4u);
        ebx = loc_53c + sp0 - 0x514u;
        esi = loc_53c + sp0 - 0x440u;
        edi = sp0 - 0x380u;
        loc_538 = 4u;
L_10179bee: ;
    COW_AT(10179bee)
        d55 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(esi, 0u);
        eax = edi;
        ecx = ebx;
        edx = 4u;
        x0 = d55;
L_10179c03: ;
    COW_AT(10179c03)
        if (edx != 1u)
        {
            edx = edx - 1u;
            x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
            eax = eax + 0x10u;
            ecx = ecx + 4u;
            goto L_10179c03;
        }
        x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
    COW_AT(10179c12)
        wrf32(esi, (float)x0);
        wr32(sp0 - 0x538u, loc_538 - 1u);
        if (loc_538 != 1u)
        {
            esi = esi + 4u;
            edi = edi + 4u;
            loc_538 = loc_538 - 1u;
            goto L_10179bee;
        }
    COW_AT(10179c25)
        wr32(sp0 - 0x53cu, loc_53c + 0x10u);
        if ((int32_t)(loc_53c + 0x10u) < 64)
        {
            loc_53c = loc_53c + 0x10u;
            goto L_10179bd0;
        }
    COW_AT(10179c35)
        t56 = rd32(sp0 - 0x43cu);
        wr32(sp0 - 0x510u, t56);
        t57 = rd32(sp0 - 0x430u);
        wr32(sp0 - 0x504u, t57);
        t58 = rd32(sp0 - 0x424u);
        wr32(sp0 - 0x4f8u, t58);
        t59 = rd32(sp0 - 0x418u);
        wr32(sp0 - 0x4ecu, t59);
        t60 = rd32(sp0 - 0x40cu);
        wr32(sp0 - 0x4e0u, t60);
        t61 = rd32(ebp - 0xcu);
        wr32(sp0 - 0x4c8u, t61);
        t62 = rd32(sp0 - 0x440u);
        wr32(sp0 - 0x514u, t62);
        t63 = rd32(sp0 - 0x438u);
        wr32(sp0 - 0x50cu, t63);
        t64 = rd32(sp0 - 0x434u);
        wr32(sp0 - 0x508u, t64);
        t65 = rd32(sp0 - 0x42cu);
        wr32(sp0 - 0x500u, t65);
        t66 = rd32(sp0 - 0x428u);
        wr32(sp0 - 0x4fcu, t66);
        t67 = rd32(sp0 - 0x420u);
        wr32(sp0 - 0x4f4u, t67);
        t68 = rd32(sp0 - 0x41cu);
        wr32(sp0 - 0x4f0u, t68);
        t69 = rd32(sp0 - 0x414u);
        wr32(sp0 - 0x4e8u, t69);
        t70 = rd32(sp0 - 0x410u);
        wr32(sp0 - 0x4e4u, t70);
        t71 = rd32(sp0 - 0x408u);
        wr32(sp0 - 0x4dcu, t71);
        t72 = rd32(sp0 - 0x404u);
        wr32(sp0 - 0x4d8u, t72);
        wr32(sp0 - 0x53cu, 0u);
        d73 = (double)(float)fr(g, cos(cow_bits2f(t61)));
        wrf32(sp0 - 0x3c0u, (float)d73);
        d74 = (double)(float)fr(g, sin(cow_bits2f(t61)));
        wrf32(sp0 - 0x3bcu, (float)d74);
        d75 = (double)(float)-fr(g, sin(cow_bits2f(t61)));
        wrf32(sp0 - 0x3b0u, (float)d75);
        d76 = (double)(float)fr(g, cos(cow_bits2f(t61)));
        wrf32(sp0 - 0x3acu, (float)d76);
        loc_53c = 0u;
L_10179d27: ;
    COW_AT(10179d27)
        wr32(sp0 - 0x538u, 4u);
        ebx = loc_53c + sp0 - 0x514u;
        esi = loc_53c + sp0 - 0x340u;
        edi = sp0 - 0x3c0u;
        loc_538 = 4u;
L_10179d45: ;
    COW_AT(10179d45)
        d77 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(esi, 0u);
        eax = edi;
        ecx = ebx;
        edx = 4u;
        x0 = d77;
L_10179d5a: ;
    COW_AT(10179d5a)
        if (edx != 1u)
        {
            edx = edx - 1u;
            x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
            eax = eax + 0x10u;
            ecx = ecx + 4u;
            goto L_10179d5a;
        }
        x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
    COW_AT(10179d69)
        wrf32(esi, (float)x0);
        wr32(sp0 - 0x538u, loc_538 - 1u);
        if (loc_538 != 1u)
        {
            esi = esi + 4u;
            edi = edi + 4u;
            loc_538 = loc_538 - 1u;
            goto L_10179d45;
        }
    COW_AT(10179d7c)
        wr32(sp0 - 0x53cu, loc_53c + 0x10u);
        if ((int32_t)(loc_53c + 0x10u) < 64)
        {
            loc_53c = loc_53c + 0x10u;
            goto L_10179d27;
        }
    COW_AT(10179d8c)
        t78 = rd32(sp0 - 0x340u);
        wr32(sp0 - 0x514u, t78);
        t79 = rd32(sp0 - 0x33cu);
        wr32(sp0 - 0x510u, t79);
        t80 = rd32(sp0 - 0x338u);
        wr32(sp0 - 0x50cu, t80);
        t81 = rd32(sp0 - 0x334u);
        wr32(sp0 - 0x508u, t81);
        t82 = rd32(sp0 - 0x330u);
        wr32(sp0 - 0x504u, t82);
        t83 = rd32(sp0 - 0x32cu);
        wr32(sp0 - 0x500u, t83);
        t84 = rd32(sp0 - 0x328u);
        wr32(sp0 - 0x4fcu, t84);
        t85 = rd32(sp0 - 0x324u);
        wr32(sp0 - 0x4f8u, t85);
        t86 = rd32(sp0 - 0x320u);
        wr32(sp0 - 0x4f4u, t86);
        t87 = rd32(sp0 - 0x31cu);
        wr32(sp0 - 0x4f0u, t87);
        t88 = rd32(sp0 - 0x318u);
        wr32(sp0 - 0x4ecu, t88);
        t89 = rd32(sp0 - 0x314u);
        wr32(sp0 - 0x4e8u, t89);
        t90 = rd32(sp0 - 0x310u);
        wr32(sp0 - 0x4e4u, t90);
        t91 = rd32(sp0 - 0x30cu);
        wr32(sp0 - 0x4e0u, t91);
        t92 = rd32(sp0 - 0x308u);
        wr32(sp0 - 0x4dcu, t92);
        t93 = rd32(sp0 - 0x304u);
        wr32(sp0 - 0x4d8u, t93);
        t94 = rd32(ebp - 0x20u);
        wr32(sp0 - 0x290u, t94);
        t95 = rd32(ebp - 0x1cu);
        wr32(sp0 - 0x28cu, t95);
        t96 = rd32(ebp - 0x18u);
        wr32(sp0 - 0x288u, t96);
        wr32(sp0 - 0x550u, sp0 - 0x2c0u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x558u, ebp + 4u);
        g->eax = sp0 - 0x514u;
        g->esp = sp0 - 0x54cu;
        t97 = cow_cdecl(g, COW_IMG(0x1016c060u), 3, ebp + 4u, sp0 - 0x514u, sp0 - 0x2c0u);
        t98 = rd32(sp0 - 0x52cu);
        t99 = rd32(sp0 - 0x520u);
        wr32(ebp + 0x120u, 0u);
        wr16(ebp + 0x118u, 0u);
        wr32(sp0 - 0x550u, t99);
        wr32(ebp + 0x11cu, 0u);
        wr32(ebp + 0x124u, 0u);
        g->ecx = t98;
        g->edx = t99;
        cow_stdcall(g, COW_IMG(0x1017a710u), 1, t99);
        t100 = g->ecx;
        t101 = g->edx;
        wr32(sp0 - 0x488u, 0u);
        wr32(sp0 - 0x48cu, 0u);
        wr32(sp0 - 0x490u, 0u);
        wr32(sp0 - 0x494u, 0u);
        wr32(sp0 - 0x49cu, 0u);
        wr32(sp0 - 0x4a0u, 0u);
        wr32(sp0 - 0x4a4u, 0u);
        wr32(sp0 - 0x4a8u, 0u);
        wr32(sp0 - 0x4b0u, 0u);
        wr32(sp0 - 0x4b4u, 0u);
        wr32(sp0 - 0x4b8u, 0u);
        wr32(sp0 - 0x4bcu, 0u);
        wr32(sp0 - 0x484u, 0x3f800000u);
        wr32(sp0 - 0x498u, 0x3f800000u);
        wr32(sp0 - 0x4acu, 0x3f800000u);
        wr32(sp0 - 0x4c0u, 0x3f800000u);
        d102 = (double)(float)-(double)rdf32(ebp - 0x18u);
        wrf32(sp0 - 0x550u, (float)d102);
        d103 = (double)(float)-(double)rdf32(ebp - 0x1cu);
        wrf32(sp0 - 0x554u, (float)d103);
        d104 = (double)(float)-(double)rdf32(ebp - 0x20u);
        wrf32(sp0 - 0x558u, (float)d104);
        wr32(sp0 - 0x55cu, sp0 - 0x200u);
        g->eax = sp0 - 0x200u;
        g->ecx = t100;
        g->edx = t101;
        t105 = cow_stdcall(g, COW_IMG(0x102d79c3u), 4, sp0 - 0x200u, cow_f2bits(d104), cow_f2bits(d103), cow_f2bits(d102));
        t106 = g->ecx;
        t107 = g->edx;
        wr32(sp0 - 0x550u, t106);
        d108 = (double)(float)-(double)rdf32(ebp - 0xcu);
        wrf32(sp0 - 0x550u, (float)d108);
        wr32(sp0 - 0x554u, sp0 - 0x100u);
        g->ecx = sp0 - 0x100u;
        t109 = cow_stdcall(g, COW_IMG(0x102d7b9fu), 2, sp0 - 0x100u, cow_f2bits(d108));
        t110 = g->ecx;
        wr32(sp0 - 0x550u, t110);
        d111 = (double)(float)-(double)rdf32(ebp - 0x10u);
        wrf32(sp0 - 0x550u, (float)d111);
        wr32(sp0 - 0x554u, sp0 - 0x80u);
        g->ecx = t110;
        g->edx = sp0 - 0x80u;
        cow_stdcall(g, COW_IMG(0x102d7b02u), 2, sp0 - 0x80u, cow_f2bits(d111));
        t112 = g->ecx;
        t113 = g->edx;
        wr32(sp0 - 0x550u, t112);
        d114 = (double)(float)-(double)rdf32(ebp - 0x14u);
        wrf32(sp0 - 0x550u, (float)d114);
        wr32(sp0 - 0x554u, sp0 - 0x1c0u);
        g->eax = sp0 - 0x1c0u;
        t115 = cow_stdcall(g, COW_IMG(0x102d7a66u), 2, sp0 - 0x1c0u, cow_f2bits(d114));
        d116 = (double)rdf32(ebp - 8u);
        if (d116 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (t115 & 0xffff0000u) | (uint16_t)cow_fsw(g, d116, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10179fa7)
            wr32(sp0 - 0x518u, 0x3f800000u);
        }
        else
        {
            eax = (t115 & 0xffff0000u) | (uint16_t)cow_fsw(g, d116, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10179f98)
            d117 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(ebp - 8u));
            wrf32(sp0 - 0x518u, (float)(double)(float)d117);
        }
    COW_AT(10179faf)
        d118 = (double)rdf32(ebp - 4u);
        if (d118 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d118, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10179fd1)
            wr32(sp0 - 0x4c4u, 0x3f800000u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d118, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10179fbf)
            d119 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(ebp - 4u));
            wrf32(sp0 - 0x4c4u, (float)(double)(float)d119);
        }
    COW_AT(10179fdc)
        if ((double)rdf32(ebp) == (double)rdf32(COW_IMG(0x103295d8u)))
        {
    COW_AT(10179ffe)
            wr32(sp0 - 0x4ccu, 0x3f800000u);
        }
        else
        {
    COW_AT(10179fec)
            d120 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(ebp));
            wrf32(sp0 - 0x4ccu, (float)(double)(float)d120);
        }
    COW_AT(1017a009)
        t121 = rd32(sp0 - 0x4ccu);
        wr32(sp0 - 0x550u, t121);
        t122 = rd32(sp0 - 0x4c4u);
        wr32(sp0 - 0x554u, t122);
        t123 = rd32(sp0 - 0x518u);
        wr32(sp0 - 0x558u, t123);
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        g->esp = sp0 - 0x54cu;
        cow_stdcall(g, COW_IMG(0x102d7913u), 4, sp0 - 0xc0u, t123, t122, t121);
        wr32(sp0 - 0x550u, sp0 - 0x200u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x558u, sp0 - 0x280u);
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x280u, sp0 - 0x4c0u, sp0 - 0x200u);
        esi = sp0 - 0x280u;
        edi = sp0 - 0x4c0u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x550u, sp0 - 0x100u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x558u, sp0 - 0x180u);
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x180u, sp0 - 0x4c0u, sp0 - 0x100u);
        esi = sp0 - 0x180u;
        edi = sp0 - 0x4c0u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x550u, sp0 - 0x80u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x558u, sp0 - 0x240u);
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x240u, sp0 - 0x4c0u, sp0 - 0x80u);
        esi = sp0 - 0x240u;
        edi = sp0 - 0x4c0u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x550u, sp0 - 0x1c0u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x558u, sp0 - 0x140u);
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x140u, sp0 - 0x4c0u, sp0 - 0x1c0u);
        esi = sp0 - 0x140u;
        edi = sp0 - 0x4c0u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        g->edx = sp0 - 0xc0u;
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x40u, sp0 - 0x4c0u, sp0 - 0xc0u);
        t124 = g->edx;
        wr8(ebp - 0x34u, 2u);
        esi = sp0 - 0x40u;
        edi = ebp + 0x44u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t125 = rd32(sp0 - 0x534u);
        t126 = rd8(rd32(sp0 - 0x534u) + 0x37u);
        wr8(ebp - 0x2fu, (uint8_t)t126);
        t127 = rd32(t125 + 0x24u);
        wr32(ebp + 0x84u, t127);
        d128 = (double)rdf32(t125 + 0x28u);
        wrf32(ebp + 0x8cu, (float)fr(g, d128 * d128));
        d129 = (double)rdf32(t125 + 0x28u);
        d130 = (double)rdf32(t125 + 0x2cu);
        if ((cow_fsw(g, d129, d130, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d129, d130, 0u) & 0x4100u;
            ecx = t125;
            edx = (t124 & 0xffffff00u) | t126;
    COW_AT(1017a15b)
            x0 = (double)rdf32(ecx + 0x2cu);
        }
        else
        {
            eax = cow_fsw(g, d129, d130, 0u) & 0x4100u;
            ecx = t125;
            edx = (t124 & 0xffffff00u) | t126;
    COW_AT(1017a156)
            x0 = (double)rdf32(ecx + 0x28u);
        }
    COW_AT(1017a15e)
        wrf32(ebp + 0x90u, (float)fr(g, x0 * x0));
        d131 = (double)rdf32(ecx + 0x30u);
        wrf32(ebp + 0x94u, (float)fr(g, d131 * d131));
        t132 = rd8(ecx + 0x34u);
        wr8(ebp - 0x33u, (uint8_t)t132);
        t133 = rd8(ecx + 0x35u);
        d134 = fr(g, (double)rdf32(ebp - 8u) * (double)rdf32(ebp));
        wr8(ebp - 0x32u, (uint8_t)t133);
        wr8(ebp - 0x31u, rd8(ecx + 0x36u) & 1u);
        t135 = rd8(ecx + 0x36u);
        d136 = (double)rdf32(COW_IMG(0x103295d8u));
        wr16(ebp + 0x98u, 0u);
        wr8(ebp - 0x2du, t135 >> 2u & 1u);
        if (d134 < d136)
        {
    COW_AT(1017a1b3)
            wr16(ebp + 0x98u, 1u);
        }
    COW_AT(1017a1bc)
        if (rd32(ecx + 0x38u) == 0u)
        {
    COW_AT(1017a1d4)
            wr32(ebp + 0x9cu, 0u);
        }
        else
        {
            eax = rd32(ecx + 0x38u);
    COW_AT(1017a1c3)
            wr32(ebp + 0x9cu, arg1 + eax);
        }
    COW_AT(1017a1da)
        t137 = rd32(ecx + 0x3cu);
        wr32(ebp + 0xa0u, t137);
        if ((int32_t)rd32(sp0 - 0x528u) < 18)
        {
    COW_AT(1017a212)
            wr32(ebp + 0xa8u, 0u);
            wr32(ebp + 0xacu, 0u);
            wr32(ebp + 0xb0u, 0u);
            wr32(ebp + 0xb4u, 0u);
        }
        else
        {
    COW_AT(1017a1ec)
            t138 = rd32(ecx + 0x44u);
            wr32(ebp + 0xa8u, t138);
            t139 = rd32(ecx + 0x48u);
            wr32(ebp + 0xacu, t139);
            t140 = rd32(ecx + 0x4cu);
            wr32(ebp + 0xb0u, t140);
            t141 = rd32(ecx + 0x50u);
            wr32(ebp + 0xb4u, t141);
        }
    COW_AT(1017a22a)
        t142 = rd32(ecx + 0x40u);
        t143 = rd32(sp0 - 0x524u);
        t144 = rd32(sp0 - 0x520u);
        wr32(ebp + 0x88u, t142);
        wr32(sp0 - 0x534u, ecx + 0x64u);
        t145 = rd32(sp0 - 0x530u) + 0x64u;
        wr32(sp0 - 0x530u, t145);
        wr32(sp0 - 0x524u, t143 + 1u);
        wr32(sp0 - 0x520u, t144 + 0x16cu);
        if ((int32_t)(t143 + 1u) < (int32_t)rd32(rd32(sp0 - 0x51cu) + 0x24u))
        {
            ebp = ebp + 0x16cu;
            loc_520 = t144 + 0x16cu;
            loc_524 = t143 + 1u;
            loc_534 = ecx + 0x64u;
            loc_530 = t145;
            goto L_1017986e;
        }
        edx = rd32(rd32(sp0 - 0x51cu) + 0x24u);
    }
    COW_AT(1017a271)
    if ((int32_t)rd32(sp0 - 0x528u) < 21)
    {
        eax = rd32(arg1 + 0x14u);
        ebx = rd32(sp0 - 0x52cu);
        esi = rd32(sp0 - 0x51cu);
    COW_AT(1017a2b8)
        wr32(esi + 0x30u, arg1 + eax);
        t153 = rd32(arg1 + 0x10u);
        t154 = rd32(arg1 + 0x10u);
        wr32(esi + 0x2cu, t153);
        wr32(esi + 0x34u, t154 != 0u);
        wr32(esi + 0x38u, 0u);
        eax = t153;
    }
    else
    {
        eax = rd32(arg1 + 0x14u);
        ebx = rd32(sp0 - 0x52cu);
        esi = rd32(sp0 - 0x51cu);
    COW_AT(1017a28e)
        t146 = arg1 + eax + 4u;
        wr32(esi + 0x30u, t146);
        t147 = rd32(arg1 + eax);
        t148 = rd32(arg1 + eax);
        wr32(esi + 0x2cu, t147);
        wr32(esi + 0x34u, t148 != 0u);
        t149 = arg1 + rd32(arg1 + 0x10u);
        wr32(sp0 - 0x550u, t149);
        wr32(sp0 - 0x554u, arg1);
        wr32(sp0 - 0x558u, esi);
        t150 = rd32(arg1 + 0x10u);
        wr32(esi + 0x38u, t149);
        g->eax = t149;
        g->esp = sp0 - 0x54cu;
        t151 = cow_fastcall(g, COW_IMG(0x1017c820u), ebx, t150, 3, esi, arg1, t149);
        t152 = g->edx;
        eax = t151;
        edx = t152;
    }
    COW_AT(1017a2d2)
    wr32(sp0 - 0x550u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54cu;
    t155 = cow_stdcall(g, COW_IMG(0x1017af30u), 1, esi);
    t156 = g->edx;
    wr32(sp0 - 0x550u, esi);
    g->edx = t156;
    t157 = cow_stdcall(g, COW_IMG(0x1017a950u), 1, esi);
    t158 = g->edx;
    wr32(sp0 - 0x550u, esi);
    t159 = cow_fastcall(g, COW_IMG(0x10186b80u), ebx, t158, 1, esi);
    t160 = g->edx;
    g->edx = t160;
    t161 = cow_thiscall(g, COW_IMG(0x1017a630u), ebx, 0);
    t162 = g->edx;
    g->edx = t162;
    t163 = cow_thiscall(g, COW_IMG(0x10170fd0u), esi + 0x44u, 0);
    t164 = g->edx;
    wr32(esi + 0x74u, t163);
    if (rd32(ebx + 0x154u) != 0u)
    {
        eax = rd32(arg1 + 8u);
        edx = t164;
    COW_AT(1017a35d)
        if (eax != 0u)
        {
    COW_AT(1017a361)
            wr32(esi + 0xcu, arg1 + eax);
            t173 = rd32(ebx + 0x48u);
            wr32(sp0 - 0x550u, t173);
            g->eax = arg1 + eax;
            g->esp = sp0 - 0x54cu;
            t174 = cow_thiscall(g, COW_IMG(0x1017a5e0u), ebx, 1, t173);
            wr32(esi + 0x34u, t174 != 0u);
            if (t174 == 0u)
            {
                edx = t174 != 0u;
    COW_AT(1017a387)
                eax = 0u;
            }
            else
            {
                eax = t174;
                edx = t174 != 0u;
    COW_AT(1017a37f)
                eax = rd32(eax + 0xd8u);
            }
    COW_AT(1017a389)
            wr32(sp0 - 0x550u, eax);
            wr32(sp0 - 0x554u, COW_IMG(0x1065c4d8u));
            wr32(sp0 - 0x558u, esi);
            g->esp = sp0 - 0x54cu;
            cow_thiscall(g, COW_IMG(0x10167be0u), ebx + 0x178u, 3, esi, COW_IMG(0x1065c4d8u), eax);
        }
    }
    else
    {
        eax = rd32(arg1 + 8u);
        edx = t164;
    COW_AT(1017a309)
        if (eax != 0u)
        {
    COW_AT(1017a311)
            wr32(esi + 0xcu, arg1 + eax);
            t165 = (edx & 0xffffff00u) | rd8(arg1 + 0x1du);
            wr32(sp0 - 0x550u, t165);
            t166 = rd32(sp0 - 0x528u);
            wr32(sp0 - 0x554u, t166);
            wr32(sp0 - 0x558u, COW_IMG(0x1065c4d8u));
            wr32(sp0 - 0x55cu, esi);
            g->esp = sp0 - 0x54cu;
            t167 = cow_call_regs(g, COW_IMG(0x10167f50u), t166, ebx + 0x178u, t165, 0, 4, esi, COW_IMG(0x1065c4d8u), t166, t165);
            t168 = g->edx;
            g->edx = t168;
            t169 = cow_stdcall(g, COW_IMG(0x10173990u), 0);
            t170 = g->edx;
            if (t169 == 0u) goto L_1017a351;
            eax = t169;
            edx = t170;
            ebp = ebx + 0x178u;
            esi = t169;
L_1017a343: ;
    COW_AT(1017a343)
            wr32(sp0 - 0x550u, esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x54cu;
            t171 = cow_thiscall(g, COW_IMG(0x10167ad0u), ebp, 1, esi);
            t172 = g->edx;
            if (rd32(esi) != 0u)
            {
                eax = t171;
                edx = t172;
                esi = rd32(esi);
                goto L_1017a343;
            }
L_1017a351: ;
    COW_AT(1017a351)
            wr32(ebx + 0x154u, 1u);
        }
    }
    COW_AT(1017a39b)
    t175 = rd32(ebx + 0x38u) + 1u;
    t176 = rd32(ebx + 0x38u);
    wr32(ebx + 0x38u, t175);
    if ((int32_t)(t176 + 1u) >= 0)
    {
        eax = t175;
        goto L_1017a3b6;
    }
    COW_AT(1017a3a4)
    t177 = rd32(sp0 - 0x548u);
    t178 = rd32(sp0 - 0x54cu);
    wr32(ebx + 0x38u, 0u);
    g->ebx = rd32(sp0 - 0x540u);
    g->esi = t177;
    g->edi = t178;
    g->ebp = rd32(sp0 - 0x544u);
    return;
L_1017a3b6: ;
    COW_AT(1017a3b6)
    if ((int32_t)eax > 1)
    {
    COW_AT(1017a3bb)
        eax = 1u;
    }
    COW_AT(1017a3c0)
    t179 = rd32(sp0 - 0x548u);
    t180 = rd32(sp0 - 0x54cu);
    wr32(ebx + 0x38u, eax);
    g->ebx = rd32(sp0 - 0x540u);
    g->esi = t179;
    g->edi = t180;
    g->ebp = rd32(sp0 - 0x544u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10179430(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10179459u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_528;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x54cu);
        in_esi = rd32(sp0 - 0x548u);
        in_ebp = rd32(sp0 - 0x544u);
        in_ebx = rd32(sp0 - 0x540u);
        loc_528 = rd32(sp0 - 0x528u);
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        wr32(sp0 - 0x52cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1017948du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_518;
        uint32_t loc_524;
        uint32_t loc_528;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x54cu);
        in_esi = rd32(sp0 - 0x548u);
        in_ebp = rd32(sp0 - 0x544u);
        in_ebx = rd32(sp0 - 0x540u);
        loc_534 = rd32(sp0 - 0x534u);
        loc_528 = rd32(sp0 - 0x528u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        wr32(sp0 - 0x52cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101794acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_518;
        uint32_t loc_524;
        uint32_t loc_528;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x54cu);
        in_esi = rd32(sp0 - 0x548u);
        in_ebp = rd32(sp0 - 0x544u);
        in_ebx = rd32(sp0 - 0x540u);
        loc_534 = rd32(sp0 - 0x534u);
        loc_528 = rd32(sp0 - 0x528u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        wr32(sp0 - 0x52cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101794b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_518;
        uint32_t loc_524;
        uint32_t loc_528;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x54cu);
        in_esi = rd32(sp0 - 0x548u);
        in_ebp = rd32(sp0 - 0x544u);
        in_ebx = rd32(sp0 - 0x540u);
        loc_534 = rd32(sp0 - 0x534u);
        loc_528 = rd32(sp0 - 0x528u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        wr32(sp0 - 0x52cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101794bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_518;
        uint32_t loc_524;
        uint32_t loc_528;
        uint32_t loc_534;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x54cu);
        in_esi = rd32(sp0 - 0x548u);
        in_ebp = rd32(sp0 - 0x544u);
        in_ebx = rd32(sp0 - 0x540u);
        loc_534 = rd32(sp0 - 0x534u);
        loc_528 = rd32(sp0 - 0x528u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x54cu;
        g->ecx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x52cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101794bfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_518;
        uint32_t loc_524;
        uint32_t loc_528;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x54cu);
        in_esi = rd32(sp0 - 0x548u);
        in_ebp = rd32(sp0 - 0x544u);
        in_ebx = rd32(sp0 - 0x540u);
        loc_534 = rd32(sp0 - 0x534u);
        loc_528 = rd32(sp0 - 0x528u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        wr32(sp0 - 0x52cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101794cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_518;
        uint32_t loc_524;
        uint32_t loc_528;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x54cu);
        in_esi = rd32(sp0 - 0x548u);
        in_ebp = rd32(sp0 - 0x544u);
        in_ebx = rd32(sp0 - 0x540u);
        loc_534 = rd32(sp0 - 0x534u);
        loc_528 = rd32(sp0 - 0x528u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        wr32(sp0 - 0x52cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101794d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_518;
        uint32_t loc_524;
        uint32_t loc_528;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x54cu);
        in_esi = rd32(sp0 - 0x548u);
        in_ebp = rd32(sp0 - 0x544u);
        in_ebx = rd32(sp0 - 0x540u);
        loc_534 = rd32(sp0 - 0x534u);
        loc_528 = rd32(sp0 - 0x528u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        wr32(sp0 - 0x52cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101794e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_518;
        uint32_t loc_524;
        uint32_t loc_528;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x54cu);
        in_esi = rd32(sp0 - 0x548u);
        in_ebp = rd32(sp0 - 0x544u);
        in_ebx = rd32(sp0 - 0x540u);
        loc_534 = rd32(sp0 - 0x534u);
        loc_528 = rd32(sp0 - 0x528u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        wr32(sp0 - 0x52cu, self);
        (void)sp0;
        return 1;
    }
    case 0x10179548u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_524;
        uint32_t loc_528;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x54cu);
        in_esi = rd32(sp0 - 0x548u);
        in_ebp = rd32(sp0 - 0x544u);
        in_ebx = rd32(sp0 - 0x540u);
        loc_534 = rd32(sp0 - 0x534u);
        loc_528 = rd32(sp0 - 0x528u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x52cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1017954fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_524;
        uint32_t loc_528;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x54cu);
        in_esi = rd32(sp0 - 0x548u);
        in_ebp = rd32(sp0 - 0x544u);
        in_ebx = rd32(sp0 - 0x540u);
        loc_534 = rd32(sp0 - 0x534u);
        loc_528 = rd32(sp0 - 0x528u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x52cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1017955cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_524;
        uint32_t loc_528;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x54cu);
        in_esi = rd32(sp0 - 0x548u);
        in_ebp = rd32(sp0 - 0x544u);
        in_ebx = rd32(sp0 - 0x540u);
        loc_534 = rd32(sp0 - 0x534u);
        self = rd32(sp0 - 0x52cu);
        loc_528 = rd32(sp0 - 0x528u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101795b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_520 = rd32(sp0 - 0x520u);
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x524u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1017986eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_520;
        uint32_t loc_524;
        uint32_t loc_530;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_534 = rd32(sp0 - 0x534u);
        loc_530 = rd32(sp0 - 0x530u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_520 = rd32(sp0 - 0x520u);
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017987bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_520;
        uint32_t loc_524;
        uint32_t loc_530;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_534 = rd32(sp0 - 0x534u);
        loc_530 = rd32(sp0 - 0x530u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_520 = rd32(sp0 - 0x520u);
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017987du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_520;
        uint32_t loc_524;
        uint32_t loc_530;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_534 = rd32(sp0 - 0x534u);
        loc_530 = rd32(sp0 - 0x530u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_520 = rd32(sp0 - 0x520u);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017988cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_520;
        uint32_t loc_524;
        uint32_t loc_530;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_534 = rd32(sp0 - 0x534u);
        loc_530 = rd32(sp0 - 0x530u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_520 = rd32(sp0 - 0x520u);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x101798fcu:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x101798feu:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x10179914u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x10179916u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x10179930u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_53c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c_f = rdf32(sp0 - 0x53cu);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x10179932u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_53c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c_f = rdf32(sp0 - 0x53cu);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x10179943u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_538_f;
        double loc_53c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c_f = rdf32(sp0 - 0x53cu);
        loc_538_f = rdf32(sp0 - 0x538u);
        x0 = ST(0);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x10179950u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_538_f;
        double loc_53c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c_f = rdf32(sp0 - 0x53cu);
        loc_538_f = rdf32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x10179961u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_538_f;
        double loc_53c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c_f = rdf32(sp0 - 0x53cu);
        loc_538_f = rdf32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x10179972u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_538_f;
        double loc_53c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c_f = rdf32(sp0 - 0x53cu);
        loc_538_f = rdf32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x10179986u:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017998cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_538_f;
        double loc_53c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c_f = rdf32(sp0 - 0x53cu);
        loc_538_f = rdf32(sp0 - 0x538u);
        x0 = ST(0);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017998eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_538_f;
        double loc_53c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c_f = rdf32(sp0 - 0x53cu);
        loc_538_f = rdf32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x10179a80u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179a9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179ab3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        x0 = ST(0);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179ac2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        x0 = ST(0);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179ad5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179ae5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179bd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179beeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179c03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        x0 = ST(0);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179c12u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        x0 = ST(0);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179c25u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179c35u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179d27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179d45u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179d5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        x0 = ST(0);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179d69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        x0 = ST(0);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179d7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179d8cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_538;
        uint32_t loc_53c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_53c = rd32(sp0 - 0x53cu);
        loc_538 = rd32(sp0 - 0x538u);
        g->esp = sp0 - 0x54cu;
        wr32(sp0 - 0x558u, sp0 - 0x514u);
        wr32(sp0 - 0x554u, sp0 - 0x514u);
        wr32(sp0 - 0x550u, sp0 - 0x480u);
        (void)sp0;
        return 1;
    }
    case 0x10179f98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0x200u);
        wr32(sp0 - 0x554u, sp0 - 0x1c0u);
        (void)sp0;
        return 1;
    }
    case 0x10179fa7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0x200u);
        wr32(sp0 - 0x554u, sp0 - 0x1c0u);
        (void)sp0;
        return 1;
    }
    case 0x10179fafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0x200u);
        wr32(sp0 - 0x554u, sp0 - 0x1c0u);
        (void)sp0;
        return 1;
    }
    case 0x10179fbfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0x200u);
        wr32(sp0 - 0x554u, sp0 - 0x1c0u);
        (void)sp0;
        return 1;
    }
    case 0x10179fd1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0x200u);
        wr32(sp0 - 0x554u, sp0 - 0x1c0u);
        (void)sp0;
        return 1;
    }
    case 0x10179fdcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0x200u);
        wr32(sp0 - 0x554u, sp0 - 0x1c0u);
        (void)sp0;
        return 1;
    }
    case 0x10179fecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0x200u);
        wr32(sp0 - 0x554u, sp0 - 0x1c0u);
        (void)sp0;
        return 1;
    }
    case 0x10179ffeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0x200u);
        wr32(sp0 - 0x554u, sp0 - 0x1c0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a009u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0x200u);
        wr32(sp0 - 0x554u, sp0 - 0x1c0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a156u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a15bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a15eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a1b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a1bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a1c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a1d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a1dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a1ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a212u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a22au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54cu;
        g->ebx = 0u;
        wr32(sp0 - 0x55cu, sp0 - 0xc0u);
        wr32(sp0 - 0x558u, sp0 - 0x40u);
        wr32(sp0 - 0x554u, sp0 - 0x4c0u);
        wr32(sp0 - 0x550u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x1017a271u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_520;
        uint32_t loc_524;
        uint32_t loc_530;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_534 = rd32(sp0 - 0x534u);
        loc_530 = rd32(sp0 - 0x530u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_520 = rd32(sp0 - 0x520u);
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017a28eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_520;
        uint32_t loc_524;
        uint32_t loc_530;
        uint32_t loc_534;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_534 = rd32(sp0 - 0x534u);
        loc_530 = rd32(sp0 - 0x530u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_520 = rd32(sp0 - 0x520u);
        g->esp = sp0 - 0x54cu;
        g->ecx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017a2b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_520;
        uint32_t loc_524;
        uint32_t loc_530;
        uint32_t loc_534;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_534 = rd32(sp0 - 0x534u);
        loc_530 = rd32(sp0 - 0x530u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_520 = rd32(sp0 - 0x520u);
        g->esp = sp0 - 0x54cu;
        g->ecx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017a2d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_520;
        uint32_t loc_524;
        uint32_t loc_530;
        uint32_t loc_534;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_534 = rd32(sp0 - 0x534u);
        loc_530 = rd32(sp0 - 0x530u);
        loc_524 = rd32(sp0 - 0x524u);
        loc_520 = rd32(sp0 - 0x520u);
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017a309u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017a311u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017a343u:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017a351u:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017a35du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017a361u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x54cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017a37fu:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017a387u:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017a389u:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017a39bu:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017a3a4u:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017a3b6u:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017a3bbu:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    case 0x1017a3c0u:
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
        g->esp = sp0 - 0x54cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10179430(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10179430(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
