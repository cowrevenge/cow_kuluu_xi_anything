/* f_0x101177d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101177d0(Guest* g)
{
    double d118;
    double d119;
    double d127;
    double d64;
    double d75;
    double d80;
    double d82;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
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
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
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
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101177e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_101177e9;
    case 0x101177eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_101177ee;
    case 0x101177fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_101177fa;
    case 0x101177ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_101177ff;
    case 0x10117809u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10117809;
    case 0x10117831u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_10117831;
    case 0x1011783du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_1011783d;
    case 0x10117847u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10117847;
    case 0x1011784fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1011784f;
    case 0x1011786bu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1011786b;
    case 0x1011786eu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1011786e;
    case 0x10117875u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117875;
    case 0x10117880u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117880;
    case 0x101178a2u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101178a2;
    case 0x101178a9u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101178a9;
    case 0x101178b7u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101178b7;
    case 0x101178beu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101178be;
    case 0x101178c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101178c8;
    case 0x101178cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101178cf;
    case 0x101178f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101178f4;
    case 0x10117927u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117927;
    case 0x10117933u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117933;
    case 0x1011793cu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1011793c;
    case 0x1011794au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1011794a;
    case 0x10117955u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117955;
    case 0x1011795eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1011795e;
    case 0x1011796du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1011796d;
    case 0x101179a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101179a7;
    case 0x101179acu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101179ac;
    case 0x101179b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101179b9;
    case 0x101179ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_101179dd;
    case 0x10117a0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117a0d;
    case 0x10117a14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117a14;
    case 0x10117a1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117a1e;
    case 0x10117a25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117a25;
    case 0x10117a59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117a59;
    case 0x10117a5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117a5e;
    case 0x10117a75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_10117a75;
    case 0x10117a87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_10117a87;
    case 0x10117a8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_10117a8b;
    case 0x10117a8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_10117a8f;
    case 0x10117aaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_10117aaa;
    case 0x10117ab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_10117ab3;
    case 0x10117abfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_10117abf;
    case 0x10117ac8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117ac8;
    case 0x10117acfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117acf;
    case 0x10117ad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117ad5;
    case 0x10117af1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117af1;
    case 0x10117af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117af7;
    case 0x10117b02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117b02;
    case 0x10117b50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10117b50;
    case 0x10117b99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117b99;
    case 0x10117ba0u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117ba0;
    case 0x10117bb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117bb0;
    case 0x10117bb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117bb5;
    case 0x10117bf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117bf2;
    case 0x10117c12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117c12;
    case 0x10117c1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10117c1e;
    case 0x10117c54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10117c54;
    case 0x10117c7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117c7c;
    case 0x10117c82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117c82;
    case 0x10117cbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117cbf;
    case 0x10117ceeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117cee;
    case 0x10117cf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117cf5;
    case 0x10117cfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117cfc;
    case 0x10117d02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117d02;
    case 0x10117d07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117d07;
    case 0x10117d11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117d11;
    case 0x10117d19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117d19;
    case 0x10117d25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117d25;
    case 0x10117d2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117d2f;
    case 0x10117d37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117d37;
    case 0x10117d42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117d42;
    case 0x10117d4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117d4e;
    case 0x10117d67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117d67;
    case 0x10117d6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117d6c;
    case 0x10117d6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117d6f;
    case 0x10117d94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117d94;
    case 0x10117db0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117db0;
    case 0x10117e06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117e06;
    case 0x10117e10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117e10;
    case 0x10117e14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117e14;
    case 0x10117e5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10117e5f;
    case 0x10117e73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_10117e73;
    case 0x10117e90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_1c = rd32(sp0 - 0x1cu); goto E_10117e90;
    case 0x10117e97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117e97;
    case 0x10117ea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117ea1;
    case 0x10117ea8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117ea8;
    case 0x10117eafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117eaf;
    case 0x10117eb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117eb9;
    case 0x10117ebeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117ebe;
    case 0x10117ec8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117ec8;
    case 0x10117ed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117ed0;
    case 0x10117ed7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10117ed7;
    default: break;
    }
#endif

    COW_AT(101177d0)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_thiscall(g, COW_IMG(0x10117520u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int16_t)rd16(self + 0x56u) <= 0)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = (t1 & 0xffff0000u) | rd16(self + 0x56u);
        ecx = t2;
        edx = t3;
    COW_AT(101177e9)
        wr16(self + 0x56u, (uint16_t)(eax - 1u));
    }
    COW_AT(101177ee)
    if (rd8(rd32(COW_IMG(0x105781ccu)) + 0x48u) == 0u)
    {
        eax = rd32(COW_IMG(0x105781ccu));
        goto L_10117809;
    }
    eax = rd32(COW_IMG(0x105781ccu));
    COW_AT(101177fa)
    if (rd32(eax + 8u) == self) goto L_10117809;
    COW_AT(101177ff)
    if ((rd8(self + 0x34u) & 0x40u) == 0u)
    {
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
        goto L_10117ed7;
    }
L_10117809: ;
    COW_AT(10117809)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t4 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t5 = g->edx;
    wr32(sp0 - 0x10u, t4);
    wr32(sp0 - 0xcu, 0u);
    t6 = rd8(self + 0x9bu);
    wr8(sp0 - 0x22u, 0u);
    wr8(sp0 - 0x21u, 0u);
    wr32(sp0 - 0x18u, 0u);
    if ((uint8_t)t6 == 0u)
    {
        eax = (t4 & 0xffffff00u) | t6;
        edx = t5;
        loc_10 = t4;
    }
    else
    {
        eax = (t4 & 0xffffff00u) | t6;
        edx = t5;
        loc_10 = t4;
    COW_AT(10117831)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t7 = cow_thiscall(g, COW_IMG(0x1011aa40u), self, 0);
        t8 = g->edx;
        wr8(sp0 - 0x22u, 1u);
        eax = t7;
        edx = t8;
        loc_10 = rd32(sp0 - 0x10u);
    }
    COW_AT(1011783d)
    if (loc_10 == 0u)
    {
        ebx = in_ebx;
        edi = 0u;
        loc_c = 0u;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_10117cee;
    }
    COW_AT(10117847)
    ebx = rd32(sp0 - 0x14u);
    edi = rd32(sp0 - 4u);
    loc_c = 0u;
    loc_18 = 0u;
    loc_20 = rd32(sp0 - 0x20u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_14 = rd32(sp0 - 0x14u);
L_1011784f: ;
    COW_AT(1011784f)
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x34u;
    t9 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x10u);
    t10 = g->edx;
    if ((uint32_t)(int16_t)rd16(t9) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(t9);
        edx = t10;
        esi = t9;
        goto L_10117ac8;
    }
    eax = (uint32_t)(int16_t)rd16(t9);
    edx = t10;
    esi = t9;
    COW_AT(1011786b)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101178a2;
    }
    eax = eax - 1u;
    COW_AT(1011786e)
    if (eax != 1u)
    {
        loc_18 = rd32(sp0 - 0x18u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_10117a87;
    }
    eax = eax - 1u;
    COW_AT(10117875)
    if (rd8(self + 0x78u) == 0u)
    {
        loc_18 = rd32(sp0 - 0x18u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_10117a87;
    }
    COW_AT(10117880)
    wr32(sp0 - 0xcu, esi);
    wr32(sp0 - 0x20u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 0x3f800000u);
    wr32(sp0 - 0x18u, 0u);
    ebx = 0x80808080u;
    loc_c = esi;
    loc_20 = 0x3f800000u;
    loc_1c = 0x3f800000u;
    loc_18 = 0u;
    loc_14 = rd32(sp0 - 0x14u);
L_10117ab3: ;
    COW_AT(10117ab3)
    if (rd32(sp0 - 0x10u) != 0u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        goto L_1011784f;
    }
    eax = rd32(sp0 - 0x10u);
    COW_AT(10117abf)
    edi = loc_c;
L_10117cee: ;
    COW_AT(10117cee)
    if (rd32(self + 0xcu) != 0u)
    {
        ecx = rd32(self + 0xcu);
    COW_AT(10117cf5)
        if (rd8(self + 0x6au) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x6au);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x6au);
    COW_AT(10117cfc)
            if (rd32(self + 0x10u) != 0xeu)
            {
    COW_AT(10117d02)
                g->eax = eax;
                g->edx = rd32(ecx);
                t107 = rd32(ecx);
                g->esp = sp0 - 0x34u;
                t108 = cow_thiscall(g, rd32(t107 + 0x10u), ecx, 0);
                t109 = g->edx;
                eax = t108;
                edx = t109;
                loc_c = rd32(sp0 - 0xcu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_1c = rd32(sp0 - 0x1cu);
            }
        }
    }
    COW_AT(10117d07)
    if (rd8(self + 0x9bu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x9bu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x9bu);
    COW_AT(10117d11)
        if (rd8(sp0 - 0x22u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x22u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x22u);
    COW_AT(10117d19)
            wr8(sp0 - 0x22u, 0u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t110 = cow_stdcall(g, COW_IMG(0x1011aac0u), 0);
            t111 = g->edx;
            eax = t110;
            edx = t111;
            loc_c = rd32(sp0 - 0xcu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_1c = rd32(sp0 - 0x1cu);
        }
    }
    COW_AT(10117d25)
    if (rd32(self + 0x10u) == 0xeu)
    {
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        goto L_10117ed7;
    }
    COW_AT(10117d2f)
    if (edi != 0u)
    {
    COW_AT(10117d37)
        if (rd8(self + 0x62u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x62u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x62u);
    COW_AT(10117d42)
            if (rd8(sp0 - 0x21u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x21u);
            }
            else
            {
    COW_AT(10117d4e)
                wr32(sp0 - 0x38u, self);
                t112 = rd32(self + 0xccu);
                wr32(sp0 - 0x14u, t112);
                g->eax = t112;
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t113 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, self);
                t114 = g->edx;
                if ((uint8_t)t113 == 0u)
                {
                    edx = t114;
    COW_AT(10117d6c)
                    esi = rd32(edi + 0x10u);
                }
                else
                {
                    edx = t114;
    COW_AT(10117d67)
                    esi = rd32(edi + 0xcu);
                }
    COW_AT(10117d6f)
                if (rd8(self + 0x99u) == 0u)
                {
                    eax = (rd32(sp0 - 0xcu) & 0xffffff00u) | rd8(self + 0x99u);
                    ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(edi + 0x20u) + rd16(edi + 0x28u));
                    edi = (edi & 0xffff0000u) | (uint16_t)(rd16(rd32(sp0 - 0xcu) + 0x22u) + (uint16_t)(rd16(self + 0xb8u) + rd16(rd32(sp0 - 0xcu) + 0x2au)));
                    goto L_10117e06;
                }
                eax = (rd32(sp0 - 0xcu) & 0xffffff00u) | rd8(self + 0x99u);
                ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(edi + 0x20u) + rd16(edi + 0x28u));
                edi = (edi & 0xffff0000u) | (uint16_t)(rd16(rd32(sp0 - 0xcu) + 0x22u) + (uint16_t)(rd16(self + 0xb8u) + rd16(rd32(sp0 - 0xcu) + 0x2au)));
    COW_AT(10117d94)
                wr32(sp0 - 0x38u, sp0 - 0x1cu);
                wr32(sp0 - 0x3cu, sp0 - 0x20u);
                g->eax = eax;
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x34u;
                t115 = cow_thiscall(g, COW_IMG(0x10160210u), COW_IMG(0x10621838u), 2, sp0 - 0x20u, sp0 - 0x1cu);
                t116 = g->edx;
                if (esi == 0u)
                {
                    eax = t115;
                    edx = t116;
                    goto L_10117e97;
                }
    COW_AT(10117db0)
                t117 = (uint32_t)(int16_t)rd16(esi + 0x26u) - (uint32_t)(int16_t)rd16(esi + 0x24u);
                wr32(sp0 - 4u, t117);
                d118 = fr(g, (double)(int32_t)t117 * fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(COW_IMG(0x1032961cu))));
                wr32(sp0 - 4u, (uint32_t)(int16_t)edi);
                d119 = fr(g, fr(g, d118 * (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)(uint32_t)(int16_t)edi);
                fpush(g, d119);
                g->esp = sp0 - 0x34u;
                t120 = cow_call_regs(g, COW_IMG(0x10311c6cu), t117, g->ecx, g->edx, 1, 0);
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 1u);
                t121 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x44u, t121);
                t122 = rd32(sp0 - 0x1cu);
                wr32(sp0 - 0x48u, t122);
                t123 = rd32(sp0 - 0x20u);
                wr32(sp0 - 0x4cu, t123);
                wr32(sp0 - 0x50u, (uint32_t)(int16_t)t120);
                wr32(sp0 - 0x54u, (uint32_t)(int16_t)ebx);
                eax = (uint32_t)(int16_t)ebx;
                edx = (uint32_t)(int16_t)t120;
                loc_40 = 1u;
                loc_44 = t121;
                loc_48 = t122;
                loc_4c = t123;
                loc_50 = (uint32_t)(int16_t)t120;
                loc_54 = (uint32_t)(int16_t)ebx;
L_10117e90: ;
    COW_AT(10117e90)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t129 = cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, loc_54, loc_50, loc_4c, loc_48, loc_44, loc_40, 0u, 0u);
                t130 = g->edx;
                eax = t129;
                edx = t130;
            }
        }
    }
L_10117e97: ;
    COW_AT(10117e97)
    if (rd32(self + 0x88u) != 0u)
    {
        ecx = rd32(self + 0x88u);
    COW_AT(10117ea1)
        if (rd8(self + 0x69u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x69u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x69u);
    COW_AT(10117ea8)
            if (rd8(self + 0x74u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x74u);
            }
            else
            {
    COW_AT(10117eaf)
                if ((int32_t)rd32(ecx + 0x10u) <= (int32_t)rd32(ecx + 0xcu))
                {
                    eax = rd32(ecx + 0x10u);
                    edx = rd32(ecx + 0xcu);
                }
                else
                {
                    eax = rd32(ecx + 0x10u);
                    edx = rd32(ecx + 0xcu);
    COW_AT(10117eb9)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x34u;
                    t131 = cow_thiscall(g, COW_IMG(0x10234680u), ecx, 0);
                    t132 = g->edx;
                    eax = t131;
                    edx = t132;
                }
            }
        }
    }
L_10117ebe: ;
    COW_AT(10117ebe)
    if (rd8(self + 0x9bu) == 0u)
    {
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x9bu);
    COW_AT(10117ec8)
        if (rd8(sp0 - 0x22u) == 0u)
        {
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x22u);
    COW_AT(10117ed0)
            g->esp = sp0 - 0x34u;
            cow_stdcall(g, COW_IMG(0x1011aac0u), 0);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
        }
    }
L_10117ed7: ;
    COW_AT(10117ed7)
    g->ebx = loc_28;
    g->esi = loc_30;
    g->edi = loc_34;
    g->ebp = loc_2c;
    return;
L_101178a2: ;
    COW_AT(101178a2)
    if (rd8(esi + 0x3cu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x3cu);
        goto L_101178b7;
    }
    COW_AT(101178a9)
    wr32(sp0 - 0x18u, 0u);
    ebx = 0x80808080u;
    loc_c = rd32(sp0 - 0xcu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_18 = 0u;
    loc_14 = rd32(sp0 - 0x14u);
    goto L_10117ab3;
L_101178b7: ;
    COW_AT(101178b7)
    if (rd8(esi + 0x48u) == 0u) goto L_10117927;
    eax = (eax & 0xffffff00u) | rd8(esi + 0x48u);
    COW_AT(101178be)
    if (rd16(esi + 0x3au) != rd16(self + 0x4cu))
    {
        ecx = rd16(esi + 0x3au);
        goto L_101178f4;
    }
    ecx = rd16(esi + 0x3au);
    COW_AT(101178c8)
    if (rd8(self + 0x63u) == 0u) goto L_101178f4;
    eax = (eax & 0xffffff00u) | rd8(self + 0x63u);
    COW_AT(101178cf)
    t11 = rd16(esi + 0x2au);
    t12 = rd32(esi + 4u);
    t13 = rd16(esi + 0x2cu);
    t14 = rd16(self + 0xb8u);
    wr32(self + 8u, esi);
    t15 = ((eax & 0xffff0000u) | t11) + 1u;
    wr32(sp0 - 0x14u, t15);
    edx = t12;
    ebx = 0x80805020u;
    edi = ((edi & 0xffff0000u) | (uint16_t)(t13 + t14)) + 1u;
    loc_14 = t15;
L_10117a75: ;
    COW_AT(10117a75)
    wr32(sp0 - 0x18u, edx);
    t47 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x20u, t47);
    t48 = rd32(esi + 0x20u);
    wr32(sp0 - 0x1cu, t48);
    loc_18 = edx;
    edx = t48;
    loc_20 = t47;
    loc_1c = t48;
L_10117a87: ;
    COW_AT(10117a87)
    eax = loc_18;
L_10117a8b: ;
    COW_AT(10117a8b)
    if (eax == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        goto L_10117ab3;
    }
    COW_AT(10117a8f)
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, ebx);
    wr32(sp0 - 0x48u, loc_1c);
    wr32(sp0 - 0x4cu, loc_20);
    wr32(sp0 - 0x50u, (uint32_t)(int16_t)edi);
    wr32(sp0 - 0x54u, (uint32_t)(int16_t)loc_14);
    eax = (uint32_t)(int16_t)loc_14;
    edx = (uint32_t)(int16_t)edi;
    loc_38 = 0u;
    loc_44 = ebx;
    loc_48 = loc_1c;
    loc_4c = loc_20;
    loc_50 = (uint32_t)(int16_t)edi;
    loc_54 = (uint32_t)(int16_t)loc_14;
L_10117aaa: ;
    COW_AT(10117aaa)
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x1011fc80u), loc_18, 8, loc_54, loc_50, loc_4c, loc_48, loc_44, 0u, 0u, loc_38);
    t93 = g->edx;
    edx = t93;
    loc_c = rd32(sp0 - 0xcu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_18 = rd32(sp0 - 0x18u);
    loc_14 = rd32(sp0 - 0x14u);
    goto L_10117ab3;
L_101178f4: ;
    COW_AT(101178f4)
    t16 = rd32(esi + 4u);
    wr32(sp0 - 0x18u, t16);
    t17 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x20u, t17);
    t18 = rd32(esi + 0x20u);
    t19 = rd16(esi + 0x2cu);
    t20 = rd16(self + 0xb8u);
    wr16(sp0 - 0x14u, rd16(esi + 0x2au));
    wr32(sp0 - 0x1cu, t18);
    edx = t17;
    ebx = 0x80808080u;
    edi = (edi & 0xffff0000u) | (uint16_t)(t19 + t20);
    loc_18 = t16;
    loc_20 = t17;
    loc_1c = t18;
    loc_14 = rd32(sp0 - 0x14u);
    goto L_10117a87;
L_10117927: ;
    COW_AT(10117927)
    if (rd32(esi + 0x10u) == 5u)
    {
        eax = rd32(esi + 0x10u);
        goto L_10117a14;
    }
    eax = rd32(esi + 0x10u);
    COW_AT(10117933)
    if (eax == 0x10u) goto L_10117a0d;
    COW_AT(1011793c)
    if (rd16(esi + 0x3au) != rd16(self + 0x4cu)) goto L_101179dd;
    COW_AT(1011794a)
    if (rd8(self + 0x63u) == 0u) goto L_101179dd;
    eax = (eax & 0xffffff00u) | rd8(self + 0x63u);
    COW_AT(10117955)
    if ((rd32(self + 0x34u) & 0x80000u) == 0u) goto L_1011796d;
    COW_AT(1011795e)
    wr32(sp0 - 0x38u, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t21 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, self);
    t22 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        edx = t22;
        goto L_101179dd;
    }
    eax = t21;
L_1011796d: ;
    COW_AT(1011796d)
    t23 = rd16(esi + 0x2au);
    t24 = rd32(esi + 4u);
    t25 = rd16(esi + 0x2cu);
    t26 = rd16(self + 0xb8u);
    wr32(self + 8u, esi);
    wr32(sp0 - 0x18u, t24);
    t27 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x20u, t27);
    t28 = rd32(esi + 0x20u);
    wr32(sp0 - 0x1cu, t28);
    t29 = ((eax & 0xffff0000u) | t23) - 1u;
    wr32(sp0 - 0x14u, t29);
    if (rd32(esi + 0x18u) != 0xfu)
    {
        eax = rd32(esi + 0x18u);
        edx = t28;
        edi = ((edi & 0xffff0000u) | (uint16_t)(t25 + t26)) - 1u;
        loc_18 = t24;
        loc_20 = t27;
        loc_1c = t28;
        loc_14 = t29;
    }
    else
    {
        eax = rd32(esi + 0x18u);
        edx = t28;
        edi = ((edi & 0xffff0000u) | (uint16_t)(t25 + t26)) - 1u;
        loc_18 = t24;
        loc_20 = t27;
        loc_1c = t28;
        loc_14 = t29;
    COW_AT(101179a7)
        wr8(sp0 - 0x21u, 1u);
    }
    COW_AT(101179ac)
    if ((int16_t)rd16(self + 0x5eu) <= 0)
    {
        ebx = 0x80805020u;
        goto L_10117a87;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x5eu);
    COW_AT(101179b9)
    wr32(sp0 - 0x38u, eax);
    wr32(sp0 - 0x3cu, 0x14u);
    wr32(sp0 - 0x40u, edi + 2u);
    wr32(sp0 - 0x14u, loc_14 + 2u);
    wr32(sp0 - 0x44u, loc_14 + 2u);
    wr32(sp0 - 0x48u, loc_18);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x10119f80u), self, 5, loc_18, loc_14 + 2u, edi + 2u, 0x14u, eax);
    t30 = g->edx;
    edx = t30;
    ebx = 0x80805020u;
    edi = edi + 2u;
    loc_c = rd32(sp0 - 0xcu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_18 = rd32(sp0 - 0x18u);
    loc_14 = rd32(sp0 - 0x14u);
    goto L_10117ab3;
L_101179dd: ;
    COW_AT(101179dd)
    t31 = rd32(esi + 4u);
    wr32(sp0 - 0x18u, t31);
    t32 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x20u, t32);
    t33 = rd32(esi + 0x20u);
    t34 = rd16(esi + 0x2au);
    t35 = rd16(esi + 0x2cu);
    t36 = rd16(self + 0xb8u);
    wr16(sp0 - 0x14u, (uint16_t)t34);
    wr32(sp0 - 0x1cu, t33);
    edx = (edx & 0xffff0000u) | t34;
    ebx = 0x80808080u;
    edi = (edi & 0xffff0000u) | (uint16_t)(t35 + t36);
    loc_18 = t31;
    loc_20 = t32;
    loc_1c = t33;
    loc_14 = rd32(sp0 - 0x14u);
    goto L_10117a87;
L_10117a0d: ;
    COW_AT(10117a0d)
    ebx = 0x80808080u;
L_10117a5e: ;
    COW_AT(10117a5e)
    t44 = rd32(esi + 4u);
    t45 = rd16(esi + 0x2cu);
    t46 = rd16(self + 0xb8u);
    wr16(sp0 - 0x14u, rd16(esi + 0x2au));
    edx = t44;
    edi = (edi & 0xffff0000u) | (uint16_t)(t45 + t46);
    loc_14 = rd32(sp0 - 0x14u);
    goto L_10117a75;
L_10117a14: ;
    COW_AT(10117a14)
    if (rd16(esi + 0x3au) != rd16(self + 0x4cu))
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0x3au);
        goto L_10117a59;
    }
    eax = (eax & 0xffff0000u) | rd16(esi + 0x3au);
    COW_AT(10117a1e)
    if (rd8(self + 0x63u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x63u);
        goto L_10117a59;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x63u);
    COW_AT(10117a25)
    t37 = rd16(esi + 0x2au);
    t38 = rd32(esi + 4u);
    t39 = rd16(esi + 0x2cu);
    t40 = rd16(self + 0xb8u);
    wr32(self + 8u, esi);
    wr32(sp0 - 0x18u, t38);
    t41 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x20u, t41);
    t42 = rd32(esi + 0x20u);
    wr32(sp0 - 0x1cu, t42);
    t43 = ((eax & 0xffff0000u) | t37) + 1u;
    wr32(sp0 - 0x14u, t43);
    edx = t41;
    ebx = 0x40402810u;
    edi = ((edi & 0xffff0000u) | (uint16_t)(t39 + t40)) + 1u;
    loc_18 = t38;
    loc_20 = t41;
    loc_1c = t42;
    loc_14 = t43;
    goto L_10117a87;
L_10117a59: ;
    COW_AT(10117a59)
    ebx = 0x30808080u;
    goto L_10117a5e;
L_10117ac8: ;
    COW_AT(10117ac8)
    if (rd8(self + 0x69u) == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_10117ab3;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x69u);
    COW_AT(10117acf)
    if (rd8(esi + 0x44u) == 1u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_10117ab3;
    }
    COW_AT(10117ad5)
    wr32(sp0 - 0x38u, self);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t49 = cow_call_regs(g, COW_IMG(0x1015edd0u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, self);
    t50 = g->edx;
    t51 = rd32(esi + 4u);
    wr8(t51 + 8u, (uint8_t)t49);
    if ((int16_t)rd16(esi + 0x26u) > 0)
    {
        eax = t49;
        ecx = t51;
        edx = t50;
        goto L_10117c12;
    }
    eax = t49;
    ecx = t51;
    edx = t50;
    COW_AT(10117af1)
    if (rd32(self + 0x10u) != 0xeu) goto L_10117b02;
    COW_AT(10117af7)
    if ((int16_t)rd16(self + 0x66u) <= 0) goto L_10117c7c;
L_10117b02: ;
    COW_AT(10117b02)
    g->edx = edx;
    d64 = fr(g, (double)rdf32(esi + 0xcu) * (double)rdf32(COW_IMG(0x1032ae60u)));
    fpush(g, d64);
    g->esp = sp0 - 0x34u;
    t65 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t66 = g->edx;
    t67 = rd32(esi + 0x10u);
    wr32(sp0 - 0x20u, t67);
    t68 = rd32(esi + 8u);
    t69 = rd8(self + 0x34u);
    t70 = rd16(esi + 0x1cu);
    t71 = rd16(self + 0xb8u);
    wr16(sp0 - 0x14u, rd16(esi + 0x1au));
    wr32(sp0 - 0x18u, t68);
    t72 = rd32(esi + 0x14u);
    wr32(sp0 - 0x1cu, t72);
    if ((t69 & 0x20u) != 0u)
    {
        eax = t68;
        edx = t72;
        ebx = t65 << 0x18u | 0x808080u;
        edi = (edi & 0xffff0000u) | (uint16_t)(t70 + t71);
        loc_18 = t68;
        loc_20 = t67;
        loc_1c = t72;
        loc_14 = rd32(sp0 - 0x14u);
        goto L_10117a8b;
    }
    edx = t72;
    ebx = t65 << 0x18u | 0x808080u;
    edi = (edi & 0xffff0000u) | (uint16_t)(t70 + t71);
    loc_20 = t67;
    loc_18 = t68;
    loc_1c = t72;
    COW_AT(10117b50)
    t73 = rd32(rd32(esi + 0x30u));
    wr32(sp0 - 4u, t73);
    t74 = (uint32_t)(int16_t)rd16(t73 + 0xeu);
    wr32(sp0 - 8u, t74);
    g->ecx = t74;
    d75 = fr(g, (double)(int32_t)t74 * cow_bits2f(loc_20));
    fpush(g, d75);
    g->esp = sp0 - 0x34u;
    t76 = cow_call_regs(g, COW_IMG(0x10311c6cu), t73, g->ecx, g->edx, 1, 0);
    t77 = g->ecx;
    wr32(sp0 - 8u, t76);
    t78 = (uint32_t)(int16_t)rd16(rd32(sp0 - 4u) + 0x10u);
    t79 = rd32(sp0 - 4u);
    wr32(sp0 - 4u, t78);
    d80 = fr(g, (double)(int32_t)t78 * (double)rdf32(sp0 - 0x1cu));
    fpush(g, d80);
    t81 = cow_call_regs(g, COW_IMG(0x10311c6cu), t78, g->ecx, g->edx, 1, 0);
    if ((rd32(self + 0x34u) & 0x800000u) == 0u)
    {
        eax = rd32(self + 0x34u);
        edx = t81;
    COW_AT(10117ba0)
        d82 = (double)rdf32(esi + 0xcu);
        if (!(d82 < (double)rdf32(COW_IMG(0x1032961cu))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d82, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
            ecx = 0u;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d82, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(10117bb0)
            ecx = 0x44u;
        }
    }
    else
    {
        eax = rd32(self + 0x34u);
        edx = t81;
    COW_AT(10117b99)
        ecx = 8u;
    }
    COW_AT(10117bb5)
    t83 = (eax & 0xffffff00u) | rd8(self + 0xd0u);
    wr32(sp0 - 0x38u, t83);
    wr32(sp0 - 0x3cu, ecx);
    wr32(sp0 - 0x40u, ebx);
    t84 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x44u, t84);
    t85 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x48u, t85);
    t86 = (uint32_t)(int16_t)edi + (uint32_t)(int16_t)edx;
    wr32(sp0 - 0x4cu, t86);
    t87 = (uint32_t)(int16_t)rd16(sp0 - 0x14u) + (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x50u, t87);
    g->edx = (uint32_t)(int16_t)edi;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x10234ab0u), rd32(esi + 4u), 7, t87, t86, t85, t84, ebx, ecx, t83);
    t88 = g->edx;
    if (rd32(sp0 - 0x18u) == 0u)
    {
        edx = t88;
        loc_c = rd32(sp0 - 0xcu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_10117ab3;
    }
    COW_AT(10117bf2)
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, ebx);
    t89 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x48u, t89);
    t90 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x4cu, t90);
    t91 = (uint32_t)(int16_t)rd16(esi + 0x20u);
    wr32(sp0 - 0x50u, t91);
    t92 = (uint32_t)(int16_t)rd16(esi + 0x1eu);
    wr32(sp0 - 0x54u, t92);
    eax = t90;
    edx = t92;
    loc_38 = 1u;
    loc_44 = ebx;
    loc_48 = t89;
    loc_4c = t90;
    loc_50 = t91;
    loc_54 = t92;
    loc_18 = rd32(sp0 - 0x18u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_14 = rd32(sp0 - 0x14u);
    goto L_10117aaa;
L_10117c12: ;
    COW_AT(10117c12)
    t94 = (edx & 0xffff0000u) | rd16(esi + 0x26u);
    wr32(sp0 - 0x38u, t94);
    if ((rd8(self + 0x34u) & 0x20u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x34u);
        edx = t94;
        loc_38 = t94;
    COW_AT(10117c54)
        t101 = (eax & 0xffff0000u) | rd16(COW_IMG(0x1036c190u));
        wr32(sp0 - 0x3cu, t101);
        t102 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0xb8u) + rd16(self + 0x3cu));
        wr32(sp0 - 0x40u, t102);
        t103 = (edx & 0xffff0000u) | rd16(self + 0x3au);
        wr32(sp0 - 0x44u, t103);
        t104 = rd32(esi + 8u);
        wr32(sp0 - 0x48u, t104);
        g->eax = t104;
        g->edx = t103;
        g->esp = sp0 - 0x34u;
        t105 = cow_thiscall(g, COW_IMG(0x1011a150u), self, 5, t104, t103, t102, t101, loc_38);
        t106 = g->edx;
        eax = t105;
        edx = t106;
    }
    else
    {
        edx = t94;
        loc_38 = t94;
    COW_AT(10117c1e)
        t95 = (rd32(esi + 0x30u) & 0xffff0000u) | rd16(COW_IMG(0x1036c190u));
        wr32(sp0 - 0x3cu, t95);
        t96 = (edx & 0xffff0000u) | (uint16_t)(rd16(esi + 0x1cu) + (uint16_t)(rd16(self + 0xb8u) + rd16(rd32(rd32(esi + 0x30u)) + 0x10u)));
        wr32(sp0 - 0x40u, t96);
        t97 = (rd32(rd32(esi + 0x30u)) & 0xffff0000u) | (uint16_t)(rd16(esi + 0x1au) + rd16(rd32(rd32(esi + 0x30u)) + 0xeu));
        wr32(sp0 - 0x44u, t97);
        t98 = rd32(esi + 4u);
        wr32(sp0 - 0x48u, t98);
        g->eax = t97;
        g->edx = t96;
        g->esp = sp0 - 0x34u;
        t99 = cow_thiscall(g, COW_IMG(0x1011a250u), self, 5, t98, t97, t96, t95, loc_38);
        t100 = g->edx;
        eax = t99;
        edx = t100;
    }
    goto L_10117ebe;
L_10117c7c: ;
    COW_AT(10117c7c)
    if ((rd8(self + 0x34u) & 0x20u) != 0u)
    {
    COW_AT(10117cbf)
        t58 = (ecx & 0xffff0000u) | (uint16_t)((uint16_t)rd32(COW_IMG(0x1036c190u)) - rd16(self + 0x64u));
        wr32(sp0 - 0x38u, t58);
        wr32(sp0 - 0x3cu, rd32(COW_IMG(0x1036c190u)));
        t59 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0xb8u) + rd16(self + 0x3cu));
        wr32(sp0 - 0x40u, t59);
        t60 = (rd32(COW_IMG(0x1036c190u)) & 0xffff0000u) | rd16(self + 0x3au);
        wr32(sp0 - 0x44u, t60);
        t61 = rd32(esi + 8u);
        wr32(sp0 - 0x48u, t61);
        g->eax = t60;
        g->edx = t59;
        g->esp = sp0 - 0x34u;
        t62 = cow_thiscall(g, COW_IMG(0x1011a150u), self, 5, t61, t60, t59, rd32(COW_IMG(0x1036c190u)), t58);
        t63 = g->edx;
        eax = t62;
        edx = t63;
    }
    else
    {
    COW_AT(10117c82)
        t52 = (edx & 0xffff0000u) | (uint16_t)((uint16_t)rd32(COW_IMG(0x1036c190u)) - rd16(self + 0x64u));
        wr32(sp0 - 0x38u, t52);
        wr32(sp0 - 0x3cu, rd32(COW_IMG(0x1036c190u)));
        t53 = (rd32(COW_IMG(0x1036c190u)) & 0xffff0000u) | (uint16_t)(rd16(esi + 0x1cu) + (uint16_t)(rd16(self + 0xb8u) + rd16(rd32(rd32(esi + 0x30u)) + 0x10u)));
        wr32(sp0 - 0x40u, t53);
        t54 = (t52 & 0xffff0000u) | (uint16_t)(rd16(esi + 0x1au) + rd16(rd32(rd32(esi + 0x30u)) + 0xeu));
        wr32(sp0 - 0x44u, t54);
        t55 = rd32(esi + 4u);
        wr32(sp0 - 0x48u, t55);
        g->eax = t55;
        g->edx = t54;
        g->esp = sp0 - 0x34u;
        t56 = cow_thiscall(g, COW_IMG(0x1011a250u), self, 5, t55, t54, t53, rd32(COW_IMG(0x1036c190u)), t52);
        t57 = g->edx;
        eax = t56;
        edx = t57;
    }
    goto L_10117ebe;
L_10117e06: ;
    COW_AT(10117e06)
    if (rd8(self + 0x9au) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x9au);
        goto L_10117e5f;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x9au);
    COW_AT(10117e10)
    if (esi == 0u) goto L_10117e5f;
    COW_AT(10117e14)
    wr32(sp0 - 0x38u, 0u);
    t124 = (uint32_t)(int16_t)rd16(self + 0x3eu) - (uint32_t)(int16_t)ebx;
    wr32(sp0 - 4u, t124);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    t125 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u);
    wr32(sp0 - 4u, t125);
    t126 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x44u, t126);
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 0x3f800000u);
    d127 = (double)(float)fr(g, (double)(int32_t)t124 / (double)(int32_t)t125);
    wrf32(sp0 - 0x20u, (float)d127);
    wr32(sp0 - 0x4cu, cow_f2bits(d127));
    wr32(sp0 - 0x50u, (uint32_t)(int16_t)edi);
    wr32(sp0 - 0x54u, (uint32_t)(int16_t)ebx);
    eax = (uint32_t)(int16_t)ebx;
    edx = (uint32_t)(int16_t)edi;
    loc_40 = 0u;
    loc_44 = t126;
    loc_48 = 0x3f800000u;
    loc_4c = cow_f2bits(d127);
    loc_50 = (uint32_t)(int16_t)edi;
    loc_54 = (uint32_t)(int16_t)ebx;
    goto L_10117e90;
L_10117e5f: ;
    COW_AT(10117e5f)
    wr32(sp0 - 0x20u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 0x3f800000u);
    if (esi == 0u) goto L_10117e97;
    COW_AT(10117e73)
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 1u);
    t128 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x44u, t128);
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x4cu, 0x3f800000u);
    wr32(sp0 - 0x50u, (uint32_t)(int16_t)edi);
    wr32(sp0 - 0x54u, (uint32_t)(int16_t)ebx);
    eax = t128;
    edx = (uint32_t)(int16_t)ebx;
    loc_40 = 1u;
    loc_44 = t128;
    loc_48 = 0x3f800000u;
    loc_4c = 0x3f800000u;
    loc_50 = (uint32_t)(int16_t)edi;
    loc_54 = (uint32_t)(int16_t)ebx;
    goto L_10117e90;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101177d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101177e9u:
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
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        g->edi = 0u;
        wr32(sp0 - 0x28u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101177eeu:
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
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        g->edi = 0u;
        wr32(sp0 - 0x28u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101177fau:
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
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        g->edi = 0u;
        wr32(sp0 - 0x28u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101177ffu:
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
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        g->edi = 0u;
        wr32(sp0 - 0x28u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10117809u:
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
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        g->edi = 0u;
        wr32(sp0 - 0x28u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10117831u:
    {
        uint32_t eax;
        uint32_t ecx;
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
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x34u;
        g->edi = 0u;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1011783du:
    {
        uint32_t eax;
        uint32_t ecx;
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
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x34u;
        g->edi = 0u;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10117847u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1011784fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1011786bu:
    {
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
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011786eu:
    {
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
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117875u:
    {
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
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117880u:
    {
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
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101178a2u:
    {
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
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101178a9u:
    {
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
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101178b7u:
    {
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
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101178beu:
    {
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
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101178c8u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101178cfu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101178f4u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117927u:
    {
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
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117933u:
    {
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
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011793cu:
    {
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
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011794au:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117955u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011795eu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011796du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x101179a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0x80805020u;
        (void)sp0;
        return 1;
    }
    case 0x101179acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0x80805020u;
        (void)sp0;
        return 1;
    }
    case 0x101179b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0x80805020u;
        (void)sp0;
        return 1;
    }
    case 0x101179ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117a0du:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117a14u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117a1eu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117a25u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117a59u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117a5eu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117a75u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117a87u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117a8bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117a8fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117aaau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10117ab3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117abfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117ac8u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117acfu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117ad5u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10117af1u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117af7u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117b02u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117b50u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117b99u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117ba0u:
    {
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
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10117bb0u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117bb5u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117bf2u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117c12u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117c1eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10117c54u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10117c7cu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117c82u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117cbfu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117ceeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117cf5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117cfcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d02u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d07u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d11u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d19u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d25u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d2fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d37u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d42u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d4eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d67u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d6cu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d6fu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117d94u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117db0u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        wr32(sp0 - 0x38u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10117e06u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117e10u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117e14u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117e5fu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117e73u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117e90u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x38u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10117e97u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117ea1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117ea8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117eafu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117eb9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117ebeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117ec8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117ed0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10117ed7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101177d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101177d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
