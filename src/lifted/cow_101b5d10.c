/* f_0x101b5d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101b5d10(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_420;
    uint32_t loc_424;
    uint32_t loc_428;
    uint32_t loc_42c;
    uint32_t loc_430;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    unsigned zf;
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
    cow_frame(g, sp0, 1080u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b5d37u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b5d37;
    case 0x101b5d46u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b5d46;
    case 0x101b5d54u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b5d54;
    case 0x101b5d64u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b5d64;
    case 0x101b5d6fu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d6f;
    case 0x101b5d82u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d82;
    case 0x101b5d97u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d97;
    case 0x101b5d99u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d99;
    case 0x101b5da7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5da7;
    case 0x101b5dd5u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5dd5;
    case 0x101b5de0u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5de0;
    case 0x101b5e00u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e00;
    case 0x101b5e05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e05;
    case 0x101b5e20u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b5e20;
    case 0x101b5e2bu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e2b;
    case 0x101b5e42u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101b5e42;
    case 0x101b5e51u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e51;
    case 0x101b5e75u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e75;
    case 0x101b5e84u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e84;
    case 0x101b5e9au: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b5e9a;
    case 0x101b5eaau: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b5eaa;
    case 0x101b5eb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5eb3;
    case 0x101b5ec6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5ec6;
    case 0x101b5ed7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5ed7;
    case 0x101b5ee5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5ee5;
    case 0x101b5f0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f0f;
    case 0x101b5f3cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b5f3c;
    case 0x101b5f45u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f45;
    case 0x101b5f54u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101b5f54;
    case 0x101b5f63u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f63;
    case 0x101b5f72u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f72;
    case 0x101b5f83u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f83;
    case 0x101b5fadu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5fad;
    case 0x101b5fcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); loc_420 = rd32(sp0 - 0x420u); goto E_101b5fcb;
    case 0x101b5fdau: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b5fda;
    case 0x101b5fe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5fe5;
    case 0x101b5ff0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5ff0;
    case 0x101b600cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b600c;
    case 0x101b6021u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->esi - 0x7e30u; goto E_101b6021;
    case 0x101b6039u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b6039;
    case 0x101b6044u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6044;
    case 0x101b606eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b606e;
    case 0x101b6079u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6079;
    case 0x101b6095u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6095;
    case 0x101b60aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->esi - 0x7e30u; goto E_101b60aa;
    case 0x101b60c4u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b60c4;
    case 0x101b60d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60d3;
    case 0x101b60e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60e0;
    case 0x101b60eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60ea;
    case 0x101b60f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60f2;
    case 0x101b60fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60fa;
    case 0x101b6104u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6104;
    case 0x101b610eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b610e;
    case 0x101b6118u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6118;
    case 0x101b617cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b617c;
    case 0x101b6185u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6185;
    case 0x101b6190u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6190;
    case 0x101b61acu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b61ac;
    case 0x101b61bfu: eax = g->eax; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b61bf;
    case 0x101b61cbu: eax = g->eax; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b61cb;
    case 0x101b620bu: eax = g->eax; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b620b;
    case 0x101b623bu: eax = g->eax; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b623b;
    case 0x101b626bu: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b626b;
    case 0x101b6276u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6276;
    case 0x101b628eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b628e;
    case 0x101b6297u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6297;
    case 0x101b62aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b62aa;
    case 0x101b62ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b62cc;
    case 0x101b62dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b62db;
    case 0x101b6303u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b6303;
    case 0x101b6312u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6312;
    case 0x101b631bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b631b;
    case 0x101b632cu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b632c;
    case 0x101b634cu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b634c;
    case 0x101b6359u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6359;
    case 0x101b6381u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6381;
    case 0x101b6390u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6390;
    case 0x101b63b8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b63b8;
    case 0x101b63c6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b63c6;
    case 0x101b63dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b63db;
    case 0x101b63e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b63e6;
    case 0x101b6402u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6402;
    case 0x101b641du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b641d;
    case 0x101b6445u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0x7e30u; goto E_101b6445;
    case 0x101b645du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b645d;
    case 0x101b646au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b646a;
    case 0x101b6479u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6479;
    case 0x101b6495u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b6495;
    case 0x101b64a3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b64a3;
    case 0x101b64b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b64b8;
    case 0x101b64c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b64c3;
    case 0x101b64dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b64df;
    case 0x101b64fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b64fa;
    case 0x101b6522u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0x7e30u; goto E_101b6522;
    case 0x101b653au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b653a;
    case 0x101b6547u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b6547;
    case 0x101b6556u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6556;
    case 0x101b6572u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b6572;
    case 0x101b657eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b657e;
    case 0x101b6591u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6591;
    case 0x101b659cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b659c;
    case 0x101b65c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b65c3;
    case 0x101b65dau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b65da;
    case 0x101b65f1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b65f1;
    case 0x101b65feu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b65fe;
    case 0x101b660du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b660d;
    case 0x101b6624u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b6624;
    case 0x101b6632u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b6632;
    case 0x101b6647u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6647;
    case 0x101b6652u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6652;
    case 0x101b6679u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0x7e30u; goto E_101b6679;
    case 0x101b6696u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6696;
    case 0x101b66b3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b66b3;
    case 0x101b66c0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b66c0;
    case 0x101b66cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b66cf;
    case 0x101b66ecu: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b66ec;
    case 0x101b6704u: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b6704;
    case 0x101b671cu: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebx = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_101b671c;
    case 0x101b6727u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6727;
    case 0x101b6732u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6732;
    case 0x101b674au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b674a;
    case 0x101b674cu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b674c;
    case 0x101b6751u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); loc_420 = rd32(sp0 - 0x420u); goto E_101b6751;
    default: break;
    }
#endif

    COW_AT(101b5d10)
    wr32(sp0 - 0x420u, in_ebx);
    wr32(sp0 - 0x424u, in_esi);
    wr32(sp0 - 0x428u, in_edi);
    wr8(self + 0xef22u, 0u);
    if ((uint8_t)arg1 - 8u > 0x64u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    COW_AT(101b5d37)
    t1 = rd32(COW_IMG(0x101b6764u) + rd8(COW_IMG(0x101b67a0u) + (uint8_t)arg1 - 8u) * 4u);
    switch (t1 - RD)
    {
    case 0x101b5d46u: goto L_101b5d46;
    case 0x101b5e9au: goto L_101b5e9a;
    case 0x101b5fdau: goto L_101b5fda;
    case 0x101b6039u: goto L_101b6039;
    case 0x101b60c4u: goto L_101b60c4;
    case 0x101b626bu: goto L_101b626b;
    case 0x101b6303u: goto L_101b6303;
    case 0x101b63b8u: goto L_101b63b8;
    case 0x101b6495u: goto L_101b6495;
    case 0x101b6572u: goto L_101b6572;
    case 0x101b6624u: goto L_101b6624;
    case 0x101b66ecu: goto L_101b66ec;
    case 0x101b6704u: goto L_101b6704;
    case 0x101b671cu: goto L_101b671c;
    case 0x101b6751u: loc_420 = in_ebx; loc_424 = in_esi; loc_428 = in_edi; goto L_101b6751;
    default: rt_fatal(g, COW_IMG(0x101b5d3fu), "switch");
    }
    return 0;
L_101b5d46: ;
    COW_AT(101b5d46)
    if (rd8(self + 0xf11cu) == 0u)
    {
        eax = ((uint8_t)arg1 - 8u & 0xffffff00u) | rd8(self + 0xf11cu);
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b5fcb;
    }
    eax = ((uint8_t)arg1 - 8u & 0xffffff00u) | rd8(self + 0xf11cu);
    COW_AT(101b5d54)
    if (rd8(self + 0xf0ecu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
        goto L_101b5e20;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
    COW_AT(101b5d64)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t146 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t147 = g->edx;
    if ((uint8_t)t146 != 0u)
    {
        eax = t146;
        edx = t147;
        goto L_101b5dd5;
    }
    eax = t146;
    COW_AT(101b5d6f)
    wr32(sp0 - 0x42cu, in_ebp);
    t148 = rd32(self);
    wr8(self + 0x8c81u, 1u);
    g->eax = eax;
    g->edx = t148;
    g->esp = sp0 - 0x42cu;
    t149 = cow_thiscall(g, rd32(t148 + 0x64u), self, 0);
    t150 = g->edx;
    if (t149 == 0u)
    {
        eax = t149;
        edx = t150;
        ebp = t149;
    COW_AT(101b5d97)
        ecx = 0u;
    }
    else
    {
        edx = t150;
        ebp = t149;
    COW_AT(101b5d82)
        g->eax = rd32(self);
        g->edx = edx;
        t151 = rd32(self);
        g->esp = sp0 - 0x42cu;
        t152 = cow_thiscall(g, rd32(t151 + 0x64u), self, 0);
        t153 = g->ecx;
        t154 = g->edx;
        edi = t152;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        ecx = ~ecx - 1u;
        edx = t154;
    }
    COW_AT(101b5d99)
    wr32(sp0 - 0x430u, ecx);
    wr32(sp0 - 0x434u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x42cu;
    t155 = cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, ebp, ecx);
    t156 = g->edx;
    if ((int32_t)t155 < 0)
    {
        eax = t155;
        ebp = rd32(sp0 - 0x42cu);
        goto L_101b5e05;
    }
    eax = t155;
    edx = t156;
    ebp = rd32(sp0 - 0x42cu);
    COW_AT(101b5da7)
    wr32(sp0 - 0x42cu, 0u);
    wr32(sp0 - 0x430u, 0u);
    wr32(sp0 - 0x434u, COW_IMG(0x10377cbcu));
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t157 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    cow_thiscall(g, rd32(rd32(rd32(self + 0xf104u))), rd32(self + 0xf104u), 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = ebp;
    return 1u;
L_101b5dd5: ;
    COW_AT(101b5dd5)
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        goto L_101b5e00;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(101b5de0)
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t158 = cow_thiscall(g, COW_IMG(0x101b70d0u), self, 0);
    cow_thiscall(g, rd32(rd32(rd32(self + 0xf104u))), rd32(self + 0xf104u), 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b5e00: ;
    COW_AT(101b5e00)
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t159 = cow_thiscall(g, COW_IMG(0x101b70a0u), self, 0);
    eax = t159;
    ebp = in_ebp;
L_101b5e05: ;
    COW_AT(101b5e05)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xf104u))), rd32(self + 0xf104u), 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = ebp;
    return 1u;
L_101b5e20: ;
    COW_AT(101b5e20)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t160 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t161 = g->edx;
    if ((uint8_t)t160 != 0u)
    {
        eax = t160;
        edx = t161;
        goto L_101b5e75;
    }
    edx = t161;
    COW_AT(101b5e2b)
    wr8(self + 0x8c81u, 1u);
    wr32(sp0 - 0x42cu, sp0 - 0x41cu);
    g->eax = sp0 - 0x41cu;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t162 = cow_thiscall(g, COW_IMG(0x101b7c20u), self, 1, sp0 - 0x41cu);
    t163 = g->edx;
    wr32(sp0 - 0x42cu, t162);
    wr32(sp0 - 0x430u, sp0 - 0x41cu);
    eax = t162;
    edx = t163;
    loc_42c = t162;
    loc_430 = sp0 - 0x41cu;
L_101b5e42: ;
    COW_AT(101b5e42)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t164 = cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, loc_430, loc_42c);
    t165 = g->edx;
    if ((int32_t)t164 < 0)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    eax = t164;
    edx = t165;
    COW_AT(101b5e51)
    wr32(sp0 - 0x42cu, 0u);
    wr32(sp0 - 0x430u, 0u);
    wr32(sp0 - 0x434u, COW_IMG(0x10377cbcu));
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b5e75: ;
    COW_AT(101b5e75)
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        goto L_101b674c;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(101b5e84)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b70d0u), self, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b5e9a: ;
    COW_AT(101b5e9a)
    if (rd8(self + 0xf0ecu) != 0u)
    {
        eax = ((uint8_t)arg1 - 8u & 0xffffff00u) | rd8(self + 0xf0ecu);
        goto L_101b5f3c;
    }
    eax = ((uint8_t)arg1 - 8u & 0xffffff00u) | rd8(self + 0xf0ecu);
    COW_AT(101b5eaa)
    g->eax = eax;
    g->edx = rd32(self);
    t118 = rd32(self);
    g->esp = sp0 - 0x428u;
    t119 = cow_thiscall(g, rd32(t118 + 0x20u), self, 0);
    t120 = g->edx;
    if ((uint8_t)t119 == 0u)
    {
        eax = t119;
        edx = t120;
        goto L_101b5ec6;
    }
    edx = t120;
    COW_AT(101b5eb3)
    t121 = rd32(self + 0x8c70u);
    wr32(sp0 - 0x42cu, t121);
    wr32(sp0 - 0x430u, self + 0x8aacu);
    eax = self + 0x8aacu;
    loc_42c = t121;
    loc_430 = self + 0x8aacu;
L_101b5f54: ;
    COW_AT(101b5f54)
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t135 = cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, loc_430, loc_42c);
    if ((int32_t)t135 >= 0)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    eax = t135;
    COW_AT(101b5f63)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 0xffffffffu;
L_101b5ec6: ;
    COW_AT(101b5ec6)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t122 = cow_thiscall(g, COW_IMG(0x101ac4d0u), self + 0x7e30u, 0);
    t123 = g->edx;
    if ((uint8_t)t122 == 0u)
    {
        eax = t122;
        edx = t123;
        goto L_101b5f0f;
    }
    eax = t122;
    edx = t123;
    COW_AT(101b5ed7)
    if (rd8(self + 0xf11du) != 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xf11du);
    COW_AT(101b5ee5)
    wr32(sp0 - 0x42cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t124 = cow_call_regs(g, COW_IMG(0x101ac210u), eax, self + 0x7e30u, g->edx, 1, 1, 1u);
    t125 = g->edx;
    wr32(sp0 - 0x430u, t124);
    g->edx = t125;
    g->esp = sp0 - 0x42cu;
    t126 = cow_thiscall_cdecl(g, COW_IMG(0x101ac1d0u), self + 0x7e30u, 1, t124);
    t127 = g->edx;
    wr32(sp0 - 0x434u, t126);
    g->esp = sp0 - 0x428u;
    cow_call_regs(g, COW_IMG(0x101b6e40u), t126, self, t127, 0, 3, t126, rd32(sp0 - 0x430u), 1u);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b5f0f: ;
    COW_AT(101b5f0f)
    t128 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t128);
    wr32(sp0 - 0x430u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x434u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x434u;
    t129 = cow_thiscall(g, rd32(self + 0x8c78u), t128, 0);
    g->esp = sp0 - 0x428u;
    t130 = cow_thiscall(g, rd32(rd32(self) + 0x54u), self, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 0xffffffffu;
L_101b5f3c: ;
    COW_AT(101b5f3c)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t131 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t132 = g->edx;
    if ((uint8_t)t131 == 0u)
    {
        eax = t131;
        edx = t132;
        goto L_101b5f72;
    }
    eax = t131;
    edx = t132;
    COW_AT(101b5f45)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t133 = cow_thiscall(g, COW_IMG(0x101ad0d0u), self + 0x7e30u, 0);
    t134 = g->edx;
    wr32(sp0 - 0x42cu, 0u);
    wr32(sp0 - 0x430u, 0u);
    eax = t133;
    edx = t134;
    loc_42c = 0u;
    loc_430 = 0u;
    goto L_101b5f54;
L_101b5f72: ;
    COW_AT(101b5f72)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t136 = cow_thiscall(g, COW_IMG(0x101ac4d0u), self + 0x7e30u, 0);
    t137 = g->ecx;
    t138 = g->edx;
    if ((uint8_t)t136 == 0u)
    {
        ecx = t137;
        edx = t138;
        goto L_101b5fad;
    }
    eax = t136;
    edx = t138;
    COW_AT(101b5f83)
    wr32(sp0 - 0x42cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t139 = cow_call_regs(g, COW_IMG(0x101ac210u), eax, self + 0x7e30u, g->edx, 1, 1, 1u);
    t140 = g->edx;
    wr32(sp0 - 0x430u, t139);
    g->edx = t140;
    g->esp = sp0 - 0x42cu;
    t141 = cow_thiscall_cdecl(g, COW_IMG(0x101ac1d0u), self + 0x7e30u, 1, t139);
    t142 = g->edx;
    wr32(sp0 - 0x434u, t141);
    g->esp = sp0 - 0x428u;
    cow_call_regs(g, COW_IMG(0x101b6e40u), t141, self, t142, 0, 3, t141, rd32(sp0 - 0x430u), 1u);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b5fad: ;
    COW_AT(101b5fad)
    t143 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t143);
    wr32(sp0 - 0x430u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x434u, 0u);
    g->eax = t143;
    g->esp = sp0 - 0x434u;
    t144 = cow_thiscall(g, rd32(self + 0x8c78u), ecx, 0);
    g->esp = sp0 - 0x428u;
    t145 = cow_thiscall(g, rd32(rd32(self) + 0x54u), self, 0);
    eax = t145;
    loc_420 = rd32(sp0 - 0x420u);
    loc_424 = rd32(sp0 - 0x424u);
    loc_428 = rd32(sp0 - 0x428u);
L_101b5fcb: ;
    COW_AT(101b5fcb)
    g->ebx = loc_420;
    g->esi = loc_424;
    g->edi = loc_428;
    g->ebp = in_ebp;
    return 0xffffffffu;
L_101b5fda: ;
    COW_AT(101b5fda)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t111 = cow_call_regs(g, COW_IMG(0x101b6e90u), (uint8_t)arg1 - 8u, self, g->edx, 1, 0);
    t112 = g->edx;
    if ((uint8_t)t111 != 0u)
    {
        edx = t112;
        goto L_101b6044;
    }
    eax = t111;
    COW_AT(101b5fe5)
    g->eax = eax;
    g->edx = rd32(self);
    t113 = rd32(self);
    g->esp = sp0 - 0x428u;
    t114 = cow_thiscall(g, rd32(t113 + 0x20u), self, 0);
    t115 = g->edx;
    if ((uint8_t)t114 == 0u)
    {
        eax = t114;
        edx = t115;
        goto L_101b600c;
    }
    eax = t114;
    edx = t115;
    COW_AT(101b5ff0)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b4d30u), self + 0x8aacu, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b600c: ;
    COW_AT(101b600c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t116 = cow_thiscall(g, COW_IMG(0x101ac4d0u), self + 0x7e30u, 0);
    t117 = g->edx;
    if ((uint8_t)t116 == 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    eax = t116;
    edx = t117;
    COW_AT(101b6021)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101abef0u), self + 0x7e30u, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6039: ;
    COW_AT(101b6039)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t104 = cow_call_regs(g, COW_IMG(0x101b6e90u), (uint8_t)arg1 - 8u, self, g->edx, 1, 0);
    t105 = g->edx;
    if ((uint8_t)t104 == 0u)
    {
        eax = t104;
        goto L_101b606e;
    }
    edx = t105;
L_101b6044: ;
    COW_AT(101b6044)
    wr32(sp0 - 0x42cu, arg3);
    wr32(sp0 - 0x430u, arg2);
    wr32(sp0 - 0x434u, 0x1bu);
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x1bu, arg2, arg3);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b606e: ;
    COW_AT(101b606e)
    g->eax = eax;
    g->edx = rd32(self);
    t106 = rd32(self);
    g->esp = sp0 - 0x428u;
    t107 = cow_thiscall(g, rd32(t106 + 0x20u), self, 0);
    t108 = g->edx;
    if ((uint8_t)t107 == 0u)
    {
        eax = t107;
        edx = t108;
        goto L_101b6095;
    }
    eax = t107;
    edx = t108;
    COW_AT(101b6079)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b4e70u), self + 0x8aacu, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6095: ;
    COW_AT(101b6095)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t109 = cow_thiscall(g, COW_IMG(0x101ac4d0u), self + 0x7e30u, 0);
    t110 = g->edx;
    if ((uint8_t)t109 == 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    eax = t109;
    edx = t110;
    COW_AT(101b60aa)
    wr32(sp0 - 0x42cu, 0u);
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101abf40u), self + 0x7e30u, 1, 0u);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b60c4: ;
    COW_AT(101b60c4)
    g->eax = (uint8_t)arg1 - 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t67 = cow_thiscall(g, COW_IMG(0x101b5c90u), self, 0);
    t68 = g->ecx;
    t69 = g->edx;
    if ((uint8_t)t67 == 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    eax = t67;
    ecx = t68;
    edx = t69;
    COW_AT(101b60d3)
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t70 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, ecx, g->edx, 1, 0);
    t71 = g->edx;
    if ((uint8_t)t70 == 0u)
    {
        eax = t70;
        goto L_101b6185;
    }
    eax = t70;
    edx = t71;
    COW_AT(101b60e0)
    if (rd8(self + 0xec2cu) < 7u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xec2cu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xec2cu);
    COW_AT(101b60ea)
        eax = (eax & 0xffffff00u) | (uint8_t)((-((uint8_t)eax < 0x13u) & 0xf4u) + 0x13u);
    }
    COW_AT(101b60f2)
    if ((uint8_t)eax != 0u) goto L_101b617c;
    COW_AT(101b60fa)
    if (rd8(self + 0xec2du) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xec2du);
        goto L_101b617c;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xec2du);
    COW_AT(101b6104)
    if (rd8(self + 0xec2eu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xec2eu);
        goto L_101b617c;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xec2eu);
    COW_AT(101b610e)
    if (rd8(self + 0xec2fu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xec2fu);
        goto L_101b617c;
    }
    COW_AT(101b6118)
    wr32(self + 0x8c84u, 0u);
    wr8(self + 0x8c81u, 0u);
    wr8(self + 0xec2cu, 0u);
    wr8(self + 0xec2du, 0u);
    wr8(self + 0xec2eu, 0u);
    wr8(self + 0xec2fu, 0u);
    g->eax = rd32(self);
    g->edx = edx;
    t72 = rd32(self);
    g->esp = sp0 - 0x428u;
    t73 = cow_thiscall(g, rd32(t72 + 0x70u), self, 0);
    t74 = g->edx;
    g->edx = t74;
    t75 = cow_thiscall(g, COW_IMG(0x101b4f90u), self + 0x8aacu, 0);
    t76 = g->edx;
    g->edx = t76;
    t77 = cow_thiscall(g, COW_IMG(0x101abe50u), self + 0x7e30u, 0);
    t78 = g->edx;
    cow_thiscall(g, COW_IMG(0x101acf90u), self + 0x7e30u, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b617c: ;
    COW_AT(101b617c)
    wr32(sp0 - 0x42cu, 0u);
    wr32(sp0 - 0x430u, 0u);
    loc_42c = 0u;
    loc_430 = 0u;
    goto L_101b5e42;
L_101b6185: ;
    COW_AT(101b6185)
    g->eax = eax;
    g->edx = rd32(self);
    t79 = rd32(self);
    g->esp = sp0 - 0x428u;
    t80 = cow_thiscall(g, rd32(t79 + 0x20u), self, 0);
    t81 = g->edx;
    if ((uint8_t)t80 == 0u)
    {
        eax = t80;
        edx = t81;
        goto L_101b61ac;
    }
    eax = t80;
    edx = t81;
    COW_AT(101b6190)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b4f90u), self + 0x8aacu, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b61ac: ;
    COW_AT(101b61ac)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t82 = cow_thiscall(g, COW_IMG(0x101ac4d0u), self + 0x7e30u, 0);
    t83 = g->edx;
    if ((uint8_t)t82 == 0u)
    {
        eax = t82;
        goto L_101b623b;
    }
    eax = t82;
    edx = t83;
    COW_AT(101b61bf)
    wr32(sp0 - 0x42cu, 0u);
    if (rd8(self + 0x8c80u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x8c80u);
        goto L_101b620b;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x8c80u);
    COW_AT(101b61cb)
    g->edx = edx;
    g->esp = sp0 - 0x42cu;
    t84 = cow_call_regs(g, COW_IMG(0x101ac210u), eax, self + 0x7e30u, g->edx, 1, 0);
    t85 = g->edx;
    wr32(sp0 - 0x430u, t84);
    g->edx = t85;
    t86 = cow_thiscall_cdecl(g, COW_IMG(0x101ac1d0u), self + 0x7e30u, 1, t84);
    t87 = g->edx;
    wr32(sp0 - 0x434u, t86);
    g->esp = sp0 - 0x428u;
    cow_call_regs(g, COW_IMG(0x101b6e40u), t86, self, t87, 0, 3, t86, rd32(sp0 - 0x430u), 0u);
    t88 = g->edx;
    t89 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t89);
    g->eax = t89;
    g->edx = t88;
    t90 = cow_thiscall_cdecl(g, COW_IMG(0x101ac1d0u), self + 0x7e30u, 1, t89);
    t91 = g->ecx;
    t92 = g->edx;
    wr32(sp0 - 0x430u, t90);
    wr32(sp0 - 0x434u, 2u);
    g->esp = sp0 - 0x434u;
    cow_thiscall(g, rd32(self + 0x8c78u), t91, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b620b: ;
    COW_AT(101b620b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t93 = cow_thiscall(g, COW_IMG(0x101ac250u), self + 0x7e30u, 1, 0u);
    t94 = g->edx;
    t95 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t95);
    g->edx = t94;
    t96 = cow_thiscall_cdecl(g, COW_IMG(0x101ac1d0u), self + 0x7e30u, 1, t95);
    t97 = g->ecx;
    t98 = g->edx;
    wr32(sp0 - 0x430u, t96);
    wr32(sp0 - 0x434u, 1u);
    g->esp = sp0 - 0x434u;
    cow_thiscall(g, rd32(self + 0x8c78u), t97, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b623b: ;
    COW_AT(101b623b)
    t99 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t99);
    g->eax = eax;
    g->edx = t99;
    g->esp = sp0 - 0x428u;
    t100 = cow_thiscall_cdecl(g, COW_IMG(0x101ac1d0u), self + 0x7e30u, 1, t99);
    t101 = g->ecx;
    t102 = g->edx;
    wr32(sp0 - 0x430u, t100);
    wr32(sp0 - 0x434u, 1u);
    g->edx = t102;
    g->esp = sp0 - 0x434u;
    cow_thiscall(g, rd32(self + 0x8c78u), t101, 0);
    t103 = g->edx;
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, rd32(rd32(self) + 0x54u), self, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b626b: ;
    COW_AT(101b626b)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t57 = cow_call_regs(g, COW_IMG(0x101b6e90u), (uint8_t)arg1 - 8u, self, g->edx, 1, 0);
    t58 = g->edx;
    if ((uint8_t)t57 == 0u)
    {
        eax = t57;
        edx = t58;
        goto L_101b628e;
    }
    eax = t57;
    edx = t58;
    COW_AT(101b6276)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b70d0u), self, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b628e: ;
    COW_AT(101b628e)
    if (rd32(self + 0xf108u) != 4u) goto L_101b62cc;
    COW_AT(101b6297)
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t59 = cow_thiscall(g, COW_IMG(0x101ac2c0u), self + 0x7e30u, 0);
    if ((int32_t)t59 < 0)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    eax = t59;
    COW_AT(101b62aa)
    g->edx = rd32(self);
    t60 = rd32(self);
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, rd32(t60 + 0x5cu), self, 0);
    t61 = g->edx;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xf104u))), rd32(self + 0xf104u), 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b62cc: ;
    COW_AT(101b62cc)
    g->eax = eax;
    g->edx = rd32(self);
    t62 = rd32(self);
    g->esp = sp0 - 0x428u;
    t63 = cow_thiscall(g, rd32(t62 + 0x20u), self, 0);
    t64 = g->ecx;
    t65 = g->edx;
    if ((uint8_t)t63 != 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    ecx = t64;
    edx = t65;
    COW_AT(101b62db)
    t66 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t66);
    wr32(sp0 - 0x430u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x434u, 3u);
    g->esp = sp0 - 0x434u;
    cow_thiscall(g, rd32(self + 0x8c78u), ecx, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6303: ;
    COW_AT(101b6303)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t39 = cow_call_regs(g, COW_IMG(0x101b6e90u), (uint8_t)arg1 - 8u, self, g->edx, 1, 0);
    t40 = g->edx;
    if ((uint8_t)t39 != 0u)
    {
        eax = t39;
        edx = t40;
        goto L_101b674a;
    }
    eax = t39;
    edx = t40;
    COW_AT(101b6312)
    if (rd32(self + 0xf108u) != 4u) goto L_101b6381;
    COW_AT(101b631b)
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t41 = cow_call_regs(g, COW_IMG(0x101ac3d0u), eax, self + 0x7e30u, g->edx, 1, 0);
    t42 = g->edx;
    if ((int32_t)t41 < 0)
    {
        eax = t41;
        edx = t42;
        goto L_101b634c;
    }
    eax = t41;
    COW_AT(101b632c)
    g->edx = rd32(self);
    t43 = rd32(self);
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, rd32(t43 + 0x5cu), self, 0);
    t44 = g->edx;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xf104u))), rd32(self + 0xf104u), 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b634c: ;
    COW_AT(101b634c)
    g->esp = sp0 - 0x428u;
    t45 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    if ((uint8_t)t45 != 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    eax = t45;
    COW_AT(101b6359)
    g->eax = eax;
    g->edx = rd32(self);
    t46 = rd32(self);
    g->esp = sp0 - 0x428u;
    t47 = cow_thiscall(g, rd32(t46 + 0x68u), self, 0);
    t48 = g->edx;
    wr32(sp0 - 0x42cu, t47);
    g->eax = rd32(self);
    g->edx = t48;
    t49 = rd32(self);
    g->esp = sp0 - 0x42cu;
    t50 = cow_thiscall(g, rd32(t49 + 0x64u), self, 0);
    t51 = g->edx;
    wr32(sp0 - 0x430u, t50);
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, t50, rd32(sp0 - 0x42cu));
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6381: ;
    COW_AT(101b6381)
    g->eax = eax;
    g->edx = rd32(self);
    t52 = rd32(self);
    g->esp = sp0 - 0x428u;
    t53 = cow_thiscall(g, rd32(t52 + 0x20u), self, 0);
    t54 = g->ecx;
    t55 = g->edx;
    if ((uint8_t)t53 != 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    ecx = t54;
    edx = t55;
    COW_AT(101b6390)
    t56 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t56);
    wr32(sp0 - 0x430u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x434u, 4u);
    g->esp = sp0 - 0x434u;
    cow_thiscall(g, rd32(self + 0x8c78u), ecx, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b63b8: ;
    COW_AT(101b63b8)
    if (rd32(self + 0xf10cu) != 0u)
    {
        eax = rd32(self + 0xf10cu);
        goto L_101b645d;
    }
    eax = rd32(self + 0xf10cu);
    COW_AT(101b63c6)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t30 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t31 = g->edx;
    if ((uint8_t)t30 != 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    eax = t30;
    edx = t31;
    COW_AT(101b63db)
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t32 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t33 = g->edx;
    if ((uint8_t)t32 == 0u)
    {
        eax = t32;
        goto L_101b6402;
    }
    eax = t32;
    edx = t33;
    COW_AT(101b63e6)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b4fc0u), self + 0x8aacu, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6402: ;
    COW_AT(101b6402)
    if ((rd8(self + 0xf114u) & 8u) == 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xf114u);
    COW_AT(101b6412)
    g->eax = eax;
    g->edx = rd32(self);
    t34 = rd32(self);
    g->esp = sp0 - 0x428u;
    t35 = cow_thiscall(g, rd32(t34 + 0x20u), self, 0);
    t36 = g->edx;
    if ((uint8_t)t35 == 0u)
    {
        eax = t35;
        edx = t36;
        goto L_101b6439;
    }
    eax = t35;
    edx = t36;
    COW_AT(101b641d)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b4fc0u), self + 0x8aacu, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6439: ;
    COW_AT(101b6439)
    if ((rd8(self + 0xf114u) & 8u) == 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    COW_AT(101b6445)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101ac4e0u), self + 0x7e30u, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b645d: ;
    COW_AT(101b645d)
    if ((rd8(self + 0xf114u) & 8u) == 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    COW_AT(101b646a)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t37 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t38 = g->edx;
    if ((uint8_t)t37 != 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    eax = t37;
    edx = t38;
    COW_AT(101b6479)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101ac4e0u), self + 0x7e30u, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6495: ;
    COW_AT(101b6495)
    if (rd32(self + 0xf10cu) != 0u)
    {
        eax = rd32(self + 0xf10cu);
        goto L_101b653a;
    }
    eax = rd32(self + 0xf10cu);
    COW_AT(101b64a3)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t21 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t22 = g->edx;
    if ((uint8_t)t21 != 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    eax = t21;
    edx = t22;
    COW_AT(101b64b8)
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t23 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t24 = g->edx;
    if ((uint8_t)t23 == 0u)
    {
        eax = t23;
        edx = t24;
        goto L_101b64df;
    }
    eax = t23;
    edx = t24;
    COW_AT(101b64c3)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b5020u), self + 0x8aacu, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b64df: ;
    COW_AT(101b64df)
    if ((rd8(self + 0xf114u) & 8u) == 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    COW_AT(101b64ef)
    g->eax = rd32(self);
    g->edx = edx;
    t25 = rd32(self);
    g->esp = sp0 - 0x428u;
    t26 = cow_thiscall(g, rd32(t25 + 0x20u), self, 0);
    t27 = g->edx;
    if ((uint8_t)t26 == 0u)
    {
        eax = t26;
        edx = t27;
        goto L_101b6516;
    }
    eax = t26;
    edx = t27;
    COW_AT(101b64fa)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b5020u), self + 0x8aacu, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6516: ;
    COW_AT(101b6516)
    if ((rd8(self + 0xf114u) & 8u) == 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    COW_AT(101b6522)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101ac520u), self + 0x7e30u, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b653a: ;
    COW_AT(101b653a)
    if ((rd8(self + 0xf114u) & 8u) == 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    COW_AT(101b6547)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t28 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t29 = g->edx;
    if ((uint8_t)t28 != 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    eax = t28;
    edx = t29;
    COW_AT(101b6556)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101ac520u), self + 0x7e30u, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6572: ;
    COW_AT(101b6572)
    if (rd32(self + 0xf10cu) != 0u)
    {
        eax = rd32(self + 0xf10cu);
        goto L_101b65f1;
    }
    eax = rd32(self + 0xf10cu);
    COW_AT(101b657e)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t16 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t17 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    eax = t16;
    edx = t17;
    COW_AT(101b6591)
    g->esp = sp0 - 0x428u;
    t18 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    if ((uint8_t)t18 != 0u) goto L_101b65da;
    eax = t18;
    COW_AT(101b659c)
    if ((rd8(self + 0xf114u) & 8u) == 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xf114u);
    COW_AT(101b65ac)
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t19 = cow_thiscall(g, rd32(rd32(self) + 0x20u), self, 0);
    if ((uint8_t)t19 != 0u) goto L_101b65da;
    COW_AT(101b65b7)
    if ((rd8(self + 0xf114u) & 8u) == 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    COW_AT(101b65c3)
    wr32(self + 0x8888u, 0u);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b65da: ;
    COW_AT(101b65da)
    wr32(self + 0x8c74u, 0u);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b65f1: ;
    COW_AT(101b65f1)
    if ((rd8(self + 0xf114u) & 8u) == 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    COW_AT(101b65fe)
    g->esp = sp0 - 0x428u;
    t20 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    if ((uint8_t)t20 != 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    COW_AT(101b660d)
    wr32(self + 0x8888u, 0u);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6624: ;
    COW_AT(101b6624)
    if (rd32(self + 0xf10cu) != 0u)
    {
        eax = rd32(self + 0xf10cu);
        goto L_101b66b3;
    }
    eax = rd32(self + 0xf10cu);
    COW_AT(101b6632)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t4 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    eax = t4;
    edx = t5;
    COW_AT(101b6647)
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t6 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u) goto L_101b6696;
    eax = t6;
    edx = t7;
    COW_AT(101b6652)
    if ((rd8(self + 0xf114u) & 8u) == 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    COW_AT(101b6662)
    g->eax = rd32(self);
    t8 = rd32(self);
    g->esp = sp0 - 0x428u;
    t9 = cow_thiscall(g, rd32(t8 + 0x20u), self, 0);
    if ((uint8_t)t9 != 0u) goto L_101b6696;
    COW_AT(101b666d)
    if ((rd8(self + 0xf114u) & 8u) == 0u)
    {
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        goto L_101b6751;
    }
    COW_AT(101b6679)
    t10 = rd32(self + 0x86b8u);
    wr32(self + 0x8888u, t10);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6696: ;
    COW_AT(101b6696)
    t11 = rd32(self + 0x8c70u);
    t12 = rd32(sp0 - 0x428u);
    wr32(self + 0x8c74u, t11);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = t12;
    g->ebp = in_ebp;
    return 1u;
L_101b66b3: ;
    COW_AT(101b66b3)
    if ((rd8(self + 0xf114u) & 8u) == 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    COW_AT(101b66c0)
    g->esp = sp0 - 0x428u;
    t13 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    if ((uint8_t)t13 != 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    COW_AT(101b66cf)
    t14 = rd32(self + 0x86b8u);
    t15 = rd32(sp0 - 0x428u);
    wr32(self + 0x8888u, t14);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = t15;
    g->ebp = in_ebp;
    return 1u;
L_101b66ec: ;
    COW_AT(101b66ec)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b7100u), self, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 1u;
L_101b6704: ;
    COW_AT(101b6704)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b7130u), self, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 1u;
L_101b671c: ;
    COW_AT(101b671c)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t2 = cow_call_regs(g, COW_IMG(0x101b6e90u), (uint8_t)arg1 - 8u, self, g->edx, 1, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        loc_420 = in_ebx;
        loc_424 = in_esi;
        loc_428 = in_edi;
        goto L_101b6751;
    }
    eax = t2;
    edx = t3;
    COW_AT(101b6727)
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        goto L_101b674a;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(101b6732)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b70d0u), self, 0);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b674a: ;
    COW_AT(101b674a)
L_101b674c: ;
    COW_AT(101b674c)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b70a0u), self, 0);
    loc_420 = rd32(sp0 - 0x420u);
    loc_424 = rd32(sp0 - 0x424u);
    loc_428 = rd32(sp0 - 0x428u);
L_101b6751: ;
    COW_AT(101b6751)
    g->ebx = loc_420;
    g->esi = loc_424;
    g->edi = loc_428;
    g->ebp = in_ebp;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b5d10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b5d37u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b5d46u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b5d54u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b5d64u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        g->esi = self;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b5d6fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b5d82u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x42cu;
        (void)sp0;
        return 1;
    }
    case 0x101b5d97u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x42cu;
        (void)sp0;
        return 1;
    }
    case 0x101b5d99u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x42cu;
        (void)sp0;
        return 1;
    }
    case 0x101b5da7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5dd5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b5de0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b5e00u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b5e05u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5e20u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        g->esi = self;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b5e2bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b5e42u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_42c;
        uint32_t loc_430;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x101b5e51u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5e75u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5e84u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5e9au:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b5eaau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        g->esi = self;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b5eb3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5ec6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5ed7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b5ee5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b5f0fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5f3cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        g->esi = self;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b5f45u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5f54u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_42c;
        uint32_t loc_430;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x101b5f63u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5f72u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5f83u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b5fadu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5fcbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_420;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_430;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_430 = rd32(sp0 - 0x430u);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5fdau:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b5fe5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5ff0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b600cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6021u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->esi - 0x7e30u;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6039u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b6044u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b606eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6079u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6095u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b60aau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->esi - 0x7e30u;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b60c4u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b60d3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b60e0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b60eau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b60f2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b60fau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6104u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b610eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6118u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b617cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6185u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6190u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b61acu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b61bfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->ecx = self + 0x7e30u;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b61cbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x42cu;
        g->ecx = self + 0x7e30u;
        g->edi = self + 0x7e30u;
        wr32(sp0 - 0x42cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101b620bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x42cu;
        g->ecx = self + 0x7e30u;
        g->edi = self + 0x7e30u;
        wr32(sp0 - 0x42cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101b623bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->ecx = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b626bu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b6276u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b628eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6297u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b62aau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b62ccu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b62dbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6303u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b6312u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b631bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b632cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b634cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b6359u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6381u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6390u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b63b8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b63c6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b63dbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b63e6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6402u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b641du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6445u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->edi - 0x7e30u;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b645du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b646au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6479u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6495u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b64a3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b64b8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b64c3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b64dfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b64fau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6522u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->edi - 0x7e30u;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b653au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6547u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6556u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6572u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b657eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        g->edi = 0u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b6591u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b659cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b65c3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b65dau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b65f1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b65feu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b660du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b6624u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b6632u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x420u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b6647u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b6652u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b6679u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->edi - 0x7e30u;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6696u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b66b3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b66c0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b66cfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b66ecu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b6704u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b671cu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebx = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b6727u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6732u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b674au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b674cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6751u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_420;
        uint32_t loc_424;
        uint32_t loc_428;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     101b6412: holds in_ebx, which no location here says
     101b6439: holds in_ebx, which no location here says
     101b64ef: holds in_ebx, which no location here says
     101b6516: holds in_ebx, which no location here says
     101b65ac: holds in_ebx, which no location here says
     101b65b7: holds in_ebx, which no location here says
     101b6662: holds in_ebx, which no location here says
     101b666d: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b5d10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b5d10(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
