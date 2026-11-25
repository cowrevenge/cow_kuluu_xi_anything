/* f_0x10064db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10064db0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_718;
    uint32_t loc_71c;
    uint32_t loc_730;
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
    cow_frame(g, sp0, 1852u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10064dc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x728u); in_ebp = rd32(sp0 - 0x724u); self = rd32(sp0 - 0x714u); g->ebp = rd32(sp0 - 0x724u); g->esi = rd32(sp0 - 0x728u); goto E_10064dc7;
    case 0x10064ddfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064ddf;
    case 0x10064de3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064de3;
    case 0x10064deeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064dee;
    case 0x10064dfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064dfa;
    case 0x10064e09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064e09;
    case 0x10064e1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e1d;
    case 0x10064e28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064e28;
    case 0x10064e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064e30;
    case 0x10064e41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e41;
    case 0x10064e4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e4b;
    case 0x10064e55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_10064e55;
    case 0x10064e62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e62;
    case 0x10064e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e6b;
    case 0x10064e78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e78;
    case 0x10064e82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e82;
    case 0x10064e8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e8f;
    case 0x10064e99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e99;
    case 0x10064ea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064ea3;
    case 0x10064ea8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064ea8;
    case 0x10064eaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064eae;
    case 0x10064eb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064eb6;
    case 0x10064eb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064eb8;
    case 0x10064ebbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064ebb;
    case 0x10064ec1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064ec1;
    case 0x10064eccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064ecc;
    case 0x10064ed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064ed0;
    case 0x10064edau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064eda;
    case 0x10064ee9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064ee9;
    case 0x10064ef2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064ef2;
    case 0x10064f01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064f01;
    case 0x10064f06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064f06;
    case 0x10064f0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064f0c;
    case 0x10064f0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064f0f;
    case 0x10064f1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064f1f;
    case 0x10064f28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064f28;
    case 0x10064f35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064f35;
    case 0x10064f48u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064f48;
    case 0x10064f52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064f52;
    case 0x10064f5fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064f5f;
    case 0x10064f6bu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_10064f6b;
    case 0x10064f76u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_10064f76;
    case 0x10064f7du: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_10064f7d;
    case 0x10064f8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064f8e;
    case 0x10064f93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064f93;
    case 0x10064fa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064fa0;
    case 0x10064faau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064faa;
    case 0x10064fb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064fb8;
    case 0x10064fbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064fbe;
    case 0x10064fc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064fc5;
    case 0x10064fccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064fcc;
    case 0x10064fd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064fd3;
    case 0x10064fd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064fd5;
    case 0x10064fe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064fe5;
    case 0x10064fe9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064fe9;
    case 0x10064ff6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064ff6;
    case 0x10064ffbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064ffb;
    case 0x1006500bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006500b;
    case 0x10065011u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065011;
    case 0x10065026u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065026;
    case 0x1006502eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006502e;
    case 0x10065032u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065032;
    case 0x10065038u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065038;
    case 0x1006504au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006504a;
    case 0x10065052u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065052;
    case 0x1006506bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006506b;
    case 0x1006506du: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_1006506d;
    case 0x1006507cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006507c;
    case 0x10065081u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065081;
    case 0x1006508eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006508e;
    case 0x10065094u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065094;
    case 0x100650a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100650a2;
    case 0x100650a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100650a8;
    case 0x100650aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100650aa;
    case 0x100650b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_100650b2;
    case 0x100650bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_100650bb;
    case 0x100650c0u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_100650c0;
    case 0x100650cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100650ca;
    case 0x100650d8u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100650d8;
    case 0x100650dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_100650df;
    case 0x100650e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_100650e6;
    case 0x100650edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100650ed;
    case 0x100650f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_100650f1;
    case 0x100650f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_100650f3;
    case 0x10065105u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065105;
    case 0x10065116u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065116;
    case 0x1006511eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006511e;
    case 0x1006512eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006512e;
    case 0x10065140u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065140;
    case 0x10065152u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065152;
    case 0x1006515bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006515b;
    case 0x1006516bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006516b;
    case 0x10065170u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065170;
    case 0x1006517du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006517d;
    case 0x10065182u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065182;
    case 0x1006518fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006518f;
    case 0x10065195u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065195;
    case 0x100651a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_100651a6;
    case 0x100651afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100651af;
    case 0x100651bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100651bc;
    case 0x100651c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100651c6;
    case 0x100651c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100651c8;
    case 0x100651d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100651d5;
    case 0x100651dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100651df;
    case 0x100651edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100651ed;
    case 0x100651f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100651f1;
    case 0x10065200u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065200;
    case 0x10065203u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065203;
    case 0x1006520cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_1006520c;
    case 0x10065217u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10065217;
    case 0x1006521fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_1006521f;
    case 0x1006522bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006522b;
    case 0x10065234u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065234;
    default: break;
    }
#endif

    COW_AT(10064db0)
    wr32(sp0 - 0x720u, in_ebx);
    wr32(sp0 - 0x724u, in_ebp);
    wr32(sp0 - 0x728u, in_esi);
    wr32(sp0 - 0x714u, self);
    wr32(sp0 - 0x72cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x72cu;
    t1 = cow_thiscall(g, COW_IMG(0x1006b7a0u), sp0 - 0x710u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(10064dc7)
    wr32(sp0 - 0x730u, 0x1000u);
    wr32(sp0 - 0x734u, 1u);
    wr32(sp0 - 0x738u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t3 = cow_thiscall(g, COW_IMG(0x1006b7c0u), sp0 - 0x710u, 3, arg1, 1u, 0x1000u);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(10064ddf)
    if (eax != 0u) goto L_10064e09;
    COW_AT(10064de3)
    wr32(sp0 - 0x730u, arg1);
    wr32(sp0 - 0x734u, COW_IMG(0x10353ad8u));
    g->eax = eax;
    g->esp = sp0 - 0x72cu;
    t6 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353ad8u), arg1);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(10064dee)
    g->eax = eax;
    g->esp = sp0 - 0x72cu;
    t8 = cow_thiscall(g, COW_IMG(0x1006b7b0u), sp0 - 0x710u, 0);
    eax = t8;
    COW_AT(10064dfa)
    g->ebx = rd32(sp0 - 0x720u);
    g->esi = rd32(sp0 - 0x728u);
    g->edi = rd32(sp0 - 0x72cu);
    g->ebp = rd32(sp0 - 0x724u);
    return eax & 0xffffff00u;
L_10064e09: ;
    COW_AT(10064e09)
    wr32(sp0 - 0x718u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t9 = cow_thiscall(g, COW_IMG(0x10067e50u), sp0 - 0x604u, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(10064e1d)
    wr32(sp0 - 0x730u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t11 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x710u, 1, 0u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(10064e28)
    if (eax == 0u)
    {
        edi = in_edi;
        goto L_1006521f;
    }
    edi = in_edi;
L_10064e30: ;
    COW_AT(10064e30)
    t13 = rd32(sp0 - 0x70cu);
    wr32(sp0 - 0x730u, t13);
    g->eax = t13;
    g->esp = sp0 - 0x72cu;
    t14 = cow_fastcall(g, COW_IMG(0x10067e70u), sp0 - 0x604u, edx, 1, t13);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(10064e41)
    if (eax == 0u)
    {
        loc_718 = rd32(sp0 - 0x718u);
        loc_71c = rd32(sp0 - 0x71cu);
        goto L_1006520c;
    }
    ebx = eax;
    COW_AT(10064e4b)
    if ((int32_t)ebx <= 0)
    {
        loc_718 = rd32(sp0 - 0x718u);
        loc_71c = rd32(sp0 - 0x71cu);
        goto L_1006520c;
    }
    ebp = 0u;
    loc_718 = rd32(sp0 - 0x718u);
    loc_71c = rd32(sp0 - 0x71cu);
L_10064e55: ;
    COW_AT(10064e55)
    wr32(sp0 - 0x730u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t16 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    COW_AT(10064e62)
    t18 = rd8(eax);
    if ((uint8_t)t18 != 0x2fu) goto L_10064f28;
    COW_AT(10064e6b)
    wr32(sp0 - 0x730u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t19 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(10064e78)
    t21 = rd8(eax + 1u);
    if ((uint8_t)t21 == 0x2fu)
    {
        loc_718 = rd32(sp0 - 0x718u);
        loc_71c = rd32(sp0 - 0x71cu);
        goto L_1006520c;
    }
    COW_AT(10064e82)
    wr32(sp0 - 0x730u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t22 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
    COW_AT(10064e8f)
    t25 = rd8(eax + 1u);
    if ((uint8_t)t25 != 0x2au) goto L_10064f28;
    COW_AT(10064e99)
    if (rd8(rd32(sp0 - 0x70cu)) == 0u)
    {
        eax = rd32(sp0 - 0x70cu);
        ecx = (ecx & 0xffffff00u) | rd8(rd32(sp0 - 0x70cu));
        goto L_10064ebb;
    }
    eax = rd32(sp0 - 0x70cu);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(sp0 - 0x70cu));
L_10064ea3: ;
    COW_AT(10064ea3)
    if ((uint8_t)ecx != 0x2fu) goto L_10064eae;
    COW_AT(10064ea8)
    t26 = rd8(eax + 1u);
    if ((uint8_t)t26 == 0x2au) goto L_10064eb8;
L_10064eae: ;
    COW_AT(10064eae)
    if (rd8(eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        goto L_10064ea3;
    }
    eax = eax + 1u;
    COW_AT(10064eb6)
L_10064ec1: ;
    COW_AT(10064ec1)
    wr32(sp0 - 0x730u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t27 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x710u, 1, 0u);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(10064ecc)
    if (eax != 0u) goto L_10064ebb;
    COW_AT(10064ed0)
    wr32(sp0 - 0x730u, COW_IMG(0x10353b54u));
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x728u;
    t30 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353b54u), rd32(sp0 - 0x72cu));
    t31 = g->edx;
    eax = t30;
    edx = t31;
    COW_AT(10064eda)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t32 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t33 = g->edx;
    eax = t32;
    edx = t33;
    COW_AT(10064ee9)
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x72cu;
    t34 = cow_thiscall(g, COW_IMG(0x1006b7b0u), sp0 - 0x710u, 0);
    eax = t34;
    COW_AT(10064ef2)
    g->ebx = rd32(sp0 - 0x720u);
    g->esi = rd32(sp0 - 0x728u);
    g->edi = rd32(sp0 - 0x72cu);
    g->ebp = rd32(sp0 - 0x724u);
    return eax & 0xffffff00u;
L_10064eb8: ;
    COW_AT(10064eb8)
    eax = eax + 2u;
L_10064ebb: ;
    COW_AT(10064ebb)
    if (rd8(eax) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        goto L_10064f01;
    }
    goto L_10064ec1;
L_10064f01: ;
    COW_AT(10064f01)
    if ((uint8_t)ecx != 0x2au) goto L_10064f0c;
    COW_AT(10064f06)
    t35 = rd8(eax + 1u);
    if ((uint8_t)t35 == 0x2fu) goto L_10064f0f;
L_10064f0c: ;
    COW_AT(10064f0c)
    eax = eax + 1u;
    goto L_10064ebb;
L_10064f0f: ;
    COW_AT(10064f0f)
    wr32(sp0 - 0x730u, eax + 2u);
    g->eax = eax + 2u;
    g->esp = sp0 - 0x72cu;
    t36 = cow_fastcall(g, COW_IMG(0x10067e70u), sp0 - 0x604u, edx, 1, eax + 2u);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(10064f1f)
    ebx = eax;
    ebp = 0u;
    loc_718 = rd32(sp0 - 0x718u);
    loc_71c = rd32(sp0 - 0x71cu);
L_100650b2: ;
    COW_AT(100650b2)
    if ((int32_t)(ebp + 1u) < (int32_t)ebx)
    {
        ebp = ebp + 1u;
        goto L_10064e55;
    }
    COW_AT(100650bb)
L_1006520c: ;
    COW_AT(1006520c)
    wr32(sp0 - 0x730u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t132 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x710u, 1, 0u);
    t133 = g->edx;
    eax = t132;
    edx = t133;
    COW_AT(10065217)
    if (eax != 0u) goto L_10064e30;
L_1006521f: ;
    COW_AT(1006521f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t134 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t135 = g->edx;
    eax = t134;
    edx = t135;
    COW_AT(1006522b)
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x72cu;
    t136 = cow_thiscall(g, COW_IMG(0x1006b7b0u), sp0 - 0x710u, 0);
    eax = t136;
    COW_AT(10065234)
    g->ebx = rd32(sp0 - 0x720u);
    g->esi = rd32(sp0 - 0x728u);
    g->edi = rd32(sp0 - 0x72cu);
    g->ebp = rd32(sp0 - 0x724u);
    return (eax & 0xffffff00u) | 1u;
L_10064f28: ;
    COW_AT(10064f28)
    wr32(sp0 - 0x730u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t38 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t39 = g->ecx;
    t40 = g->edx;
    eax = t38;
    ecx = t39;
    edx = t40;
    COW_AT(10064f35)
    wr32(sp0 - 0x730u, ebp);
    if (rd8(eax) == 0x23u)
    {
        loc_730 = ebp;
        goto L_100650c0;
    }
    loc_730 = ebp;
    COW_AT(10064f48)
    g->eax = eax;
    g->esp = sp0 - 0x72cu;
    t41 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, loc_730);
    eax = t41;
    COW_AT(10064f52)
    esi = eax;
    edi = COW_IMG(0x10353b4cu);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        loc_718 = rd32(sp0 - 0x718u);
        loc_71c = rd32(sp0 - 0x71cu);
    }
    else
    {
    COW_AT(10064f5f)
        wr32(sp0 - 0x718u, 1u);
        wr32(sp0 - 0x71cu, 0u);
        loc_718 = 1u;
        loc_71c = 0u;
    }
    COW_AT(10064f6b)
    if (loc_718 == 1u)
    {
        eax = loc_718 - 1u;
    COW_AT(1006506d)
        wr32(sp0 - 0x730u, ebp);
        g->eax = eax;
        g->edx = 0u;
        g->esp = sp0 - 0x72cu;
        t79 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
        t80 = g->edx;
        eax = t79;
        edx = t80;
    COW_AT(1006507c)
        t81 = rd8(eax);
        if ((uint8_t)t81 == 0u)
        {
            loc_718 = rd32(sp0 - 0x718u);
            loc_71c = rd32(sp0 - 0x71cu);
            goto L_100650b2;
        }
        esi = 0u;
L_10065081: ;
    COW_AT(10065081)
        wr32(sp0 - 0x730u, ebp);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t82 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
        t83 = g->edx;
        eax = t82;
        edx = t83;
    COW_AT(1006508e)
        t84 = rd8(eax + esi);
        if ((uint8_t)t84 == 0x7bu) goto L_100650aa;
    COW_AT(10065094)
        wr32(sp0 - 0x730u, ebp);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t85 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
        t86 = g->edx;
        eax = t85;
        edx = t86;
        esi = esi + 1u;
    COW_AT(100650a2)
        t87 = rd8(eax + esi);
        if ((uint8_t)t87 != 0u) goto L_10065081;
    COW_AT(100650a8)
        loc_718 = rd32(sp0 - 0x718u);
        loc_71c = rd32(sp0 - 0x71cu);
    }
    else
    {
        eax = loc_718 - 1u;
    COW_AT(10064f76)
        if (eax != 1u)
        {
            eax = eax - 1u;
            edx = 0u;
        }
        else
        {
            eax = eax - 1u;
    COW_AT(10064f7d)
            wr32(sp0 - 0x730u, ebp);
            g->eax = eax;
            g->edx = 0u;
            g->esp = sp0 - 0x72cu;
            t42 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
            t43 = g->ecx;
            t44 = g->edx;
            eax = t42;
            ecx = t43;
            edx = t44;
    COW_AT(10064f8e)
            t45 = rd8(eax);
            if ((uint8_t)t45 == 0u) goto L_10064fbe;
            esi = 0u;
L_10064f93: ;
    COW_AT(10064f93)
            wr32(sp0 - 0x730u, ebp);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t46 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
            t47 = g->edx;
            eax = t46;
            edx = t47;
    COW_AT(10064fa0)
            t48 = rd8(eax + esi);
            if ((uint8_t)t48 == 0x7du) goto L_10065032;
    COW_AT(10064faa)
            wr32(sp0 - 0x730u, ebp);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t49 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
            t50 = g->ecx;
            t51 = g->edx;
            eax = t49;
            ecx = t50;
            edx = t51;
            esi = esi + 1u;
    COW_AT(10064fb8)
            t52 = rd8(eax + esi);
            if ((uint8_t)t52 != 0u) goto L_10064f93;
L_10064fbe: ;
    COW_AT(10064fbe)
            wr32(sp0 - 0x730u, 0x1cu);
            g->eax = eax;
            g->esp = sp0 - 0x724u;
            t53 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, rd32(sp0 - 0x72cu), rd32(sp0 - 0x728u));
            t54 = g->edx;
            eax = t53;
            edx = t54;
    COW_AT(10064fc5)
            if (eax == 0u)
            {
                edi = 0u;
            }
            else
            {
    COW_AT(10064fcc)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x72cu;
                t55 = cow_thiscall(g, COW_IMG(0x10064190u), eax, 0);
                t56 = g->edx;
                eax = t55;
                edx = t56;
    COW_AT(10064fd3)
                edi = eax;
            }
    COW_AT(10064fd5)
            wr32(sp0 - 0x730u, ebp + 1u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t57 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 1u);
            t58 = g->edx;
            eax = t57;
            edx = t58;
            esi = ebp + 1u;
    COW_AT(10064fe5)
            if (eax == 0u) goto L_10065038;
    COW_AT(10064fe9)
            wr32(sp0 - 0x730u, esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t59 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
            t60 = g->edx;
            eax = t59;
            edx = t60;
    COW_AT(10064ff6)
            t61 = rd8(eax);
            if ((uint8_t)t61 != 0x3du) goto L_10065038;
    COW_AT(10064ffb)
            wr32(sp0 - 0x730u, ebp + 2u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t62 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 2u);
            t63 = g->ecx;
            t64 = g->edx;
            eax = t62;
            ecx = t63;
            edx = t64;
            esi = ebp + 2u;
    COW_AT(1006500b)
            wr32(sp0 - 0x730u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t65 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
            t66 = g->edx;
            eax = t65;
            edx = t66;
    COW_AT(10065011)
            wr32(sp0 - 0x71cu, eax);
            wr32(sp0 - 0x730u, eax);
            wr32(sp0 - 0x734u, ebp);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x730u;
            t67 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
            t68 = g->edx;
            eax = t67;
            edx = t68;
    COW_AT(10065026)
            wr32(sp0 - 0x734u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t69 = cow_thiscall(g, COW_IMG(0x100643b0u), edi, 2, eax, rd32(sp0 - 0x730u));
            t70 = g->edx;
            eax = t69;
            edx = t70;
    COW_AT(1006502e)
            ebp = esi;
L_10065052: ;
    COW_AT(10065052)
            wr32(sp0 - 0x730u, edi);
            t76 = rd32(sp0 - 0x71cu) + 1u;
            wr32(sp0 - 0x71cu, t76);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t77 = cow_thiscall(g, COW_IMG(0x1006baf0u), rd32(sp0 - 0x714u) + 0x10cu, 1, edi);
            t78 = g->edx;
            eax = t77;
            edx = t78;
    COW_AT(1006506b)
            loc_718 = rd32(sp0 - 0x718u);
            loc_71c = rd32(sp0 - 0x71cu);
        }
    }
    goto L_100650b2;
L_10065032: ;
    COW_AT(10065032)
    wr32(sp0 - 0x718u, 0u);
    edi = 0u;
    loc_718 = 0u;
    loc_71c = rd32(sp0 - 0x71cu);
    goto L_100650b2;
L_10065038: ;
    COW_AT(10065038)
    t71 = rd32(sp0 - 0x71cu);
    wr32(sp0 - 0x730u, t71);
    wr32(sp0 - 0x734u, ebp);
    g->eax = t71;
    g->edx = edx;
    g->esp = sp0 - 0x730u;
    t72 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t73 = g->edx;
    eax = t72;
    edx = t73;
    COW_AT(1006504a)
    wr32(sp0 - 0x734u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t74 = cow_thiscall(g, COW_IMG(0x100643b0u), edi, 2, eax, rd32(sp0 - 0x730u));
    t75 = g->edx;
    eax = t74;
    edx = t75;
    goto L_10065052;
L_100650aa: ;
    COW_AT(100650aa)
    wr32(sp0 - 0x718u, 2u);
    loc_718 = 2u;
    loc_71c = rd32(sp0 - 0x71cu);
    goto L_100650b2;
L_100650c0: ;
    COW_AT(100650c0)
    g->eax = eax;
    g->esp = sp0 - 0x72cu;
    t88 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, loc_730);
    eax = t88;
    COW_AT(100650ca)
    esi = eax + 1u;
    edi = COW_IMG(0x10353b78u);
    ecx = 7u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(100650d8)
        wr32(sp0 - 0x730u, 0x1cu);
        g->eax = eax;
        g->esp = sp0 - 0x724u;
        t89 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, 0u, 1, 3, 0x1cu, rd32(sp0 - 0x72cu), rd32(sp0 - 0x728u));
        t90 = g->edx;
        eax = t89;
        edx = t90;
    COW_AT(100650df)
        if (eax == 0u)
        {
    COW_AT(100650f1)
            esi = 0u;
        }
        else
        {
    COW_AT(100650e6)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t91 = cow_thiscall(g, COW_IMG(0x10064190u), eax, 0);
            t92 = g->edx;
            eax = t91;
            edx = t92;
    COW_AT(100650ed)
            esi = eax;
        }
    COW_AT(100650f3)
        wr32(sp0 - 0x730u, 0u);
        wr32(sp0 - 0x734u, ebp + 2u);
        g->eax = ebp + 2u;
        g->edx = edx;
        g->esp = sp0 - 0x730u;
        t93 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 2u);
        t94 = g->edx;
        eax = t93;
        edx = t94;
    COW_AT(10065105)
        wr32(sp0 - 0x734u, eax);
        wr32(sp0 - 0x738u, ebp + 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x734u;
        t95 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 1u);
        t96 = g->edx;
        eax = t95;
        edx = t96;
    COW_AT(10065116)
        wr32(sp0 - 0x738u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x72cu;
        t97 = cow_thiscall(g, COW_IMG(0x100642b0u), esi, 3, eax, rd32(sp0 - 0x734u), rd32(sp0 - 0x730u));
        eax = t97;
    COW_AT(1006511e)
        wr32(sp0 - 0x730u, esi);
        g->eax = eax;
        g->edx = rd32(sp0 - 0x714u);
        t98 = rd32(sp0 - 0x714u);
        g->esp = sp0 - 0x72cu;
        t99 = cow_thiscall(g, COW_IMG(0x1006baf0u), t98 + 0x10cu, 1, esi);
        t100 = g->edx;
        eax = t99;
        edx = t100;
    }
    COW_AT(1006512e)
    wr32(sp0 - 0x730u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t101 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t102 = g->edx;
    eax = t101;
    edx = t102;
    COW_AT(10065140)
    esi = eax + 1u;
    edi = COW_IMG(0x10353b44u);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = 0u;
        loc_718 = rd32(sp0 - 0x718u);
        loc_71c = rd32(sp0 - 0x71cu);
    }
    else
    {
    COW_AT(10065152)
        g->eax = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t103 = cow_thiscall(g, COW_IMG(0x1006b4e0u), sp0 - 0x704u, 0);
        t104 = g->edx;
        eax = t103;
        edx = t104;
    COW_AT(1006515b)
        wr32(sp0 - 0x730u, ebp + 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t105 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 1u);
        t106 = g->edx;
        eax = t105;
        edx = t106;
        esi = ebp + 1u;
    COW_AT(1006516b)
        t107 = rd8(eax);
        if ((uint8_t)t107 == 0x2fu) goto L_100651c8;
    COW_AT(10065170)
        wr32(sp0 - 0x730u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t108 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
        t109 = g->edx;
        eax = t108;
        edx = t109;
    COW_AT(1006517d)
        t110 = rd8(eax);
        if ((uint8_t)t110 == 0x5cu) goto L_100651c8;
    COW_AT(10065182)
        wr32(sp0 - 0x730u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t111 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
        t112 = g->edx;
        eax = t111;
        edx = t112;
    COW_AT(1006518f)
        t113 = rd8(eax + 1u);
        if ((uint8_t)t113 == 0x3au) goto L_100651c8;
    COW_AT(10065195)
        wr32(sp0 - 0x730u, arg1);
        g->eax = eax;
        g->esp = sp0 - 0x72cu;
        t114 = cow_fastcall(g, COW_IMG(0x1006b520u), sp0 - 0x704u, edx, 1, arg1);
        t115 = g->edx;
        eax = t114;
        edx = t115;
    COW_AT(100651a6)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t116 = cow_thiscall(g, COW_IMG(0x1006b650u), sp0 - 0x704u, 0);
        t117 = g->edx;
        eax = t116;
        edx = t117;
    COW_AT(100651af)
        wr32(sp0 - 0x730u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t118 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
        t119 = g->edx;
        eax = t118;
        edx = t119;
    COW_AT(100651bc)
        wr32(sp0 - 0x730u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x72cu;
        t120 = cow_thiscall(g, COW_IMG(0x1006b6b0u), sp0 - 0x704u, 1, eax);
        eax = t120;
    COW_AT(100651c6)
L_100651df: ;
    COW_AT(100651df)
        wr32(sp0 - 0x730u, sp0 - 0x704u);
        g->ebx = ebx;
        g->eax = eax;
        g->edx = sp0 - 0x704u;
        t124 = rd32(sp0 - 0x714u);
        g->esp = sp0 - 0x72cu;
        t125 = cow_thiscall(g, COW_IMG(0x10064db0u), t124, 1, sp0 - 0x704u);
        t126 = g->ecx;
        t127 = g->edx;
        eax = t125;
        ecx = t126;
        edx = t127;
    COW_AT(100651ed)
        if ((uint8_t)eax == 0u)
        {
    COW_AT(100651f1)
            wr32(sp0 - 0x730u, sp0 - 0x704u);
            wr32(sp0 - 0x734u, COW_IMG(0x10353b28u));
            g->ebx = ebx;
            g->eax = sp0 - 0x704u;
            g->esp = sp0 - 0x72cu;
            t128 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353b28u), sp0 - 0x704u);
            t129 = g->edx;
            eax = t128;
            edx = t129;
    COW_AT(10065200)
        }
    COW_AT(10065203)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t130 = cow_stdcall(g, COW_IMG(0x1006b4f0u), 0);
        t131 = g->edx;
        eax = t130;
        edx = t131;
        loc_718 = rd32(sp0 - 0x718u);
        loc_71c = rd32(sp0 - 0x71cu);
    }
    goto L_1006520c;
L_100651c8: ;
    COW_AT(100651c8)
    wr32(sp0 - 0x730u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t121 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
    t122 = g->edx;
    eax = t121;
    edx = t122;
    COW_AT(100651d5)
    wr32(sp0 - 0x730u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x72cu;
    t123 = cow_fastcall(g, COW_IMG(0x1006b520u), sp0 - 0x704u, edx, 1, eax);
    eax = t123;
    goto L_100651df;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10064db0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10064dc7u:
    {
        unsigned af;
        unsigned cf;
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
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x728u);
        in_ebp = rd32(sp0 - 0x724u);
        self = rd32(sp0 - 0x714u);
        g->esp = sp0 - 0x72cu;
        wr32(sp0 - 0x72cu, in_edi);
        wr32(sp0 - 0x720u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10064ddfu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10064de3u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10064deeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x10064dfau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064e09u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064e1du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        wr32(sp0 - 0x718u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10064e28u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064e30u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064e41u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064e4bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064e55u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_718;
        uint32_t loc_71c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_71c = rd32(sp0 - 0x71cu);
        loc_718 = rd32(sp0 - 0x718u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064e62u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064e6bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064e78u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064e82u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064e8fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064e99u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064ea3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064ea8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064eaeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064eb6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064eb8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064ebbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064ec1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064eccu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064ed0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064edau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x730u;
        (void)sp0;
        return 1;
    }
    case 0x10064ee9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064ef2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064f01u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064f06u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064f0cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064f0fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064f1fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064f28u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064f35u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064f48u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x730u;
        g->ecx = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x10064f52u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->edi = COW_IMG(0x10353b4cu);
        (void)sp0;
        return 1;
    }
    case 0x10064f5fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064f6bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_718;
        uint32_t loc_71c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_71c = rd32(sp0 - 0x71cu);
        loc_718 = rd32(sp0 - 0x718u);
        g->esp = sp0 - 0x72cu;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064f76u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_718;
        uint32_t loc_71c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_71c = rd32(sp0 - 0x71cu);
        loc_718 = rd32(sp0 - 0x718u);
        g->esp = sp0 - 0x72cu;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064f7du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_718;
        uint32_t loc_71c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_71c = rd32(sp0 - 0x71cu);
        loc_718 = rd32(sp0 - 0x718u);
        g->esp = sp0 - 0x72cu;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064f8eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->esi = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064f93u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064fa0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064faau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064fb8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064fbeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064fc5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x730u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064fccu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064fd3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064fd5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064fe5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064fe9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064ff6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10064ffbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x1006500bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10065011u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x730u;
        (void)sp0;
        return 1;
    }
    case 0x10065026u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x730u;
        (void)sp0;
        return 1;
    }
    case 0x1006502eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10065032u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10065038u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x1006504au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x730u;
        (void)sp0;
        return 1;
    }
    case 0x10065052u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x1006506bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x1006506du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_718;
        uint32_t loc_71c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_71c = rd32(sp0 - 0x71cu);
        loc_718 = rd32(sp0 - 0x718u);
        g->esp = sp0 - 0x72cu;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1006507cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10065081u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x1006508eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10065094u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100650a2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100650a8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100650aau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100650b2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_718;
        uint32_t loc_71c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_71c = rd32(sp0 - 0x71cu);
        loc_718 = rd32(sp0 - 0x718u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100650bbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_718;
        uint32_t loc_71c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_71c = rd32(sp0 - 0x71cu);
        loc_718 = rd32(sp0 - 0x718u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100650c0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x730u;
        g->ecx = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100650cau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->edi = COW_IMG(0x10353b78u);
        (void)sp0;
        return 1;
    }
    case 0x100650d8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100650dfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x730u;
        (void)sp0;
        return 1;
    }
    case 0x100650e6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100650edu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100650f1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100650f3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10065105u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x730u;
        wr32(sp0 - 0x730u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10065116u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x1006511eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x1006512eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10065140u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->edi = COW_IMG(0x10353b44u);
        (void)sp0;
        return 1;
    }
    case 0x10065152u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1006515bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x1006516bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10065170u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x1006517du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10065182u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x1006518fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10065195u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100651a6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100651afu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100651bcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100651c6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100651c8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100651d5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100651dfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x100651edu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        wr32(sp0 - 0x730u, sp0 - 0x704u);
        (void)sp0;
        return 1;
    }
    case 0x100651f1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        wr32(sp0 - 0x730u, sp0 - 0x704u);
        (void)sp0;
        return 1;
    }
    case 0x10065200u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x734u;
        wr32(sp0 - 0x730u, sp0 - 0x704u);
        (void)sp0;
        return 1;
    }
    case 0x10065203u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        wr32(sp0 - 0x730u, sp0 - 0x704u);
        (void)sp0;
        return 1;
    }
    case 0x1006520cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_718;
        uint32_t loc_71c;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        loc_71c = rd32(sp0 - 0x71cu);
        loc_718 = rd32(sp0 - 0x718u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10065217u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x1006521fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_730;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_730 = rd32(sp0 - 0x730u);
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x1006522bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    case 0x10065234u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x72cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10064db0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10064db0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
