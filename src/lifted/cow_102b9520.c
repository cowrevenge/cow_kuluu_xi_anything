/* f_0x102b9520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b9520(Guest* g)
{
    double d101;
    double d105;
    double d106;
    double d115;
    double d116;
    double d117;
    double d121;
    double d122;
    double d123;
    double d126;
    double d127;
    double d128;
    double d129;
    double d130;
    double d134;
    double d135;
    double d136;
    double d138;
    double d139;
    double d163;
    double d164;
    double d26;
    double d27;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d39;
    double d41;
    double d51;
    double d62;
    double d72;
    double d73;
    double d76;
    double d77;
    double d81;
    double d82;
    double d85;
    double d87;
    double d95;
    double d96;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_628;
    double loc_65c_f;
    uint32_t loc_660;
    uint32_t loc_664;
    double loc_668_f;
    uint32_t loc_66c;
    double loc_670_f;
    uint32_t loc_674;
    uint32_t loc_678;
    uint32_t loc_67c;
    uint32_t loc_680;
    uint32_t loc_684;
    double loc_688_f;
    uint32_t loc_68c;
    uint32_t loc_690;
    double loc_694_f;
    uint32_t loc_698;
    uint32_t loc_69c;
    uint32_t loc_6a0;
    uint32_t loc_6a4;
    uint32_t loc_6a8;
    double loc_6ac_f;
    double loc_6b0_f;
    uint32_t loc_6b4;
    uint32_t loc_6b8;
    uint32_t loc_6bc;
    uint32_t loc_6c0;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t124;
    uint32_t t125;
    uint32_t t13;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t137;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t38;
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
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
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
    uint32_t t74;
    uint32_t t75;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t83;
    uint32_t t84;
    uint32_t t86;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 1812u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b9540u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x6b8u); in_esi = rd32(sp0 - 0x6b4u); g->edi = rd32(sp0 - 0x6b8u); g->esi = rd32(sp0 - 0x6b4u); goto E_102b9540;
    case 0x102b9548u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_674 = rd32(sp0 - 0x674u); loc_66c = rd32(sp0 - 0x66cu); loc_664 = rd32(sp0 - 0x664u); goto E_102b9548;
    case 0x102b954au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_674 = rd32(sp0 - 0x674u); loc_66c = rd32(sp0 - 0x66cu); loc_664 = rd32(sp0 - 0x664u); goto E_102b954a;
    case 0x102b955au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b955a;
    case 0x102b956bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b956b;
    case 0x102b957cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b957c;
    case 0x102b9589u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b9589;
    case 0x102b9595u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b9595;
    case 0x102b95a1u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b95a1;
    case 0x102b95adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b95ad;
    case 0x102b95d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b95d2;
    case 0x102b95e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b95e5;
    case 0x102b960au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b960a;
    case 0x102b9620u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b9620;
    case 0x102b9648u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b9648;
    case 0x102b965eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b965e;
    case 0x102b9686u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; goto E_102b9686;
    case 0x102b969fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; goto E_102b969f;
    case 0x102b96c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; goto E_102b96c5;
    case 0x102b96cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; goto E_102b96cd;
    case 0x102b96dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_68c = rd32(sp0 - 0x68cu); goto E_102b96da;
    case 0x102b96edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_68c = rd32(sp0 - 0x68cu); goto E_102b96ed;
    case 0x102b9706u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_68c = rd32(sp0 - 0x68cu); goto E_102b9706;
    case 0x102b972au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); goto E_102b972a;
    case 0x102b973au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); goto E_102b973a;
    case 0x102b9745u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); goto E_102b9745;
    case 0x102b9749u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); goto E_102b9749;
    case 0x102b9767u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); goto E_102b9767;
    case 0x102b9780u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); loc_65c_f = rdf32(sp0 - 0x65cu); goto E_102b9780;
    case 0x102b9785u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); loc_65c_f = rdf32(sp0 - 0x65cu); goto E_102b9785;
    case 0x102b9798u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); loc_660 = rd32(sp0 - 0x660u); loc_65c_f = rdf32(sp0 - 0x65cu); goto E_102b9798;
    case 0x102b979du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); loc_660 = rd32(sp0 - 0x660u); loc_65c_f = rdf32(sp0 - 0x65cu); goto E_102b979d;
    case 0x102b97b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_68c = rd32(sp0 - 0x68cu); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); goto E_102b97b2;
    case 0x102b97b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_690 = rd32(sp0 - 0x690u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); loc_660 = rd32(sp0 - 0x660u); loc_65c_f = rdf32(sp0 - 0x65cu); goto E_102b97b6;
    case 0x102b97e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b97e8;
    case 0x102b982bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6b0_f = rdf32(sp0 - 0x6b0u); loc_6ac_f = rdf32(sp0 - 0x6acu); loc_678 = rd32(sp0 - 0x678u); loc_670_f = rdf32(sp0 - 0x670u); loc_668_f = rdf32(sp0 - 0x668u); goto E_102b982b;
    case 0x102b9891u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6b0_f = rdf32(sp0 - 0x6b0u); loc_6ac_f = rdf32(sp0 - 0x6acu); loc_678 = rd32(sp0 - 0x678u); loc_670_f = rdf32(sp0 - 0x670u); loc_668_f = rdf32(sp0 - 0x668u); goto E_102b9891;
    case 0x102b98b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b98b4;
    case 0x102b98b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6b0_f = rdf32(sp0 - 0x6b0u); loc_6ac_f = rdf32(sp0 - 0x6acu); loc_678 = rd32(sp0 - 0x678u); loc_670_f = rdf32(sp0 - 0x670u); loc_668_f = rdf32(sp0 - 0x668u); loc_628 = rd32(sp0 - 0x628u); goto E_102b98b7;
    case 0x102b98d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b98d0;
    case 0x102b9905u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9905;
    case 0x102b9928u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9928;
    case 0x102b9941u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9941;
    case 0x102b995eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b995e;
    case 0x102b9963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9963;
    case 0x102b996eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b996e;
    case 0x102b9973u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9973;
    case 0x102b998bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b998b;
    case 0x102b9993u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_69c = rd32(sp0 - 0x69cu); loc_688_f = rdf32(sp0 - 0x688u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9993;
    case 0x102b99bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b99bb;
    case 0x102b99deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b99de;
    case 0x102b99f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b99f7;
    case 0x102b9a1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_69c = rd32(sp0 - 0x69cu); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9a1e;
    case 0x102b9a47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9a47;
    case 0x102b9a6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9a6a;
    case 0x102b9a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9a83;
    case 0x102b9aa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9aa6;
    case 0x102b9ab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9ab8;
    case 0x102b9ac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9ac9;
    case 0x102b9ae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_688_f = rdf32(sp0 - 0x688u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9ae6;
    case 0x102b9b27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9b27;
    case 0x102b9b75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9b75;
    case 0x102b9b8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9b8e;
    case 0x102b9bcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9bcf;
    case 0x102b9c23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9c23;
    case 0x102b9c3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9c3c;
    case 0x102b9c6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9c6b;
    case 0x102b9cb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9cb9;
    case 0x102b9cd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9cd5;
    case 0x102b9d1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9d1c;
    case 0x102b9d6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9d6a;
    case 0x102b9d83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9d83;
    case 0x102b9da6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9da6;
    case 0x102b9dc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9dc1;
    case 0x102b9ddcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9ddc;
    case 0x102b9de1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9de1;
    case 0x102b9decu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9dec;
    case 0x102b9df1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9df1;
    case 0x102b9e0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9e0d;
    case 0x102b9e12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9e12;
    case 0x102b9e1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9e1d;
    case 0x102b9e21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9e21;
    case 0x102b9e58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9e58;
    case 0x102b9e63u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9e63;
    case 0x102b9e91u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9e91;
    case 0x102b9e96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9e96;
    case 0x102b9ea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9ea3;
    case 0x102b9eccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9ecc;
    case 0x102b9f05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f05;
    case 0x102b9f10u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f10;
    case 0x102b9f44u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f44;
    case 0x102b9f49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f49;
    case 0x102b9f59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f59;
    case 0x102b9f78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f78;
    case 0x102b9f81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f81;
    case 0x102b9f8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f8c;
    case 0x102b9f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9f90;
    case 0x102b9fdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9fdf;
    case 0x102b9feau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9fea;
    case 0x102ba036u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba036;
    case 0x102ba03bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba03b;
    case 0x102ba044u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba044;
    case 0x102ba076u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba076;
    case 0x102ba0a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba0a1;
    case 0x102ba0c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba0c4;
    case 0x102ba0ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba0dd;
    case 0x102ba104u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102ba104;
    case 0x102ba10cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_69c = rd32(sp0 - 0x69cu); loc_688_f = rdf32(sp0 - 0x688u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102ba10c;
    case 0x102ba13bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba13b;
    case 0x102ba15eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba15e;
    case 0x102ba177u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba177;
    case 0x102ba19eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_69c = rd32(sp0 - 0x69cu); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102ba19e;
    case 0x102ba1c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba1c1;
    case 0x102ba1ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_68c = rd32(sp0 - 0x68cu); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); goto E_102ba1ec;
    case 0x102ba1f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); goto E_102ba1f0;
    case 0x102ba225u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); goto E_102ba225;
    case 0x102ba244u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_674 = rd32(sp0 - 0x674u); loc_66c = rd32(sp0 - 0x66cu); loc_664 = rd32(sp0 - 0x664u); goto E_102ba244;
    case 0x102ba246u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_674 = rd32(sp0 - 0x674u); loc_66c = rd32(sp0 - 0x66cu); loc_664 = rd32(sp0 - 0x664u); goto E_102ba246;
    default: break;
    }
#endif

    COW_AT(102b9520)
    wr32(sp0 - 0x6b4u, in_esi);
    wr32(sp0 - 0x6b8u, in_edi);
    wr32(sp0 - 0x664u, 0u);
    if ((int32_t)rd32(arg1 + 0x48u) <= 0)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        loc_6b4 = in_esi;
        loc_6b8 = in_edi;
    }
    else
    {
        eax = rd32(arg1 + 0x48u);
    COW_AT(102b9540)
        wr32(sp0 - 0x6bcu, in_ebx);
        wr32(sp0 - 0x6c0u, in_ebp);
        wr32(sp0 - 0x674u, 0u);
        edx = in_edx;
        loc_6b4 = in_esi;
        loc_6b8 = in_edi;
        loc_664 = 0u;
        loc_6bc = in_ebx;
        loc_6c0 = in_ebp;
        loc_674 = 0u;
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_66c = rd32(sp0 - 0x66cu);
        loc_698 = rd32(sp0 - 0x698u);
        loc_678 = rd32(sp0 - 0x678u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_694_f = (double)rdf32(sp0 - 0x694u);
        loc_67c = rd32(sp0 - 0x67cu);
L_102b954a: ;
    COW_AT(102b954a)
        t1 = loc_674 + rd32(arg1 + 0x4cu);
        wr32(sp0 - 0x6c4u, t1);
        wr32(sp0 - 0x6c8u, arg1);
        g->ecx = loc_674;
        g->edx = edx;
        g->esp = sp0 - 0x6bcu;
        cow_cdecl(g, COW_IMG(0x102b7ed0u), 3, arg1, t1, loc_6c0);
        t2 = g->ecx;
        t3 = g->edx;
        ecx = t2;
        edx = t3;
        ebx = t1;
    COW_AT(102b955a)
        wr32(sp0 - 0x6ccu, ebx);
        wr32(sp0 - 0x6d0u, arg1);
        g->edx = edx;
        t4 = rd32(COW_IMG(0x103c214cu) + rd32(ebx + 0x24u) * 4u);
        g->esp = sp0 - 0x5bcu;
        cow_bridge_indirect(g, COW_IMG(0x102ba250u), 0u, 69u, (const uint32_t[]){arg1, ebx, rd32(sp0 - 0x6c8u), rd32(sp0 - 0x6c4u), rd32(sp0 - 0x6c0u), rd32(sp0 - 0x6bcu), rd32(sp0 - 0x6b8u), rd32(sp0 - 0x6b4u), rd32(sp0 - 0x6b0u), rd32(sp0 - 0x6acu), rd32(sp0 - 0x6a8u), rd32(sp0 - 0x6a4u), rd32(sp0 - 0x6a0u), rd32(sp0 - 0x69cu), rd32(sp0 - 0x698u), rd32(sp0 - 0x694u), rd32(sp0 - 0x690u), rd32(sp0 - 0x68cu), rd32(sp0 - 0x688u), rd32(sp0 - 0x684u), rd32(sp0 - 0x680u), rd32(sp0 - 0x67cu), rd32(sp0 - 0x678u), rd32(sp0 - 0x674u), rd32(sp0 - 0x670u), rd32(sp0 - 0x66cu), rd32(sp0 - 0x668u), rd32(sp0 - 0x664u), rd32(sp0 - 0x660u), rd32(sp0 - 0x65cu), rd32(sp0 - 0x658u), rd32(sp0 - 0x654u), rd32(sp0 - 0x650u), rd32(sp0 - 0x64cu), rd32(sp0 - 0x648u), rd32(sp0 - 0x644u), rd32(sp0 - 0x640u), rd32(sp0 - 0x63cu), rd32(sp0 - 0x638u), rd32(sp0 - 0x634u), rd32(sp0 - 0x630u), rd32(sp0 - 0x62cu), rd32(sp0 - 0x628u), rd32(sp0 - 0x624u), rd32(sp0 - 0x620u), rd32(sp0 - 0x61cu), rd32(sp0 - 0x618u), rd32(sp0 - 0x614u), rd32(sp0 - 0x610u), rd32(sp0 - 0x60cu), rd32(sp0 - 0x608u), rd32(sp0 - 0x604u), rd32(sp0 - 0x600u), rd32(sp0 - 0x5fcu), rd32(sp0 - 0x5f8u), rd32(sp0 - 0x5f4u), rd32(sp0 - 0x5f0u), rd32(sp0 - 0x5ecu), rd32(sp0 - 0x5e8u), rd32(sp0 - 0x5e4u), rd32(sp0 - 0x5e0u), rd32(sp0 - 0x5dcu), rd32(sp0 - 0x5d8u), rd32(sp0 - 0x5d4u), rd32(sp0 - 0x5d0u), rd32(sp0 - 0x5ccu), rd32(sp0 - 0x5c8u), rd32(sp0 - 0x5c4u), rd32(sp0 - 0x5c0u)}, g->ecx, g->edx, g->eax, 276u);
        t5 = g->edx;
        edx = t5;
        ebp = t4;
    COW_AT(102b956b)
        if (rd32(arg1 + 0x134u) == 0u)
        {
            loc_68c = rd32(sp0 - 0x68cu);
            loc_684 = rd32(sp0 - 0x684u);
            loc_66c = rd32(sp0 - 0x66cu);
            loc_698 = rd32(sp0 - 0x698u);
            loc_678 = rd32(sp0 - 0x678u);
            loc_680 = rd32(sp0 - 0x680u);
            loc_6a0 = rd32(sp0 - 0x6a0u);
            loc_694_f = (double)rdf32(sp0 - 0x694u);
            loc_67c = rd32(sp0 - 0x67cu);
        }
        else
        {
            eax = rd32(arg1 + 0x134u);
    COW_AT(102b957c)
            if (eax != 1u) goto L_102b96cd;
    COW_AT(102b9589)
            if (rd32(arg1 + 0x138u) != 1u) goto L_102b96cd;
    COW_AT(102b9595)
            if (rd32(arg1 + 0x13cu) != 1u) goto L_102b96cd;
    COW_AT(102b95a1)
            if (rd32(arg1 + 0x140u) != 1u) goto L_102b96cd;
    COW_AT(102b95ad)
            wr32(sp0 - 0x628u, 0u);
            wr32(sp0 - 0x6c4u, sp0 - 0x620u);
            wr32(sp0 - 0x6c8u, arg1 + 0x54u);
            wr32(sp0 - 0x6ccu, 0u);
            wr32(sp0 - 0x6d0u, 0u);
            wr32(sp0 - 0x6d4u, arg1);
            wr32(sp0 - 0x624u, 5u);
            g->eax = eax;
            g->esp = sp0 - 0x6d4u;
            t6 = cow_thiscall(g, ebp, sp0 - 0x620u, 0);
            t7 = g->ecx;
            eax = t6;
            ecx = t7;
    COW_AT(102b95d2)
            wr32(sp0 - 0x6d8u, sp0 - 0x628u);
            wr32(sp0 - 0x6dcu, 0u);
            wr32(sp0 - 0x6e0u, 0u);
            wr32(sp0 - 0x6e4u, ebx);
            wr32(sp0 - 0x6e8u, arg1);
            g->edx = sp0 - 0x628u;
            g->esp = sp0 - 0x6d4u;
            cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, 0u, 0u, sp0 - 0x628u);
            t8 = g->edx;
            edx = t8;
    COW_AT(102b95e5)
            t9 = rd32(sp0 - 0x628u) + 1u;
            wr32(sp0 - 0x628u, t9);
            t10 = sp0 + t9 * 0xcu - 0x620u;
            wr32(sp0 - 0x6ecu, t10);
            wr32(sp0 - 0x6f0u, arg1 + 0x54u);
            wr32(sp0 - 0x6f4u, 0u);
            wr32(sp0 - 0x6f8u, 0x3f800000u);
            wr32(sp0 - 0x6fcu, arg1);
            g->eax = t9 * 3u;
            g->esp = sp0 - 0x6fcu;
            t11 = cow_thiscall(g, ebp, t10, 0);
            t12 = g->ecx;
            eax = t11;
            ecx = t12;
    COW_AT(102b960a)
            wr32(sp0 - 0x700u, sp0 - 0x628u);
            wr32(sp0 - 0x704u, 0u);
            wr32(sp0 - 0x708u, 0x3f800000u);
            wr32(sp0 - 0x70cu, ebx);
            wr32(sp0 - 0x710u, arg1);
            g->edx = sp0 - 0x628u;
            g->esp = sp0 - 0x6fcu;
            cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, 0x3f800000u, 0u, sp0 - 0x628u);
            t13 = g->edx;
            edx = t13;
    COW_AT(102b9620)
            t14 = rd32(sp0 - 0x628u) + 1u;
            wr32(sp0 - 0x628u, t14);
            t15 = sp0 + t14 * 0xcu - 0x620u;
            wr32(sp0 - 0x6c4u, t15);
            wr32(sp0 - 0x6c8u, arg1 + 0x54u);
            wr32(sp0 - 0x6ccu, 0x3f800000u);
            wr32(sp0 - 0x6d0u, 0u);
            wr32(sp0 - 0x6d4u, arg1);
            g->eax = t14 * 3u;
            g->esp = sp0 - 0x6d4u;
            t16 = cow_thiscall(g, ebp, t15, 0);
            t17 = g->ecx;
            eax = t16;
            ecx = t17;
    COW_AT(102b9648)
            wr32(sp0 - 0x6d8u, sp0 - 0x628u);
            wr32(sp0 - 0x6dcu, 0x3f800000u);
            wr32(sp0 - 0x6e0u, 0u);
            wr32(sp0 - 0x6e4u, ebx);
            wr32(sp0 - 0x6e8u, arg1);
            g->edx = sp0 - 0x628u;
            g->esp = sp0 - 0x6d4u;
            cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, 0u, 0x3f800000u, sp0 - 0x628u);
            t18 = g->edx;
            edx = t18;
    COW_AT(102b965e)
            t19 = rd32(sp0 - 0x628u) + 1u;
            wr32(sp0 - 0x628u, t19);
            t20 = sp0 + t19 * 0xcu - 0x620u;
            wr32(sp0 - 0x6ecu, t20);
            wr32(sp0 - 0x6f0u, arg1 + 0x54u);
            wr32(sp0 - 0x6f4u, 0x3f800000u);
            wr32(sp0 - 0x6f8u, 0x3f800000u);
            wr32(sp0 - 0x6fcu, arg1);
            g->eax = t19 * 3u;
            g->esp = sp0 - 0x6fcu;
            t21 = cow_thiscall(g, ebp, t20, 0);
            t22 = g->ecx;
            eax = t21;
            ecx = t22;
    COW_AT(102b9686)
            wr32(sp0 - 0x700u, sp0 - 0x628u);
            wr32(sp0 - 0x704u, 0x3f800000u);
            wr32(sp0 - 0x708u, 0x3f800000u);
            wr32(sp0 - 0x70cu, ebx);
            wr32(sp0 - 0x710u, arg1);
            g->edx = sp0 - 0x628u;
            g->esp = sp0 - 0x6fcu;
            cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, 0x3f800000u, 0x3f800000u, sp0 - 0x628u);
            t23 = g->edx;
            edx = t23;
    COW_AT(102b969f)
            wr32(sp0 - 0x6c4u, arg2);
            wr32(sp0 - 0x6c8u, sp0 - 0x628u);
            t24 = rd32(sp0 - 0x628u) + 1u;
            wr32(sp0 - 0x628u, t24);
            wr32(sp0 - 0x6ccu, arg1);
            g->esp = sp0 - 0x6ccu;
            cow_thiscall(g, rd32(arg1 + 0x50u), sp0 - 0x628u, 0);
    COW_AT(102b96c5)
            loc_68c = rd32(sp0 - 0x68cu);
            loc_684 = rd32(sp0 - 0x684u);
            loc_66c = rd32(sp0 - 0x66cu);
            loc_698 = rd32(sp0 - 0x698u);
            loc_678 = rd32(sp0 - 0x678u);
            loc_680 = rd32(sp0 - 0x680u);
            loc_6a0 = rd32(sp0 - 0x6a0u);
            loc_694_f = (double)rdf32(sp0 - 0x694u);
            loc_67c = rd32(sp0 - 0x67cu);
        }
L_102ba225: ;
    COW_AT(102ba225)
        t177 = rd32(sp0 - 0x664u) + 1u;
        t178 = rd32(sp0 - 0x664u);
        wr32(sp0 - 0x664u, t177);
        t179 = rd32(sp0 - 0x674u) + 0x28u;
        wr32(sp0 - 0x674u, t179);
        if ((int32_t)(t178 + 1u) < (int32_t)rd32(arg1 + 0x48u))
        {
            eax = t177;
            edx = t179;
            loc_664 = t177;
            loc_674 = t179;
            goto L_102b9548;
        }
    COW_AT(102ba244)
        ebx = rd32(sp0 - 0x6bcu);
        ebp = rd32(sp0 - 0x6c0u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b8 = rd32(sp0 - 0x6b8u);
    }
    COW_AT(102ba246)
    g->ebx = ebx;
    g->esi = loc_6b4;
    g->edi = loc_6b8;
    g->ebp = ebp;
    return;
L_102b9548: ;
    COW_AT(102b9548)
    loc_6b4 = rd32(sp0 - 0x6b4u);
    loc_6b8 = rd32(sp0 - 0x6b8u);
    loc_6bc = rd32(sp0 - 0x6bcu);
    loc_6c0 = rd32(sp0 - 0x6c0u);
    goto L_102b954a;
L_102b96cd: ;
    COW_AT(102b96cd)
    wr32(sp0 - 0x68cu, sp0 - 0x658u);
    edi = COW_IMG(0x103c216cu);
    loc_68c = sp0 - 0x658u;
L_102b96da: ;
    COW_AT(102b96da)
    wr32(sp0 - 0x6c4u, loc_68c);
    wr32(sp0 - 0x6c8u, arg1 + 0x54u);
    t25 = rd32(edi + 4u);
    wr32(sp0 - 0x6ccu, t25);
    wr32(sp0 - 0x6d0u, rd32(edi));
    wr32(sp0 - 0x6d4u, arg1);
    g->esp = sp0 - 0x6d4u;
    cow_thiscall(g, ebp, t25, 0);
    loc_68c = rd32(sp0 - 0x68cu);
    COW_AT(102b96ed)
    wr32(sp0 - 0x68cu, loc_68c + 0xcu);
    if ((int32_t)(edi + 8u) < (int32_t)COW_IMG(0x103c218cu))
    {
        edi = edi + 8u;
        loc_68c = loc_68c + 0xcu;
        goto L_102b96da;
    }
    loc_68c = loc_68c + 0xcu;
    COW_AT(102b9706)
    wr32(sp0 - 0x684u, arg1 + 0x134u);
    wr32(sp0 - 0x66cu, 1u);
    wr32(sp0 - 0x698u, COW_IMG(0x103c216cu));
    wr32(sp0 - 0x678u, sp0 - 0x650u);
    ecx = 1u;
    edi = COW_IMG(0x103c216cu);
    loc_684 = arg1 + 0x134u;
    loc_66c = 1u;
    loc_698 = COW_IMG(0x103c216cu);
    loc_678 = sp0 - 0x650u;
    loc_67c = rd32(sp0 - 0x67cu);
L_102b972a: ;
    COW_AT(102b972a)
    if ((int32_t)(uint32_t)((int32_t)(rd32(loc_684) - (uint32_t)((int32_t)rd32(loc_684) >> 0x1fu)) >> 1u) >= 1)
    {
        eax = (uint32_t)((int32_t)(rd32(loc_684) - (uint32_t)((int32_t)rd32(loc_684) >> 0x1fu)) >> 1u);
    COW_AT(102b9745)
        wr32(sp0 - 0x680u, eax);
        loc_680 = eax;
    }
    else
    {
    COW_AT(102b973a)
        wr32(sp0 - 0x680u, 1u);
        eax = 1u;
        loc_680 = 1u;
    }
    COW_AT(102b9749)
    wr32(sp0 - 0x6a0u, 0u);
    d26 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int32_t)loc_680);
    wrf32(sp0 - 0x694u, (float)(double)(float)d26);
    if ((int32_t)eax <= 0)
    {
        loc_6a0 = 0u;
        loc_694_f = (double)(float)d26;
    }
    else
    {
        loc_694_f = (double)(float)d26;
    COW_AT(102b9767)
        d27 = fr(g, loc_694_f * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x65cu, (float)(double)(float)d27);
        if ((int32_t)(ecx + 2u & 0x80000003u) >= 0)
        {
            edx = ecx + 2u & 0x80000003u;
            loc_65c_f = (double)(float)d27;
        }
        else
        {
            edx = ecx + 2u & 0x80000003u;
            loc_65c_f = (double)(float)d27;
    COW_AT(102b9780)
            edx = (edx - 1u | 0xfffffffcu) + 1u;
        }
    COW_AT(102b9785)
        t28 = arg1 + edx * 4u + 0x134u;
        wr32(sp0 - 0x660u, t28);
        if ((int32_t)(ecx & 0x80000003u) >= 0)
        {
            ecx = ecx & 0x80000003u;
            loc_660 = t28;
        }
        else
        {
            ecx = ecx & 0x80000003u;
            loc_660 = t28;
    COW_AT(102b9798)
            ecx = (ecx - 1u | 0xfffffffcu) + 1u;
        }
    COW_AT(102b979d)
        wr32(sp0 - 0x690u, ecx);
        wr32(sp0 - 0x68cu, eax - 1u);
        t29 = eax * 2u - 2u;
        wr32(sp0 - 0x67cu, t29);
        loc_68c = eax - 1u;
        loc_6a0 = 0u;
        loc_690 = ecx;
        loc_67c = t29;
L_102b97b6: ;
    COW_AT(102b97b6)
        wr32(sp0 - 0x6c4u, cow_f2bits(loc_65c_f));
        t30 = COW_IMG(0x103c216cu) + ecx * 8u;
        wr32(sp0 - 0x6c8u, t30);
        wr32(sp0 - 0x6ccu, loc_698);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
        wr32(sp0 - 0x628u, 0u);
        g->esp = sp0 - 0x6c0u;
        cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, loc_698, t30, cow_f2bits(loc_65c_f));
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b97e8)
        d31 = (double)(float)(double)(int32_t)rd32(sp0 - 0x6a0u);
        wrf32(sp0 - 0x668u, (float)d31);
        d32 = fr(g, (double)(int32_t)rd32(sp0 - 0x6a0u) * (double)rdf32(sp0 - 0x694u));
        wrf32(sp0 - 0x670u, (float)(double)(float)d32);
        d33 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c218cu)) - (double)rdf32(edi)) * d32) + (double)rdf32(sp0 - 0x6b0u));
        wrf32(sp0 - 0x6b0u, (float)(double)(float)d33);
        d34 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c2190u)) - (double)rdf32(edi + 4u)) * d32) + (double)rdf32(sp0 - 0x6acu));
        wrf32(sp0 - 0x6acu, (float)(double)(float)d34);
        if (rd32(rd32(sp0 - 0x684u)) != 1u)
        {
            loc_668_f = d31;
            loc_670_f = (double)(float)d32;
            loc_6b0_f = (double)(float)d33;
            loc_6ac_f = (double)(float)d34;
    COW_AT(102b9891)
            wr32(sp0 - 0x6c4u, sp0 - 0x620u);
            wr32(sp0 - 0x6c8u, arg1 + 0x54u);
            wr32(sp0 - 0x6ccu, cow_f2bits(loc_6ac_f));
            wr32(sp0 - 0x6d0u, cow_f2bits(loc_6b0_f));
            wr32(sp0 - 0x6d4u, arg1);
            g->esp = sp0 - 0x6d4u;
            cow_thiscall(g, ebp, cow_f2bits(loc_6b0_f), 0);
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b98b4)
            loc_628 = rd32(sp0 - 0x628u);
            loc_668_f = (double)rdf32(sp0 - 0x668u);
            loc_670_f = (double)rdf32(sp0 - 0x670u);
            loc_6b0_f = (double)rdf32(sp0 - 0x6b0u);
            loc_6ac_f = (double)rdf32(sp0 - 0x6acu);
        }
        else
        {
            loc_668_f = d31;
            loc_670_f = (double)(float)d32;
            loc_6b0_f = (double)(float)d33;
            loc_6ac_f = (double)(float)d34;
    COW_AT(102b982b)
            d35 = fr(g, fr(g, (double)rdf32(sp0 + rd32(sp0 - 0x690u) * 0xcu - 0x658u) + (double)rdf32(loc_678 - 8u)) * (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x620u, (float)(double)(float)d35);
            d36 = fr(g, fr(g, (double)rdf32(sp0 + rd32(sp0 - 0x690u) * 0xcu - 0x654u) + (double)rdf32(loc_678 - 4u)) * (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x61cu, (float)(double)(float)d36);
            d37 = fr(g, fr(g, (double)rdf32(sp0 + rd32(sp0 - 0x690u) * 0xcu - 0x650u) + (double)rdf32(loc_678)) * (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x618u, (float)(double)(float)d37);
            loc_628 = 0u;
        }
    COW_AT(102b98b7)
        wr32(sp0 - 0x6c4u, sp0 - 0x628u);
        wr32(sp0 - 0x6c8u, cow_f2bits(loc_6ac_f));
        wr32(sp0 - 0x6ccu, cow_f2bits(loc_6b0_f));
        wr32(sp0 - 0x6d0u, ebx);
        wr32(sp0 - 0x6d4u, arg1);
        g->ecx = cow_f2bits(loc_6b0_f);
        g->esp = sp0 - 0x6c0u;
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, cow_f2bits(loc_6b0_f), cow_f2bits(loc_6ac_f), sp0 - 0x628u);
        t38 = g->ecx;
        ecx = t38;
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b98d0)
        d39 = (double)(float)(double)(int32_t)rd32(sp0 - 0x68cu);
        wrf32(sp0 - 0x6a8u, (float)d39);
        t40 = rd32(sp0 - 0x628u) + 1u;
        d41 = fr(g, (double)(int32_t)rd32(sp0 - 0x68cu) * (double)rdf32(sp0 - 0x694u));
        wr32(sp0 - 0x628u, t40);
        wrf32(sp0 - 0x6c4u, (float)(double)(float)d41);
        t42 = rd32(sp0 - 0x698u);
        wr32(sp0 - 0x6c8u, t42);
        wr32(sp0 - 0x6ccu, COW_IMG(0x103c218cu));
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        g->esp = sp0 - 0x6c0u;
        cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, COW_IMG(0x103c218cu), t42, cow_f2bits((double)(float)d41));
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9905)
        t43 = sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x620u;
        wr32(sp0 - 0x6d4u, t43);
        wr32(sp0 - 0x6d8u, arg1 + 0x54u);
        t44 = rd32(sp0 - 0x6acu);
        wr32(sp0 - 0x6dcu, t44);
        t45 = rd32(sp0 - 0x6b0u);
        wr32(sp0 - 0x6e0u, t45);
        wr32(sp0 - 0x6e4u, arg1);
        g->esp = sp0 - 0x6e4u;
        cow_thiscall(g, ebp, t45, 0);
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9928)
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        t46 = rd32(sp0 - 0x6acu);
        wr32(sp0 - 0x6ecu, t46);
        t47 = rd32(sp0 - 0x6b0u);
        wr32(sp0 - 0x6f0u, t47);
        wr32(sp0 - 0x6f4u, ebx);
        wr32(sp0 - 0x6f8u, arg1);
        g->esp = sp0 - 0x6e4u;
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t47, t46, sp0 - 0x628u);
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9941)
        t48 = rd32(sp0 - 0x628u) + 1u;
        wr32(sp0 - 0x628u, t48);
        if ((int32_t)rd32(rd32(sp0 - 0x660u)) >= 2)
        {
            eax = rd32(rd32(sp0 - 0x660u));
            loc_628 = t48;
        }
        else
        {
            loc_628 = t48;
    COW_AT(102b995e)
            eax = 2u;
        }
    COW_AT(102b9963)
        if ((int32_t)rd32(rd32(sp0 - 0x684u)) >= 2)
        {
            ecx = rd32(rd32(sp0 - 0x684u));
        }
        else
        {
    COW_AT(102b996e)
            ecx = 2u;
        }
    COW_AT(102b9973)
        t49 = cow_divs(g, eax, ecx);
        t50 = cow_mods(g, eax, ecx);
        wr32(sp0 - 0x69cu, 1u);
        wr32(sp0 - 0x6a4u, t49);
        if ((int32_t)t49 > 1)
        {
            loc_6a4 = t49;
    COW_AT(102b998b)
            wrf32(sp0 - 0x688u, (float)(double)(float)(double)(int32_t)loc_6a4);
            loc_69c = 1u;
            loc_688_f = (double)(float)(double)(int32_t)loc_6a4;
L_102b9993: ;
    COW_AT(102b9993)
            wr32(sp0 - 0x6c4u, ecx);
            d51 = fr(g, fr(g, fr(g, (double)(int32_t)loc_69c / loc_688_f) + (double)rdf32(sp0 - 0x6a8u)) * (double)rdf32(sp0 - 0x694u));
            wrf32(sp0 - 0x6c4u, (float)(double)(float)d51);
            t52 = rd32(sp0 - 0x698u);
            wr32(sp0 - 0x6c8u, t52);
            wr32(sp0 - 0x6ccu, COW_IMG(0x103c218cu));
            wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
            g->esp = sp0 - 0x6c0u;
            cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, COW_IMG(0x103c218cu), t52, cow_f2bits((double)(float)d51));
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b99bb)
            t53 = sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x620u;
            wr32(sp0 - 0x6d4u, t53);
            wr32(sp0 - 0x6d8u, arg1 + 0x54u);
            t54 = rd32(sp0 - 0x6acu);
            wr32(sp0 - 0x6dcu, t54);
            t55 = rd32(sp0 - 0x6b0u);
            wr32(sp0 - 0x6e0u, t55);
            wr32(sp0 - 0x6e4u, arg1);
            g->esp = sp0 - 0x6e4u;
            cow_thiscall(g, ebp, t55, 0);
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b99de)
            wr32(sp0 - 0x6e8u, sp0 - 0x628u);
            t56 = rd32(sp0 - 0x6acu);
            wr32(sp0 - 0x6ecu, t56);
            t57 = rd32(sp0 - 0x6b0u);
            wr32(sp0 - 0x6f0u, t57);
            wr32(sp0 - 0x6f4u, ebx);
            wr32(sp0 - 0x6f8u, arg1);
            g->esp = sp0 - 0x6e4u;
            cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t57, t56, sp0 - 0x628u);
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b99f7)
            t58 = rd32(sp0 - 0x628u) + 1u;
            wr32(sp0 - 0x628u, t58);
            t59 = rd32(sp0 - 0x69cu) + 1u;
            t60 = rd32(sp0 - 0x69cu);
            wr32(sp0 - 0x69cu, t59);
            if ((int32_t)(t60 + 1u) < (int32_t)rd32(sp0 - 0x6a4u))
            {
                ecx = rd32(sp0 - 0x6a4u);
                loc_628 = t58;
                loc_69c = t59;
                loc_6a4 = rd32(sp0 - 0x6a4u);
                loc_688_f = (double)rdf32(sp0 - 0x688u);
                goto L_102b9993;
            }
            ecx = rd32(sp0 - 0x6a4u);
            loc_628 = t58;
        }
    COW_AT(102b9a1e)
        wr32(sp0 - 0x6c4u, ecx);
        t61 = rd32(sp0 - 0x68cu) + 1u;
        wr32(sp0 - 0x6a8u, t61);
        d62 = fr(g, (double)(int32_t)t61 * (double)rdf32(sp0 - 0x694u));
        wrf32(sp0 - 0x6c4u, (float)(double)(float)d62);
        t63 = rd32(sp0 - 0x698u);
        wr32(sp0 - 0x6c8u, t63);
        wr32(sp0 - 0x6ccu, COW_IMG(0x103c218cu));
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        g->esp = sp0 - 0x6c0u;
        cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, COW_IMG(0x103c218cu), t63, cow_f2bits((double)(float)d62));
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9a47)
        t64 = sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x620u;
        wr32(sp0 - 0x6d4u, t64);
        wr32(sp0 - 0x6d8u, arg1 + 0x54u);
        t65 = rd32(sp0 - 0x6acu);
        wr32(sp0 - 0x6dcu, t65);
        t66 = rd32(sp0 - 0x6b0u);
        wr32(sp0 - 0x6e0u, t66);
        wr32(sp0 - 0x6e4u, arg1);
        g->esp = sp0 - 0x6e4u;
        cow_thiscall(g, ebp, t65, 0);
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9a6a)
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        t67 = rd32(sp0 - 0x6acu);
        wr32(sp0 - 0x6ecu, t67);
        t68 = rd32(sp0 - 0x6b0u);
        wr32(sp0 - 0x6f0u, t68);
        wr32(sp0 - 0x6f4u, ebx);
        wr32(sp0 - 0x6f8u, arg1);
        g->esp = sp0 - 0x6e4u;
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t68, t67, sp0 - 0x628u);
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9a83)
        wr32(sp0 - 0x6fcu, arg2);
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x704u, arg1);
        t69 = rd32(sp0 - 0x628u) + 1u;
        wr32(sp0 - 0x628u, t69);
        g->esp = sp0 - 0x704u;
        cow_thiscall(g, rd32(arg1 + 0x50u), sp0 - 0x628u, 0);
        t70 = g->ecx;
        ecx = t70;
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9aa6)
        if (rd32(sp0 - 0x67cu) != 0u)
        {
            zf = rd32(sp0 - 0x67cu) == 0u;
            sf = (int32_t)rd32(sp0 - 0x67cu) < 0;
    COW_AT(102b9ab8)
            wr32(sp0 - 0x624u, 5u);
            if (!(zf || sf))
            {
    COW_AT(102b9ac9)
                wr32(sp0 - 0x6a4u, 1u);
                t71 = rd32(sp0 - 0x6a0u) + 1u;
                wr32(sp0 - 0x6a8u, t71);
                d72 = fr(g, (double)(int32_t)t71 * (double)rdf32(sp0 - 0x694u));
                wrf32(sp0 - 0x688u, (float)(double)(float)d72);
                loc_6a4 = 1u;
                loc_688_f = (double)(float)d72;
L_102b9ae6: ;
    COW_AT(102b9ae6)
                wr32(sp0 - 0x6c4u, ecx);
                wr32(sp0 - 0x6a8u, loc_6a4 - 1u);
                wr32(sp0 - 0x628u, 0u);
                d73 = fr(g, fr(g, (double)(int32_t)(loc_6a4 - 1u) * (double)rdf32(sp0 - 0x694u)) * (double)rdf32(COW_IMG(0x10329a08u)));
                wrf32(sp0 - 0x6c4u, (float)(double)(float)d73);
                t74 = COW_IMG(0x103c216cu) + rd32(sp0 - 0x690u) * 8u;
                wr32(sp0 - 0x6c8u, t74);
                t75 = rd32(sp0 - 0x698u);
                wr32(sp0 - 0x6ccu, t75);
                wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
                g->esp = sp0 - 0x6c0u;
                cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, t75, t74, cow_f2bits((double)(float)d73));
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9b27)
                d76 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c218cu)) - (double)rdf32(edi)) * (double)rdf32(sp0 - 0x688u)) + (double)rdf32(sp0 - 0x6b0u));
                wr32(sp0 - 0x6d4u, sp0 - 0x620u);
                wr32(sp0 - 0x6d8u, arg1 + 0x54u);
                wrf32(sp0 - 0x6b0u, (float)(double)(float)d76);
                d77 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c2190u)) - (double)rdf32(edi + 4u)) * (double)rdf32(sp0 - 0x688u)) + (double)rdf32(sp0 - 0x6acu));
                wrf32(sp0 - 0x6acu, (float)(double)(float)d77);
                wr32(sp0 - 0x6dcu, cow_f2bits((double)(float)d77));
                wr32(sp0 - 0x6e0u, cow_f2bits((double)(float)d76));
                wr32(sp0 - 0x6e4u, arg1);
                g->esp = sp0 - 0x6e4u;
                cow_thiscall(g, ebp, cow_f2bits((double)(float)d76), 0);
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9b75)
                wr32(sp0 - 0x6e8u, sp0 - 0x628u);
                t78 = rd32(sp0 - 0x6acu);
                wr32(sp0 - 0x6ecu, t78);
                t79 = rd32(sp0 - 0x6b0u);
                wr32(sp0 - 0x6f0u, t79);
                wr32(sp0 - 0x6f4u, ebx);
                wr32(sp0 - 0x6f8u, arg1);
                g->esp = sp0 - 0x6e4u;
                cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t79, t78, sp0 - 0x628u);
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9b8e)
                t80 = rd32(sp0 - 0x628u) + 1u;
                d81 = fr(g, (double)(int32_t)rd32(sp0 - 0x6a4u) * (double)rdf32(sp0 - 0x694u));
                wr32(sp0 - 0x628u, t80);
                d82 = fr(g, d81 * (double)rdf32(COW_IMG(0x10329a08u)));
                wrf32(sp0 - 0x6a8u, (float)(double)(float)d82);
                wr32(sp0 - 0x6fcu, cow_f2bits((double)(float)d82));
                t83 = COW_IMG(0x103c216cu) + rd32(sp0 - 0x690u) * 8u;
                wr32(sp0 - 0x700u, t83);
                t84 = rd32(sp0 - 0x698u);
                wr32(sp0 - 0x704u, t84);
                wr32(sp0 - 0x708u, sp0 - 0x6b0u);
                g->esp = sp0 - 0x6f8u;
                cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, t84, t83, cow_f2bits((double)(float)d82));
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9bcf)
                d85 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c218cu)) - (double)rdf32(edi)) * (double)rdf32(sp0 - 0x670u)) + (double)rdf32(sp0 - 0x6b0u));
                wrf32(sp0 - 0x6b0u, (float)(double)(float)d85);
                t86 = sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x620u;
                d87 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c2190u)) - (double)rdf32(edi + 4u)) * (double)rdf32(sp0 - 0x670u)) + (double)rdf32(sp0 - 0x6acu));
                wr32(sp0 - 0x6c4u, t86);
                wr32(sp0 - 0x6c8u, arg1 + 0x54u);
                wrf32(sp0 - 0x6acu, (float)(double)(float)d87);
                wr32(sp0 - 0x6ccu, cow_f2bits((double)(float)d87));
                wr32(sp0 - 0x6d0u, cow_f2bits((double)(float)d85));
                wr32(sp0 - 0x6d4u, arg1);
                g->esp = sp0 - 0x6d4u;
                cow_thiscall(g, ebp, t86, 0);
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9c23)
                wr32(sp0 - 0x6d8u, sp0 - 0x628u);
                t88 = rd32(sp0 - 0x6acu);
                wr32(sp0 - 0x6dcu, t88);
                t89 = rd32(sp0 - 0x6b0u);
                wr32(sp0 - 0x6e0u, t89);
                wr32(sp0 - 0x6e4u, ebx);
                wr32(sp0 - 0x6e8u, arg1);
                g->esp = sp0 - 0x6d4u;
                cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t89, t88, sp0 - 0x628u);
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9c3c)
                t90 = rd32(sp0 - 0x628u) + 1u;
                wr32(sp0 - 0x628u, t90);
                t91 = rd32(sp0 - 0x6a8u);
                wr32(sp0 - 0x6ecu, t91);
                t92 = COW_IMG(0x103c216cu) + rd32(sp0 - 0x690u) * 8u;
                wr32(sp0 - 0x6f0u, t92);
                t93 = rd32(sp0 - 0x698u);
                wr32(sp0 - 0x6f4u, t93);
                wr32(sp0 - 0x6f8u, sp0 - 0x6b0u);
                g->esp = sp0 - 0x6e8u;
                cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, t93, t92, t91);
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9c6b)
                t94 = sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x620u;
                d95 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c218cu)) - (double)rdf32(edi)) * (double)rdf32(sp0 - 0x688u)) + (double)rdf32(sp0 - 0x6b0u));
                wr32(sp0 - 0x6fcu, t94);
                wr32(sp0 - 0x700u, arg1 + 0x54u);
                wrf32(sp0 - 0x6b0u, (float)(double)(float)d95);
                d96 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c2190u)) - (double)rdf32(edi + 4u)) * (double)rdf32(sp0 - 0x688u)) + (double)rdf32(sp0 - 0x6acu));
                wrf32(sp0 - 0x6acu, (float)(double)(float)d96);
                wr32(sp0 - 0x704u, cow_f2bits((double)(float)d96));
                wr32(sp0 - 0x708u, cow_f2bits((double)(float)d95));
                wr32(sp0 - 0x70cu, arg1);
                g->esp = sp0 - 0x70cu;
                cow_thiscall(g, ebp, cow_f2bits((double)(float)d96), 0);
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9cb9)
                wr32(sp0 - 0x6c4u, sp0 - 0x628u);
                t97 = rd32(sp0 - 0x6acu);
                wr32(sp0 - 0x6c8u, t97);
                t98 = rd32(sp0 - 0x6b0u);
                wr32(sp0 - 0x6ccu, t98);
                wr32(sp0 - 0x6d0u, ebx);
                wr32(sp0 - 0x6d4u, arg1);
                g->esp = sp0 - 0x6c0u;
                cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t98, t97, sp0 - 0x628u);
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9cd5)
                t99 = rd32(sp0 - 0x628u) + 1u;
                wr32(sp0 - 0x628u, t99);
                t100 = rd32(sp0 - 0x6a4u) + 1u;
                wr32(sp0 - 0x6a8u, t100);
                d101 = fr(g, fr(g, (double)(int32_t)t100 * (double)rdf32(sp0 - 0x694u)) * (double)rdf32(COW_IMG(0x10329a08u)));
                wrf32(sp0 - 0x6c4u, (float)(double)(float)d101);
                t102 = COW_IMG(0x103c216cu) + rd32(sp0 - 0x690u) * 8u;
                wr32(sp0 - 0x6c8u, t102);
                t103 = rd32(sp0 - 0x698u);
                wr32(sp0 - 0x6ccu, t103);
                wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
                g->esp = sp0 - 0x6c0u;
                cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, t103, t102, cow_f2bits((double)(float)d101));
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9d1c)
                t104 = sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x620u;
                d105 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c218cu)) - (double)rdf32(edi)) * (double)rdf32(sp0 - 0x670u)) + (double)rdf32(sp0 - 0x6b0u));
                wr32(sp0 - 0x6d4u, t104);
                wr32(sp0 - 0x6d8u, arg1 + 0x54u);
                wrf32(sp0 - 0x6b0u, (float)(double)(float)d105);
                d106 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c2190u)) - (double)rdf32(edi + 4u)) * (double)rdf32(sp0 - 0x670u)) + (double)rdf32(sp0 - 0x6acu));
                wrf32(sp0 - 0x6acu, (float)(double)(float)d106);
                wr32(sp0 - 0x6dcu, cow_f2bits((double)(float)d106));
                wr32(sp0 - 0x6e0u, cow_f2bits((double)(float)d105));
                wr32(sp0 - 0x6e4u, arg1);
                g->esp = sp0 - 0x6e4u;
                cow_thiscall(g, ebp, cow_f2bits((double)(float)d105), 0);
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9d6a)
                wr32(sp0 - 0x6e8u, sp0 - 0x628u);
                t107 = rd32(sp0 - 0x6acu);
                wr32(sp0 - 0x6ecu, t107);
                t108 = rd32(sp0 - 0x6b0u);
                wr32(sp0 - 0x6f0u, t108);
                wr32(sp0 - 0x6f4u, ebx);
                wr32(sp0 - 0x6f8u, arg1);
                g->esp = sp0 - 0x6e4u;
                cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t108, t107, sp0 - 0x628u);
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9d83)
                wr32(sp0 - 0x6fcu, arg2);
                wr32(sp0 - 0x700u, sp0 - 0x628u);
                wr32(sp0 - 0x704u, arg1);
                t109 = rd32(sp0 - 0x628u) + 1u;
                wr32(sp0 - 0x628u, t109);
                g->esp = sp0 - 0x704u;
                cow_thiscall(g, rd32(arg1 + 0x50u), t109, 0);
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9da6)
                t110 = rd32(sp0 - 0x6a8u);
                wr32(sp0 - 0x6a4u, t110);
                if ((int32_t)(t110 - 1u) < (int32_t)rd32(sp0 - 0x67cu))
                {
                    ecx = rd32(sp0 - 0x67cu);
                    loc_6a4 = t110;
                    loc_688_f = (double)rdf32(sp0 - 0x688u);
                    goto L_102b9ae6;
                }
            }
        }
    COW_AT(102b9dc1)
        wr32(sp0 - 0x624u, 6u);
        if ((int32_t)rd32(arg1 + rd32(sp0 - 0x690u) * 4u + 0x134u) >= 2)
        {
            eax = rd32(arg1 + rd32(sp0 - 0x690u) * 4u + 0x134u);
        }
        else
        {
    COW_AT(102b9ddc)
            eax = 2u;
        }
    COW_AT(102b9de1)
        if ((int32_t)rd32(rd32(sp0 - 0x684u)) >= 2)
        {
            ecx = rd32(rd32(sp0 - 0x684u));
        }
        else
        {
    COW_AT(102b9dec)
            ecx = 2u;
        }
    COW_AT(102b9df1)
        t111 = cow_divs(g, eax, ecx);
        t112 = cow_mods(g, eax, ecx);
        t113 = rd32(sp0 - 0x6a0u) + 1u;
        wr32(sp0 - 0x6a8u, t113);
        wr32(sp0 - 0x6a4u, t111);
        if (rd32(sp0 - 0x6a0u) + 1u != rd32(sp0 - 0x680u))
        {
            ecx = t113;
            edx = rd32(sp0 - 0x680u);
            loc_6a4 = t111;
            loc_6a8 = t113;
    COW_AT(102b9ecc)
            d128 = (double)(float)(double)rdf32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x62cu);
            wrf32(sp0 - 0x620u, (float)d128);
            d129 = (double)(float)(double)rdf32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x628u);
            wrf32(sp0 - 0x61cu, (float)d129);
            d130 = (double)(float)(double)rdf32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x624u);
            wrf32(sp0 - 0x618u, (float)d130);
            g->eax = rd32(sp0 - 0x628u) * 3u;
            g->ecx = ecx;
            t131 = rd32(sp0 - 0x628u);
            g->esp = sp0 - 0x6c0u;
            t132 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
            t133 = g->ecx;
            eax = t132;
            ecx = t133;
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9f05)
            if ((eax & 0x20000u) != 0u)
            {
                eax = eax & 0x20000u;
            }
            else
            {
    COW_AT(102b9f10)
                d134 = (double)(float)(double)rdf32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x3e0u);
                wrf32(sp0 - 0x3d4u, (float)d134);
                d135 = (double)(float)(double)rdf32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x3dcu);
                wrf32(sp0 - 0x3d0u, (float)d135);
                d136 = (double)(float)(double)rdf32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x3d8u);
                wrf32(sp0 - 0x3ccu, (float)d136);
                eax = rd32(sp0 - 0x628u) * 3u;
            }
    COW_AT(102b9f44)
            g->eax = eax;
            g->esp = sp0 - 0x6c0u;
            t137 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
            eax = t137;
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9f49)
            if ((eax & 4u) == 0u)
            {
                ecx = rd32(sp0 - 0x628u);
            }
            else
            {
                ecx = rd32(sp0 - 0x628u);
    COW_AT(102b9f59)
                d138 = (double)(float)(double)rdf32(ecx * 8u + sp0 - 0x190u);
                wrf32(sp0 - 0x188u, (float)d138);
                d139 = (double)(float)(double)rdf32(ecx * 8u + sp0 - 0x18cu);
                wrf32(sp0 - 0x184u, (float)d139);
            }
    COW_AT(102b9f78)
            if ((int32_t)rd32(sp0 - 0x6a4u) >= 1)
            {
                eax = rd32(sp0 - 0x6a4u);
    COW_AT(102b9f8c)
                wr32(sp0 - 0x6a0u, eax);
                loc_6a0 = eax;
            }
            else
            {
    COW_AT(102b9f81)
                wr32(sp0 - 0x6a0u, 1u);
                eax = 1u;
                loc_6a0 = 1u;
            }
    COW_AT(102b9f90)
            t140 = eax * 3u + 3u;
            wr32(sp0 - 0x69cu, t140);
            t141 = rd32(ecx * 0xcu + sp0 - 0x638u);
            wr32(sp0 + t140 * 4u - 0x620u, t141);
            t142 = rd32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x634u);
            wr32(sp0 + t140 * 4u - 0x61cu, t142);
            t143 = rd32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x630u);
            t144 = rd32(sp0 - 0x628u);
            wr32(sp0 + t140 * 4u - 0x618u, t143);
            g->eax = t140;
            g->ecx = t144 * 3u;
            g->esp = sp0 - 0x6c0u;
            t145 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
            t146 = g->ecx;
            eax = t145;
            ecx = t146;
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9fdf)
            if ((eax & 0x20000u) != 0u)
            {
                eax = eax & 0x20000u;
                edx = 0u;
            }
            else
            {
    COW_AT(102b9fea)
                t147 = rd32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x3ecu);
                t148 = rd32(sp0 - 0x69cu);
                wr32(sp0 + t148 * 4u - 0x3d4u, t147);
                t149 = rd32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x3e8u);
                wr32(sp0 + t148 * 4u - 0x3d0u, t149);
                t150 = rd32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x3e4u);
                t151 = rd32(sp0 - 0x628u);
                wr32(sp0 + t148 * 4u - 0x3ccu, t150);
                eax = t151 * 3u;
                ecx = t148;
                edx = t150;
            }
    COW_AT(102ba036)
            g->eax = eax;
            g->esp = sp0 - 0x6c0u;
            t152 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
            eax = t152;
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102ba03b)
            if ((eax & 4u) != 0u)
            {
    COW_AT(102ba044)
                t153 = rd32(sp0 + rd32(sp0 - 0x628u) * 8u - 0x198u);
                t154 = rd32(sp0 - 0x6a0u);
                wr32(sp0 + t154 * 8u - 0x180u, t153);
                t155 = rd32(sp0 + rd32(sp0 - 0x628u) * 8u - 0x194u);
                wr32(sp0 + t154 * 8u - 0x17cu, t155);
            }
        }
        else
        {
            eax = t111;
            ecx = t113;
            edx = rd32(sp0 - 0x680u);
            loc_6a4 = t111;
            loc_6a8 = t113;
    COW_AT(102b9e0d)
            if ((int32_t)eax >= 1)
            {
    COW_AT(102b9e1d)
                wr32(sp0 - 0x6a0u, eax);
                loc_6a0 = eax;
            }
            else
            {
    COW_AT(102b9e12)
                wr32(sp0 - 0x6a0u, 1u);
                eax = 1u;
                loc_6a0 = 1u;
            }
    COW_AT(102b9e21)
            t114 = eax * 3u + 3u;
            wr32(sp0 - 0x69cu, t114);
            d115 = (double)rdf32(sp0 - 0x614u);
            wrf32(sp0 + t114 * 4u - 0x620u, (float)d115);
            d116 = (double)rdf32(sp0 - 0x610u);
            wrf32(sp0 + t114 * 4u - 0x61cu, (float)d116);
            d117 = (double)rdf32(sp0 - 0x60cu);
            wrf32(sp0 + t114 * 4u - 0x618u, (float)d117);
            g->eax = t114;
            g->ecx = ecx;
            g->esp = sp0 - 0x6c0u;
            t118 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
            t119 = g->ecx;
            eax = t118;
            ecx = t119;
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9e58)
            if ((eax & 0x20000u) != 0u)
            {
                eax = eax & 0x20000u;
            }
            else
            {
    COW_AT(102b9e63)
                t120 = rd32(sp0 - 0x69cu);
                d121 = (double)rdf32(sp0 - 0x3c8u);
                wrf32(sp0 + t120 * 4u - 0x3d4u, (float)d121);
                d122 = (double)rdf32(sp0 - 0x3c4u);
                wrf32(sp0 + t120 * 4u - 0x3d0u, (float)d122);
                d123 = (double)rdf32(sp0 - 0x3c0u);
                wrf32(sp0 + t120 * 4u - 0x3ccu, (float)d123);
                eax = t120;
            }
    COW_AT(102b9e91)
            g->eax = eax;
            g->esp = sp0 - 0x6c0u;
            t124 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
            eax = t124;
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9e96)
            if ((eax & 4u) != 0u)
            {
    COW_AT(102b9ea3)
                t125 = rd32(sp0 - 0x6a0u);
                d126 = (double)rdf32(sp0 - 0x180u);
                wrf32(sp0 + t125 * 8u - 0x180u, (float)d126);
                d127 = (double)rdf32(sp0 - 0x17cu);
                wrf32(sp0 + t125 * 8u - 0x17cu, (float)d127);
            }
        }
    COW_AT(102ba076)
        t156 = rd32(sp0 - 0x670u);
        wr32(sp0 - 0x6c4u, t156);
        wr32(sp0 - 0x6c8u, COW_IMG(0x103c218cu));
        t157 = COW_IMG(0x103c216cu) + rd32(sp0 - 0x690u) * 8u;
        wr32(sp0 - 0x6ccu, t157);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x628u, 1u);
        g->esp = sp0 - 0x6c0u;
        cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, t157, COW_IMG(0x103c218cu), t156);
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102ba0a1)
        wr32(sp0 - 0x6d4u, sp0 - 0x614u);
        wr32(sp0 - 0x6d8u, arg1 + 0x54u);
        t158 = rd32(sp0 - 0x6acu);
        wr32(sp0 - 0x6dcu, t158);
        t159 = rd32(sp0 - 0x6b0u);
        wr32(sp0 - 0x6e0u, t159);
        wr32(sp0 - 0x6e4u, arg1);
        g->esp = sp0 - 0x6e4u;
        cow_thiscall(g, ebp, sp0 - 0x614u, 0);
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102ba0c4)
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        t160 = rd32(sp0 - 0x6acu);
        wr32(sp0 - 0x6ecu, t160);
        t161 = rd32(sp0 - 0x6b0u);
        wr32(sp0 - 0x6f0u, t161);
        wr32(sp0 - 0x6f4u, ebx);
        wr32(sp0 - 0x6f8u, arg1);
        g->esp = sp0 - 0x6e4u;
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t161, t160, sp0 - 0x628u);
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102ba0dd)
        t162 = rd32(sp0 - 0x628u) + 1u;
        wr32(sp0 - 0x628u, t162);
        wr32(sp0 - 0x69cu, 1u);
        if ((int32_t)rd32(sp0 - 0x6a4u) <= 1)
        {
            loc_628 = t162;
            loc_69c = 1u;
        }
        else
        {
            ecx = rd32(sp0 - 0x6a4u);
            loc_628 = t162;
    COW_AT(102ba104)
            d163 = (double)(float)(double)(int32_t)rd32(sp0 - 0x6a4u);
            wrf32(sp0 - 0x688u, (float)d163);
            loc_69c = 1u;
            loc_688_f = d163;
L_102ba10c: ;
    COW_AT(102ba10c)
            wr32(sp0 - 0x6c4u, ecx);
            d164 = fr(g, fr(g, fr(g, (double)(int32_t)loc_69c / loc_688_f) + (double)rdf32(sp0 - 0x668u)) * (double)rdf32(sp0 - 0x694u));
            wrf32(sp0 - 0x6c4u, (float)(double)(float)d164);
            wr32(sp0 - 0x6c8u, COW_IMG(0x103c218cu));
            t165 = COW_IMG(0x103c216cu) + rd32(sp0 - 0x690u) * 8u;
            wr32(sp0 - 0x6ccu, t165);
            wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
            g->esp = sp0 - 0x6c0u;
            cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, t165, COW_IMG(0x103c218cu), cow_f2bits((double)(float)d164));
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102ba13b)
            t166 = sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x620u;
            wr32(sp0 - 0x6d4u, t166);
            wr32(sp0 - 0x6d8u, arg1 + 0x54u);
            t167 = rd32(sp0 - 0x6acu);
            wr32(sp0 - 0x6dcu, t167);
            t168 = rd32(sp0 - 0x6b0u);
            wr32(sp0 - 0x6e0u, t168);
            wr32(sp0 - 0x6e4u, arg1);
            g->esp = sp0 - 0x6e4u;
            cow_thiscall(g, ebp, t166, 0);
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102ba15e)
            wr32(sp0 - 0x6e8u, sp0 - 0x628u);
            t169 = rd32(sp0 - 0x6acu);
            wr32(sp0 - 0x6ecu, t169);
            t170 = rd32(sp0 - 0x6b0u);
            wr32(sp0 - 0x6f0u, t170);
            wr32(sp0 - 0x6f4u, ebx);
            wr32(sp0 - 0x6f8u, arg1);
            g->esp = sp0 - 0x6e4u;
            cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t170, t169, sp0 - 0x628u);
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102ba177)
            t171 = rd32(sp0 - 0x628u) + 1u;
            wr32(sp0 - 0x628u, t171);
            t172 = rd32(sp0 - 0x69cu) + 1u;
            t173 = rd32(sp0 - 0x69cu);
            wr32(sp0 - 0x69cu, t172);
            if ((int32_t)(t173 + 1u) < (int32_t)rd32(sp0 - 0x6a4u))
            {
                ecx = rd32(sp0 - 0x6a4u);
                loc_628 = t171;
                loc_69c = t172;
                loc_688_f = (double)rdf32(sp0 - 0x688u);
                goto L_102ba10c;
            }
            loc_628 = t171;
            loc_69c = t172;
        }
    COW_AT(102ba19e)
        wr32(sp0 - 0x6c4u, arg2);
        wr32(sp0 - 0x6c8u, sp0 - 0x628u);
        wr32(sp0 - 0x6ccu, arg1);
        wr32(sp0 - 0x628u, loc_628 + 1u);
        g->esp = sp0 - 0x6ccu;
        cow_thiscall(g, rd32(arg1 + 0x50u), arg2, 0);
        loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102ba1c1)
        t174 = rd32(sp0 - 0x67cu) - 2u;
        wr32(sp0 - 0x67cu, t174);
        t175 = rd32(sp0 - 0x6a8u);
        wr32(sp0 - 0x6a0u, t175);
        t176 = rd32(sp0 - 0x68cu) - 1u;
        wr32(sp0 - 0x68cu, t176);
        if ((int32_t)rd32(sp0 - 0x6a8u) < (int32_t)rd32(sp0 - 0x680u))
        {
            loc_67c = t174;
            loc_6a0 = t175;
            loc_68c = t176;
            goto L_102b97b2;
        }
        loc_67c = t174;
        loc_6a0 = t175;
        loc_68c = t176;
    COW_AT(102ba1ec)
        ecx = rd32(sp0 - 0x66cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_698 = rd32(sp0 - 0x698u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_694_f = (double)rdf32(sp0 - 0x694u);
    }
    COW_AT(102ba1f0)
    wr32(sp0 - 0x684u, loc_684 + 4u);
    wr32(sp0 - 0x698u, loc_698 + 8u);
    wr32(sp0 - 0x678u, loc_678 + 0xcu);
    wr32(sp0 - 0x66cu, ecx + 1u);
    if ((int32_t)ecx < 4)
    {
        edi = edi + 8u;
        loc_684 = loc_684 + 4u;
        loc_66c = ecx + 1u;
        ecx = ecx + 1u;
        loc_698 = loc_698 + 8u;
        loc_678 = loc_678 + 0xcu;
        goto L_102b972a;
    }
    loc_684 = loc_684 + 4u;
    loc_66c = ecx + 1u;
    loc_698 = loc_698 + 8u;
    loc_678 = loc_678 + 0xcu;
    goto L_102ba225;
L_102b97b2: ;
    COW_AT(102b97b2)
    ecx = rd32(sp0 - 0x690u);
    loc_684 = rd32(sp0 - 0x684u);
    loc_66c = rd32(sp0 - 0x66cu);
    loc_698 = rd32(sp0 - 0x698u);
    loc_680 = rd32(sp0 - 0x680u);
    loc_694_f = (double)rdf32(sp0 - 0x694u);
    loc_65c_f = (double)rdf32(sp0 - 0x65cu);
    loc_660 = rd32(sp0 - 0x660u);
    loc_690 = rd32(sp0 - 0x690u);
    goto L_102b97b6;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b9520(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b9540u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x6b8u);
        in_esi = rd32(sp0 - 0x6b4u);
        g->esp = sp0 - 0x6b8u;
        g->esi = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x664u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9548u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_664;
        uint32_t loc_66c;
        uint32_t loc_674;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t loc_6a0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_674 = rd32(sp0 - 0x674u);
        loc_66c = rd32(sp0 - 0x66cu);
        loc_664 = rd32(sp0 - 0x664u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b954au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_664;
        uint32_t loc_66c;
        uint32_t loc_674;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t loc_6a0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_674 = rd32(sp0 - 0x674u);
        loc_66c = rd32(sp0 - 0x66cu);
        loc_664 = rd32(sp0 - 0x664u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b955au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6c8u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b956bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6d0u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b957cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b9589u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6c0u;
        g->ecx = 1u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b9595u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6c0u;
        g->ecx = 1u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b95a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6c0u;
        g->ecx = 1u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b95adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b95d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6d4u;
        g->esi = arg1;
        g->edi = arg1 + 0x54u;
        wr32(sp0 - 0x6c4u, sp0 - 0x620u);
        wr32(sp0 - 0x624u, 5u);
        (void)sp0;
        return 1;
    }
    case 0x102b95e5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6e8u;
        g->esi = arg1;
        g->edi = arg1 + 0x54u;
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        wr32(sp0 - 0x6c4u, sp0 - 0x620u);
        (void)sp0;
        return 1;
    }
    case 0x102b960au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6fcu;
        g->esi = arg1;
        g->edi = arg1 + 0x54u;
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        wr32(sp0 - 0x6c4u, sp0 - 0x620u);
        (void)sp0;
        return 1;
    }
    case 0x102b9620u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x710u;
        g->esi = arg1;
        g->edi = arg1 + 0x54u;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        wr32(sp0 - 0x6c4u, sp0 - 0x620u);
        (void)sp0;
        return 1;
    }
    case 0x102b9648u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6d4u;
        g->esi = arg1;
        g->edi = arg1 + 0x54u;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b965eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6e8u;
        g->esi = arg1;
        g->edi = arg1 + 0x54u;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b9686u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6fcu;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b969fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x710u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b96c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6ccu;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        wr32(sp0 - 0x6c8u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b96cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b96dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_68c;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_68c = rd32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b96edu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_68c;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_68c = rd32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6d4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b9706u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_68c;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_68c = rd32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b972au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_66c;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t loc_6a0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_66c = rd32(sp0 - 0x66cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b973au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_66c;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t loc_6a0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_66c = rd32(sp0 - 0x66cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b9745u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_66c;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t loc_6a0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_66c = rd32(sp0 - 0x66cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b9749u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_66c;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t loc_6a0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_66c = rd32(sp0 - 0x66cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b9767u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_66c;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_66c = rd32(sp0 - 0x66cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6a0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9780u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_65c_f;
        uint32_t loc_66c;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_66c = rd32(sp0 - 0x66cu);
        loc_65c_f = rdf32(sp0 - 0x65cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6a0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9785u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_65c_f;
        uint32_t loc_66c;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_66c = rd32(sp0 - 0x66cu);
        loc_65c_f = rdf32(sp0 - 0x65cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6a0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9798u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_65c_f;
        uint32_t loc_660;
        uint32_t loc_66c;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_66c = rd32(sp0 - 0x66cu);
        loc_660 = rd32(sp0 - 0x660u);
        loc_65c_f = rdf32(sp0 - 0x65cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6a0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b979du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_65c_f;
        uint32_t loc_660;
        uint32_t loc_66c;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_66c = rd32(sp0 - 0x66cu);
        loc_660 = rd32(sp0 - 0x660u);
        loc_65c_f = rdf32(sp0 - 0x65cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6a0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b97b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_68c;
        uint32_t loc_6a0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x6c8u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b97b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_65c_f;
        uint32_t loc_660;
        uint32_t loc_66c;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        uint32_t loc_690;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t loc_6a0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_690 = rd32(sp0 - 0x690u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_66c = rd32(sp0 - 0x66cu);
        loc_660 = rd32(sp0 - 0x660u);
        loc_65c_f = rdf32(sp0 - 0x65cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b97e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6d0u;
        g->esi = arg1;
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x628u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b982bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_668_f;
        double loc_670_f;
        uint32_t loc_678;
        double loc_6ac_f;
        double loc_6b0_f;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6b0_f = rdf32(sp0 - 0x6b0u);
        loc_6ac_f = rdf32(sp0 - 0x6acu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_670_f = rdf32(sp0 - 0x670u);
        loc_668_f = rdf32(sp0 - 0x668u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x628u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9891u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_668_f;
        double loc_670_f;
        uint32_t loc_678;
        double loc_6ac_f;
        double loc_6b0_f;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6b0_f = rdf32(sp0 - 0x6b0u);
        loc_6ac_f = rdf32(sp0 - 0x6acu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_670_f = rdf32(sp0 - 0x670u);
        loc_668_f = rdf32(sp0 - 0x668u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x628u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b98b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6d4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b98b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_628;
        double loc_668_f;
        double loc_670_f;
        uint32_t loc_678;
        double loc_6ac_f;
        double loc_6b0_f;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6b0_f = rdf32(sp0 - 0x6b0u);
        loc_6ac_f = rdf32(sp0 - 0x6acu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_670_f = rdf32(sp0 - 0x670u);
        loc_668_f = rdf32(sp0 - 0x668u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b98d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6d4u;
        g->esi = arg1;
        wr32(sp0 - 0x6c4u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b9905u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6d0u;
        g->esi = arg1;
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9928u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6e4u;
        g->esi = arg1;
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9941u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6f8u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b995eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_628;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9963u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_628;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b996eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_628;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9973u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_628;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b998bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_628;
        uint32_t loc_678;
        uint32_t loc_6a4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_678 = rd32(sp0 - 0x678u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x69cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102b9993u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_628;
        uint32_t loc_678;
        double loc_688_f;
        uint32_t loc_69c;
        uint32_t loc_6a4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_688_f = rdf32(sp0 - 0x688u);
        loc_678 = rd32(sp0 - 0x678u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b99bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6d0u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b99deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6e4u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b99f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6f8u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9a1eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_628;
        uint32_t loc_678;
        uint32_t loc_69c;
        uint32_t loc_6a4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_69c = rd32(sp0 - 0x69cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9a47u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6d0u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9a6au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6e4u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9a83u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6f8u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9aa6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x704u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9ab8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9ac9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9ae6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        double loc_688_f;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_688_f = rdf32(sp0 - 0x688u);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9b27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6d0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x628u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9b75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6e4u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9b8eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6f8u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9bcfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x708u;
        g->esi = arg1;
        wr32(sp0 - 0x708u, sp0 - 0x6b0u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9c23u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6d4u;
        g->esi = arg1;
        wr32(sp0 - 0x708u, sp0 - 0x6b0u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b9c3cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6e8u;
        g->esi = arg1;
        wr32(sp0 - 0x708u, sp0 - 0x6b0u);
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b9c6bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6f8u;
        g->esi = arg1;
        wr32(sp0 - 0x708u, sp0 - 0x6b0u);
        wr32(sp0 - 0x6f8u, sp0 - 0x6b0u);
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b9cb9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x70cu;
        g->esi = arg1;
        wr32(sp0 - 0x6f8u, sp0 - 0x6b0u);
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b9cd5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6d4u;
        g->esi = arg1;
        wr32(sp0 - 0x6f8u, sp0 - 0x6b0u);
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        wr32(sp0 - 0x6c4u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b9d1cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6d0u;
        g->esi = arg1;
        wr32(sp0 - 0x6f8u, sp0 - 0x6b0u);
        wr32(sp0 - 0x6d8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9d6au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6e4u;
        g->esi = arg1;
        wr32(sp0 - 0x6f8u, sp0 - 0x6b0u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9d83u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6f8u;
        g->esi = arg1;
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9da6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x704u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9dc1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_6a4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9ddcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_6a4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
        (void)sp0;
        return 1;
    }
    case 0x102b9de1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_6a4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
        (void)sp0;
        return 1;
    }
    case 0x102b9decu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_6a4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
        (void)sp0;
        return 1;
    }
    case 0x102b9df1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_6a4;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
        (void)sp0;
        return 1;
    }
    case 0x102b9e0du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
        (void)sp0;
        return 1;
    }
    case 0x102b9e12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
        (void)sp0;
        return 1;
    }
    case 0x102b9e1du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
        (void)sp0;
        return 1;
    }
    case 0x102b9e21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_6a0;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
        (void)sp0;
        return 1;
    }
    case 0x102b9e58u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9e63u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->edx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9e91u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->edx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9e96u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9ea3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9eccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_6a4;
        uint32_t loc_6a8;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_6a4 = rd32(sp0 - 0x6a4u);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
        (void)sp0;
        return 1;
    }
    case 0x102b9f05u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9f10u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->edx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9f44u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->edx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9f49u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9f59u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9f78u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9f81u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9f8cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9f90u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_6a0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9fdfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102b9feau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102ba036u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102ba03bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102ba044u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102ba076u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102ba0a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6d0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x628u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102ba0c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6e4u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102ba0ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6f8u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102ba104u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_628;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x69cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102ba10cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_628;
        uint32_t loc_678;
        double loc_688_f;
        uint32_t loc_69c;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_69c = rd32(sp0 - 0x69cu);
        loc_688_f = rdf32(sp0 - 0x688u);
        loc_678 = rd32(sp0 - 0x678u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102ba13bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6d0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102ba15eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6e4u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102ba177u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6f8u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102ba19eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_628;
        uint32_t loc_678;
        uint32_t loc_69c;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_69c = rd32(sp0 - 0x69cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        (void)sp0;
        return 1;
    }
    case 0x102ba1c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6ccu;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x6c8u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102ba1ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_68c;
        uint32_t loc_6a0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x6c8u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102ba1f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_66c;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t loc_6a0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_66c = rd32(sp0 - 0x66cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ba225u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_66c;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t loc_6a0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_66c = rd32(sp0 - 0x66cu);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ba244u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_664;
        uint32_t loc_66c;
        uint32_t loc_674;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t loc_6a0;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_674 = rd32(sp0 - 0x674u);
        loc_66c = rd32(sp0 - 0x66cu);
        loc_664 = rd32(sp0 - 0x664u);
        g->esp = sp0 - 0x6c0u;
        (void)sp0;
        return 1;
    }
    case 0x102ba246u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_664;
        uint32_t loc_66c;
        uint32_t loc_674;
        uint32_t loc_678;
        uint32_t loc_67c;
        uint32_t loc_680;
        uint32_t loc_684;
        uint32_t loc_68c;
        double loc_694_f;
        uint32_t loc_698;
        uint32_t loc_6a0;
        uint32_t loc_6b4;
        uint32_t loc_6b8;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_6b8 = rd32(sp0 - 0x6b8u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a0 = rd32(sp0 - 0x6a0u);
        loc_698 = rd32(sp0 - 0x698u);
        loc_694_f = rdf32(sp0 - 0x694u);
        loc_68c = rd32(sp0 - 0x68cu);
        loc_684 = rd32(sp0 - 0x684u);
        loc_680 = rd32(sp0 - 0x680u);
        loc_67c = rd32(sp0 - 0x67cu);
        loc_678 = rd32(sp0 - 0x678u);
        loc_674 = rd32(sp0 - 0x674u);
        loc_66c = rd32(sp0 - 0x66cu);
        loc_664 = rd32(sp0 - 0x664u);
        g->esp = sp0 - 0x6b8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b9520(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b9520(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
