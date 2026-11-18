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
    double d100;
    double d101;
    double d105;
    double d106;
    double d107;
    double d110;
    double d111;
    double d112;
    double d113;
    double d114;
    double d117;
    double d118;
    double d119;
    double d121;
    double d122;
    double d145;
    double d146;
    double d20;
    double d21;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d33;
    double d34;
    double d42;
    double d53;
    double d63;
    double d64;
    double d67;
    double d68;
    double d71;
    double d72;
    double d75;
    double d76;
    double d82;
    double d83;
    double d87;
    double d90;
    double d91;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_624;
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
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t115;
    uint32_t t116;
    uint32_t t12;
    uint32_t t120;
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t32;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
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
    uint32_t t65;
    uint32_t t66;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t73;
    uint32_t t74;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
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
    case 0x102b9548u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_674 = rd32(sp0 - 0x674u); loc_66c = rd32(sp0 - 0x66cu); loc_664 = rd32(sp0 - 0x664u); loc_624 = rd32(sp0 - 0x624u); goto E_102b9548;
    case 0x102b954au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_674 = rd32(sp0 - 0x674u); loc_66c = rd32(sp0 - 0x66cu); loc_664 = rd32(sp0 - 0x664u); loc_624 = rd32(sp0 - 0x624u); goto E_102b954a;
    case 0x102b957cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b957c;
    case 0x102b9589u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b9589;
    case 0x102b9595u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b9595;
    case 0x102b95a1u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b95a1;
    case 0x102b95adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_102b95ad;
    case 0x102b96cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; goto E_102b96cd;
    case 0x102b96dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_68c = rd32(sp0 - 0x68cu); goto E_102b96da;
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
    case 0x102b982bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6b0_f = rdf32(sp0 - 0x6b0u); loc_6ac_f = rdf32(sp0 - 0x6acu); loc_678 = rd32(sp0 - 0x678u); loc_670_f = rdf32(sp0 - 0x670u); loc_668_f = rdf32(sp0 - 0x668u); loc_624 = rd32(sp0 - 0x624u); goto E_102b982b;
    case 0x102b9891u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6b0_f = rdf32(sp0 - 0x6b0u); loc_6ac_f = rdf32(sp0 - 0x6acu); loc_678 = rd32(sp0 - 0x678u); loc_670_f = rdf32(sp0 - 0x670u); loc_668_f = rdf32(sp0 - 0x668u); loc_624 = rd32(sp0 - 0x624u); goto E_102b9891;
    case 0x102b98b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6b0_f = rdf32(sp0 - 0x6b0u); loc_6ac_f = rdf32(sp0 - 0x6acu); loc_678 = rd32(sp0 - 0x678u); loc_670_f = rdf32(sp0 - 0x670u); loc_668_f = rdf32(sp0 - 0x668u); loc_624 = rd32(sp0 - 0x624u); goto E_102b98b7;
    case 0x102b995eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b995e;
    case 0x102b9963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9963;
    case 0x102b996eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b996e;
    case 0x102b9973u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9973;
    case 0x102b998bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); goto E_102b998b;
    case 0x102b9993u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_69c = rd32(sp0 - 0x69cu); loc_688_f = rdf32(sp0 - 0x688u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9993;
    case 0x102b9a1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_69c = rd32(sp0 - 0x69cu); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9a1e;
    case 0x102b9ab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9ab8;
    case 0x102b9ac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); loc_624 = rd32(sp0 - 0x624u); goto E_102b9ac9;
    case 0x102b9ae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_688_f = rdf32(sp0 - 0x688u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); loc_624 = rd32(sp0 - 0x624u); goto E_102b9ae6;
    case 0x102b9dc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); loc_624 = rd32(sp0 - 0x624u); goto E_102b9dc1;
    case 0x102b9ddcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9ddc;
    case 0x102b9de1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9de1;
    case 0x102b9decu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9dec;
    case 0x102b9df1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9df1;
    case 0x102b9e0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9e0d;
    case 0x102b9e12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9e12;
    case 0x102b9e1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9e1d;
    case 0x102b9e21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9e21;
    case 0x102b9e63u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9e63;
    case 0x102b9e91u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9e91;
    case 0x102b9ea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9ea3;
    case 0x102b9eccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a8 = rd32(sp0 - 0x6a8u); loc_6a4 = rd32(sp0 - 0x6a4u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102b9ecc;
    case 0x102b9f10u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f10;
    case 0x102b9f44u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f44;
    case 0x102b9f59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f59;
    case 0x102b9f78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f78;
    case 0x102b9f81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f81;
    case 0x102b9f8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9f8c;
    case 0x102b9f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_678 = rd32(sp0 - 0x678u); goto E_102b9f90;
    case 0x102b9feau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102b9fea;
    case 0x102ba036u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba036;
    case 0x102ba044u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba044;
    case 0x102ba076u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba076;
    case 0x102ba104u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_678 = rd32(sp0 - 0x678u); goto E_102ba104;
    case 0x102ba10cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_69c = rd32(sp0 - 0x69cu); loc_688_f = rdf32(sp0 - 0x688u); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102ba10c;
    case 0x102ba19eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_69c = rd32(sp0 - 0x69cu); loc_678 = rd32(sp0 - 0x678u); loc_628 = rd32(sp0 - 0x628u); goto E_102ba19e;
    case 0x102ba1ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_68c = rd32(sp0 - 0x68cu); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); goto E_102ba1ec;
    case 0x102ba1f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); goto E_102ba1f0;
    case 0x102ba225u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_66c = rd32(sp0 - 0x66cu); loc_624 = rd32(sp0 - 0x624u); goto E_102ba225;
    case 0x102ba244u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_674 = rd32(sp0 - 0x674u); loc_66c = rd32(sp0 - 0x66cu); loc_664 = rd32(sp0 - 0x664u); loc_624 = rd32(sp0 - 0x624u); goto E_102ba244;
    case 0x102ba246u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; loc_6b8 = rd32(sp0 - 0x6b8u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a0 = rd32(sp0 - 0x6a0u); loc_698 = rd32(sp0 - 0x698u); loc_694_f = rdf32(sp0 - 0x694u); loc_68c = rd32(sp0 - 0x68cu); loc_684 = rd32(sp0 - 0x684u); loc_680 = rd32(sp0 - 0x680u); loc_67c = rd32(sp0 - 0x67cu); loc_678 = rd32(sp0 - 0x678u); loc_674 = rd32(sp0 - 0x674u); loc_66c = rd32(sp0 - 0x66cu); loc_664 = rd32(sp0 - 0x664u); loc_624 = rd32(sp0 - 0x624u); goto E_102ba246;
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
        loc_624 = rd32(sp0 - 0x624u);
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
        wr32(sp0 - 0x6ccu, t1);
        wr32(sp0 - 0x6d0u, arg1);
        g->edx = t3;
        t4 = rd32(COW_IMG(0x103c214cu) + rd32(t1 + 0x24u) * 4u);
        g->esp = sp0 - 0x5bcu;
        cow_bridge_indirect(g, COW_IMG(0x102ba250u), 0u, 69u, (const uint32_t[]){arg1, t1, arg1, rd32(sp0 - 0x6c4u), rd32(sp0 - 0x6c0u), rd32(sp0 - 0x6bcu), rd32(sp0 - 0x6b8u), rd32(sp0 - 0x6b4u), rd32(sp0 - 0x6b0u), rd32(sp0 - 0x6acu), rd32(sp0 - 0x6a8u), rd32(sp0 - 0x6a4u), rd32(sp0 - 0x6a0u), rd32(sp0 - 0x69cu), rd32(sp0 - 0x698u), rd32(sp0 - 0x694u), rd32(sp0 - 0x690u), rd32(sp0 - 0x68cu), rd32(sp0 - 0x688u), rd32(sp0 - 0x684u), rd32(sp0 - 0x680u), rd32(sp0 - 0x67cu), rd32(sp0 - 0x678u), rd32(sp0 - 0x674u), rd32(sp0 - 0x670u), rd32(sp0 - 0x66cu), rd32(sp0 - 0x668u), rd32(sp0 - 0x664u), rd32(sp0 - 0x660u), rd32(sp0 - 0x65cu), rd32(sp0 - 0x658u), rd32(sp0 - 0x654u), rd32(sp0 - 0x650u), rd32(sp0 - 0x64cu), rd32(sp0 - 0x648u), rd32(sp0 - 0x644u), rd32(sp0 - 0x640u), rd32(sp0 - 0x63cu), rd32(sp0 - 0x638u), rd32(sp0 - 0x634u), rd32(sp0 - 0x630u), rd32(sp0 - 0x62cu), rd32(sp0 - 0x628u), rd32(sp0 - 0x624u), rd32(sp0 - 0x620u), rd32(sp0 - 0x61cu), rd32(sp0 - 0x618u), rd32(sp0 - 0x614u), rd32(sp0 - 0x610u), rd32(sp0 - 0x60cu), rd32(sp0 - 0x608u), rd32(sp0 - 0x604u), rd32(sp0 - 0x600u), rd32(sp0 - 0x5fcu), rd32(sp0 - 0x5f8u), rd32(sp0 - 0x5f4u), rd32(sp0 - 0x5f0u), rd32(sp0 - 0x5ecu), rd32(sp0 - 0x5e8u), rd32(sp0 - 0x5e4u), rd32(sp0 - 0x5e0u), rd32(sp0 - 0x5dcu), rd32(sp0 - 0x5d8u), rd32(sp0 - 0x5d4u), rd32(sp0 - 0x5d0u), rd32(sp0 - 0x5ccu), rd32(sp0 - 0x5c8u), rd32(sp0 - 0x5c4u), rd32(sp0 - 0x5c0u)}, g->ecx, g->edx, g->eax, 276u);
        t5 = g->edx;
        if (rd32(arg1 + 0x134u) == 0u)
        {
            loc_624 = rd32(sp0 - 0x624u);
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
            edx = t5;
            ebx = t1;
            ebp = t4;
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
            wr32(sp0 - 0x6d8u, sp0 - 0x628u);
            wr32(sp0 - 0x6dcu, 0u);
            wr32(sp0 - 0x6e0u, 0u);
            wr32(sp0 - 0x6e4u, ebx);
            wr32(sp0 - 0x6e8u, arg1);
            g->edx = sp0 - 0x628u;
            cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, 0u, 0u, sp0 - 0x628u);
            t8 = g->edx;
            wr32(sp0 - 0x628u, 1u);
            wr32(sp0 - 0x6ecu, sp0 - 0x614u);
            wr32(sp0 - 0x6f0u, arg1 + 0x54u);
            wr32(sp0 - 0x6f4u, 0u);
            wr32(sp0 - 0x6f8u, 0x3f800000u);
            wr32(sp0 - 0x6fcu, arg1);
            g->eax = 3u;
            g->esp = sp0 - 0x6fcu;
            t9 = cow_thiscall(g, ebp, sp0 - 0x614u, 0);
            t10 = g->ecx;
            wr32(sp0 - 0x700u, sp0 - 0x628u);
            wr32(sp0 - 0x704u, 0u);
            wr32(sp0 - 0x708u, 0x3f800000u);
            wr32(sp0 - 0x70cu, ebx);
            wr32(sp0 - 0x710u, arg1);
            g->edx = sp0 - 0x628u;
            cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, 0x3f800000u, 0u, sp0 - 0x628u);
            t11 = g->edx;
            wr32(sp0 - 0x628u, 2u);
            wr32(sp0 - 0x6c4u, sp0 - 0x608u);
            wr32(sp0 - 0x6c8u, arg1 + 0x54u);
            wr32(sp0 - 0x6ccu, 0x3f800000u);
            wr32(sp0 - 0x6d0u, 0u);
            wr32(sp0 - 0x6d4u, arg1);
            g->eax = 6u;
            g->esp = sp0 - 0x6d4u;
            t12 = cow_thiscall(g, ebp, sp0 - 0x608u, 0);
            t13 = g->ecx;
            wr32(sp0 - 0x6d8u, sp0 - 0x628u);
            wr32(sp0 - 0x6dcu, 0x3f800000u);
            wr32(sp0 - 0x6e0u, 0u);
            wr32(sp0 - 0x6e4u, ebx);
            wr32(sp0 - 0x6e8u, arg1);
            g->edx = sp0 - 0x628u;
            cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, 0u, 0x3f800000u, sp0 - 0x628u);
            t14 = g->edx;
            wr32(sp0 - 0x628u, 3u);
            wr32(sp0 - 0x6ecu, sp0 - 0x5fcu);
            wr32(sp0 - 0x6f0u, arg1 + 0x54u);
            wr32(sp0 - 0x6f4u, 0x3f800000u);
            wr32(sp0 - 0x6f8u, 0x3f800000u);
            wr32(sp0 - 0x6fcu, arg1);
            g->eax = 9u;
            g->esp = sp0 - 0x6fcu;
            t15 = cow_thiscall(g, ebp, sp0 - 0x5fcu, 0);
            t16 = g->ecx;
            wr32(sp0 - 0x700u, sp0 - 0x628u);
            wr32(sp0 - 0x704u, 0x3f800000u);
            wr32(sp0 - 0x708u, 0x3f800000u);
            wr32(sp0 - 0x70cu, ebx);
            wr32(sp0 - 0x710u, arg1);
            g->edx = sp0 - 0x628u;
            cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, 0x3f800000u, 0x3f800000u, sp0 - 0x628u);
            t17 = g->edx;
            wr32(sp0 - 0x6c4u, arg2);
            wr32(sp0 - 0x6c8u, sp0 - 0x628u);
            wr32(sp0 - 0x628u, 4u);
            wr32(sp0 - 0x6ccu, arg1);
            g->esp = sp0 - 0x6ccu;
            cow_thiscall(g, rd32(arg1 + 0x50u), sp0 - 0x628u, 0);
            loc_624 = 5u;
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
        t159 = rd32(sp0 - 0x664u) + 1u;
        t160 = rd32(sp0 - 0x664u);
        wr32(sp0 - 0x664u, t159);
        t161 = rd32(sp0 - 0x674u) + 0x28u;
        wr32(sp0 - 0x674u, t161);
        if ((int32_t)(t160 + 1u) < (int32_t)rd32(arg1 + 0x48u))
        {
            eax = t159;
            edx = t161;
            loc_664 = t159;
            loc_674 = t161;
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
    t18 = rd32(edi + 4u);
    wr32(sp0 - 0x6ccu, t18);
    wr32(sp0 - 0x6d0u, rd32(edi));
    wr32(sp0 - 0x6d4u, arg1);
    g->esp = sp0 - 0x6d4u;
    cow_thiscall(g, ebp, t18, 0);
    t19 = rd32(sp0 - 0x68cu) + 0xcu;
    wr32(sp0 - 0x68cu, t19);
    if ((int32_t)(edi + 8u) < (int32_t)COW_IMG(0x103c218cu))
    {
        edi = edi + 8u;
        loc_68c = t19;
        goto L_102b96da;
    }
    loc_68c = t19;
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
    d20 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int32_t)loc_680);
    wrf32(sp0 - 0x694u, (float)(double)(float)d20);
    if ((int32_t)eax <= 0)
    {
        loc_6a0 = 0u;
        loc_694_f = (double)(float)d20;
    }
    else
    {
        loc_694_f = (double)(float)d20;
    COW_AT(102b9767)
        d21 = fr(g, loc_694_f * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x65cu, (float)(double)(float)d21);
        if ((int32_t)(ecx + 2u & 0x80000003u) >= 0)
        {
            edx = ecx + 2u & 0x80000003u;
            loc_65c_f = (double)(float)d21;
        }
        else
        {
            edx = ecx + 2u & 0x80000003u;
            loc_65c_f = (double)(float)d21;
    COW_AT(102b9780)
            edx = (edx - 1u | 0xfffffffcu) + 1u;
        }
    COW_AT(102b9785)
        t22 = arg1 + edx * 4u + 0x134u;
        wr32(sp0 - 0x660u, t22);
        if ((int32_t)(ecx & 0x80000003u) >= 0)
        {
            ecx = ecx & 0x80000003u;
            loc_660 = t22;
        }
        else
        {
            ecx = ecx & 0x80000003u;
            loc_660 = t22;
    COW_AT(102b9798)
            ecx = (ecx - 1u | 0xfffffffcu) + 1u;
        }
    COW_AT(102b979d)
        wr32(sp0 - 0x690u, ecx);
        wr32(sp0 - 0x68cu, eax - 1u);
        t23 = eax * 2u - 2u;
        wr32(sp0 - 0x67cu, t23);
        loc_68c = eax - 1u;
        loc_6a0 = 0u;
        loc_690 = ecx;
        loc_67c = t23;
L_102b97b6: ;
    COW_AT(102b97b6)
        wr32(sp0 - 0x6c4u, cow_f2bits(loc_65c_f));
        t24 = COW_IMG(0x103c216cu) + ecx * 8u;
        wr32(sp0 - 0x6c8u, t24);
        wr32(sp0 - 0x6ccu, loc_698);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
        wr32(sp0 - 0x628u, 0u);
        g->esp = sp0 - 0x6c0u;
        cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, loc_698, t24, cow_f2bits(loc_65c_f));
        d25 = (double)(float)(double)(int32_t)rd32(sp0 - 0x6a0u);
        wrf32(sp0 - 0x668u, (float)d25);
        d26 = fr(g, (double)(int32_t)rd32(sp0 - 0x6a0u) * (double)rdf32(sp0 - 0x694u));
        wrf32(sp0 - 0x670u, (float)(double)(float)d26);
        d27 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c218cu)) - (double)rdf32(edi)) * d26) + (double)rdf32(sp0 - 0x6b0u));
        wrf32(sp0 - 0x6b0u, (float)(double)(float)d27);
        d28 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c2190u)) - (double)rdf32(edi + 4u)) * d26) + (double)rdf32(sp0 - 0x6acu));
        wrf32(sp0 - 0x6acu, (float)(double)(float)d28);
        if (rd32(rd32(sp0 - 0x684u)) != 1u)
        {
            loc_678 = rd32(sp0 - 0x678u);
            loc_668_f = d25;
            loc_670_f = (double)(float)d26;
            loc_6b0_f = (double)(float)d27;
            loc_6ac_f = (double)(float)d28;
    COW_AT(102b9891)
            wr32(sp0 - 0x6c4u, sp0 - 0x620u);
            wr32(sp0 - 0x6c8u, arg1 + 0x54u);
            wr32(sp0 - 0x6ccu, cow_f2bits(loc_6ac_f));
            wr32(sp0 - 0x6d0u, cow_f2bits(loc_6b0_f));
            wr32(sp0 - 0x6d4u, arg1);
            g->esp = sp0 - 0x6d4u;
            cow_thiscall(g, ebp, cow_f2bits(loc_6b0_f), 0);
            loc_678 = rd32(sp0 - 0x678u);
            loc_668_f = (double)rdf32(sp0 - 0x668u);
            loc_670_f = (double)rdf32(sp0 - 0x670u);
            loc_6b0_f = (double)rdf32(sp0 - 0x6b0u);
            loc_6ac_f = (double)rdf32(sp0 - 0x6acu);
        }
        else
        {
            loc_678 = rd32(sp0 - 0x678u);
            loc_668_f = d25;
            loc_670_f = (double)(float)d26;
            loc_6b0_f = (double)(float)d27;
            loc_6ac_f = (double)(float)d28;
    COW_AT(102b982b)
            d29 = fr(g, fr(g, (double)rdf32(sp0 + rd32(sp0 - 0x690u) * 0xcu - 0x658u) + (double)rdf32(loc_678 - 8u)) * (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x620u, (float)(double)(float)d29);
            d30 = fr(g, fr(g, (double)rdf32(sp0 + rd32(sp0 - 0x690u) * 0xcu - 0x654u) + (double)rdf32(loc_678 - 4u)) * (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x61cu, (float)(double)(float)d30);
            d31 = fr(g, fr(g, (double)rdf32(sp0 + rd32(sp0 - 0x690u) * 0xcu - 0x650u) + (double)rdf32(loc_678)) * (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x618u, (float)(double)(float)d31);
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
        t32 = g->ecx;
        d33 = (double)(float)(double)(int32_t)rd32(sp0 - 0x68cu);
        wrf32(sp0 - 0x6a8u, (float)d33);
        d34 = fr(g, (double)(int32_t)rd32(sp0 - 0x68cu) * (double)rdf32(sp0 - 0x694u));
        wr32(sp0 - 0x628u, 1u);
        wrf32(sp0 - 0x6c4u, (float)(double)(float)d34);
        t35 = rd32(sp0 - 0x698u);
        wr32(sp0 - 0x6c8u, t35);
        wr32(sp0 - 0x6ccu, COW_IMG(0x103c218cu));
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, COW_IMG(0x103c218cu), t35, cow_f2bits((double)(float)d34));
        wr32(sp0 - 0x6d4u, sp0 - 0x614u);
        wr32(sp0 - 0x6d8u, arg1 + 0x54u);
        t36 = rd32(sp0 - 0x6acu);
        wr32(sp0 - 0x6dcu, t36);
        t37 = rd32(sp0 - 0x6b0u);
        wr32(sp0 - 0x6e0u, t37);
        wr32(sp0 - 0x6e4u, arg1);
        g->esp = sp0 - 0x6e4u;
        cow_thiscall(g, ebp, t37, 0);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        t38 = rd32(sp0 - 0x6acu);
        wr32(sp0 - 0x6ecu, t38);
        t39 = rd32(sp0 - 0x6b0u);
        wr32(sp0 - 0x6f0u, t39);
        wr32(sp0 - 0x6f4u, ebx);
        wr32(sp0 - 0x6f8u, arg1);
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t39, t38, sp0 - 0x628u);
        wr32(sp0 - 0x628u, 2u);
        if ((int32_t)rd32(rd32(sp0 - 0x660u)) >= 2)
        {
            eax = rd32(rd32(sp0 - 0x660u));
            loc_678 = rd32(sp0 - 0x678u);
        }
        else
        {
            loc_678 = rd32(sp0 - 0x678u);
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
        t40 = cow_divs(g, eax, ecx);
        t41 = cow_mods(g, eax, ecx);
        wr32(sp0 - 0x69cu, 1u);
        wr32(sp0 - 0x6a4u, t40);
        if ((int32_t)t40 <= 1)
        {
            loc_628 = 2u;
        }
        else
        {
            loc_6a4 = t40;
    COW_AT(102b998b)
            wrf32(sp0 - 0x688u, (float)(double)(float)(double)(int32_t)loc_6a4);
            loc_628 = 2u;
            loc_69c = 1u;
            loc_688_f = (double)(float)(double)(int32_t)loc_6a4;
L_102b9993: ;
    COW_AT(102b9993)
            wr32(sp0 - 0x6c4u, ecx);
            d42 = fr(g, fr(g, fr(g, (double)(int32_t)loc_69c / loc_688_f) + (double)rdf32(sp0 - 0x6a8u)) * (double)rdf32(sp0 - 0x694u));
            wrf32(sp0 - 0x6c4u, (float)(double)(float)d42);
            t43 = rd32(sp0 - 0x698u);
            wr32(sp0 - 0x6c8u, t43);
            wr32(sp0 - 0x6ccu, COW_IMG(0x103c218cu));
            wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
            g->esp = sp0 - 0x6c0u;
            cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, COW_IMG(0x103c218cu), t43, cow_f2bits((double)(float)d42));
            t44 = sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x620u;
            wr32(sp0 - 0x6d4u, t44);
            wr32(sp0 - 0x6d8u, arg1 + 0x54u);
            t45 = rd32(sp0 - 0x6acu);
            wr32(sp0 - 0x6dcu, t45);
            t46 = rd32(sp0 - 0x6b0u);
            wr32(sp0 - 0x6e0u, t46);
            wr32(sp0 - 0x6e4u, arg1);
            g->esp = sp0 - 0x6e4u;
            cow_thiscall(g, ebp, t46, 0);
            wr32(sp0 - 0x6e8u, sp0 - 0x628u);
            t47 = rd32(sp0 - 0x6acu);
            wr32(sp0 - 0x6ecu, t47);
            t48 = rd32(sp0 - 0x6b0u);
            wr32(sp0 - 0x6f0u, t48);
            wr32(sp0 - 0x6f4u, ebx);
            wr32(sp0 - 0x6f8u, arg1);
            cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t48, t47, sp0 - 0x628u);
            t49 = rd32(sp0 - 0x628u) + 1u;
            wr32(sp0 - 0x628u, t49);
            t50 = rd32(sp0 - 0x69cu) + 1u;
            t51 = rd32(sp0 - 0x69cu);
            wr32(sp0 - 0x69cu, t50);
            if ((int32_t)(t51 + 1u) < (int32_t)rd32(sp0 - 0x6a4u))
            {
                ecx = rd32(sp0 - 0x6a4u);
                loc_678 = rd32(sp0 - 0x678u);
                loc_628 = t49;
                loc_69c = t50;
                loc_6a4 = rd32(sp0 - 0x6a4u);
                loc_688_f = (double)rdf32(sp0 - 0x688u);
                goto L_102b9993;
            }
            ecx = rd32(sp0 - 0x6a4u);
            loc_678 = rd32(sp0 - 0x678u);
            loc_628 = t49;
        }
    COW_AT(102b9a1e)
        wr32(sp0 - 0x6c4u, ecx);
        t52 = rd32(sp0 - 0x68cu) + 1u;
        wr32(sp0 - 0x6a8u, t52);
        d53 = fr(g, (double)(int32_t)t52 * (double)rdf32(sp0 - 0x694u));
        wrf32(sp0 - 0x6c4u, (float)(double)(float)d53);
        t54 = rd32(sp0 - 0x698u);
        wr32(sp0 - 0x6c8u, t54);
        wr32(sp0 - 0x6ccu, COW_IMG(0x103c218cu));
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        g->esp = sp0 - 0x6c0u;
        cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, COW_IMG(0x103c218cu), t54, cow_f2bits((double)(float)d53));
        t55 = sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x620u;
        wr32(sp0 - 0x6d4u, t55);
        wr32(sp0 - 0x6d8u, arg1 + 0x54u);
        t56 = rd32(sp0 - 0x6acu);
        wr32(sp0 - 0x6dcu, t56);
        t57 = rd32(sp0 - 0x6b0u);
        wr32(sp0 - 0x6e0u, t57);
        wr32(sp0 - 0x6e4u, arg1);
        g->esp = sp0 - 0x6e4u;
        cow_thiscall(g, ebp, t56, 0);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        t58 = rd32(sp0 - 0x6acu);
        wr32(sp0 - 0x6ecu, t58);
        t59 = rd32(sp0 - 0x6b0u);
        wr32(sp0 - 0x6f0u, t59);
        wr32(sp0 - 0x6f4u, ebx);
        wr32(sp0 - 0x6f8u, arg1);
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t59, t58, sp0 - 0x628u);
        wr32(sp0 - 0x6fcu, arg2);
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x704u, arg1);
        t60 = rd32(sp0 - 0x628u) + 1u;
        wr32(sp0 - 0x628u, t60);
        g->esp = sp0 - 0x704u;
        cow_thiscall(g, rd32(arg1 + 0x50u), sp0 - 0x628u, 0);
        t61 = g->ecx;
        if (rd32(sp0 - 0x67cu) == 0u)
        {
            loc_678 = rd32(sp0 - 0x678u);
            loc_628 = rd32(sp0 - 0x628u);
        }
        else
        {
            ecx = t61;
            zf = rd32(sp0 - 0x67cu) == 0u;
            sf = (int32_t)rd32(sp0 - 0x67cu) < 0;
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9ab8)
            wr32(sp0 - 0x624u, 5u);
            if (zf || sf)
            {
                loc_628 = rd32(sp0 - 0x628u);
            }
            else
            {
    COW_AT(102b9ac9)
                wr32(sp0 - 0x6a4u, 1u);
                t62 = rd32(sp0 - 0x6a0u) + 1u;
                wr32(sp0 - 0x6a8u, t62);
                d63 = fr(g, (double)(int32_t)t62 * (double)rdf32(sp0 - 0x694u));
                wrf32(sp0 - 0x688u, (float)(double)(float)d63);
                loc_6a4 = 1u;
                loc_688_f = (double)(float)d63;
L_102b9ae6: ;
    COW_AT(102b9ae6)
                wr32(sp0 - 0x6c4u, ecx);
                wr32(sp0 - 0x6a8u, loc_6a4 - 1u);
                wr32(sp0 - 0x628u, 0u);
                d64 = fr(g, fr(g, (double)(int32_t)(loc_6a4 - 1u) * (double)rdf32(sp0 - 0x694u)) * (double)rdf32(COW_IMG(0x10329a08u)));
                wrf32(sp0 - 0x6c4u, (float)(double)(float)d64);
                t65 = COW_IMG(0x103c216cu) + rd32(sp0 - 0x690u) * 8u;
                wr32(sp0 - 0x6c8u, t65);
                t66 = rd32(sp0 - 0x698u);
                wr32(sp0 - 0x6ccu, t66);
                wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
                g->esp = sp0 - 0x6c0u;
                cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, t66, t65, cow_f2bits((double)(float)d64));
                d67 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c218cu)) - (double)rdf32(edi)) * (double)rdf32(sp0 - 0x688u)) + (double)rdf32(sp0 - 0x6b0u));
                wr32(sp0 - 0x6d4u, sp0 - 0x620u);
                wr32(sp0 - 0x6d8u, arg1 + 0x54u);
                wrf32(sp0 - 0x6b0u, (float)(double)(float)d67);
                d68 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c2190u)) - (double)rdf32(edi + 4u)) * (double)rdf32(sp0 - 0x688u)) + (double)rdf32(sp0 - 0x6acu));
                wrf32(sp0 - 0x6acu, (float)(double)(float)d68);
                wr32(sp0 - 0x6dcu, cow_f2bits((double)(float)d68));
                wr32(sp0 - 0x6e0u, cow_f2bits((double)(float)d67));
                wr32(sp0 - 0x6e4u, arg1);
                g->esp = sp0 - 0x6e4u;
                cow_thiscall(g, ebp, cow_f2bits((double)(float)d67), 0);
                wr32(sp0 - 0x6e8u, sp0 - 0x628u);
                t69 = rd32(sp0 - 0x6acu);
                wr32(sp0 - 0x6ecu, t69);
                t70 = rd32(sp0 - 0x6b0u);
                wr32(sp0 - 0x6f0u, t70);
                wr32(sp0 - 0x6f4u, ebx);
                wr32(sp0 - 0x6f8u, arg1);
                cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t70, t69, sp0 - 0x628u);
                d71 = fr(g, (double)(int32_t)rd32(sp0 - 0x6a4u) * (double)rdf32(sp0 - 0x694u));
                wr32(sp0 - 0x628u, 1u);
                d72 = fr(g, d71 * (double)rdf32(COW_IMG(0x10329a08u)));
                wrf32(sp0 - 0x6a8u, (float)(double)(float)d72);
                wr32(sp0 - 0x6fcu, cow_f2bits((double)(float)d72));
                t73 = COW_IMG(0x103c216cu) + rd32(sp0 - 0x690u) * 8u;
                wr32(sp0 - 0x700u, t73);
                t74 = rd32(sp0 - 0x698u);
                wr32(sp0 - 0x704u, t74);
                wr32(sp0 - 0x708u, sp0 - 0x6b0u);
                g->esp = sp0 - 0x6f8u;
                cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, t74, t73, cow_f2bits((double)(float)d72));
                d75 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c218cu)) - (double)rdf32(edi)) * (double)rdf32(sp0 - 0x670u)) + (double)rdf32(sp0 - 0x6b0u));
                wrf32(sp0 - 0x6b0u, (float)(double)(float)d75);
                d76 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c2190u)) - (double)rdf32(edi + 4u)) * (double)rdf32(sp0 - 0x670u)) + (double)rdf32(sp0 - 0x6acu));
                wr32(sp0 - 0x6c4u, sp0 - 0x614u);
                wr32(sp0 - 0x6c8u, arg1 + 0x54u);
                wrf32(sp0 - 0x6acu, (float)(double)(float)d76);
                wr32(sp0 - 0x6ccu, cow_f2bits((double)(float)d76));
                wr32(sp0 - 0x6d0u, cow_f2bits((double)(float)d75));
                wr32(sp0 - 0x6d4u, arg1);
                g->esp = sp0 - 0x6d4u;
                cow_thiscall(g, ebp, sp0 - 0x614u, 0);
                wr32(sp0 - 0x6d8u, sp0 - 0x628u);
                t77 = rd32(sp0 - 0x6acu);
                wr32(sp0 - 0x6dcu, t77);
                t78 = rd32(sp0 - 0x6b0u);
                wr32(sp0 - 0x6e0u, t78);
                wr32(sp0 - 0x6e4u, ebx);
                wr32(sp0 - 0x6e8u, arg1);
                cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t78, t77, sp0 - 0x628u);
                wr32(sp0 - 0x628u, 2u);
                t79 = rd32(sp0 - 0x6a8u);
                wr32(sp0 - 0x6ecu, t79);
                t80 = COW_IMG(0x103c216cu) + rd32(sp0 - 0x690u) * 8u;
                wr32(sp0 - 0x6f0u, t80);
                t81 = rd32(sp0 - 0x698u);
                wr32(sp0 - 0x6f4u, t81);
                wr32(sp0 - 0x6f8u, sp0 - 0x6b0u);
                g->esp = sp0 - 0x6e8u;
                cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, t81, t80, t79);
                d82 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c218cu)) - (double)rdf32(edi)) * (double)rdf32(sp0 - 0x688u)) + (double)rdf32(sp0 - 0x6b0u));
                wr32(sp0 - 0x6fcu, sp0 - 0x608u);
                wr32(sp0 - 0x700u, arg1 + 0x54u);
                wrf32(sp0 - 0x6b0u, (float)(double)(float)d82);
                d83 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c2190u)) - (double)rdf32(edi + 4u)) * (double)rdf32(sp0 - 0x688u)) + (double)rdf32(sp0 - 0x6acu));
                wrf32(sp0 - 0x6acu, (float)(double)(float)d83);
                wr32(sp0 - 0x704u, cow_f2bits((double)(float)d83));
                wr32(sp0 - 0x708u, cow_f2bits((double)(float)d82));
                wr32(sp0 - 0x70cu, arg1);
                g->esp = sp0 - 0x70cu;
                cow_thiscall(g, ebp, cow_f2bits((double)(float)d83), 0);
                wr32(sp0 - 0x6c4u, sp0 - 0x628u);
                t84 = rd32(sp0 - 0x6acu);
                wr32(sp0 - 0x6c8u, t84);
                t85 = rd32(sp0 - 0x6b0u);
                wr32(sp0 - 0x6ccu, t85);
                wr32(sp0 - 0x6d0u, ebx);
                wr32(sp0 - 0x6d4u, arg1);
                g->esp = sp0 - 0x6c0u;
                cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t85, t84, sp0 - 0x628u);
                wr32(sp0 - 0x628u, 3u);
                t86 = rd32(sp0 - 0x6a4u) + 1u;
                wr32(sp0 - 0x6a8u, t86);
                d87 = fr(g, fr(g, (double)(int32_t)t86 * (double)rdf32(sp0 - 0x694u)) * (double)rdf32(COW_IMG(0x10329a08u)));
                wrf32(sp0 - 0x6c4u, (float)(double)(float)d87);
                t88 = COW_IMG(0x103c216cu) + rd32(sp0 - 0x690u) * 8u;
                wr32(sp0 - 0x6c8u, t88);
                t89 = rd32(sp0 - 0x698u);
                wr32(sp0 - 0x6ccu, t89);
                wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
                cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, t89, t88, cow_f2bits((double)(float)d87));
                d90 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c218cu)) - (double)rdf32(edi)) * (double)rdf32(sp0 - 0x670u)) + (double)rdf32(sp0 - 0x6b0u));
                wr32(sp0 - 0x6d4u, sp0 - 0x5fcu);
                wr32(sp0 - 0x6d8u, arg1 + 0x54u);
                wrf32(sp0 - 0x6b0u, (float)(double)(float)d90);
                d91 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c2190u)) - (double)rdf32(edi + 4u)) * (double)rdf32(sp0 - 0x670u)) + (double)rdf32(sp0 - 0x6acu));
                wrf32(sp0 - 0x6acu, (float)(double)(float)d91);
                wr32(sp0 - 0x6dcu, cow_f2bits((double)(float)d91));
                wr32(sp0 - 0x6e0u, cow_f2bits((double)(float)d90));
                wr32(sp0 - 0x6e4u, arg1);
                g->esp = sp0 - 0x6e4u;
                cow_thiscall(g, ebp, cow_f2bits((double)(float)d90), 0);
                wr32(sp0 - 0x6e8u, sp0 - 0x628u);
                t92 = rd32(sp0 - 0x6acu);
                wr32(sp0 - 0x6ecu, t92);
                t93 = rd32(sp0 - 0x6b0u);
                wr32(sp0 - 0x6f0u, t93);
                wr32(sp0 - 0x6f4u, ebx);
                wr32(sp0 - 0x6f8u, arg1);
                cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t93, t92, sp0 - 0x628u);
                wr32(sp0 - 0x6fcu, arg2);
                wr32(sp0 - 0x700u, sp0 - 0x628u);
                wr32(sp0 - 0x704u, arg1);
                wr32(sp0 - 0x628u, 4u);
                g->esp = sp0 - 0x704u;
                cow_thiscall(g, rd32(arg1 + 0x50u), 4u, 0);
                t94 = rd32(sp0 - 0x6a8u);
                wr32(sp0 - 0x6a4u, t94);
                if ((int32_t)(t94 - 1u) < (int32_t)rd32(sp0 - 0x67cu))
                {
                    ecx = rd32(sp0 - 0x67cu);
                    loc_678 = rd32(sp0 - 0x678u);
                    loc_6a4 = t94;
                    loc_688_f = (double)rdf32(sp0 - 0x688u);
                    goto L_102b9ae6;
                }
                loc_678 = rd32(sp0 - 0x678u);
                loc_628 = 4u;
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
        t95 = cow_divs(g, eax, ecx);
        t96 = cow_mods(g, eax, ecx);
        t97 = rd32(sp0 - 0x6a0u) + 1u;
        wr32(sp0 - 0x6a8u, t97);
        wr32(sp0 - 0x6a4u, t95);
        if (rd32(sp0 - 0x6a0u) + 1u != rd32(sp0 - 0x680u))
        {
            ecx = t97;
            edx = rd32(sp0 - 0x680u);
            loc_6a4 = t95;
            loc_6a8 = t97;
    COW_AT(102b9ecc)
            d112 = (double)(float)(double)rdf32(loc_628 * 0xcu + sp0 - 0x62cu);
            wrf32(sp0 - 0x620u, (float)d112);
            d113 = (double)(float)(double)rdf32(loc_628 * 0xcu + sp0 - 0x628u);
            wrf32(sp0 - 0x61cu, (float)d113);
            d114 = (double)(float)(double)rdf32(loc_628 * 0xcu + sp0 - 0x624u);
            wrf32(sp0 - 0x618u, (float)d114);
            g->eax = loc_628 * 3u;
            g->ecx = ecx;
            g->esp = sp0 - 0x6c0u;
            t115 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
            t116 = g->ecx;
            if ((t115 & 0x20000u) != 0u)
            {
                eax = t115 & 0x20000u;
                ecx = t116;
                loc_678 = rd32(sp0 - 0x678u);
            }
            else
            {
                ecx = t116;
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9f10)
                d117 = (double)(float)(double)rdf32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x3e0u);
                wrf32(sp0 - 0x3d4u, (float)d117);
                d118 = (double)(float)(double)rdf32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x3dcu);
                wrf32(sp0 - 0x3d0u, (float)d118);
                d119 = (double)(float)(double)rdf32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x3d8u);
                wrf32(sp0 - 0x3ccu, (float)d119);
                eax = rd32(sp0 - 0x628u) * 3u;
            }
    COW_AT(102b9f44)
            g->eax = eax;
            g->esp = sp0 - 0x6c0u;
            t120 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
            if ((t120 & 4u) == 0u)
            {
                ecx = rd32(sp0 - 0x628u);
                loc_678 = rd32(sp0 - 0x678u);
            }
            else
            {
                ecx = rd32(sp0 - 0x628u);
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9f59)
                d121 = (double)(float)(double)rdf32(ecx * 8u + sp0 - 0x190u);
                wrf32(sp0 - 0x188u, (float)d121);
                d122 = (double)(float)(double)rdf32(ecx * 8u + sp0 - 0x18cu);
                wrf32(sp0 - 0x184u, (float)d122);
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
            t123 = eax * 3u + 3u;
            wr32(sp0 - 0x69cu, t123);
            t124 = rd32(ecx * 0xcu + sp0 - 0x638u);
            wr32(sp0 + t123 * 4u - 0x620u, t124);
            t125 = rd32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x634u);
            wr32(sp0 + t123 * 4u - 0x61cu, t125);
            t126 = rd32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x630u);
            t127 = rd32(sp0 - 0x628u);
            wr32(sp0 + t123 * 4u - 0x618u, t126);
            g->eax = t123;
            g->ecx = t127 * 3u;
            g->esp = sp0 - 0x6c0u;
            t128 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
            t129 = g->ecx;
            if ((t128 & 0x20000u) != 0u)
            {
                eax = t128 & 0x20000u;
                ecx = t129;
                edx = 0u;
                loc_678 = rd32(sp0 - 0x678u);
            }
            else
            {
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9fea)
                t130 = rd32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x3ecu);
                t131 = rd32(sp0 - 0x69cu);
                wr32(sp0 + t131 * 4u - 0x3d4u, t130);
                t132 = rd32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x3e8u);
                wr32(sp0 + t131 * 4u - 0x3d0u, t132);
                t133 = rd32(sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x3e4u);
                t134 = rd32(sp0 - 0x628u);
                wr32(sp0 + t131 * 4u - 0x3ccu, t133);
                eax = t134 * 3u;
                ecx = t131;
                edx = t133;
            }
    COW_AT(102ba036)
            g->eax = eax;
            g->esp = sp0 - 0x6c0u;
            t135 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
            if ((t135 & 4u) == 0u)
            {
                loc_678 = rd32(sp0 - 0x678u);
            }
            else
            {
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102ba044)
                t136 = rd32(sp0 + rd32(sp0 - 0x628u) * 8u - 0x198u);
                t137 = rd32(sp0 - 0x6a0u);
                wr32(sp0 + t137 * 8u - 0x180u, t136);
                t138 = rd32(sp0 + rd32(sp0 - 0x628u) * 8u - 0x194u);
                wr32(sp0 + t137 * 8u - 0x17cu, t138);
            }
        }
        else
        {
            eax = t95;
            ecx = t97;
            edx = rd32(sp0 - 0x680u);
            loc_6a4 = t95;
            loc_6a8 = t97;
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
            t98 = eax * 3u + 3u;
            wr32(sp0 - 0x69cu, t98);
            d99 = (double)rdf32(sp0 - 0x614u);
            wrf32(sp0 + t98 * 4u - 0x620u, (float)d99);
            d100 = (double)rdf32(sp0 - 0x610u);
            wrf32(sp0 + t98 * 4u - 0x61cu, (float)d100);
            d101 = (double)rdf32(sp0 - 0x60cu);
            wrf32(sp0 + t98 * 4u - 0x618u, (float)d101);
            g->eax = t98;
            g->ecx = ecx;
            g->esp = sp0 - 0x6c0u;
            t102 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
            t103 = g->ecx;
            if ((t102 & 0x20000u) != 0u)
            {
                eax = t102 & 0x20000u;
                ecx = t103;
                loc_678 = rd32(sp0 - 0x678u);
            }
            else
            {
                ecx = t103;
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9e63)
                t104 = rd32(sp0 - 0x69cu);
                d105 = (double)rdf32(sp0 - 0x3c8u);
                wrf32(sp0 + t104 * 4u - 0x3d4u, (float)d105);
                d106 = (double)rdf32(sp0 - 0x3c4u);
                wrf32(sp0 + t104 * 4u - 0x3d0u, (float)d106);
                d107 = (double)rdf32(sp0 - 0x3c0u);
                wrf32(sp0 + t104 * 4u - 0x3ccu, (float)d107);
                eax = t104;
            }
    COW_AT(102b9e91)
            g->eax = eax;
            g->esp = sp0 - 0x6c0u;
            t108 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
            if ((t108 & 4u) == 0u)
            {
                loc_678 = rd32(sp0 - 0x678u);
            }
            else
            {
                loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102b9ea3)
                t109 = rd32(sp0 - 0x6a0u);
                d110 = (double)rdf32(sp0 - 0x180u);
                wrf32(sp0 + t109 * 8u - 0x180u, (float)d110);
                d111 = (double)rdf32(sp0 - 0x17cu);
                wrf32(sp0 + t109 * 8u - 0x17cu, (float)d111);
            }
        }
    COW_AT(102ba076)
        t139 = rd32(sp0 - 0x670u);
        wr32(sp0 - 0x6c4u, t139);
        wr32(sp0 - 0x6c8u, COW_IMG(0x103c218cu));
        t140 = COW_IMG(0x103c216cu) + rd32(sp0 - 0x690u) * 8u;
        wr32(sp0 - 0x6ccu, t140);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x628u, 1u);
        g->esp = sp0 - 0x6c0u;
        cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, t140, COW_IMG(0x103c218cu), t139);
        wr32(sp0 - 0x6d4u, sp0 - 0x614u);
        wr32(sp0 - 0x6d8u, arg1 + 0x54u);
        t141 = rd32(sp0 - 0x6acu);
        wr32(sp0 - 0x6dcu, t141);
        t142 = rd32(sp0 - 0x6b0u);
        wr32(sp0 - 0x6e0u, t142);
        wr32(sp0 - 0x6e4u, arg1);
        g->esp = sp0 - 0x6e4u;
        cow_thiscall(g, ebp, sp0 - 0x614u, 0);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        t143 = rd32(sp0 - 0x6acu);
        wr32(sp0 - 0x6ecu, t143);
        t144 = rd32(sp0 - 0x6b0u);
        wr32(sp0 - 0x6f0u, t144);
        wr32(sp0 - 0x6f4u, ebx);
        wr32(sp0 - 0x6f8u, arg1);
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t144, t143, sp0 - 0x628u);
        wr32(sp0 - 0x628u, 2u);
        wr32(sp0 - 0x69cu, 1u);
        if ((int32_t)rd32(sp0 - 0x6a4u) <= 1)
        {
            loc_678 = rd32(sp0 - 0x678u);
            loc_628 = 2u;
            loc_69c = 1u;
        }
        else
        {
            ecx = rd32(sp0 - 0x6a4u);
            loc_678 = rd32(sp0 - 0x678u);
    COW_AT(102ba104)
            d145 = (double)(float)(double)(int32_t)rd32(sp0 - 0x6a4u);
            wrf32(sp0 - 0x688u, (float)d145);
            loc_628 = 2u;
            loc_69c = 1u;
            loc_688_f = d145;
L_102ba10c: ;
    COW_AT(102ba10c)
            wr32(sp0 - 0x6c4u, ecx);
            d146 = fr(g, fr(g, fr(g, (double)(int32_t)loc_69c / loc_688_f) + (double)rdf32(sp0 - 0x668u)) * (double)rdf32(sp0 - 0x694u));
            wrf32(sp0 - 0x6c4u, (float)(double)(float)d146);
            wr32(sp0 - 0x6c8u, COW_IMG(0x103c218cu));
            t147 = COW_IMG(0x103c216cu) + rd32(sp0 - 0x690u) * 8u;
            wr32(sp0 - 0x6ccu, t147);
            wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
            g->esp = sp0 - 0x6c0u;
            cow_cdecl(g, COW_IMG(0x102745d0u), 4, sp0 - 0x6b0u, t147, COW_IMG(0x103c218cu), cow_f2bits((double)(float)d146));
            t148 = sp0 + rd32(sp0 - 0x628u) * 0xcu - 0x620u;
            wr32(sp0 - 0x6d4u, t148);
            wr32(sp0 - 0x6d8u, arg1 + 0x54u);
            t149 = rd32(sp0 - 0x6acu);
            wr32(sp0 - 0x6dcu, t149);
            t150 = rd32(sp0 - 0x6b0u);
            wr32(sp0 - 0x6e0u, t150);
            wr32(sp0 - 0x6e4u, arg1);
            g->esp = sp0 - 0x6e4u;
            cow_thiscall(g, ebp, t148, 0);
            wr32(sp0 - 0x6e8u, sp0 - 0x628u);
            t151 = rd32(sp0 - 0x6acu);
            wr32(sp0 - 0x6ecu, t151);
            t152 = rd32(sp0 - 0x6b0u);
            wr32(sp0 - 0x6f0u, t152);
            wr32(sp0 - 0x6f4u, ebx);
            wr32(sp0 - 0x6f8u, arg1);
            cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, ebx, t152, t151, sp0 - 0x628u);
            t153 = rd32(sp0 - 0x628u) + 1u;
            wr32(sp0 - 0x628u, t153);
            t154 = rd32(sp0 - 0x69cu) + 1u;
            t155 = rd32(sp0 - 0x69cu);
            wr32(sp0 - 0x69cu, t154);
            if ((int32_t)(t155 + 1u) < (int32_t)rd32(sp0 - 0x6a4u))
            {
                ecx = rd32(sp0 - 0x6a4u);
                loc_678 = rd32(sp0 - 0x678u);
                loc_628 = t153;
                loc_69c = t154;
                loc_688_f = (double)rdf32(sp0 - 0x688u);
                goto L_102ba10c;
            }
            loc_678 = rd32(sp0 - 0x678u);
            loc_628 = t153;
            loc_69c = t154;
        }
    COW_AT(102ba19e)
        wr32(sp0 - 0x6c4u, arg2);
        wr32(sp0 - 0x6c8u, sp0 - 0x628u);
        wr32(sp0 - 0x6ccu, arg1);
        wr32(sp0 - 0x628u, loc_628 + 1u);
        g->esp = sp0 - 0x6ccu;
        cow_thiscall(g, rd32(arg1 + 0x50u), arg2, 0);
        t156 = rd32(sp0 - 0x67cu) - 2u;
        wr32(sp0 - 0x67cu, t156);
        t157 = rd32(sp0 - 0x6a8u);
        wr32(sp0 - 0x6a0u, t157);
        t158 = rd32(sp0 - 0x68cu) - 1u;
        wr32(sp0 - 0x68cu, t158);
        if ((int32_t)rd32(sp0 - 0x6a8u) < (int32_t)rd32(sp0 - 0x680u))
        {
            loc_678 = rd32(sp0 - 0x678u);
            loc_67c = t156;
            loc_6a0 = t157;
            loc_68c = t158;
            goto L_102b97b2;
        }
        loc_678 = rd32(sp0 - 0x678u);
        loc_67c = t156;
        loc_6a0 = t157;
        loc_68c = t158;
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
    loc_624 = rd32(sp0 - 0x624u);
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
        uint32_t loc_624;
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
        loc_624 = rd32(sp0 - 0x624u);
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
        uint32_t loc_624;
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
        loc_624 = rd32(sp0 - 0x624u);
        g->esp = sp0 - 0x6c0u;
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
    case 0x102b982bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_624;
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
        loc_624 = rd32(sp0 - 0x624u);
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
        uint32_t loc_624;
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
        loc_624 = rd32(sp0 - 0x624u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x628u, 0u);
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
        uint32_t loc_624;
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
        loc_624 = rd32(sp0 - 0x624u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x628u, 0u);
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
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x628u, 2u);
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
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x628u, 2u);
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
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x628u, 2u);
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
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x628u, 2u);
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
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x69cu, 1u);
        wr32(sp0 - 0x628u, 2u);
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
        uint32_t loc_624;
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
        loc_624 = rd32(sp0 - 0x624u);
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
        uint32_t loc_624;
        uint32_t loc_628;
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
        loc_628 = rd32(sp0 - 0x628u);
        loc_624 = rd32(sp0 - 0x624u);
        g->esp = sp0 - 0x6c0u;
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
        uint32_t loc_624;
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
        loc_624 = rd32(sp0 - 0x624u);
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
        uint32_t loc_628;
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
        loc_628 = rd32(sp0 - 0x628u);
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
        uint32_t loc_628;
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
        loc_628 = rd32(sp0 - 0x628u);
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
        uint32_t loc_628;
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
        loc_628 = rd32(sp0 - 0x628u);
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
        uint32_t loc_628;
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
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
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
        uint32_t loc_628;
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
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x6c0u;
        g->esi = arg1;
        wr32(sp0 - 0x700u, sp0 - 0x628u);
        wr32(sp0 - 0x6e8u, sp0 - 0x628u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x624u, 6u);
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
    case 0x102ba104u:
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
        wr32(sp0 - 0x6d4u, sp0 - 0x614u);
        wr32(sp0 - 0x6d0u, sp0 - 0x6b0u);
        wr32(sp0 - 0x69cu, 1u);
        wr32(sp0 - 0x628u, 2u);
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
        uint32_t loc_624;
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
        loc_624 = rd32(sp0 - 0x624u);
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
        uint32_t loc_624;
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
        loc_624 = rd32(sp0 - 0x624u);
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
        uint32_t loc_624;
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
        loc_624 = rd32(sp0 - 0x624u);
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
