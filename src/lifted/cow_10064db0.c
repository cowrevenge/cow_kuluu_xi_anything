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
    uint32_t t13;
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
    case 0x10064de3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); in_esi = rd32(sp0 - 0x728u); in_ebp = rd32(sp0 - 0x724u); g->ebp = rd32(sp0 - 0x724u); g->esi = rd32(sp0 - 0x728u); goto E_10064de3;
    case 0x10064e09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); in_esi = rd32(sp0 - 0x728u); in_ebp = rd32(sp0 - 0x724u); in_ebx = rd32(sp0 - 0x720u); self = rd32(sp0 - 0x714u); g->ebp = rd32(sp0 - 0x724u); g->ebx = rd32(sp0 - 0x720u); g->esi = rd32(sp0 - 0x728u); goto E_10064e09;
    case 0x10064e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); loc_718 = rd32(sp0 - 0x718u); goto E_10064e30;
    case 0x10064e4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e4b;
    case 0x10064e55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_10064e55;
    case 0x10064e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e6b;
    case 0x10064e82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e82;
    case 0x10064e99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064e99;
    case 0x10064ea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064ea3;
    case 0x10064ea8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064ea8;
    case 0x10064eaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064eae;
    case 0x10064eb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064eb6;
    case 0x10064eb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064eb8;
    case 0x10064ebbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064ebb;
    case 0x10064ec1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064ec1;
    case 0x10064ed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064ed0;
    case 0x10064f01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064f01;
    case 0x10064f06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064f06;
    case 0x10064f0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064f0c;
    case 0x10064f0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064f0f;
    case 0x10064f28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064f28;
    case 0x10064f48u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064f48;
    case 0x10064f5fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064f5f;
    case 0x10064f6bu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_10064f6b;
    case 0x10064f76u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_10064f76;
    case 0x10064f7du: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_10064f7d;
    case 0x10064f93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064f93;
    case 0x10064faau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064faa;
    case 0x10064fbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064fbe;
    case 0x10064fccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064fcc;
    case 0x10064fd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_10064fd5;
    case 0x10064fe9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064fe9;
    case 0x10064ffbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064ffb;
    case 0x10065032u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065032;
    case 0x10065038u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065038;
    case 0x10065052u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065052;
    case 0x1006506du: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_1006506d;
    case 0x10065081u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065081;
    case 0x10065094u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065094;
    case 0x100650a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100650a8;
    case 0x100650aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100650aa;
    case 0x100650b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_100650b2;
    case 0x100650bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_100650bb;
    case 0x100650c0u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_100650c0;
    case 0x100650d8u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100650d8;
    case 0x100650e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_100650e6;
    case 0x100650f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_100650f1;
    case 0x100650f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); goto E_100650f3;
    case 0x1006512eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006512e;
    case 0x10065152u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065152;
    case 0x10065170u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065170;
    case 0x10065182u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065182;
    case 0x10065195u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065195;
    case 0x100651c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100651c8;
    case 0x100651dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100651df;
    case 0x100651f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100651f1;
    case 0x10065203u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10065203;
    case 0x1006520cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); loc_71c = rd32(sp0 - 0x71cu); loc_718 = rd32(sp0 - 0x718u); goto E_1006520c;
    case 0x1006521fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_730 = rd32(sp0 - 0x730u); loc_718 = rd32(sp0 - 0x718u); goto E_1006521f;
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
    wr32(sp0 - 0x730u, 0x1000u);
    wr32(sp0 - 0x734u, 1u);
    wr32(sp0 - 0x738u, arg1);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1006b7c0u), sp0 - 0x710u, 3, arg1, 1u, 0x1000u);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t5;
        goto L_10064e09;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(10064de3)
    wr32(sp0 - 0x730u, arg1);
    wr32(sp0 - 0x734u, COW_IMG(0x10353ad8u));
    g->eax = eax;
    g->esp = sp0 - 0x72cu;
    t6 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353ad8u), arg1);
    t7 = g->edx;
    t8 = cow_thiscall(g, COW_IMG(0x1006b7b0u), sp0 - 0x710u, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return t8 & 0xffffff00u;
L_10064e09: ;
    COW_AT(10064e09)
    wr32(sp0 - 0x718u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t9 = cow_thiscall(g, COW_IMG(0x10067e50u), sp0 - 0x604u, 0);
    t10 = g->edx;
    wr32(sp0 - 0x730u, 0u);
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x710u, 1, 0u);
    t12 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        edx = t12;
        edi = in_edi;
        goto L_1006521f;
    }
    edx = t12;
    edi = in_edi;
    loc_718 = 0u;
L_10064e30: ;
    COW_AT(10064e30)
    t13 = rd32(sp0 - 0x70cu);
    wr32(sp0 - 0x730u, t13);
    g->eax = t13;
    g->esp = sp0 - 0x72cu;
    t14 = cow_fastcall(g, COW_IMG(0x10067e70u), sp0 - 0x604u, edx, 1, t13);
    t15 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        edx = t15;
        loc_718 = rd32(sp0 - 0x718u);
        loc_71c = rd32(sp0 - 0x71cu);
        goto L_1006520c;
    }
    eax = t14;
    edx = t15;
    ebx = t14;
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
    if (rd8(t16) != 0x2fu)
    {
        eax = t16;
        edx = t17;
        goto L_10064f28;
    }
    eax = t16;
    edx = t17;
    COW_AT(10064e6b)
    wr32(sp0 - 0x730u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t18 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t19 = g->edx;
    if (rd8(t18 + 1u) == 0x2fu)
    {
        eax = t18;
        edx = t19;
        loc_718 = rd32(sp0 - 0x718u);
        loc_71c = rd32(sp0 - 0x71cu);
        goto L_1006520c;
    }
    eax = t18;
    edx = t19;
    COW_AT(10064e82)
    wr32(sp0 - 0x730u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t20 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t21 = g->ecx;
    t22 = g->edx;
    if (rd8(t20 + 1u) != 0x2au)
    {
        eax = t20;
        edx = t22;
        goto L_10064f28;
    }
    ecx = t21;
    edx = t22;
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
    if (rd8(eax + 1u) == 0x2au) goto L_10064eb8;
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
    t23 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x710u, 1, 0u);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 != 0u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        goto L_10064ebb;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(10064ed0)
    wr32(sp0 - 0x730u, COW_IMG(0x10353b54u));
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x728u;
    t26 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353b54u), rd32(sp0 - 0x72cu));
    t27 = g->edx;
    g->edx = t27;
    g->esp = sp0 - 0x72cu;
    t28 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t29 = g->edx;
    g->edi = edi;
    t30 = cow_thiscall(g, COW_IMG(0x1006b7b0u), sp0 - 0x710u, 0);
    g->ebx = rd32(sp0 - 0x720u);
    g->esi = rd32(sp0 - 0x728u);
    g->edi = rd32(sp0 - 0x72cu);
    g->ebp = rd32(sp0 - 0x724u);
    return t30 & 0xffffff00u;
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
    if (rd8(eax + 1u) == 0x2fu) goto L_10064f0f;
L_10064f0c: ;
    COW_AT(10064f0c)
    eax = eax + 1u;
    goto L_10064ebb;
L_10064f0f: ;
    COW_AT(10064f0f)
    wr32(sp0 - 0x730u, eax + 2u);
    g->eax = eax + 2u;
    g->esp = sp0 - 0x72cu;
    t31 = cow_fastcall(g, COW_IMG(0x10067e70u), sp0 - 0x604u, edx, 1, eax + 2u);
    t32 = g->edx;
    eax = t31;
    edx = t32;
    ebx = t31;
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
    t117 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x710u, 1, 0u);
    t118 = g->edx;
    if (t117 != 0u)
    {
        edx = t118;
        loc_718 = rd32(sp0 - 0x718u);
        goto L_10064e30;
    }
    eax = t117;
    edx = t118;
L_1006521f: ;
    COW_AT(1006521f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t119 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t120 = g->edx;
    g->edi = edi;
    t121 = cow_thiscall(g, COW_IMG(0x1006b7b0u), sp0 - 0x710u, 0);
    g->ebx = rd32(sp0 - 0x720u);
    g->esi = rd32(sp0 - 0x728u);
    g->edi = rd32(sp0 - 0x72cu);
    g->ebp = rd32(sp0 - 0x724u);
    return (t121 & 0xffffff00u) | 1u;
L_10064f28: ;
    COW_AT(10064f28)
    wr32(sp0 - 0x730u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t33 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t34 = g->ecx;
    t35 = g->edx;
    wr32(sp0 - 0x730u, ebp);
    if (rd8(t33) == 0x23u)
    {
        eax = t33;
        edx = t35;
        loc_730 = ebp;
        goto L_100650c0;
    }
    eax = t33;
    edx = t35;
    loc_730 = ebp;
    COW_AT(10064f48)
    g->eax = eax;
    g->esp = sp0 - 0x72cu;
    t36 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, loc_730);
    esi = t36;
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
        t70 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
        t71 = g->edx;
        if (rd8(t70) == 0u)
        {
            eax = t70;
            edx = t71;
            loc_718 = rd32(sp0 - 0x718u);
            loc_71c = rd32(sp0 - 0x71cu);
            goto L_100650b2;
        }
        eax = t70;
        edx = t71;
        esi = 0u;
L_10065081: ;
    COW_AT(10065081)
        wr32(sp0 - 0x730u, ebp);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t72 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
        t73 = g->edx;
        if (rd8(esi + t72) == 0x7bu)
        {
            eax = t72;
            edx = t73;
            goto L_100650aa;
        }
        eax = t72;
        edx = t73;
    COW_AT(10065094)
        wr32(sp0 - 0x730u, ebp);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t74 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
        t75 = g->edx;
        if (rd8(esi + t74 + 1u) != 0u)
        {
            eax = t74;
            edx = t75;
            esi = esi + 1u;
            goto L_10065081;
        }
        eax = t74;
        edx = t75;
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
            t37 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
            t38 = g->ecx;
            t39 = g->edx;
            if (rd8(t37) == 0u)
            {
                eax = t37;
                ecx = t38;
                edx = t39;
                goto L_10064fbe;
            }
            eax = t37;
            edx = t39;
            esi = 0u;
L_10064f93: ;
    COW_AT(10064f93)
            wr32(sp0 - 0x730u, ebp);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t40 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
            t41 = g->edx;
            if (rd8(esi + t40) == 0x7du)
            {
                eax = t40;
                edx = t41;
                goto L_10065032;
            }
            eax = t40;
            edx = t41;
    COW_AT(10064faa)
            wr32(sp0 - 0x730u, ebp);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t42 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
            t43 = g->ecx;
            t44 = g->edx;
            if (rd8(esi + t42 + 1u) != 0u)
            {
                eax = t42;
                edx = t44;
                esi = esi + 1u;
                goto L_10064f93;
            }
            eax = t42;
            ecx = t43;
            edx = t44;
L_10064fbe: ;
    COW_AT(10064fbe)
            wr32(sp0 - 0x730u, 0x1cu);
            g->eax = eax;
            g->esp = sp0 - 0x724u;
            t45 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, rd32(sp0 - 0x72cu), rd32(sp0 - 0x728u));
            t46 = g->edx;
            if (t45 == 0u)
            {
                eax = t45;
                edx = t46;
                edi = 0u;
            }
            else
            {
                eax = t45;
                edx = t46;
    COW_AT(10064fcc)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x72cu;
                t47 = cow_thiscall(g, COW_IMG(0x10064190u), eax, 0);
                t48 = g->edx;
                eax = t47;
                edx = t48;
                edi = t47;
            }
    COW_AT(10064fd5)
            wr32(sp0 - 0x730u, ebp + 1u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t49 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 1u);
            t50 = g->edx;
            if (t49 == 0u)
            {
                edx = t50;
                goto L_10065038;
            }
            eax = t49;
            edx = t50;
            esi = ebp + 1u;
    COW_AT(10064fe9)
            wr32(sp0 - 0x730u, esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t51 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
            t52 = g->edx;
            if (rd8(t51) != 0x3du)
            {
                edx = t52;
                goto L_10065038;
            }
            eax = t51;
            edx = t52;
    COW_AT(10064ffb)
            wr32(sp0 - 0x730u, ebp + 2u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t53 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 2u);
            t54 = g->ecx;
            t55 = g->edx;
            wr32(sp0 - 0x730u, t53);
            g->edx = t55;
            t56 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t54, 1, t53);
            t57 = g->edx;
            wr32(sp0 - 0x71cu, t56);
            wr32(sp0 - 0x730u, t56);
            wr32(sp0 - 0x734u, ebp);
            g->edx = t57;
            g->esp = sp0 - 0x730u;
            t58 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
            t59 = g->edx;
            wr32(sp0 - 0x734u, t58);
            g->edx = t59;
            g->esp = sp0 - 0x72cu;
            t60 = cow_thiscall(g, COW_IMG(0x100643b0u), edi, 2, t58, rd32(sp0 - 0x730u));
            t61 = g->edx;
            eax = t60;
            edx = t61;
            ebp = ebp + 2u;
L_10065052: ;
    COW_AT(10065052)
            wr32(sp0 - 0x730u, edi);
            t67 = rd32(sp0 - 0x71cu) + 1u;
            wr32(sp0 - 0x71cu, t67);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t68 = cow_thiscall(g, COW_IMG(0x1006baf0u), rd32(sp0 - 0x714u) + 0x10cu, 1, edi);
            t69 = g->edx;
            eax = t68;
            edx = t69;
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
    t62 = rd32(sp0 - 0x71cu);
    wr32(sp0 - 0x730u, t62);
    wr32(sp0 - 0x734u, ebp);
    g->eax = t62;
    g->edx = edx;
    g->esp = sp0 - 0x730u;
    t63 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t64 = g->edx;
    wr32(sp0 - 0x734u, t63);
    g->edx = t64;
    g->esp = sp0 - 0x72cu;
    t65 = cow_thiscall(g, COW_IMG(0x100643b0u), edi, 2, t63, rd32(sp0 - 0x730u));
    t66 = g->edx;
    eax = t65;
    edx = t66;
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
    t76 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, loc_730);
    esi = t76 + 1u;
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
        eax = t76;
        edx = 0u;
    }
    else
    {
        eax = t76;
    COW_AT(100650d8)
        wr32(sp0 - 0x730u, 0x1cu);
        g->eax = eax;
        g->esp = sp0 - 0x724u;
        t77 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, 0u, 1, 3, 0x1cu, rd32(sp0 - 0x72cu), rd32(sp0 - 0x728u));
        t78 = g->edx;
        if (t77 == 0u)
        {
            edx = t78;
    COW_AT(100650f1)
            esi = 0u;
        }
        else
        {
            eax = t77;
            edx = t78;
    COW_AT(100650e6)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x72cu;
            t79 = cow_thiscall(g, COW_IMG(0x10064190u), eax, 0);
            t80 = g->edx;
            edx = t80;
            esi = t79;
        }
    COW_AT(100650f3)
        wr32(sp0 - 0x730u, 0u);
        wr32(sp0 - 0x734u, ebp + 2u);
        g->eax = ebp + 2u;
        g->edx = edx;
        g->esp = sp0 - 0x730u;
        t81 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 2u);
        t82 = g->edx;
        wr32(sp0 - 0x734u, t81);
        wr32(sp0 - 0x738u, ebp + 1u);
        g->edx = t82;
        g->esp = sp0 - 0x734u;
        t83 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 1u);
        t84 = g->edx;
        wr32(sp0 - 0x738u, t83);
        g->esp = sp0 - 0x72cu;
        t85 = cow_thiscall(g, COW_IMG(0x100642b0u), esi, 3, t83, rd32(sp0 - 0x734u), 0u);
        wr32(sp0 - 0x730u, esi);
        g->edx = rd32(sp0 - 0x714u);
        t86 = rd32(sp0 - 0x714u);
        t87 = cow_thiscall(g, COW_IMG(0x1006baf0u), t86 + 0x10cu, 1, esi);
        t88 = g->edx;
        eax = t87;
        edx = t88;
    }
    COW_AT(1006512e)
    wr32(sp0 - 0x730u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x72cu;
    t89 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t90 = g->edx;
    esi = t89 + 1u;
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
        edx = t90;
        loc_718 = rd32(sp0 - 0x718u);
        loc_71c = rd32(sp0 - 0x71cu);
    }
    else
    {
        edx = t90;
    COW_AT(10065152)
        g->eax = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t91 = cow_thiscall(g, COW_IMG(0x1006b4e0u), sp0 - 0x704u, 0);
        t92 = g->edx;
        wr32(sp0 - 0x730u, ebp + 1u);
        g->edx = t92;
        t93 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp + 1u);
        t94 = g->edx;
        if (rd8(t93) == 0x2fu)
        {
            eax = t93;
            edx = t94;
            esi = ebp + 1u;
            goto L_100651c8;
        }
        eax = t93;
        edx = t94;
        esi = ebp + 1u;
    COW_AT(10065170)
        wr32(sp0 - 0x730u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t95 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
        t96 = g->edx;
        if (rd8(t95) == 0x5cu)
        {
            eax = t95;
            edx = t96;
            goto L_100651c8;
        }
        eax = t95;
        edx = t96;
    COW_AT(10065182)
        wr32(sp0 - 0x730u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t97 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
        t98 = g->edx;
        if (rd8(t97 + 1u) == 0x3au)
        {
            eax = t97;
            edx = t98;
            goto L_100651c8;
        }
        eax = t97;
        edx = t98;
    COW_AT(10065195)
        wr32(sp0 - 0x730u, arg1);
        g->eax = eax;
        g->esp = sp0 - 0x72cu;
        t99 = cow_fastcall(g, COW_IMG(0x1006b520u), sp0 - 0x704u, edx, 1, arg1);
        t100 = g->edx;
        g->edx = t100;
        t101 = cow_thiscall(g, COW_IMG(0x1006b650u), sp0 - 0x704u, 0);
        t102 = g->edx;
        wr32(sp0 - 0x730u, esi);
        g->edx = t102;
        t103 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
        t104 = g->edx;
        wr32(sp0 - 0x730u, t103);
        t105 = cow_thiscall(g, COW_IMG(0x1006b6b0u), sp0 - 0x704u, 1, t103);
        eax = t105;
L_100651df: ;
    COW_AT(100651df)
        wr32(sp0 - 0x730u, sp0 - 0x704u);
        g->ebx = ebx;
        g->eax = eax;
        g->edx = sp0 - 0x704u;
        t109 = rd32(sp0 - 0x714u);
        g->esp = sp0 - 0x72cu;
        t110 = cow_thiscall(g, COW_IMG(0x10064db0u), t109, 1, sp0 - 0x704u);
        t111 = g->ecx;
        t112 = g->edx;
        if ((uint8_t)t110 != 0u)
        {
            eax = t110;
            edx = t112;
        }
        else
        {
            ecx = t111;
            edx = t112;
    COW_AT(100651f1)
            wr32(sp0 - 0x730u, sp0 - 0x704u);
            wr32(sp0 - 0x734u, COW_IMG(0x10353b28u));
            g->ebx = ebx;
            g->eax = sp0 - 0x704u;
            g->esp = sp0 - 0x72cu;
            t113 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353b28u), sp0 - 0x704u);
            t114 = g->edx;
            eax = t113;
            edx = t114;
        }
    COW_AT(10065203)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x72cu;
        t115 = cow_stdcall(g, COW_IMG(0x1006b4f0u), 0);
        t116 = g->edx;
        eax = t115;
        edx = t116;
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
    t106 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
    t107 = g->edx;
    wr32(sp0 - 0x730u, t106);
    t108 = cow_fastcall(g, COW_IMG(0x1006b520u), sp0 - 0x704u, t107, 1, t106);
    eax = t108;
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
    case 0x10064de3u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
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
        in_esi = rd32(sp0 - 0x728u);
        in_ebp = rd32(sp0 - 0x724u);
        g->esp = sp0 - 0x72cu;
        g->esi = arg1;
        wr32(sp0 - 0x72cu, in_edi);
        wr32(sp0 - 0x720u, in_ebx);
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
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
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
        in_esi = rd32(sp0 - 0x728u);
        in_ebp = rd32(sp0 - 0x724u);
        in_ebx = rd32(sp0 - 0x720u);
        self = rd32(sp0 - 0x714u);
        g->esp = sp0 - 0x72cu;
        wr32(sp0 - 0x72cu, in_edi);
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
        uint32_t loc_718;
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
        loc_718 = rd32(sp0 - 0x718u);
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
        uint32_t loc_718;
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
        loc_718 = rd32(sp0 - 0x718u);
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
