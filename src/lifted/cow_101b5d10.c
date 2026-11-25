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
    case 0x101b5d37u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d37;
    case 0x101b5d46u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d46;
    case 0x101b5d54u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d54;
    case 0x101b5d64u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d64;
    case 0x101b5d69u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d69;
    case 0x101b5d6fu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d6f;
    case 0x101b5d7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d7c;
    case 0x101b5d82u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d82;
    case 0x101b5d89u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d89;
    case 0x101b5d97u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d97;
    case 0x101b5d99u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5d99;
    case 0x101b5da2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5da2;
    case 0x101b5da7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5da7;
    case 0x101b5dbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101b5dba;
    case 0x101b5dc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5dc4;
    case 0x101b5dd5u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5dd5;
    case 0x101b5de0u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5de0;
    case 0x101b5de5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5de5;
    case 0x101b5defu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5def;
    case 0x101b5e00u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e00;
    case 0x101b5e05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e05;
    case 0x101b5e0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e0f;
    case 0x101b5e20u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e20;
    case 0x101b5e25u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e25;
    case 0x101b5e2bu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e2b;
    case 0x101b5e3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e3c;
    case 0x101b5e42u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101b5e42;
    case 0x101b5e49u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e49;
    case 0x101b5e51u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e51;
    case 0x101b5e64u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101b5e64;
    case 0x101b5e75u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e75;
    case 0x101b5e84u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e84;
    case 0x101b5e89u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e89;
    case 0x101b5e9au: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5e9a;
    case 0x101b5eaau: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5eaa;
    case 0x101b5eafu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5eaf;
    case 0x101b5eb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5eb3;
    case 0x101b5ec6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5ec6;
    case 0x101b5ed3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5ed3;
    case 0x101b5ed7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5ed7;
    case 0x101b5ee5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5ee5;
    case 0x101b5eeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5eee;
    case 0x101b5ef6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5ef6;
    case 0x101b5efeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5efe;
    case 0x101b5f0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f0f;
    case 0x101b5f23u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); goto E_101b5f23;
    case 0x101b5f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f2d;
    case 0x101b5f3cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f3c;
    case 0x101b5f41u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f41;
    case 0x101b5f45u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f45;
    case 0x101b5f50u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f50;
    case 0x101b5f54u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101b5f54;
    case 0x101b5f5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f5b;
    case 0x101b5f63u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f63;
    case 0x101b5f72u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f72;
    case 0x101b5f7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f7f;
    case 0x101b5f83u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f83;
    case 0x101b5f8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f8c;
    case 0x101b5f94u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f94;
    case 0x101b5f9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5f9c;
    case 0x101b5fadu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5fad;
    case 0x101b5fc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); goto E_101b5fc1;
    case 0x101b5fcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5fcb;
    case 0x101b5fdau: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5fda;
    case 0x101b5fe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5fe1;
    case 0x101b5fe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5fe5;
    case 0x101b5fecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5fec;
    case 0x101b5ff0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5ff0;
    case 0x101b5ffbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5ffb;
    case 0x101b600cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b600c;
    case 0x101b6019u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->esi - 0x7e30u; goto E_101b6019;
    case 0x101b6021u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->esi - 0x7e30u; goto E_101b6021;
    case 0x101b6028u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6028;
    case 0x101b6039u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6039;
    case 0x101b6040u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6040;
    case 0x101b6044u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6044;
    case 0x101b605du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101b605d;
    case 0x101b606eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b606e;
    case 0x101b6075u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6075;
    case 0x101b6079u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6079;
    case 0x101b6084u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6084;
    case 0x101b6095u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6095;
    case 0x101b60a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->esi - 0x7e30u; goto E_101b60a2;
    case 0x101b60aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->esi - 0x7e30u; goto E_101b60aa;
    case 0x101b60b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_101b60b3;
    case 0x101b60c4u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60c4;
    case 0x101b60cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60cb;
    case 0x101b60d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60d3;
    case 0x101b60d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60d8;
    case 0x101b60e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60e0;
    case 0x101b60eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60ea;
    case 0x101b60f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60f2;
    case 0x101b60fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b60fa;
    case 0x101b6104u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6104;
    case 0x101b610eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b610e;
    case 0x101b6118u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6118;
    case 0x101b614cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b614c;
    case 0x101b6157u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6157;
    case 0x101b6164u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->esi - 0x7e30u; goto E_101b6164;
    case 0x101b616bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b616b;
    case 0x101b617cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b617c;
    case 0x101b6185u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6185;
    case 0x101b618cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b618c;
    case 0x101b6190u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6190;
    case 0x101b619bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b619b;
    case 0x101b61acu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b61ac;
    case 0x101b61b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b61b9;
    case 0x101b61bfu: eax = g->eax; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b61bf;
    case 0x101b61cbu: eax = g->eax; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b61cb;
    case 0x101b61d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b61d0;
    case 0x101b61d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b61d8;
    case 0x101b61e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b61e0;
    case 0x101b61eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b61ee;
    case 0x101b61f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b61f7;
    case 0x101b620bu: eax = g->eax; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b620b;
    case 0x101b6210u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6210;
    case 0x101b621eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b621e;
    case 0x101b6227u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6227;
    case 0x101b623bu: eax = g->eax; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b623b;
    case 0x101b6247u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6247;
    case 0x101b6250u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6250;
    case 0x101b625au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b625a;
    case 0x101b626bu: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b626b;
    case 0x101b6272u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6272;
    case 0x101b6276u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6276;
    case 0x101b627du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b627d;
    case 0x101b628eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b628e;
    case 0x101b6297u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6297;
    case 0x101b62a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b62a2;
    case 0x101b62aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b62aa;
    case 0x101b62b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b62b1;
    case 0x101b62bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b62bb;
    case 0x101b62ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b62cc;
    case 0x101b62d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b62d3;
    case 0x101b62dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b62db;
    case 0x101b62efu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); goto E_101b62ef;
    case 0x101b6303u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6303;
    case 0x101b630au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b630a;
    case 0x101b6312u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6312;
    case 0x101b631bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b631b;
    case 0x101b6326u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6326;
    case 0x101b632cu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b632c;
    case 0x101b6331u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6331;
    case 0x101b633bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b633b;
    case 0x101b634cu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b634c;
    case 0x101b6351u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6351;
    case 0x101b6359u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6359;
    case 0x101b6360u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6360;
    case 0x101b6368u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6368;
    case 0x101b6370u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6370;
    case 0x101b6381u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6381;
    case 0x101b6388u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6388;
    case 0x101b6390u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6390;
    case 0x101b63a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); goto E_101b63a4;
    case 0x101b63b8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b63b8;
    case 0x101b63c6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b63c6;
    case 0x101b63d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b63d3;
    case 0x101b63dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b63db;
    case 0x101b63e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b63e2;
    case 0x101b63e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b63e6;
    case 0x101b63f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b63f1;
    case 0x101b6402u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6402;
    case 0x101b641du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b641d;
    case 0x101b6428u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6428;
    case 0x101b6445u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0x7e30u; goto E_101b6445;
    case 0x101b644cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b644c;
    case 0x101b645du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b645d;
    case 0x101b646au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b646a;
    case 0x101b6471u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6471;
    case 0x101b6479u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6479;
    case 0x101b6484u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6484;
    case 0x101b6495u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6495;
    case 0x101b64a3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b64a3;
    case 0x101b64b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b64b0;
    case 0x101b64b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b64b8;
    case 0x101b64bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b64bf;
    case 0x101b64c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b64c3;
    case 0x101b64ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b64ce;
    case 0x101b64dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b64df;
    case 0x101b64fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b64fa;
    case 0x101b6505u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6505;
    case 0x101b6522u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0x7e30u; goto E_101b6522;
    case 0x101b6529u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6529;
    case 0x101b653au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b653a;
    case 0x101b6547u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6547;
    case 0x101b654eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b654e;
    case 0x101b6556u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6556;
    case 0x101b6561u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6561;
    case 0x101b6572u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6572;
    case 0x101b657eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b657e;
    case 0x101b6589u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6589;
    case 0x101b6591u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6591;
    case 0x101b6598u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6598;
    case 0x101b659cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b659c;
    case 0x101b65c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b65c3;
    case 0x101b65dau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b65da;
    case 0x101b65f1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b65f1;
    case 0x101b65feu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b65fe;
    case 0x101b6605u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6605;
    case 0x101b660du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b660d;
    case 0x101b6624u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6624;
    case 0x101b6632u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6632;
    case 0x101b663fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b663f;
    case 0x101b6647u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6647;
    case 0x101b664eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b664e;
    case 0x101b6652u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6652;
    case 0x101b6679u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0x7e30u; goto E_101b6679;
    case 0x101b6696u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6696;
    case 0x101b66b3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b66b3;
    case 0x101b66c0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b66c0;
    case 0x101b66c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b66c7;
    case 0x101b66cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b66cf;
    case 0x101b66ecu: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b66ec;
    case 0x101b66f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b66f3;
    case 0x101b6704u: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6704;
    case 0x101b670bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b670b;
    case 0x101b671cu: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b671c;
    case 0x101b6723u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6723;
    case 0x101b6727u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6727;
    case 0x101b6732u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6732;
    case 0x101b6739u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6739;
    case 0x101b674au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b674a;
    case 0x101b674cu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b674c;
    case 0x101b6751u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6751;
    default: break;
    }
#endif

    COW_AT(101b5d10)
    wr32(sp0 - 0x420u, in_ebx);
    wr32(sp0 - 0x424u, in_esi);
    wr32(sp0 - 0x428u, in_edi);
    wr8(self + 0xef22u, 0u);
    if ((uint8_t)arg1 - 8u > 0x64u) goto L_101b6751;
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
    case 0x101b6751u: goto L_101b6751;
    default: rt_fatal(g, COW_IMG(0x101b5d3fu), "switch");
    }
    return 0;
L_101b5d46: ;
    COW_AT(101b5d46)
    if (rd8(self + 0xf11cu) == 0u)
    {
        eax = ((uint8_t)arg1 - 8u & 0xffffff00u) | rd8(self + 0xf11cu);
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
    t156 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t157 = g->edx;
    eax = t156;
    edx = t157;
    COW_AT(101b5d69)
    if ((uint8_t)eax != 0u) goto L_101b5dd5;
    COW_AT(101b5d6f)
    wr32(sp0 - 0x42cu, in_ebp);
    t158 = rd32(self);
    wr8(self + 0x8c81u, 1u);
    g->eax = eax;
    g->edx = t158;
    g->esp = sp0 - 0x42cu;
    t159 = cow_thiscall(g, rd32(t158 + 0x64u), self, 0);
    t160 = g->edx;
    eax = t159;
    edx = t160;
    COW_AT(101b5d7c)
    if (eax == 0u)
    {
        ebp = eax;
    COW_AT(101b5d97)
        ecx = 0u;
    }
    else
    {
        ebp = eax;
    COW_AT(101b5d82)
        g->eax = rd32(self);
        g->edx = edx;
        t161 = rd32(self);
        g->esp = sp0 - 0x42cu;
        t162 = cow_thiscall(g, rd32(t161 + 0x64u), self, 0);
        t163 = g->ecx;
        t164 = g->edx;
        eax = t162;
        ecx = t163;
        edx = t164;
    COW_AT(101b5d89)
        t165 = eax;
        edi = t165;
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
    }
    COW_AT(101b5d99)
    wr32(sp0 - 0x430u, ecx);
    wr32(sp0 - 0x434u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x42cu;
    t166 = cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, ebp, ecx);
    t167 = g->edx;
    eax = t166;
    edx = t167;
    COW_AT(101b5da2)
    if ((int32_t)eax < 0)
    {
        ebp = rd32(sp0 - 0x42cu);
        goto L_101b5e05;
    }
    ebp = rd32(sp0 - 0x42cu);
    COW_AT(101b5da7)
    wr32(sp0 - 0x42cu, 0u);
    wr32(sp0 - 0x430u, 0u);
    wr32(sp0 - 0x434u, COW_IMG(0x10377cbcu));
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t168 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    eax = t168;
    COW_AT(101b5dba)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xf104u))), rd32(self + 0xf104u), 0);
    COW_AT(101b5dc4)
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
    t169 = cow_thiscall(g, COW_IMG(0x101b70d0u), self, 0);
    eax = t169;
    COW_AT(101b5de5)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xf104u))), rd32(self + 0xf104u), 0);
    COW_AT(101b5def)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b5e00: ;
    COW_AT(101b5e00)
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t170 = cow_thiscall(g, COW_IMG(0x101b70a0u), self, 0);
    eax = t170;
    ebp = in_ebp;
L_101b5e05: ;
    COW_AT(101b5e05)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xf104u))), rd32(self + 0xf104u), 0);
    COW_AT(101b5e0f)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = ebp;
    return 1u;
L_101b5e20: ;
    COW_AT(101b5e20)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t171 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t172 = g->edx;
    eax = t171;
    edx = t172;
    COW_AT(101b5e25)
    if ((uint8_t)eax != 0u) goto L_101b5e75;
    COW_AT(101b5e2b)
    wr8(self + 0x8c81u, 1u);
    wr32(sp0 - 0x42cu, sp0 - 0x41cu);
    g->eax = sp0 - 0x41cu;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t173 = cow_thiscall(g, COW_IMG(0x101b7c20u), self, 1, sp0 - 0x41cu);
    t174 = g->edx;
    eax = t173;
    edx = t174;
    COW_AT(101b5e3c)
    wr32(sp0 - 0x42cu, eax);
    wr32(sp0 - 0x430u, sp0 - 0x41cu);
    loc_42c = eax;
    loc_430 = sp0 - 0x41cu;
L_101b5e42: ;
    COW_AT(101b5e42)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t175 = cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, loc_430, loc_42c);
    t176 = g->edx;
    eax = t175;
    edx = t176;
    COW_AT(101b5e49)
    if ((int32_t)eax < 0) goto L_101b6751;
    COW_AT(101b5e51)
    wr32(sp0 - 0x42cu, 0u);
    wr32(sp0 - 0x430u, 0u);
    wr32(sp0 - 0x434u, COW_IMG(0x10377cbcu));
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    COW_AT(101b5e64)
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
    COW_AT(101b5e89)
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
    t128 = rd32(self);
    g->esp = sp0 - 0x428u;
    t129 = cow_thiscall(g, rd32(t128 + 0x20u), self, 0);
    t130 = g->edx;
    eax = t129;
    edx = t130;
    COW_AT(101b5eaf)
    if ((uint8_t)eax == 0u) goto L_101b5ec6;
    COW_AT(101b5eb3)
    t131 = rd32(self + 0x8c70u);
    wr32(sp0 - 0x42cu, t131);
    wr32(sp0 - 0x430u, self + 0x8aacu);
    eax = self + 0x8aacu;
    loc_42c = t131;
    loc_430 = self + 0x8aacu;
L_101b5f54: ;
    COW_AT(101b5f54)
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t145 = cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, loc_430, loc_42c);
    eax = t145;
    COW_AT(101b5f5b)
    if ((int32_t)eax >= 0) goto L_101b6751;
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
    t132 = cow_thiscall(g, COW_IMG(0x101ac4d0u), self + 0x7e30u, 0);
    t133 = g->edx;
    eax = t132;
    edx = t133;
    COW_AT(101b5ed3)
    if ((uint8_t)eax == 0u) goto L_101b5f0f;
    COW_AT(101b5ed7)
    if (rd8(self + 0xf11du) != 0u) goto L_101b6751;
    eax = (eax & 0xffffff00u) | rd8(self + 0xf11du);
    COW_AT(101b5ee5)
    wr32(sp0 - 0x42cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t134 = cow_call_regs(g, COW_IMG(0x101ac210u), eax, self + 0x7e30u, g->edx, 1, 1, 1u);
    t135 = g->edx;
    eax = t134;
    edx = t135;
    COW_AT(101b5eee)
    wr32(sp0 - 0x430u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x42cu;
    t136 = cow_thiscall_cdecl(g, COW_IMG(0x101ac1d0u), self + 0x7e30u, 1, eax);
    t137 = g->edx;
    eax = t136;
    edx = t137;
    COW_AT(101b5ef6)
    wr32(sp0 - 0x434u, eax);
    g->esp = sp0 - 0x428u;
    cow_call_regs(g, COW_IMG(0x101b6e40u), eax, self, edx, 0, 3, eax, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    COW_AT(101b5efe)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b5f0f: ;
    COW_AT(101b5f0f)
    t138 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t138);
    wr32(sp0 - 0x430u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x434u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x434u;
    t139 = cow_thiscall(g, rd32(self + 0x8c78u), t138, 0);
    eax = t139;
    COW_AT(101b5f23)
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t140 = cow_thiscall(g, rd32(rd32(self) + 0x54u), self, 0);
    eax = t140;
    COW_AT(101b5f2d)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 0xffffffffu;
L_101b5f3c: ;
    COW_AT(101b5f3c)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t141 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t142 = g->edx;
    eax = t141;
    edx = t142;
    COW_AT(101b5f41)
    if ((uint8_t)eax == 0u) goto L_101b5f72;
    COW_AT(101b5f45)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t143 = cow_thiscall(g, COW_IMG(0x101ad0d0u), self + 0x7e30u, 0);
    t144 = g->edx;
    eax = t143;
    edx = t144;
    COW_AT(101b5f50)
    wr32(sp0 - 0x42cu, 0u);
    wr32(sp0 - 0x430u, 0u);
    loc_42c = 0u;
    loc_430 = 0u;
    goto L_101b5f54;
L_101b5f72: ;
    COW_AT(101b5f72)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t146 = cow_thiscall(g, COW_IMG(0x101ac4d0u), self + 0x7e30u, 0);
    t147 = g->ecx;
    t148 = g->edx;
    eax = t146;
    ecx = t147;
    edx = t148;
    COW_AT(101b5f7f)
    if ((uint8_t)eax == 0u) goto L_101b5fad;
    COW_AT(101b5f83)
    wr32(sp0 - 0x42cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t149 = cow_call_regs(g, COW_IMG(0x101ac210u), eax, self + 0x7e30u, g->edx, 1, 1, 1u);
    t150 = g->edx;
    eax = t149;
    edx = t150;
    COW_AT(101b5f8c)
    wr32(sp0 - 0x430u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x42cu;
    t151 = cow_thiscall_cdecl(g, COW_IMG(0x101ac1d0u), self + 0x7e30u, 1, eax);
    t152 = g->edx;
    eax = t151;
    edx = t152;
    COW_AT(101b5f94)
    wr32(sp0 - 0x434u, eax);
    g->esp = sp0 - 0x428u;
    cow_call_regs(g, COW_IMG(0x101b6e40u), eax, self, edx, 0, 3, eax, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    COW_AT(101b5f9c)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b5fad: ;
    COW_AT(101b5fad)
    t153 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t153);
    wr32(sp0 - 0x430u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x434u, 0u);
    g->eax = t153;
    g->esp = sp0 - 0x434u;
    t154 = cow_thiscall(g, rd32(self + 0x8c78u), ecx, 0);
    eax = t154;
    COW_AT(101b5fc1)
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t155 = cow_thiscall(g, rd32(rd32(self) + 0x54u), self, 0);
    eax = t155;
L_101b5fcb: ;
    COW_AT(101b5fcb)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 0xffffffffu;
L_101b5fda: ;
    COW_AT(101b5fda)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t121 = cow_call_regs(g, COW_IMG(0x101b6e90u), (uint8_t)arg1 - 8u, self, g->edx, 1, 0);
    t122 = g->edx;
    eax = t121;
    edx = t122;
    COW_AT(101b5fe1)
    if ((uint8_t)eax != 0u) goto L_101b6044;
    COW_AT(101b5fe5)
    g->eax = eax;
    g->edx = rd32(self);
    t123 = rd32(self);
    g->esp = sp0 - 0x428u;
    t124 = cow_thiscall(g, rd32(t123 + 0x20u), self, 0);
    t125 = g->edx;
    eax = t124;
    edx = t125;
    COW_AT(101b5fec)
    if ((uint8_t)eax == 0u) goto L_101b600c;
    COW_AT(101b5ff0)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b4d30u), self + 0x8aacu, 0);
    COW_AT(101b5ffb)
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
    t126 = cow_thiscall(g, COW_IMG(0x101ac4d0u), self + 0x7e30u, 0);
    t127 = g->edx;
    eax = t126;
    edx = t127;
    COW_AT(101b6019)
    if ((uint8_t)eax == 0u) goto L_101b6751;
    COW_AT(101b6021)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101abef0u), self + 0x7e30u, 0);
    COW_AT(101b6028)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6039: ;
    COW_AT(101b6039)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t114 = cow_call_regs(g, COW_IMG(0x101b6e90u), (uint8_t)arg1 - 8u, self, g->edx, 1, 0);
    t115 = g->edx;
    eax = t114;
    edx = t115;
    COW_AT(101b6040)
    if ((uint8_t)eax == 0u) goto L_101b606e;
L_101b6044: ;
    COW_AT(101b6044)
    wr32(sp0 - 0x42cu, arg3);
    wr32(sp0 - 0x430u, arg2);
    wr32(sp0 - 0x434u, 0x1bu);
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x1bu, arg2, arg3);
    COW_AT(101b605d)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b606e: ;
    COW_AT(101b606e)
    g->eax = eax;
    g->edx = rd32(self);
    t116 = rd32(self);
    g->esp = sp0 - 0x428u;
    t117 = cow_thiscall(g, rd32(t116 + 0x20u), self, 0);
    t118 = g->edx;
    eax = t117;
    edx = t118;
    COW_AT(101b6075)
    if ((uint8_t)eax == 0u) goto L_101b6095;
    COW_AT(101b6079)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b4e70u), self + 0x8aacu, 0);
    COW_AT(101b6084)
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
    t119 = cow_thiscall(g, COW_IMG(0x101ac4d0u), self + 0x7e30u, 0);
    t120 = g->edx;
    eax = t119;
    edx = t120;
    COW_AT(101b60a2)
    if ((uint8_t)eax == 0u) goto L_101b6751;
    COW_AT(101b60aa)
    wr32(sp0 - 0x42cu, 0u);
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101abf40u), self + 0x7e30u, 1, 0u);
    COW_AT(101b60b3)
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
    t77 = cow_thiscall(g, COW_IMG(0x101b5c90u), self, 0);
    t78 = g->ecx;
    t79 = g->edx;
    eax = t77;
    ecx = t78;
    edx = t79;
    COW_AT(101b60cb)
    if ((uint8_t)eax == 0u) goto L_101b6751;
    COW_AT(101b60d3)
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t80 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, ecx, g->edx, 1, 0);
    t81 = g->edx;
    eax = t80;
    edx = t81;
    COW_AT(101b60d8)
    if ((uint8_t)eax == 0u) goto L_101b6185;
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
    t82 = rd32(self);
    g->esp = sp0 - 0x428u;
    t83 = cow_thiscall(g, rd32(t82 + 0x70u), self, 0);
    t84 = g->edx;
    eax = t83;
    edx = t84;
    COW_AT(101b614c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t85 = cow_thiscall(g, COW_IMG(0x101b4f90u), self + 0x8aacu, 0);
    t86 = g->edx;
    eax = t85;
    edx = t86;
    COW_AT(101b6157)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t87 = cow_thiscall(g, COW_IMG(0x101abe50u), self + 0x7e30u, 0);
    t88 = g->edx;
    eax = t87;
    edx = t88;
    COW_AT(101b6164)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101acf90u), self + 0x7e30u, 0);
    COW_AT(101b616b)
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
    t89 = rd32(self);
    g->esp = sp0 - 0x428u;
    t90 = cow_thiscall(g, rd32(t89 + 0x20u), self, 0);
    t91 = g->edx;
    eax = t90;
    edx = t91;
    COW_AT(101b618c)
    if ((uint8_t)eax == 0u) goto L_101b61ac;
    COW_AT(101b6190)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b4f90u), self + 0x8aacu, 0);
    COW_AT(101b619b)
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
    t92 = cow_thiscall(g, COW_IMG(0x101ac4d0u), self + 0x7e30u, 0);
    t93 = g->edx;
    eax = t92;
    edx = t93;
    COW_AT(101b61b9)
    if ((uint8_t)eax == 0u) goto L_101b623b;
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
    t94 = cow_call_regs(g, COW_IMG(0x101ac210u), eax, self + 0x7e30u, g->edx, 1, 0);
    t95 = g->edx;
    eax = t94;
    edx = t95;
    COW_AT(101b61d0)
    wr32(sp0 - 0x430u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x42cu;
    t96 = cow_thiscall_cdecl(g, COW_IMG(0x101ac1d0u), self + 0x7e30u, 1, eax);
    t97 = g->edx;
    eax = t96;
    edx = t97;
    COW_AT(101b61d8)
    wr32(sp0 - 0x434u, eax);
    g->esp = sp0 - 0x428u;
    cow_call_regs(g, COW_IMG(0x101b6e40u), eax, self, edx, 0, 3, eax, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t98 = g->edx;
    edx = t98;
    COW_AT(101b61e0)
    t99 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t99);
    g->eax = t99;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t100 = cow_thiscall_cdecl(g, COW_IMG(0x101ac1d0u), self + 0x7e30u, 1, t99);
    t101 = g->ecx;
    t102 = g->edx;
    eax = t100;
    ecx = t101;
    edx = t102;
    COW_AT(101b61ee)
    wr32(sp0 - 0x430u, eax);
    wr32(sp0 - 0x434u, 2u);
    g->esp = sp0 - 0x434u;
    cow_thiscall(g, rd32(self + 0x8c78u), ecx, 0);
    COW_AT(101b61f7)
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
    t103 = cow_thiscall(g, COW_IMG(0x101ac250u), self + 0x7e30u, 1, 0u);
    t104 = g->edx;
    eax = t103;
    edx = t104;
    COW_AT(101b6210)
    t105 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t105);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t106 = cow_thiscall_cdecl(g, COW_IMG(0x101ac1d0u), self + 0x7e30u, 1, t105);
    t107 = g->ecx;
    t108 = g->edx;
    eax = t106;
    ecx = t107;
    edx = t108;
    COW_AT(101b621e)
    wr32(sp0 - 0x430u, eax);
    wr32(sp0 - 0x434u, 1u);
    g->esp = sp0 - 0x434u;
    cow_thiscall(g, rd32(self + 0x8c78u), ecx, 0);
    COW_AT(101b6227)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b623b: ;
    COW_AT(101b623b)
    t109 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t109);
    g->eax = eax;
    g->edx = t109;
    g->esp = sp0 - 0x428u;
    t110 = cow_thiscall_cdecl(g, COW_IMG(0x101ac1d0u), self + 0x7e30u, 1, t109);
    t111 = g->ecx;
    t112 = g->edx;
    eax = t110;
    ecx = t111;
    edx = t112;
    COW_AT(101b6247)
    wr32(sp0 - 0x430u, eax);
    wr32(sp0 - 0x434u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x434u;
    cow_thiscall(g, rd32(self + 0x8c78u), ecx, 0);
    t113 = g->edx;
    edx = t113;
    COW_AT(101b6250)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, rd32(rd32(self) + 0x54u), self, 0);
    COW_AT(101b625a)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b626b: ;
    COW_AT(101b626b)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t66 = cow_call_regs(g, COW_IMG(0x101b6e90u), (uint8_t)arg1 - 8u, self, g->edx, 1, 0);
    t67 = g->edx;
    eax = t66;
    edx = t67;
    COW_AT(101b6272)
    if ((uint8_t)eax == 0u) goto L_101b628e;
    COW_AT(101b6276)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b70d0u), self, 0);
    COW_AT(101b627d)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b628e: ;
    COW_AT(101b628e)
    t68 = rd32(self + 0xf108u);
    if (t68 != 4u) goto L_101b62cc;
    COW_AT(101b6297)
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t69 = cow_thiscall(g, COW_IMG(0x101ac2c0u), self + 0x7e30u, 0);
    eax = t69;
    COW_AT(101b62a2)
    if ((int32_t)eax < 0) goto L_101b6751;
    COW_AT(101b62aa)
    g->edx = rd32(self);
    t70 = rd32(self);
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, rd32(t70 + 0x5cu), self, 0);
    t71 = g->edx;
    edx = t71;
    COW_AT(101b62b1)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xf104u))), rd32(self + 0xf104u), 0);
    COW_AT(101b62bb)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b62cc: ;
    COW_AT(101b62cc)
    g->eax = eax;
    g->edx = rd32(self);
    t72 = rd32(self);
    g->esp = sp0 - 0x428u;
    t73 = cow_thiscall(g, rd32(t72 + 0x20u), self, 0);
    t74 = g->ecx;
    t75 = g->edx;
    eax = t73;
    ecx = t74;
    edx = t75;
    COW_AT(101b62d3)
    if ((uint8_t)eax != 0u) goto L_101b6751;
    COW_AT(101b62db)
    t76 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t76);
    wr32(sp0 - 0x430u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x434u, 3u);
    g->esp = sp0 - 0x434u;
    cow_thiscall(g, rd32(self + 0x8c78u), ecx, 0);
    COW_AT(101b62ef)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6303: ;
    COW_AT(101b6303)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t47 = cow_call_regs(g, COW_IMG(0x101b6e90u), (uint8_t)arg1 - 8u, self, g->edx, 1, 0);
    t48 = g->edx;
    eax = t47;
    edx = t48;
    COW_AT(101b630a)
    if ((uint8_t)eax != 0u) goto L_101b674a;
    COW_AT(101b6312)
    t49 = rd32(self + 0xf108u);
    if (t49 != 4u) goto L_101b6381;
    COW_AT(101b631b)
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t50 = cow_call_regs(g, COW_IMG(0x101ac3d0u), eax, self + 0x7e30u, g->edx, 1, 0);
    t51 = g->edx;
    eax = t50;
    edx = t51;
    COW_AT(101b6326)
    if ((int32_t)eax < 0) goto L_101b634c;
    COW_AT(101b632c)
    g->edx = rd32(self);
    t52 = rd32(self);
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, rd32(t52 + 0x5cu), self, 0);
    t53 = g->edx;
    edx = t53;
    COW_AT(101b6331)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xf104u))), rd32(self + 0xf104u), 0);
    COW_AT(101b633b)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b634c: ;
    COW_AT(101b634c)
    g->esp = sp0 - 0x428u;
    t54 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    eax = t54;
    COW_AT(101b6351)
    if ((uint8_t)eax != 0u) goto L_101b6751;
    COW_AT(101b6359)
    g->eax = eax;
    g->edx = rd32(self);
    t55 = rd32(self);
    g->esp = sp0 - 0x428u;
    t56 = cow_thiscall(g, rd32(t55 + 0x68u), self, 0);
    t57 = g->edx;
    eax = t56;
    edx = t57;
    COW_AT(101b6360)
    wr32(sp0 - 0x42cu, eax);
    g->eax = rd32(self);
    g->edx = edx;
    t58 = rd32(self);
    g->esp = sp0 - 0x42cu;
    t59 = cow_thiscall(g, rd32(t58 + 0x64u), self, 0);
    t60 = g->edx;
    eax = t59;
    edx = t60;
    COW_AT(101b6368)
    wr32(sp0 - 0x430u, eax);
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, eax, rd32(sp0 - 0x42cu));
    COW_AT(101b6370)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6381: ;
    COW_AT(101b6381)
    g->eax = eax;
    g->edx = rd32(self);
    t61 = rd32(self);
    g->esp = sp0 - 0x428u;
    t62 = cow_thiscall(g, rd32(t61 + 0x20u), self, 0);
    t63 = g->ecx;
    t64 = g->edx;
    eax = t62;
    ecx = t63;
    edx = t64;
    COW_AT(101b6388)
    if ((uint8_t)eax != 0u) goto L_101b6751;
    COW_AT(101b6390)
    t65 = rd32(self + 0x8c7cu);
    wr32(sp0 - 0x42cu, t65);
    wr32(sp0 - 0x430u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x434u, 4u);
    g->esp = sp0 - 0x434u;
    cow_thiscall(g, rd32(self + 0x8c78u), ecx, 0);
    COW_AT(101b63a4)
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
    t36 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(101b63d3)
    if ((uint8_t)eax != 0u) goto L_101b6751;
    COW_AT(101b63db)
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t38 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(101b63e2)
    if ((uint8_t)eax == 0u) goto L_101b6402;
    COW_AT(101b63e6)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b4fc0u), self + 0x8aacu, 0);
    COW_AT(101b63f1)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6402: ;
    COW_AT(101b6402)
    if ((rd8(self + 0xf114u) & 8u) == 0u) goto L_101b6751;
    eax = (eax & 0xffffff00u) | rd8(self + 0xf114u);
    COW_AT(101b6412)
    g->eax = eax;
    g->edx = rd32(self);
    t40 = rd32(self);
    g->esp = sp0 - 0x428u;
    t41 = cow_thiscall(g, rd32(t40 + 0x20u), self, 0);
    t42 = g->edx;
    eax = t41;
    edx = t42;
    COW_AT(101b6419)
    if ((uint8_t)eax == 0u) goto L_101b6439;
    COW_AT(101b641d)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b4fc0u), self + 0x8aacu, 0);
    COW_AT(101b6428)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6439: ;
    COW_AT(101b6439)
    t43 = rd8(self + 0xf114u);
    if ((t43 & 8u) == 0u) goto L_101b6751;
    COW_AT(101b6445)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101ac4e0u), self + 0x7e30u, 0);
    COW_AT(101b644c)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b645d: ;
    COW_AT(101b645d)
    t44 = rd8(self + 0xf114u);
    if ((t44 & 8u) == 0u) goto L_101b6751;
    COW_AT(101b646a)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t45 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    COW_AT(101b6471)
    if ((uint8_t)eax != 0u) goto L_101b6751;
    COW_AT(101b6479)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101ac4e0u), self + 0x7e30u, 0);
    COW_AT(101b6484)
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
    t25 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t26 = g->edx;
    eax = t25;
    edx = t26;
    COW_AT(101b64b0)
    if ((uint8_t)eax != 0u) goto L_101b6751;
    COW_AT(101b64b8)
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t27 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    COW_AT(101b64bf)
    if ((uint8_t)eax == 0u) goto L_101b64df;
    COW_AT(101b64c3)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b5020u), self + 0x8aacu, 0);
    COW_AT(101b64ce)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b64df: ;
    COW_AT(101b64df)
    if ((rd8(self + 0xf114u) & 8u) == 0u) goto L_101b6751;
    COW_AT(101b64ef)
    g->eax = rd32(self);
    g->edx = edx;
    t29 = rd32(self);
    g->esp = sp0 - 0x428u;
    t30 = cow_thiscall(g, rd32(t29 + 0x20u), self, 0);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    COW_AT(101b64f6)
    if ((uint8_t)eax == 0u) goto L_101b6516;
    COW_AT(101b64fa)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b5020u), self + 0x8aacu, 0);
    COW_AT(101b6505)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6516: ;
    COW_AT(101b6516)
    t32 = rd8(self + 0xf114u);
    if ((t32 & 8u) == 0u) goto L_101b6751;
    COW_AT(101b6522)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101ac520u), self + 0x7e30u, 0);
    COW_AT(101b6529)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b653a: ;
    COW_AT(101b653a)
    t33 = rd8(self + 0xf114u);
    if ((t33 & 8u) == 0u) goto L_101b6751;
    COW_AT(101b6547)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t34 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    COW_AT(101b654e)
    if ((uint8_t)eax != 0u) goto L_101b6751;
    COW_AT(101b6556)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101ac520u), self + 0x7e30u, 0);
    COW_AT(101b6561)
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
    t18 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(101b6589)
    if ((uint8_t)eax != 0u) goto L_101b6751;
    COW_AT(101b6591)
    g->esp = sp0 - 0x428u;
    t20 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    eax = t20;
    COW_AT(101b6598)
    if ((uint8_t)eax != 0u) goto L_101b65da;
    COW_AT(101b659c)
    if ((rd8(self + 0xf114u) & 8u) == 0u) goto L_101b6751;
    eax = (eax & 0xffffff00u) | rd8(self + 0xf114u);
    COW_AT(101b65ac)
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t21 = cow_thiscall(g, rd32(rd32(self) + 0x20u), self, 0);
    eax = t21;
    COW_AT(101b65b3)
    if ((uint8_t)eax != 0u) goto L_101b65da;
    COW_AT(101b65b7)
    t22 = rd8(self + 0xf114u);
    if ((t22 & 8u) == 0u) goto L_101b6751;
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
    t23 = rd8(self + 0xf114u);
    if ((t23 & 8u) == 0u) goto L_101b6751;
    COW_AT(101b65fe)
    g->esp = sp0 - 0x428u;
    t24 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    eax = t24;
    COW_AT(101b6605)
    if ((uint8_t)eax != 0u) goto L_101b6751;
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
    eax = t4;
    edx = t5;
    COW_AT(101b663f)
    if ((uint8_t)eax != 0u) goto L_101b6751;
    COW_AT(101b6647)
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t6 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(101b664e)
    if ((uint8_t)eax != 0u) goto L_101b6696;
    COW_AT(101b6652)
    if ((rd8(self + 0xf114u) & 8u) == 0u) goto L_101b6751;
    COW_AT(101b6662)
    g->eax = rd32(self);
    t8 = rd32(self);
    g->esp = sp0 - 0x428u;
    t9 = cow_thiscall(g, rd32(t8 + 0x20u), self, 0);
    eax = t9;
    COW_AT(101b6669)
    if ((uint8_t)eax != 0u) goto L_101b6696;
    COW_AT(101b666d)
    t10 = rd8(self + 0xf114u);
    if ((t10 & 8u) == 0u) goto L_101b6751;
    COW_AT(101b6679)
    t11 = rd32(self + 0x86b8u);
    wr32(self + 0x8888u, t11);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6696: ;
    COW_AT(101b6696)
    t12 = rd32(self + 0x8c70u);
    t13 = rd32(sp0 - 0x428u);
    wr32(self + 0x8c74u, t12);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = t13;
    g->ebp = in_ebp;
    return 1u;
L_101b66b3: ;
    COW_AT(101b66b3)
    t14 = rd8(self + 0xf114u);
    if ((t14 & 8u) == 0u) goto L_101b6751;
    COW_AT(101b66c0)
    g->esp = sp0 - 0x428u;
    t15 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    eax = t15;
    COW_AT(101b66c7)
    if ((uint8_t)eax != 0u) goto L_101b6751;
    COW_AT(101b66cf)
    t16 = rd32(self + 0x86b8u);
    t17 = rd32(sp0 - 0x428u);
    wr32(self + 0x8888u, t16);
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = t17;
    g->ebp = in_ebp;
    return 1u;
L_101b66ec: ;
    COW_AT(101b66ec)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b7100u), self, 0);
    COW_AT(101b66f3)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b6704: ;
    COW_AT(101b6704)
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x101b7130u), self, 0);
    COW_AT(101b670b)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = in_ebp;
    return 1u;
L_101b671c: ;
    COW_AT(101b671c)
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t2 = cow_call_regs(g, COW_IMG(0x101b6e90u), (uint8_t)arg1 - 8u, self, g->edx, 1, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(101b6723)
    if ((uint8_t)eax == 0u) goto L_101b6751;
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
    COW_AT(101b6739)
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
L_101b6751: ;
    COW_AT(101b6751)
    g->ebx = rd32(sp0 - 0x420u);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = rd32(sp0 - 0x428u);
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b5d69u:
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
    case 0x101b5d7cu:
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
    case 0x101b5d89u:
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
    case 0x101b5da2u:
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
    case 0x101b5dbau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        ebp = g->ebp;
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
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b5dc4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
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
    case 0x101b5de5u:
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
    case 0x101b5defu:
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
    case 0x101b5e0fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b5e25u:
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
    case 0x101b5e3cu:
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
        wr32(sp0 - 0x42cu, sp0 - 0x41cu);
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
    case 0x101b5e49u:
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
    case 0x101b5e64u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
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
    case 0x101b5e89u:
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
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
    case 0x101b5eafu:
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
    case 0x101b5ed3u:
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
    case 0x101b5eeeu:
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
        g->esp = sp0 - 0x42cu;
        g->edi = self + 0x7e30u;
        wr32(sp0 - 0x42cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x101b5ef6u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x101b5efeu:
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
    case 0x101b5f23u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_430;
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
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x434u;
        (void)sp0;
        return 1;
    }
    case 0x101b5f2du:
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
    case 0x101b5f3cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b5f41u:
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
    case 0x101b5f50u:
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
    case 0x101b5f5bu:
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
    case 0x101b5f7fu:
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
    case 0x101b5f8cu:
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
        g->esp = sp0 - 0x42cu;
        g->edi = self + 0x7e30u;
        wr32(sp0 - 0x42cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x101b5f94u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x101b5f9cu:
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
    case 0x101b5fc1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_430;
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
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x434u;
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
    case 0x101b5fdau:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b5fe1u:
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
    case 0x101b5fecu:
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
    case 0x101b5ffbu:
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
    case 0x101b6019u:
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
    case 0x101b6028u:
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b6040u:
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
    case 0x101b605du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
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
    case 0x101b6075u:
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
    case 0x101b6084u:
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
    case 0x101b60a2u:
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
    case 0x101b60b3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b60cbu:
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
    case 0x101b60d8u:
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
    case 0x101b614cu:
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
    case 0x101b6157u:
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
    case 0x101b6164u:
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
    case 0x101b616bu:
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
    case 0x101b618cu:
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
    case 0x101b619bu:
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
    case 0x101b61b9u:
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
    case 0x101b61d0u:
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
        g->esp = sp0 - 0x42cu;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b61d8u:
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
        g->esp = sp0 - 0x430u;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b61e0u:
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
    case 0x101b61eeu:
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
        g->esp = sp0 - 0x42cu;
        (void)sp0;
        return 1;
    }
    case 0x101b61f7u:
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
        g->esp = sp0 - 0x434u;
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
    case 0x101b6210u:
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
    case 0x101b621eu:
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
        g->esp = sp0 - 0x42cu;
        (void)sp0;
        return 1;
    }
    case 0x101b6227u:
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
        g->esp = sp0 - 0x434u;
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
    case 0x101b6247u:
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
        g->esp = sp0 - 0x42cu;
        (void)sp0;
        return 1;
    }
    case 0x101b6250u:
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
        g->esp = sp0 - 0x434u;
        (void)sp0;
        return 1;
    }
    case 0x101b625au:
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
    case 0x101b626bu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b6272u:
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
    case 0x101b627du:
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
    case 0x101b62a2u:
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
    case 0x101b62b1u:
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
    case 0x101b62bbu:
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
    case 0x101b62d3u:
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
    case 0x101b62efu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
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
        g->esp = sp0 - 0x434u;
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b630au:
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
    case 0x101b6326u:
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
    case 0x101b6331u:
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
    case 0x101b633bu:
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
    case 0x101b6351u:
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
    case 0x101b6360u:
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
    case 0x101b6368u:
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
        g->esp = sp0 - 0x42cu;
        (void)sp0;
        return 1;
    }
    case 0x101b6370u:
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
    case 0x101b6388u:
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
    case 0x101b63a4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
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
        g->esp = sp0 - 0x434u;
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b63d3u:
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
    case 0x101b63e2u:
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
    case 0x101b63f1u:
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
    case 0x101b6428u:
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
    case 0x101b644cu:
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
    case 0x101b645du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
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
        uint32_t self;
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b6471u:
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
    case 0x101b6484u:
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b64b0u:
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
    case 0x101b64bfu:
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
    case 0x101b64ceu:
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
    case 0x101b6505u:
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
    case 0x101b6529u:
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
    case 0x101b653au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
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
        uint32_t self;
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b654eu:
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
    case 0x101b6561u:
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b6589u:
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
    case 0x101b6598u:
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
        uint32_t self;
        uint32_t in_edx;
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
        uint32_t self;
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b6605u:
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
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
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b663fu:
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
    case 0x101b664eu:
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
        uint32_t self;
        uint32_t in_edx;
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
        uint32_t self;
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x101b66c7u:
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
        uint32_t self;
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b66f3u:
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
    case 0x101b6704u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b670bu:
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
    case 0x101b671cu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
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
        g->esp = sp0 - 0x428u;
        g->eax = (uint8_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b6723u:
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
    case 0x101b6739u:
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
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     101b6412: holds in_ebx, which no location here says
     101b6419: holds in_ebx, which no location here says
     101b6439: holds in_ebx, which no location here says
     101b64ef: holds in_ebx, which no location here says
     101b64f6: holds in_ebx, which no location here says
     101b6516: holds in_ebx, which no location here says
     101b65ac: holds in_ebx, which no location here says
     101b65b3: holds in_ebx, which no location here says
     101b65b7: holds in_ebx, which no location here says
     101b6662: holds in_ebx, which no location here says
     101b6669: holds in_ebx, which no location here says
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
