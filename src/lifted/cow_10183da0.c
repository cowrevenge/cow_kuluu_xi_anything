/* f_0x10183da0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10183da0(Guest* g)
{
    double d2;
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_4;
    double loc_4_f;
    uint32_t loc_8;
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
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10183dbcu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10183dbc;
    case 0x10183dfau: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10183dfa;
    case 0x10183e13u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10183e13;
    case 0x10183e19u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10183e19;
    case 0x10183e2au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_4_f = rdf32(sp0 - 4u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10183e2a;
    case 0x10183e3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10183e3f;
    case 0x10183e47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10183e47;
    case 0x10183e55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10183e55;
    case 0x10183e63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10183e63;
    case 0x10183e7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183e7e;
    case 0x10183e94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10183e94;
    case 0x10183e96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10183e96;
    case 0x10183eb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183eb0;
    case 0x10183ebau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183eba;
    case 0x10183ec8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183ec8;
    case 0x10183ee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183ee2;
    case 0x10183ef8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10183ef8;
    case 0x10183efau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183efa;
    case 0x10183f15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183f15;
    case 0x10183f1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183f1f;
    case 0x10183f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183f2d;
    case 0x10183f48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183f48;
    case 0x10183f5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10183f5e;
    case 0x10183f60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183f60;
    case 0x10183f7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183f7a;
    case 0x10183f84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183f84;
    case 0x10183f92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183f92;
    case 0x10183facu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183fac;
    case 0x10183fc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10183fc2;
    case 0x10183fc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183fc4;
    case 0x10183fdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183fdf;
    case 0x10183ff9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_2c = rd32(sp0 - 0x2cu); goto E_10183ff9;
    case 0x10184004u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10184004;
    case 0x1018400eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_2c = rd32(sp0 - 0x2cu); goto E_1018400e;
    case 0x10184019u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10184019;
    case 0x1018401du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_10 = rd32(sp0 - 0x10u); goto E_1018401d;
    case 0x10184031u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_10 = rd32(sp0 - 0x10u); goto E_10184031;
    case 0x10184034u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_10 = rd32(sp0 - 0x10u); goto E_10184034;
    case 0x10184036u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_10 = rd32(sp0 - 0x10u); goto E_10184036;
    case 0x1018403fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_30 = rd32(sp0 - 0x30u); goto E_1018403f;
    case 0x10184053u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_30 = rd32(sp0 - 0x30u); goto E_10184053;
    case 0x10184066u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_30 = rd32(sp0 - 0x30u); goto E_10184066;
    case 0x10184075u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_30 = rd32(sp0 - 0x30u); goto E_10184075;
    case 0x10184077u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10184077;
    case 0x10184079u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10184079;
    case 0x1018408au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1018408a;
    case 0x10184091u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10184091;
    case 0x1018409cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1018409c;
    case 0x101840a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101840a7;
    case 0x101840b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101840b2;
    case 0x101840bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101840bc;
    case 0x101840cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_101840cf;
    case 0x101840e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101840e2;
    case 0x101840f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101840f5;
    case 0x101840fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101840fb;
    case 0x10184109u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_2c = rd32(sp0 - 0x2cu); goto E_10184109;
    case 0x1018411cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1018411c;
    case 0x1018412du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_2c = rd32(sp0 - 0x2cu); goto E_1018412d;
    case 0x10184147u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10184147;
    case 0x10184166u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_2c = rd32(sp0 - 0x2cu); goto E_10184166;
    case 0x1018417du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1018417d;
    case 0x10184197u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10184197;
    case 0x101841b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_101841b1;
    case 0x101841bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101841bf;
    case 0x101841d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101841d7;
    case 0x101841e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101841e5;
    case 0x101841efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101841ef;
    case 0x10184202u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10184202;
    case 0x10184215u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_10184215;
    case 0x1018421fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1018421f;
    case 0x1018422du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_2c = rd32(sp0 - 0x2cu); goto E_1018422d;
    case 0x10184235u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10184235;
    case 0x10184240u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10184240;
    case 0x10184254u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_2c = rd32(sp0 - 0x2cu); goto E_10184254;
    case 0x1018426eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1018426e;
    case 0x10184290u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_2c = rd32(sp0 - 0x2cu); goto E_10184290;
    case 0x101842a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_30 = rd32(sp0 - 0x30u); goto E_101842a7;
    case 0x101842bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_101842bd;
    case 0x101842d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_101842d3;
    case 0x101842e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101842e0;
    case 0x101842f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101842f9;
    case 0x10184303u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10184303;
    case 0x1018431cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1018431c;
    case 0x1018433au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1018433a;
    case 0x10184355u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10184355;
    case 0x1018436fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1018436f;
    case 0x10184389u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10184389;
    case 0x10184390u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10184390;
    case 0x10184397u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10184397;
    case 0x1018439bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1018439b;
    case 0x1018439eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1018439e;
    case 0x101843b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_101843b3;
    case 0x101843b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101843b5;
    case 0x101843cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_101843ca;
    case 0x101843e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_101843e3;
    case 0x101843edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_101843ed;
    case 0x101843f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_14 = rd32(sp0 - 0x14u); goto E_101843f5;
    case 0x10184401u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_14 = rd32(sp0 - 0x14u); goto E_10184401;
    case 0x10184412u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_14 = rd32(sp0 - 0x14u); goto E_10184412;
    case 0x10184416u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_14 = rd32(sp0 - 0x14u); goto E_10184416;
    case 0x10184418u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_14 = rd32(sp0 - 0x14u); goto E_10184418;
    case 0x10184423u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10184423;
    case 0x1018443du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1018443d;
    case 0x10184458u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10184458;
    case 0x1018446du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1018446d;
    case 0x1018448au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1018448a;
    case 0x101844a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_101844a9;
    default: break;
    }
#endif

    COW_AT(10183da0)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    t1 = rd32(arg2 + 0x18u);
    wr32(sp0 - 0x18u, t1);
    if (rd32(arg2 + 0x18u) == 0u)
    {
        loc_1c = in_ebx;
        loc_20 = in_ebp;
        loc_24 = in_esi;
        loc_28 = in_edi;
    }
    else
    {
        eax = t1;
        loc_18 = t1;
    COW_AT(10183dbc)
        d2 = fr(g, (double)rdf32(arg2 + 0x24u) - (double)rdf32(self + 0x390f8u));
        d3 = fr(g, (double)rdf32(arg2 + 0x20u) - (double)rdf32(self + 0x390f4u));
        d4 = fr(g, (double)rdf32(arg2 + 0x1cu) - (double)rdf32(self + 0x390f0u));
        if (rd8(arg2 + 0xbu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg2 + 0xbu);
            x1 = (double)rdf32(self + 0x39424u);
            x0 = fr(g, fr(g, fr(g, d2 * d2) + fr(g, d3 * d3)) + fr(g, d4 * d4));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg2 + 0xbu);
            x1 = (double)rdf32(self + 0x39424u);
            x0 = fr(g, fr(g, fr(g, d2 * d2) + fr(g, d3 * d3)) + fr(g, d4 * d4));
    COW_AT(10183dfa)
            d5 = fr(g, (double)rdf32(self + 0x39428u) * (double)rdf32(arg2 + 0xd0u));
            wrf32(sp0 - 4u, (float)(double)(float)d5);
            if (!(d5 < x1))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, x1, 2u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, x1, 2u);
                loc_4_f = (double)(float)d5;
    COW_AT(10183e13)
                x1 = loc_4_f;
            }
        }
    COW_AT(10183e19)
        if ((cow_fsw(g, x0, x1, 0u) & 0x4100u) == 0u)
        {
            loc_1c = in_ebx;
            loc_20 = in_ebp;
            loc_24 = in_esi;
            loc_28 = in_edi;
        }
        else
        {
    COW_AT(10183e2a)
            wr32(sp0 - 0x2cu, arg2 + 0xf4u);
            wr32(sp0 - 0x30u, self + 0x38fdcu);
            g->esp = sp0 - 0x28u;
            t6 = cow_call_regs(g, COW_IMG(0x10181bb0u), arg2 + 0xf4u, g->ecx, g->edx, 0, 2, self + 0x38fdcu, arg2 + 0xf4u);
            eax = t6;
    COW_AT(10183e3f)
            if (eax != 0u)
            {
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
    COW_AT(10183e47)
                if (rd32(arg2 + 0xe4u) == 0u)
                {
                    ebx = rd32(sp0 + 4u);
    COW_AT(10183e96)
                    wr32(sp0 - 0x2cu, 0u);
                    t11 = rd32(self + 0x394b0u);
                    wr32(sp0 - 0x30u, t11);
                    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x34u, t12);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(rd32(t12) + 0xb8u), rd32(t12), 3, t12, t11, 0u);
                }
                else
                {
                    eax = rd32(arg2 + 0xe4u);
                    ebx = rd32(sp0 + 4u);
    COW_AT(10183e55)
                    if (rd32(eax * 0x4cu + ebx - 0x48u) != 0u)
                    {
                        edi = rd32(eax * 0x4cu + ebx - 0x48u);
    COW_AT(10183e63)
                        wr32(sp0 - 0x2cu, 1u);
                        t7 = rd32(self + 0x394b0u);
                        wr32(sp0 - 0x30u, t7);
                        t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x34u, t8);
                        g->eax = t8;
                        g->esp = sp0 - 0x28u;
                        t9 = cow_thiscall(g, rd32(rd32(t8) + 0xb8u), t7, 3, t8, t7, 1u);
                        eax = t9;
    COW_AT(10183e7e)
                        wr32(sp0 - 0x2cu, edi + 8u);
                        t10 = rd32(self + 0x394b0u);
                        wr32(sp0 - 0x30u, t10);
                        g->esp = sp0 - 0x28u;
                        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t10, edi + 8u);
    COW_AT(10183e94)
                    }
                }
    COW_AT(10183eb0)
                if (rd32(arg2 + 0xe8u) == 0u)
                {
    COW_AT(10183efa)
                    wr32(sp0 - 0x2cu, 0u);
                    t17 = rd32(self + 0x394b4u);
                    wr32(sp0 - 0x30u, t17);
                    t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x34u, t18);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(rd32(t18) + 0xb8u), t17, 3, t18, t17, 0u);
                }
                else
                {
                    eax = rd32(arg2 + 0xe8u);
    COW_AT(10183eba)
                    if (rd32(eax * 0x4cu + ebx - 0x48u) != 0u)
                    {
                        edi = rd32(eax * 0x4cu + ebx - 0x48u);
    COW_AT(10183ec8)
                        wr32(sp0 - 0x2cu, 1u);
                        t13 = rd32(self + 0x394b4u);
                        wr32(sp0 - 0x30u, t13);
                        t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x34u, t14);
                        g->edx = t13;
                        g->esp = sp0 - 0x28u;
                        cow_thiscall(g, rd32(rd32(t14) + 0xb8u), rd32(t14), 3, t14, t13, 1u);
                        t15 = g->edx;
                        edx = t15;
    COW_AT(10183ee2)
                        wr32(sp0 - 0x2cu, edi + 8u);
                        t16 = rd32(self + 0x394b4u);
                        wr32(sp0 - 0x30u, t16);
                        g->esp = sp0 - 0x28u;
                        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t16, edi + 8u);
    COW_AT(10183ef8)
                    }
                }
    COW_AT(10183f15)
                if (rd32(arg2 + 0xecu) == 0u)
                {
    COW_AT(10183f60)
                    wr32(sp0 - 0x2cu, 0u);
                    t23 = rd32(self + 0x394b8u);
                    wr32(sp0 - 0x30u, t23);
                    t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x34u, t24);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(rd32(t24) + 0xb8u), rd32(t24), 3, t24, t23, 0u);
                }
                else
                {
                    eax = rd32(arg2 + 0xecu);
    COW_AT(10183f1f)
                    if (rd32(eax * 0x4cu + ebx - 0x48u) != 0u)
                    {
                        edi = rd32(eax * 0x4cu + ebx - 0x48u);
    COW_AT(10183f2d)
                        wr32(sp0 - 0x2cu, 1u);
                        t19 = rd32(self + 0x394b8u);
                        wr32(sp0 - 0x30u, t19);
                        t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x34u, t20);
                        g->eax = t20;
                        g->esp = sp0 - 0x28u;
                        t21 = cow_thiscall(g, rd32(rd32(t20) + 0xb8u), t19, 3, t20, t19, 1u);
                        eax = t21;
    COW_AT(10183f48)
                        wr32(sp0 - 0x2cu, edi + 8u);
                        t22 = rd32(self + 0x394b8u);
                        wr32(sp0 - 0x30u, t22);
                        g->esp = sp0 - 0x28u;
                        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t22, edi + 8u);
    COW_AT(10183f5e)
                    }
                }
    COW_AT(10183f7a)
                if (rd32(arg2 + 0xf0u) == 0u)
                {
    COW_AT(10183fc4)
                    wr32(sp0 - 0x2cu, 0u);
                    t29 = rd32(self + 0x394bcu);
                    wr32(sp0 - 0x30u, t29);
                    t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x34u, t30);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(rd32(t30) + 0xb8u), t29, 3, t30, t29, 0u);
                }
                else
                {
                    eax = rd32(arg2 + 0xf0u);
    COW_AT(10183f84)
                    if (rd32(eax * 0x4cu + ebx - 0x48u) != 0u)
                    {
                        edi = rd32(eax * 0x4cu + ebx - 0x48u);
    COW_AT(10183f92)
                        wr32(sp0 - 0x2cu, 1u);
                        t25 = rd32(self + 0x394bcu);
                        wr32(sp0 - 0x30u, t25);
                        t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x34u, t26);
                        g->edx = t25;
                        g->esp = sp0 - 0x28u;
                        cow_thiscall(g, rd32(rd32(t26) + 0xb8u), rd32(t26), 3, t26, t25, 1u);
                        t27 = g->edx;
                        edx = t27;
    COW_AT(10183fac)
                        wr32(sp0 - 0x2cu, edi + 8u);
                        t28 = rd32(self + 0x394bcu);
                        wr32(sp0 - 0x30u, t28);
                        g->esp = sp0 - 0x28u;
                        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t28, edi + 8u);
    COW_AT(10183fc2)
                    }
                }
    COW_AT(10183fdf)
                wr32(sp0 - 0x14u, 0u);
                if (rd16(arg2 + 0xd4u) == 0u)
                {
                    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
                    edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1018400e)
                    wr32(sp0 - 0x2cu, 3u);
                    wr32(sp0 - 0x30u, 0x16u);
                    wr32(sp0 - 0x34u, eax);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x16u, 3u);
    COW_AT(10184019)
                    wr32(sp0 - 0x10u, 0u);
                    loc_10 = 0u;
                }
                else
                {
                    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
                    edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10183ff9)
                    wr32(sp0 - 0x2cu, 2u);
                    wr32(sp0 - 0x30u, 0x16u);
                    wr32(sp0 - 0x34u, eax);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x16u, 2u);
    COW_AT(10184004)
                    wr32(sp0 - 0x10u, 1u);
                    loc_10 = 1u;
                }
    COW_AT(1018401d)
                if (rd16(arg2 + 0xd6u) != 0u)
                {
                    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
                    edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10184034)
                    wr32(sp0 - 0x2cu, 1u);
                    loc_2c = 1u;
                }
                else
                {
                    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
                    edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10184031)
                    wr32(sp0 - 0x2cu, 0u);
                    loc_2c = 0u;
                }
    COW_AT(10184036)
                wr32(sp0 - 0x30u, 0xfu);
                wr32(sp0 - 0x34u, eax);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t31 = cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0xfu, loc_2c);
                t32 = g->edx;
                eax = t31;
                edx = t32;
    COW_AT(1018403f)
                wr32(sp0 - 0x2cu, arg2 + 0x40u);
                wr32(sp0 - 0x30u, 0x100u);
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, arg2 + 0x40u);
                t33 = g->edx;
                edx = t33;
    COW_AT(10184053)
                t34 = rd32(rd32(sp0 - 0x18u) + 0x60u);
                t35 = rd32(sp0 - 0x18u);
                t36 = rd32(rd32(sp0 - 0x18u) + 0x60u);
                wr32(sp0 + 4u, t34);
                if (t36 == 0u)
                {
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_28 = rd32(sp0 - 0x28u);
                }
                else
                {
                    eax = t35;
                    ebx = t34;
    COW_AT(10184066)
                    wr32(sp0 - 4u, 0u);
                    if ((int32_t)rd32(eax + 0x44u) <= 0)
                    {
                        loc_1c = rd32(sp0 - 0x1cu);
                        loc_20 = rd32(sp0 - 0x20u);
                        loc_24 = rd32(sp0 - 0x24u);
                        loc_28 = rd32(sp0 - 0x28u);
                    }
                    else
                    {
    COW_AT(10184075)
                        loc_4 = 0u;
L_10184079: ;
    COW_AT(10184079)
                        wr32(sp0 - 0xcu, 0u);
                        if ((int32_t)rd32(ebx) > 0)
                        {
                            eax = rd32(ebx + 4u);
    COW_AT(1018408a)
                            wr32(sp0 - 8u, eax + 4u);
                            ebp = eax + 4u;
                            loc_c = 0u;
                            loc_8 = eax + 4u;
L_10184091: ;
    COW_AT(10184091)
                            if (rd32(ebp + 0x24u) != 0u)
                            {
    COW_AT(1018409c)
                                if (rd16(ebp + 0x22u) == 0u) goto L_101841bf;
    COW_AT(101840a7)
                                if (rd32(self + 0x50u) == 0u) goto L_101841bf;
                                ecx = rd32(self + 0x50u);
    COW_AT(101840b2)
                                if (rd32(self + 0x394a4u) == 0u)
                                {
                                    eax = rd32(self + 0x394a4u);
    COW_AT(101840fb)
                                    wr32(sp0 - 0x2cu, 0u);
                                    wr32(sp0 - 0x30u, self + 0x39340u);
                                    g->eax = eax;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x28u;
                                    t43 = cow_thiscall(g, COW_IMG(0x10188ca0u), ecx, 2, self + 0x39340u, 0u);
                                    t44 = g->edx;
                                    eax = t43;
                                    edx = t44;
    COW_AT(10184109)
                                    wr32(sp0 - 0x2cu, self + 0x39340u);
                                    t45 = rd32(self + 0x394a8u);
                                    wr32(sp0 - 0x30u, t45);
                                    g->eax = eax;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x28u;
                                    t46 = cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t45, self + 0x39340u);
                                    t47 = g->edx;
                                    eax = t46;
                                    edx = t47;
                                }
                                else
                                {
                                    eax = rd32(self + 0x394a4u);
    COW_AT(101840bc)
                                    wr32(sp0 - 0x2cu, self + 0x393a8u);
                                    wr32(sp0 - 0x30u, self + 0x39340u);
                                    g->eax = eax;
                                    g->esp = sp0 - 0x28u;
                                    t37 = cow_thiscall(g, COW_IMG(0x10188b70u), ecx, 2, self + 0x39340u, self + 0x393a8u);
                                    eax = t37;
    COW_AT(101840cf)
                                    wr32(sp0 - 0x2cu, self + 0x39340u);
                                    t38 = rd32(self + 0x394a8u);
                                    wr32(sp0 - 0x30u, t38);
                                    g->edx = t38;
                                    g->esp = sp0 - 0x28u;
                                    cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t38, self + 0x39340u);
                                    t39 = g->edx;
                                    edx = t39;
    COW_AT(101840e2)
                                    wr32(sp0 - 0x2cu, self + 0x393a8u);
                                    t40 = rd32(self + 0x394acu);
                                    wr32(sp0 - 0x30u, t40);
                                    g->eax = t40;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x28u;
                                    t41 = cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t40, self + 0x393a8u);
                                    t42 = g->edx;
                                    eax = t41;
                                    edx = t42;
    COW_AT(101840f5)
                                    ebx = rd32(sp0 + 4u);
                                }
    COW_AT(1018411c)
                                wr32(sp0 - 0x2cu, 0u);
                                wr32(sp0 - 0x30u, self + 0x39410u);
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, COW_IMG(0x10188e00u), rd32(self + 0x50u), 2, self + 0x39410u, 0u);
    COW_AT(1018412d)
                                t48 = rd32(self + 0x39410u);
                                wr32(sp0 - 0x2cu, t48);
                                wr32(sp0 - 0x30u, 0x8bu);
                                t49 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x34u, t49);
                                g->edx = t48;
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t49, 0x8bu, t48);
                                t50 = g->edx;
                                edx = t50;
    COW_AT(10184147)
                                wr32(sp0 - 0x2cu, 0u);
                                wr32(sp0 - 0x30u, self + 0x3941cu);
                                wr32(sp0 - 0x34u, self + 0x39418u);
                                wr32(sp0 - 0x38u, self + 0x39414u);
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, COW_IMG(0x10189120u), rd32(self + 0x50u), 4, self + 0x39414u, self + 0x39418u, self + 0x3941cu, 0u);
    COW_AT(10184166)
                                t51 = rd32(self + 0x39414u);
                                wr32(sp0 - 0x2cu, t51);
                                wr32(sp0 - 0x30u, 0x22u);
                                t52 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x34u, t52);
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t52, 0x22u, t51);
    COW_AT(1018417d)
                                t53 = rd32(self + 0x3925cu);
                                wr32(sp0 - 0x2cu, t53);
                                wr32(sp0 - 0x30u, 0x24u);
                                t54 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x34u, t54);
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, rd32(rd32(t54) + 0xc8u), rd32(t54), 3, t54, 0x24u, t53);
    COW_AT(10184197)
                                t55 = rd32(self + 0x39258u);
                                wr32(sp0 - 0x2cu, t55);
                                wr32(sp0 - 0x30u, 0x25u);
                                t56 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x34u, t56);
                                g->edx = t55;
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, rd32(rd32(t56) + 0xc8u), rd32(t56), 3, t56, 0x25u, t55);
                                t57 = g->edx;
                                edx = t57;
    COW_AT(101841b1)
                                t58 = rd32(self + 0x50u);
                                wr32(self + 0x39138u, t58);
                                loc_4 = rd32(sp0 - 4u);
                                loc_c = rd32(sp0 - 0xcu);
L_10184389: ;
    COW_AT(10184389)
                                if (rd32(ebp) == 0u)
                                {
    COW_AT(101843b5)
                                    wr32(sp0 - 0x2cu, 0u);
                                    wr32(sp0 - 0x30u, 0u);
                                    t91 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                    wr32(sp0 - 0x34u, t91);
                                    g->esp = sp0 - 0x28u;
                                    cow_thiscall(g, rd32(rd32(t91) + 0xf4u), rd32(t91), 3, t91, 0u, 0u);
                                }
                                else
                                {
                                    eax = rd32(ebp);
    COW_AT(10184390)
                                    if (rd32(eax + 0x40u) == 0u)
                                    {
    COW_AT(1018439b)
                                        eax = rd32(eax + 0x44u);
                                    }
                                    else
                                    {
                                        ecx = rd32(eax + 0x40u);
    COW_AT(10184397)
                                        eax = ecx;
                                    }
    COW_AT(1018439e)
                                    wr32(sp0 - 0x2cu, eax);
                                    wr32(sp0 - 0x30u, 0u);
                                    t90 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                    wr32(sp0 - 0x34u, t90);
                                    g->esp = sp0 - 0x28u;
                                    cow_thiscall(g, rd32(rd32(t90) + 0xf4u), t90, 3, t90, 0u, eax);
    COW_AT(101843b3)
                                }
    COW_AT(101843ca)
                                t92 = (uint32_t)(int16_t)rd16(ebp + 0x1cu);
                                wr32(sp0 - 0x2cu, t92);
                                wr32(sp0 - 0x30u, 0x1bu);
                                t93 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x34u, t93);
                                g->edx = t92;
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t93, 0x1bu, t92);
                                t94 = g->edx;
                                edx = t94;
    COW_AT(101843e3)
                                if ((uint32_t)(int16_t)rd16(ebp + 0x20u) != rd32(sp0 - 0x14u))
                                {
                                    eax = (uint32_t)(int16_t)rd16(ebp + 0x20u);
    COW_AT(101843ed)
                                    wr32(sp0 - 0x14u, eax);
                                    if (eax == 0u)
                                    {
                                        loc_14 = eax;
    COW_AT(10184401)
                                        if (rd32(sp0 - 0x10u) == 0u)
                                        {
                                            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10184416)
                                            wr32(sp0 - 0x2cu, 3u);
                                            loc_2c = 3u;
                                        }
                                        else
                                        {
                                            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10184412)
                                            wr32(sp0 - 0x2cu, 2u);
                                            loc_2c = 2u;
                                        }
                                    }
                                    else
                                    {
                                        loc_14 = eax;
    COW_AT(101843f5)
                                        wr32(sp0 - 0x2cu, 1u);
                                        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                        loc_2c = 1u;
                                    }
    COW_AT(10184418)
                                    wr32(sp0 - 0x30u, 0x16u);
                                    wr32(sp0 - 0x34u, eax);
                                    g->esp = sp0 - 0x28u;
                                    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x16u, loc_2c);
                                }
    COW_AT(10184423)
                                t95 = rd32(rd32(sp0 - 0x18u) + 0x20u);
                                wr32(sp0 - 0x2cu, t95);
                                t96 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x30u, t96);
                                t97 = rd32(sp0 - 0x18u);
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, rd32(rd32(t96) + 0x130u), rd32(t96), 2, t96, t95);
                                edi = t97;
    COW_AT(1018443d)
                                t98 = rd32(edi + 0x24u);
                                wr32(sp0 - 0x2cu, t98);
                                t99 = rd32(ebp + 0x24u);
                                wr32(sp0 - 0x30u, t99);
                                wr32(sp0 - 0x34u, 0u);
                                t100 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x38u, t100);
                                g->edx = t99;
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, rd32(rd32(t100) + 0x14cu), rd32(t100), 4, t100, 0u, t99, t98);
                                t101 = g->edx;
                                edx = t101;
    COW_AT(10184458)
                                t102 = rd32(ebp + 0x14u);
                                wr32(sp0 - 0x2cu, t102);
                                wr32(sp0 - 0x30u, 0u);
                                t103 = rd32(edi + 0x2cu);
                                wr32(sp0 - 0x34u, t103);
                                g->ebx = ebx;
                                g->edx = edx;
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, t103, 0u, t102);
                                t104 = g->edx;
                                edx = t104;
                                loc_4 = rd32(sp0 - 4u);
                                loc_c = rd32(sp0 - 0xcu);
                            }
    COW_AT(1018446d)
                            wr32(sp0 - 0xcu, loc_c + 1u);
                            wr32(sp0 - 8u, ebp + 0xc0u);
                            if ((int32_t)(loc_c + 1u) < (int32_t)rd32(ebx))
                            {
                                loc_c = loc_c + 1u;
                                loc_8 = ebp + 0xc0u;
                                ebp = ebp + 0xc0u;
                                goto L_10184091;
                            }
                        }
    COW_AT(1018448a)
                        wr32(sp0 - 4u, loc_4 + 1u);
                        t105 = rd32(sp0 - 0x18u);
                        t106 = rd32(rd32(sp0 - 0x18u) + 0x44u);
                        wr32(sp0 + 4u, ebx + 0x24u);
                        if ((int32_t)(loc_4 + 1u) < (int32_t)t106)
                        {
                            edx = t105;
                            ebx = ebx + 0x24u;
                            loc_4 = loc_4 + 1u;
                            goto L_10184077;
                        }
                        loc_1c = rd32(sp0 - 0x1cu);
                        loc_20 = rd32(sp0 - 0x20u);
                        loc_24 = rd32(sp0 - 0x24u);
                        loc_28 = rd32(sp0 - 0x28u);
                    }
                }
            }
        }
    }
    COW_AT(101844a9)
    g->ebx = loc_1c;
    g->esi = loc_24;
    g->edi = loc_28;
    g->ebp = loc_20;
    return;
L_10184077: ;
    COW_AT(10184077)
    goto L_10184079;
L_101841bf: ;
    COW_AT(101841bf)
    if (rd32(self + 0x39138u) != rd32(arg2 + 0xe0u))
    {
        ecx = rd32(arg2 + 0xe0u);
    COW_AT(101841d7)
        wr32(self + 0x39138u, ecx);
        if (ecx == 0u)
        {
    COW_AT(101842e0)
            wr32(sp0 - 0x2cu, self + 0x39180u);
            t79 = rd32(self + 0x394a8u);
            wr32(sp0 - 0x30u, t79);
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t79, self + 0x39180u);
    COW_AT(101842f9)
            if (rd32(self + 0x394a4u) != 0u)
            {
    COW_AT(10184303)
                wr32(sp0 - 0x2cu, self + 0x391e8u);
                t80 = rd32(self + 0x394acu);
                wr32(sp0 - 0x30u, t80);
                g->esp = sp0 - 0x28u;
                cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t80, self + 0x391e8u);
            }
    COW_AT(1018431c)
            t81 = rd32(self + 0x39250u);
            wr32(sp0 - 0x2cu, t81);
            wr32(sp0 - 0x30u, 0x8bu);
            t82 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t82);
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), t81, 3, t82, 0x8bu, t81);
    COW_AT(1018433a)
            t83 = rd32(self + 0x39254u);
            wr32(sp0 - 0x2cu, t83);
            wr32(sp0 - 0x30u, 0x22u);
            t84 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t84);
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t84, 0x22u, t83);
    COW_AT(10184355)
            t85 = rd32(self + 0x3925cu);
            wr32(sp0 - 0x2cu, t85);
            wr32(sp0 - 0x30u, 0x24u);
            t86 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t86);
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, rd32(rd32(t86) + 0xc8u), rd32(t86), 3, t86, 0x24u, t85);
    COW_AT(1018436f)
            t87 = rd32(self + 0x39258u);
            wr32(sp0 - 0x2cu, t87);
            wr32(sp0 - 0x30u, 0x25u);
            t88 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t88);
            g->edx = t87;
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, rd32(rd32(t88) + 0xc8u), rd32(t88), 3, t88, 0x25u, t87);
            t89 = g->edx;
            edx = t89;
            loc_4 = rd32(sp0 - 4u);
            loc_c = rd32(sp0 - 0xcu);
        }
        else
        {
    COW_AT(101841e5)
            if (rd32(self + 0x394a4u) == 0u)
            {
                eax = rd32(self + 0x394a4u);
    COW_AT(1018421f)
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, self + 0x39260u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t63 = cow_thiscall(g, COW_IMG(0x10188ca0u), ecx, 2, self + 0x39260u, 0u);
                t64 = g->edx;
                eax = t63;
                edx = t64;
    COW_AT(1018422d)
                wr32(sp0 - 0x2cu, self + 0x39260u);
                t65 = rd32(self + 0x394a8u);
                wr32(sp0 - 0x30u, t65);
                loc_2c = self + 0x39260u;
                loc_30 = t65;
            }
            else
            {
                eax = rd32(self + 0x394a4u);
    COW_AT(101841ef)
                wr32(sp0 - 0x2cu, self + 0x392c8u);
                wr32(sp0 - 0x30u, self + 0x39260u);
                g->eax = eax;
                g->esp = sp0 - 0x28u;
                t59 = cow_thiscall(g, COW_IMG(0x10188b70u), ecx, 2, self + 0x39260u, self + 0x392c8u);
                eax = t59;
    COW_AT(10184202)
                wr32(sp0 - 0x2cu, self + 0x39260u);
                t60 = rd32(self + 0x394a8u);
                wr32(sp0 - 0x30u, t60);
                g->edx = t60;
                g->esp = sp0 - 0x28u;
                cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t60, self + 0x39260u);
                t61 = g->edx;
                edx = t61;
    COW_AT(10184215)
                wr32(sp0 - 0x2cu, self + 0x392c8u);
                t62 = rd32(self + 0x394acu);
                wr32(sp0 - 0x30u, t62);
                eax = t62;
                loc_2c = self + 0x392c8u;
                loc_30 = t62;
            }
    COW_AT(10184235)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t66 = cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, loc_30, loc_2c);
            t67 = g->edx;
            eax = t66;
            edx = t67;
    COW_AT(10184240)
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, self + 0x39330u);
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x10188e00u), rd32(self + 0x39138u), 2, self + 0x39330u, 0u);
    COW_AT(10184254)
            t68 = rd32(self + 0x39330u);
            wr32(sp0 - 0x2cu, t68);
            wr32(sp0 - 0x30u, 0x8bu);
            t69 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t69);
            g->eax = t69;
            g->edx = t68;
            g->esp = sp0 - 0x28u;
            t70 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t69, 0x8bu, t68);
            t71 = g->edx;
            eax = t70;
            edx = t71;
    COW_AT(1018426e)
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, self + 0x3933cu);
            wr32(sp0 - 0x34u, self + 0x39338u);
            wr32(sp0 - 0x38u, self + 0x39334u);
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x10189120u), rd32(self + 0x39138u), 4, self + 0x39334u, self + 0x39338u, self + 0x3933cu, 0u);
    COW_AT(10184290)
            t72 = rd32(self + 0x39334u);
            wr32(sp0 - 0x2cu, t72);
            wr32(sp0 - 0x30u, 0x22u);
            t73 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t73);
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, rd32(rd32(t73) + 0xc8u), rd32(t73), 3, t73, 0x22u, t72);
    COW_AT(101842a7)
            t74 = rd32(self + 0x3933cu);
            wr32(sp0 - 0x2cu, t74);
            wr32(sp0 - 0x30u, 0x24u);
            t75 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t75);
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, rd32(rd32(t75) + 0xc8u), rd32(t75), 3, t75, 0x24u, t74);
    COW_AT(101842bd)
            t76 = rd32(self + 0x39338u);
            wr32(sp0 - 0x2cu, t76);
            wr32(sp0 - 0x30u, 0x25u);
            t77 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t77);
            g->edx = t76;
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, rd32(rd32(t77) + 0xc8u), rd32(t77), 3, t77, 0x25u, t76);
            t78 = g->edx;
            edx = t78;
    COW_AT(101842d3)
            ebx = rd32(sp0 + 4u);
            ebp = rd32(sp0 - 8u);
            loc_4 = rd32(sp0 - 4u);
            loc_c = rd32(sp0 - 0xcu);
        }
    }
    goto L_10184389;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10183da0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10183dbcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183dfau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183e13u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183e19u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183e2au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183e3fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183e47u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183e55u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183e63u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183e7eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183e94u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183e96u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183eb0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183ebau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183ec8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183ee2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183ef8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183efau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183f15u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183f1fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183f2du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183f48u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183f5eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183f60u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183f7au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183f84u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183f92u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183facu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183fc2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183fc4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183fdfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183ff9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        g->edi = 0u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10184004u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018400eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        g->edi = 0u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10184019u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018401du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10184031u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10184034u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10184036u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018403fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10184053u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10184066u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10184075u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10184077u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184079u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018408au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10184091u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1018409cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101840a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101840b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101840bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101840cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebx = self + 0x39340u;
        g->edi = self + 0x393a8u;
        (void)sp0;
        return 1;
    }
    case 0x101840e2u:
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
        g->edi = self + 0x393a8u;
        (void)sp0;
        return 1;
    }
    case 0x101840f5u:
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
    case 0x101840fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184109u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->edi = self + 0x39340u;
        (void)sp0;
        return 1;
    }
    case 0x1018411cu:
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
    case 0x1018412du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->edi = self + 0x39410u;
        (void)sp0;
        return 1;
    }
    case 0x10184147u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184166u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->edi = self + 0x39414u;
        (void)sp0;
        return 1;
    }
    case 0x1018417du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184197u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101841b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101841bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101841d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101841e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101841efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184202u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebx = self + 0x39260u;
        g->edi = self + 0x392c8u;
        (void)sp0;
        return 1;
    }
    case 0x10184215u:
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
        g->edi = self + 0x392c8u;
        (void)sp0;
        return 1;
    }
    case 0x1018421fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1018422du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->edi = self + 0x39260u;
        (void)sp0;
        return 1;
    }
    case 0x10184235u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10184240u:
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
    case 0x10184254u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->edi = self + 0x39330u;
        (void)sp0;
        return 1;
    }
    case 0x1018426eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184290u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebx = self + 0x39338u;
        g->ebp = self + 0x39334u;
        g->edi = self + 0x3933cu;
        (void)sp0;
        return 1;
    }
    case 0x101842a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        g->ebx = self + 0x39338u;
        g->edi = self + 0x3933cu;
        (void)sp0;
        return 1;
    }
    case 0x101842bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        g->ebx = self + 0x39338u;
        (void)sp0;
        return 1;
    }
    case 0x101842d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101842e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101842f9u:
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
    case 0x10184303u:
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
    case 0x1018431cu:
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
    case 0x1018433au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184355u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1018436fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184389u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184390u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184397u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1018439bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1018439eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101843b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101843b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101843cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101843e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101843edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101843f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184401u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184412u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184416u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10184418u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10184423u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1018443du:
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
    case 0x10184458u:
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
    case 0x1018446du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1018448au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101844a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10183da0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10183da0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
