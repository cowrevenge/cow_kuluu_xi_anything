/* f_0x100c83c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100c83c0(Guest* g)
{
    double d131;
    double d145;
    double d146;
    double d22;
    double d23;
    double d33;
    double d4;
    double d49;
    double d50;
    double d66;
    double d75;
    double d92;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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
    uint32_t t5;
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
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100c840cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_100c840c;
    case 0x100c841fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c841f;
    case 0x100c8436u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8436;
    case 0x100c844bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100c844b;
    case 0x100c8459u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100c8459;
    case 0x100c846bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c846b;
    case 0x100c847du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c847d;
    case 0x100c8492u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8492;
    case 0x100c849eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c849e;
    case 0x100c84abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c84ab;
    case 0x100c84b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c84b8;
    case 0x100c84c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c84c4;
    case 0x100c84cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c84cf;
    case 0x100c84e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c84e7;
    case 0x100c84fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c84fa;
    case 0x100c850du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c850d;
    case 0x100c851cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c851c;
    case 0x100c852fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c852f;
    case 0x100c8556u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c8556;
    case 0x100c8563u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c8563;
    case 0x100c8570u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c8570;
    case 0x100c8578u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c8578;
    case 0x100c8583u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c8583;
    case 0x100c858du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c858d;
    case 0x100c858fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c858f;
    case 0x100c859eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c859e;
    case 0x100c85afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c85af;
    case 0x100c85c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c85c9;
    case 0x100c85cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c85cd;
    case 0x100c85e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c85e3;
    case 0x100c85eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100c85ee;
    case 0x100c85f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c85f8;
    case 0x100c8606u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8606;
    case 0x100c8613u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8613;
    case 0x100c861bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c861b;
    case 0x100c863eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c863e;
    case 0x100c8640u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8640;
    case 0x100c8644u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8644;
    case 0x100c8653u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8653;
    case 0x100c8662u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8662;
    case 0x100c867au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c867a;
    case 0x100c86b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c86b4;
    case 0x100c86d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c86d4;
    case 0x100c86e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c86e5;
    case 0x100c86f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c86f3;
    case 0x100c86f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c86f8;
    case 0x100c8708u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8708;
    case 0x100c870fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c870f;
    case 0x100c8714u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8714;
    case 0x100c872bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c872b;
    case 0x100c8740u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c8740;
    case 0x100c874cu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100c874c;
    case 0x100c8755u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8755;
    case 0x100c8761u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8761;
    case 0x100c876du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c876d;
    case 0x100c8779u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8779;
    case 0x100c8784u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8784;
    case 0x100c878fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c878f;
    case 0x100c879bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c879b;
    case 0x100c87a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c87a3;
    case 0x100c87afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c87af;
    case 0x100c87bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c87bb;
    case 0x100c87c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c87c7;
    case 0x100c87edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c87ed;
    case 0x100c87f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c87f8;
    case 0x100c882au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c882a;
    case 0x100c8836u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8836;
    case 0x100c883du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c883d;
    case 0x100c886fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c886f;
    case 0x100c8879u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8879;
    case 0x100c8883u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8883;
    case 0x100c8891u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8891;
    case 0x100c889fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c889f;
    case 0x100c88adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c88ad;
    case 0x100c88bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c88bb;
    case 0x100c88d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c88d1;
    case 0x100c88e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c88e4;
    case 0x100c8916u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8916;
    case 0x100c8920u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100c8920;
    default: break;
    }
#endif

    COW_AT(100c83c0)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_thiscall(g, COW_IMG(0x10085490u), self, 0);
    t2 = g->edx;
    t3 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t3);
    wr8(sp0 - 0xdu, (uint8_t)t1);
    cow_fastcall(g, COW_IMG(0x100c8930u), self, t2, 1, t3);
    d4 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)d4);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    wr32(sp0 - 0x28u, sp0 - 8u);
    t5 = rd32(sp0 + 4u);
    wr32(sp0 - 0x2cu, t5);
    g->eax = t5;
    g->edx = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x100c8bb0u), self, 3, t5, sp0 - 8u, sp0 - 0xcu);
    t7 = g->edx;
    t8 = rd32(sp0 - 8u);
    wr32(sp0 - 4u, t8);
    if (rd32(self + 0x768u) == 0u)
    {
        edx = t7;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
        loc_4 = t8;
        loc_8 = rd32(sp0 - 8u);
    }
    else
    {
        eax = t6;
        edx = t7;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        edi = rd32(self + 0x768u);
        loc_4 = t8;
    COW_AT(100c840c)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t9 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t10 = g->edx;
        wr32(sp0 - 0x24u, t9);
        g->edx = t10;
        t11 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t9);
        t12 = g->edx;
        if ((uint8_t)t11 == 0u)
        {
            edx = t12;
            loc_14 = in_ebx;
            loc_18 = in_ebp;
            loc_1c = in_esi;
            loc_20 = in_edi;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
        }
        else
        {
            eax = t11;
            edx = t12;
    COW_AT(100c841f)
            g->eax = eax;
            g->esp = sp0 - 0x20u;
            t13 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
            t14 = g->edx;
            wr32(sp0 - 0x24u, t13);
            g->edx = t14;
            t15 = cow_stdcall(g, COW_IMG(0x10022340u), 1, t13);
            t16 = g->edx;
            if (t15 == 0u)
            {
                edx = t16;
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
            }
            else
            {
                eax = t15;
    COW_AT(100c8436)
                t17 = rd32(sp0 - 8u) ^ (uint8_t)(eax + 0x30u ^ rd32(sp0 - 8u));
                t18 = rd32(sp0 - 8u);
                wr32(sp0 - 8u, t17);
                edx = (uint8_t)(eax + 0x30u ^ t18);
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_4 = rd32(sp0 - 4u);
                loc_8 = t17;
            }
        }
    }
    COW_AT(100c844b)
    if (rd32(self + 0x80u) != 0u) goto L_100c8920;
    COW_AT(100c8459)
    g->eax = rd32(self);
    g->edx = edx;
    t19 = rd32(self);
    g->esp = sp0 - 0x20u;
    t20 = cow_thiscall(g, rd32(t19 + 0x200u), self, 0);
    t21 = g->edx;
    if ((uint8_t)t20 != 0u)
    {
        eax = t20;
        goto L_100c85f8;
    }
    edx = t21;
    COW_AT(100c846b)
    if (rd32(self + 0x7d8u) != rd32(sp0 - 8u))
    {
        eax = rd32(sp0 - 8u);
        goto L_100c85f8;
    }
    eax = rd32(sp0 - 8u);
    COW_AT(100c847d)
    d22 = (double)rdf32(self + 0x7dcu);
    d23 = (double)rdf32(sp0 - 0xcu);
    if (d22 == d23)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100c8920;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, d23, 0u);
    COW_AT(100c8492)
    wr32(sp0 + 4u, self + 0x674u);
    edi = 0u;
L_100c849e: ;
    COW_AT(100c849e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t24 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t25 = g->edx;
    if (rd32(t24) == 0u)
    {
        eax = rd32(t24);
        edx = t25;
    }
    else
    {
        eax = rd32(t24);
        edx = t25;
    COW_AT(100c84ab)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t26 = cow_thiscall(g, COW_IMG(0x1001b1a0u), eax + edi + 0x24u, 0);
        t27 = g->edx;
        if (t26 == 0u)
        {
            eax = t26;
            edx = t27;
        }
        else
        {
            eax = t26;
    COW_AT(100c84b8)
            t28 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x24u, t28);
            g->eax = eax;
            g->edx = rd32(eax);
            t29 = rd32(eax);
            g->esp = sp0 - 0x20u;
            t30 = cow_thiscall(g, rd32(t29 + 0x2cu), eax, 1, t28);
            t31 = g->edx;
            eax = t30;
            edx = t31;
        }
    }
    COW_AT(100c84c4)
    if ((int32_t)(edi + 0x14u) < 140)
    {
        edi = edi + 0x14u;
        goto L_100c849e;
    }
    COW_AT(100c84cf)
    t32 = rd32(self + 0x768u);
    d33 = (double)rdf32(sp0 - 0xcu);
    wrf32(self + 0x7dcu, (float)d33);
    if (t32 == 0u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100c8920;
    }
    ebp = t32;
    COW_AT(100c84e7)
    g->eax = eax;
    g->edx = rd32(ebp);
    t34 = rd32(ebp);
    g->esp = sp0 - 0x20u;
    t35 = cow_thiscall(g, rd32(t34 + 0x34cu), ebp, 0);
    t36 = g->edx;
    if (t35 != 0u)
    {
        eax = t35;
        edx = t36;
        goto L_100c858d;
    }
    edx = t36;
    COW_AT(100c84fa)
    g->eax = rd32(ebp);
    g->edx = edx;
    t37 = rd32(ebp);
    g->esp = sp0 - 0x20u;
    t38 = cow_thiscall(g, rd32(t37 + 0x360u), ebp, 0);
    t39 = g->edx;
    if (t38 != 0u)
    {
        eax = t38;
        edx = t39;
        goto L_100c858d;
    }
    eax = t38;
    COW_AT(100c850d)
    g->eax = eax;
    g->edx = rd32(ebp);
    t40 = rd32(ebp);
    g->esp = sp0 - 0x20u;
    t41 = cow_thiscall(g, rd32(t40 + 0x36cu), ebp, 0);
    t42 = g->edx;
    if (t41 != 0u)
    {
        eax = t41;
        edx = t42;
        goto L_100c858d;
    }
    edx = t42;
    COW_AT(100c851c)
    g->eax = rd32(ebp);
    g->edx = edx;
    t43 = rd32(ebp);
    g->esp = sp0 - 0x20u;
    t44 = cow_thiscall(g, rd32(t43 + 0x358u), ebp, 0);
    t45 = g->edx;
    if (t44 == 0u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100c8920;
    }
    eax = t44;
    edx = t45;
    COW_AT(100c852f)
    t46 = rd32(sp0 - 0xcu);
    wr32(sp0 + 4u, t46);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t47 = cow_call_regs(g, COW_IMG(0x10022380u), eax, ebp + 0x878u, g->edx, 1, 0);
    t48 = g->edx;
    d49 = cow_take_float(g);
    d50 = fr(g, d49 * (double)rdf32(sp0 + 4u));
    wrf32(sp0 + 4u, (float)d50);
    eax = t47;
    edx = t48;
    ebp = ebp + 0x674u;
    esi = 0u;
    edi = rd32(sp0 + 4u);
L_100c8556: ;
    COW_AT(100c8556)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t51 = cow_thiscall(g, COW_IMG(0x1002b5a0u), ebp, 0);
    t52 = g->edx;
    if (rd32(t51) == 0u)
    {
        eax = rd32(t51);
        edx = t52;
    }
    else
    {
        eax = rd32(t51);
        edx = t52;
    COW_AT(100c8563)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t53 = cow_thiscall(g, COW_IMG(0x1001b1a0u), eax + esi + 0x24u, 0);
        t54 = g->edx;
        if (t53 == 0u)
        {
            eax = t53;
            edx = t54;
        }
        else
        {
            eax = t53;
    COW_AT(100c8570)
            wr32(sp0 - 0x24u, edi);
            g->eax = eax;
            g->edx = rd32(eax);
            t55 = rd32(eax);
            g->esp = sp0 - 0x20u;
            t56 = cow_thiscall(g, rd32(t55 + 0x2cu), eax, 1, edi);
            t57 = g->edx;
            eax = t56;
            edx = t57;
        }
    }
    COW_AT(100c8578)
    if ((int32_t)(esi + 0x14u) < 140)
    {
        esi = esi + 0x14u;
        goto L_100c8556;
    }
    COW_AT(100c8583)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100c858d: ;
    COW_AT(100c858d)
    ebx = 0u;
L_100c858f: ;
    COW_AT(100c858f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t58 = cow_thiscall(g, COW_IMG(0x1002b5a0u), rd32(sp0 + 4u), 0);
    t59 = g->edx;
    if (rd32(t58) == 0u)
    {
        eax = t58;
        edx = t59;
    }
    else
    {
        eax = t58;
        edx = t59;
        esi = rd32(t58);
    COW_AT(100c859e)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t60 = cow_thiscall(g, COW_IMG(0x1002b5a0u), ebp + 0x674u, 0);
        t61 = g->edx;
        if (rd32(t60) == 0u)
        {
            eax = t60;
            edx = t61;
        }
        else
        {
            eax = t60;
            edx = t61;
            edi = rd32(t60);
    COW_AT(100c85af)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t62 = cow_thiscall(g, COW_IMG(0x1001b1a0u), ebx + esi + 0x24u, 0);
            t63 = g->edx;
            g->edx = t63;
            t64 = cow_thiscall(g, COW_IMG(0x1001b1a0u), ebx + edi + 0x24u, 0);
            t65 = g->edx;
            if (t64 == 0u)
            {
                eax = t64;
                edx = t65;
            }
            else
            {
                eax = t64;
                edx = t65;
                esi = t62;
                edi = t64;
    COW_AT(100c85c9)
                if (esi != 0u)
                {
    COW_AT(100c85cd)
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, rd32(rd32(esi) + 0x30u), esi, 0);
                    d66 = cow_take_float(g);
                    t67 = rd32(edi);
                    wrf32(edi + 0x24u, (float)d66);
                    t68 = rd32(sp0 - 0xcu);
                    wr32(sp0 - 0x24u, t68);
                    g->eax = t68;
                    g->edx = t67;
                    t69 = cow_thiscall(g, rd32(t67 + 0x2cu), edi, 1, t68);
                    t70 = g->edx;
                    eax = t69;
                    edx = t70;
                }
            }
        }
    }
    COW_AT(100c85e3)
    if ((int32_t)(ebx + 0x14u) < 140)
    {
        ebx = ebx + 0x14u;
        goto L_100c858f;
    }
    COW_AT(100c85ee)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100c85f8: ;
    COW_AT(100c85f8)
    g->eax = eax;
    g->edx = rd32(self);
    t71 = rd32(self);
    g->esp = sp0 - 0x20u;
    t72 = cow_thiscall(g, rd32(t71 + 0x200u), self, 0);
    t73 = g->edx;
    if ((uint8_t)t72 == 0u)
    {
        edx = t73;
    COW_AT(100c8613)
        wr32(sp0 + 4u, 0x41800000u);
    }
    else
    {
        eax = t72;
        edx = t73;
    COW_AT(100c8606)
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x100d4b20u), self, 0);
        t74 = g->edx;
        d75 = cow_take_float(g);
        wrf32(sp0 + 4u, (float)d75);
        edx = t74;
    }
    COW_AT(100c861b)
    g->eax = rd32(self);
    g->edx = edx;
    t76 = rd32(self);
    g->esp = sp0 - 0x20u;
    t77 = cow_thiscall(g, rd32(t76 + 0x200u), self, 0);
    t78 = g->edx;
    t79 = -((uint8_t)t77 != 0u) + 1u;
    if ((rd32(sp0 - 8u) & 0xffffffu) != 0x706d6au)
    {
        eax = t79;
        edx = t78;
        ebp = t79;
    }
    else
    {
        eax = t79;
        edx = t78;
    COW_AT(100c863e)
        ebp = 0u;
    }
    COW_AT(100c8640)
    if ((uint8_t)ebx != 0u) goto L_100c8653;
    COW_AT(100c8644)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t80 = cow_thiscall(g, COW_IMG(0x100845f0u), self, 0);
    t81 = g->edx;
    if ((uint8_t)t80 != 0u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100c8920;
    }
    eax = t80;
    edx = t81;
L_100c8653: ;
    COW_AT(100c8653)
    g->esp = sp0 - 0x20u;
    t82 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, self, g->edx, 1, 0);
    t83 = g->ecx;
    if ((uint8_t)t82 == 0u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
    }
    else
    {
        ecx = t83;
    COW_AT(100c8662)
        if ((rd32(self + 0x840u) & 0x800000u) == 0x800000u)
        {
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
        }
        else
        {
            edx = rd32(self + 0x840u) & 0x800000u;
    COW_AT(100c867a)
            wr32(sp0 - 0x24u, ecx);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, ebp);
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x38u, 0x3f800000u);
            t84 = rd32(sp0 + 4u);
            wr32(sp0 - 0x3cu, t84);
            wr32(sp0 - 0x40u, 0u);
            t85 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x44u, t85);
            wr32(sp0 - 0x48u, 0x3f800000u);
            t86 = rd32(sp0 - 8u);
            wr32(sp0 - 0x4cu, t86);
            g->eax = t85;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t87 = cow_thiscall(g, COW_IMG(0x100cd920u), self, 11, t86, 0x3f800000u, t85, 0u, t84, 0x3f800000u, 0u, ebp, 0u, 0u, 0u);
            t88 = g->ecx;
            t89 = g->edx;
            if (t87 != 0u)
            {
                ecx = t88;
                edx = t89;
                ebx = t84;
    COW_AT(100c87ed)
                if (rd32(sp0 - 8u) != 0x20316469u)
                {
                    eax = rd32(sp0 - 8u);
                    goto L_100c8836;
                }
    COW_AT(100c87f8)
                wr32(sp0 - 0x24u, ecx);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, ebp);
                wr32(sp0 - 0x34u, 0u);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x38u, 0x3f800000u);
                wr32(sp0 - 0x3cu, ebx);
                wr32(sp0 - 0x40u, 0u);
                t125 = rd32(sp0 - 0xcu);
                wr32(sp0 - 0x44u, t125);
                wr32(sp0 - 0x48u, 0x3f800000u);
                wr32(sp0 - 0x4cu, 0x206c6469u);
                g->eax = t125;
                g->esp = sp0 - 0x20u;
                t126 = cow_thiscall(g, COW_IMG(0x100cd920u), self, 11, 0x206c6469u, 0x3f800000u, t125, 0u, ebx, 0x3f800000u, 0u, ebp, 0u, 0u, 0u);
                if (t126 != 0u)
                {
                    eax = t126;
                    goto L_100c8883;
                }
                eax = t126;
    COW_AT(100c882a)
                t127 = rd32(sp0 - 8u);
                wr32(self + 0x7d8u, t127);
L_100c8879: ;
    COW_AT(100c8879)
                d131 = (double)rdf32(sp0 - 0xcu);
                wrf32(self + 0x7dcu, (float)d131);
            }
            else
            {
                eax = t87;
                ebx = t84;
    COW_AT(100c86b4)
                t90 = rd8(sp0 - 0xdu);
                t91 = rd32(sp0 - 8u);
                d92 = (double)rdf32(sp0 - 0xcu);
                wrf32(self + 0x7dcu, (float)d92);
                wr32(self + 0x7d8u, t91);
                if ((uint8_t)t90 != 0u)
                {
                    eax = (eax & 0xffffff00u) | t90;
                }
                else
                {
                    edx = t91;
    COW_AT(100c86d4)
                    t93 = rd32(self + 0x70u);
                    wr8(sp0 + 4u, 0u);
                    wr8(sp0 - 0xdu, 0u);
                    if (t93 == 0u)
                    {
                        eax = t93;
                    }
                    else
                    {
                        eax = t93;
    COW_AT(100c86e5)
                        if (rd32(eax + 0x12cu) >> 0x16u & 1u)
                        {
    COW_AT(100c86f3)
                            wr8(sp0 - 0xdu, 1u);
                        }
    COW_AT(100c86f8)
                        t94 = rd32(eax + 0x120u);
                        if (t94 >> 7u & 1u)
                        {
                            eax = t94;
                            edx = t94 >> 7u;
                            goto L_100c870f;
                        }
                        eax = t94;
                        edx = t94 >> 7u;
    COW_AT(100c8708)
                        if (!(eax >> 8u & 1u))
                        {
                            eax = eax >> 8u;
                            goto L_100c8714;
                        }
                        eax = eax >> 8u;
L_100c870f: ;
    COW_AT(100c870f)
                        wr8(sp0 + 4u, 1u);
                    }
L_100c8714: ;
    COW_AT(100c8714)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    t95 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
                    t96 = g->edx;
                    wr32(sp0 - 0x24u, t95);
                    g->edx = t96;
                    t97 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t95);
                    t98 = g->edx;
                    if ((uint8_t)t97 != 0u)
                    {
                        eax = t97;
                    }
                    else
                    {
                        eax = t97;
                        edx = t98;
    COW_AT(100c872b)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t99 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
                        t100 = g->edx;
                        wr32(sp0 - 0x24u, t99);
                        g->edx = t100;
                        t101 = cow_thiscall(g, COW_IMG(0x10084330u), self, 1, t99);
                        t102 = g->edx;
                        if ((uint8_t)t101 == 0u)
                        {
                            eax = t101;
                            edx = t102;
    COW_AT(100c874c)
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t104 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
                            t105 = g->edx;
                            if (t104 == 0u)
                            {
                                eax = t104;
                                edx = t105;
                                goto L_100c87c7;
                            }
                            eax = t104;
                            edx = t105;
    COW_AT(100c8755)
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t106 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
                            t107 = g->edx;
                            if (t106 == 6u)
                            {
                                eax = t106;
                                edx = t107;
                                goto L_100c87c7;
                            }
                            eax = t106;
                            edx = t107;
    COW_AT(100c8761)
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t108 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
                            t109 = g->edx;
                            if (t108 == 2u)
                            {
                                eax = t108;
                                edx = t109;
                                goto L_100c8779;
                            }
                            eax = t108;
                            edx = t109;
    COW_AT(100c876d)
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t110 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
                            t111 = g->edx;
                            if (t110 != 7u)
                            {
                                eax = t110;
                                edx = t111;
                                goto L_100c8784;
                            }
                            eax = t110;
                            edx = t111;
L_100c8779: ;
    COW_AT(100c8779)
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t112 = cow_thiscall(g, COW_IMG(0x10084140u), self, 0);
                            t113 = g->edx;
                            if ((uint8_t)t112 == 1u)
                            {
                                eax = t112;
                                edx = t113;
                                goto L_100c87c7;
                            }
                            eax = t112;
                            edx = t113;
L_100c8784: ;
    COW_AT(100c8784)
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t114 = cow_thiscall(g, COW_IMG(0x10084140u), self, 0);
                            t115 = g->edx;
                            if ((uint8_t)t114 == 0u)
                            {
                                eax = t114;
                                edx = t115;
                                goto L_100c879b;
                            }
                            eax = t114;
                            edx = t115;
    COW_AT(100c878f)
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t116 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
                            t117 = g->edx;
                            if (t116 == 1u)
                            {
                                eax = t116;
                                edx = t117;
                                goto L_100c87c7;
                            }
                            eax = t116;
                            edx = t117;
L_100c879b: ;
    COW_AT(100c879b)
                            if (rd8(sp0 + 4u) == 0u)
                            {
                                eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
                                goto L_100c87af;
                            }
                            eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
    COW_AT(100c87a3)
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t118 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
                            t119 = g->edx;
                            if (t118 == 1u)
                            {
                                eax = t118;
                                edx = t119;
                                goto L_100c87c7;
                            }
                            eax = t118;
                            edx = t119;
L_100c87af: ;
    COW_AT(100c87af)
                            if ((rd32(self + 0x840u) & 0x400000u) != 0u) goto L_100c87c7;
    COW_AT(100c87bb)
                            if (rd8(sp0 - 0xdu) == 0u)
                            {
                                eax = (eax & 0xffffff00u) | rd8(sp0 - 0xdu);
                                goto L_100c8883;
                            }
                            eax = (eax & 0xffffff00u) | rd8(sp0 - 0xdu);
L_100c87c7: ;
    COW_AT(100c87c7)
                            wr32(sp0 - 0x24u, 0u);
                            wr32(sp0 - 0x28u, 0u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t120 = cow_thiscall(g, COW_IMG(0x100d5f10u), self, 2, 0u, 0u);
                            t121 = g->edx;
                            wr32(sp0 - 0x24u, 0u);
                            wr32(sp0 - 0x28u, 1u);
                            g->edx = t121;
                            t122 = cow_thiscall(g, COW_IMG(0x100d5f10u), self, 2, 1u, 0u);
                            t123 = g->edx;
                            wr32(sp0 - 0x24u, 0u);
                            wr32(sp0 - 0x28u, 2u);
                            t124 = cow_thiscall(g, COW_IMG(0x100d60e0u), self, 2, 2u, 0u);
                            eax = t124;
                        }
                        else
                        {
                            eax = t101;
                            edx = t102;
    COW_AT(100c8740)
                            wr32(sp0 - 0x24u, 0u);
                            g->eax = eax;
                            g->esp = sp0 - 0x20u;
                            t103 = cow_thiscall(g, COW_IMG(0x100d60c0u), self, 1, 0u);
                            eax = t103;
                        }
                    }
                }
            }
L_100c8883: ;
    COW_AT(100c8883)
            if (rd32(self + 0x768u) == 0u)
            {
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
            }
            else
            {
                edi = rd32(self + 0x768u);
    COW_AT(100c8891)
                g->eax = eax;
                g->edx = rd32(edi);
                t132 = rd32(edi);
                g->esp = sp0 - 0x20u;
                t133 = cow_thiscall(g, rd32(t132 + 0x34cu), edi, 0);
                t134 = g->edx;
                if (t133 != 0u) goto L_100c88bb;
                edx = t134;
    COW_AT(100c889f)
                g->eax = rd32(edi);
                t135 = rd32(edi);
                g->esp = sp0 - 0x20u;
                t136 = cow_thiscall(g, rd32(t135 + 0x358u), edi, 0);
                if (t136 != 0u) goto L_100c88bb;
                eax = t136;
    COW_AT(100c88ad)
                g->eax = eax;
                g->esp = sp0 - 0x20u;
                t137 = cow_thiscall(g, rd32(rd32(edi) + 0x360u), edi, 0);
                if (t137 == 0u)
                {
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                    goto L_100c8920;
                }
L_100c88bb: ;
    COW_AT(100c88bb)
                t138 = rd32(sp0 - 0xcu);
                t139 = rd32(edi);
                wr32(sp0 + 4u, t138);
                g->eax = t138;
                g->edx = t139;
                g->esp = sp0 - 0x20u;
                t140 = cow_thiscall(g, rd32(t139 + 0x358u), edi, 0);
                t141 = g->ecx;
                t142 = g->edx;
                if (t140 == 0u)
                {
                    ecx = t141;
                    edx = t142;
                }
                else
                {
                    eax = t140;
                    edx = t142;
    COW_AT(100c88d1)
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_call_regs(g, COW_IMG(0x10022380u), eax, edi + 0x878u, g->edx, 1, 0);
                    t143 = g->ecx;
                    t144 = g->edx;
                    d145 = cow_take_float(g);
                    d146 = fr(g, d145 * (double)rdf32(sp0 + 4u));
                    wrf32(sp0 + 4u, (float)d146);
                    ecx = t143;
                    edx = t144;
                }
    COW_AT(100c88e4)
                wr32(sp0 - 0x24u, ecx);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, ebp);
                wr32(sp0 - 0x34u, 0u);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x38u, 0x3f800000u);
                wr32(sp0 - 0x3cu, ebx);
                wr32(sp0 - 0x40u, 0u);
                t147 = rd32(sp0 + 4u);
                wr32(sp0 - 0x44u, t147);
                wr32(sp0 - 0x48u, 0x3f800000u);
                t148 = rd32(sp0 - 4u);
                wr32(sp0 - 0x4cu, t148);
                g->eax = t147;
                g->esp = sp0 - 0x20u;
                t149 = cow_thiscall(g, COW_IMG(0x100cd920u), edi, 11, t148, 0x3f800000u, t147, 0u, ebx, 0x3f800000u, 0u, ebp, 0u, 0u, 0u);
                if (t149 == 0u)
                {
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                }
                else
                {
    COW_AT(100c8916)
                    wr32(self + 0x7d8u, 0x20202020u);
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                }
            }
        }
    }
L_100c8920: ;
    COW_AT(100c8920)
    g->ebx = loc_14;
    g->esi = loc_1c;
    g->edi = loc_20;
    g->ebp = loc_18;
    return;
L_100c8836: ;
    COW_AT(100c8836)
    if (eax != 0x20316664u) goto L_100c8883;
    COW_AT(100c883d)
    wr32(sp0 - 0x24u, ecx);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, ebp);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x38u, 0x3f800000u);
    wr32(sp0 - 0x3cu, ebx);
    wr32(sp0 - 0x40u, 0u);
    t128 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x44u, t128);
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x4cu, 0x30746664u);
    g->eax = sp0 - 0x24u;
    g->esp = sp0 - 0x20u;
    t129 = cow_thiscall(g, COW_IMG(0x100cd920u), self, 11, 0x30746664u, 0x3f800000u, t128, 0u, ebx, 0x3f800000u, 0u, ebp, 0u, 0u, 0u);
    if (t129 != 0u)
    {
        eax = t129;
        goto L_100c8883;
    }
    COW_AT(100c886f)
    t130 = rd32(sp0 - 8u);
    wr32(self + 0x7d8u, t130);
    eax = t130;
    goto L_100c8879;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100c83c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100c840cu:
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
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100c841fu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8436u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c844bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8459u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c846bu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c847du:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8492u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c849eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x674u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c84abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x674u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c84b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x674u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c84c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x674u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c84cfu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c84e7u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c84fau:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c850du:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c851cu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c852fu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8556u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8563u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8570u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8578u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8583u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c858du:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c858fu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c859eu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c85afu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c85c9u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c85cdu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c85e3u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c85eeu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c85f8u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8606u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8613u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c861bu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c863eu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8640u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8644u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8653u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8662u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c867au:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100c86b4u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c86d4u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c86e5u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c86f3u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c86f8u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c8708u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c870fu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c8714u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c872bu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c8740u:
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
        g->esp = sp0 - 0x20u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100c874cu:
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
        g->esp = sp0 - 0x20u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100c8755u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c8761u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c876du:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c8779u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c8784u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c878fu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c879bu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c87a3u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c87afu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c87bbu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c87c7u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c87edu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c87f8u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c882au:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c8836u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c883du:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c886fu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c8879u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c8883u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c8891u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c889fu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c88adu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c88bbu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c88d1u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c88e4u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c8916u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100c8920u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100c83c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100c83c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
