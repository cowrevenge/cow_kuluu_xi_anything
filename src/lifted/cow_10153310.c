/* f_0x10153310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10153310(Guest* g)
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
    uint32_t loc_11c;
    uint32_t loc_120;
    uint32_t loc_128;
    uint32_t loc_12c;
    uint32_t loc_130;
    uint32_t loc_134;
    uint32_t loc_138;
    uint32_t loc_13c;
    uint32_t loc_140;
    uint32_t loc_144;
    uint32_t loc_d0;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 348u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015334fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); in_edi = rd32(sp0 - 0x12cu); in_ebp = rd32(sp0 - 0x128u); g->ebp = rd32(sp0 - 0x128u); g->edi = rd32(sp0 - 0x12cu); goto E_1015334f;
    case 0x10153363u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_134 = rd32(sp0 - 0x134u); in_esi = rd32(sp0 - 0x130u); in_edi = rd32(sp0 - 0x12cu); in_ebp = rd32(sp0 - 0x128u); g->ebp = rd32(sp0 - 0x128u); g->edi = rd32(sp0 - 0x12cu); g->esi = rd32(sp0 - 0x130u); goto E_10153363;
    case 0x10153364u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_d0 = rd32(sp0 - 0xd0u); goto E_10153364;
    case 0x10153374u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153374;
    case 0x10153382u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153382;
    case 0x1015338fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1015338f;
    case 0x101533a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101533a5;
    case 0x101533b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101533b2;
    case 0x101533c4u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101533c4;
    case 0x101533d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101533d1;
    case 0x101533f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101533f1;
    case 0x10153406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153406;
    case 0x1015340du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1015340d;
    case 0x10153430u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153430;
    case 0x10153439u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_10153439;
    case 0x10153456u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_140 = rd32(sp0 - 0x140u); loc_138 = rd32(sp0 - 0x138u); goto E_10153456;
    case 0x10153490u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_13c = rd32(sp0 - 0x13cu); goto E_10153490;
    case 0x10153499u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153499;
    case 0x101534d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_138 = rd32(sp0 - 0x138u); goto E_101534d1;
    case 0x101534e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_138 = rd32(sp0 - 0x138u); goto E_101534e5;
    case 0x101534e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_138 = rd32(sp0 - 0x138u); goto E_101534e7;
    case 0x101534fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_138 = rd32(sp0 - 0x138u); goto E_101534fb;
    case 0x10153503u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_138 = rd32(sp0 - 0x138u); goto E_10153503;
    case 0x10153517u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153517;
    case 0x1015351du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1015351d;
    case 0x10153525u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153525;
    case 0x10153532u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153532;
    case 0x1015353au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1015353a;
    case 0x10153547u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153547;
    case 0x1015354bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1015354b;
    case 0x1015354fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1015354f;
    case 0x1015355cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1015355c;
    case 0x10153564u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153564;
    case 0x1015356cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1015356c;
    case 0x10153572u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153572;
    case 0x1015357au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1015357a;
    case 0x10153582u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153582;
    case 0x10153588u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153588;
    case 0x101535ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); loc_d0 = rd32(sp0 - 0xd0u); goto E_101535ce;
    case 0x101535d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); loc_d0 = rd32(sp0 - 0xd0u); goto E_101535d2;
    case 0x101535eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); loc_d0 = rd32(sp0 - 0xd0u); goto E_101535ea;
    case 0x101535f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101535f1;
    case 0x101535fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101535fd;
    case 0x10153604u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10153604;
    case 0x10153646u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); goto E_10153646;
    case 0x1015364fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); goto E_1015364f;
    case 0x1015365au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1015365a;
    case 0x1015368bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); goto E_1015368b;
    case 0x101536aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); goto E_101536aa;
    case 0x101536b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); goto E_101536b7;
    case 0x101536e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101536e1;
    case 0x10153738u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_10153738;
    case 0x10153748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_10153748;
    case 0x1015374du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_1015374d;
    case 0x10153752u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_10153752;
    case 0x1015375bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_1015375b;
    case 0x1015375eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_1015375e;
    case 0x10153764u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_10153764;
    case 0x10153769u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_10153769;
    case 0x10153770u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_10153770;
    case 0x1015378fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_1015378f;
    case 0x101537a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_101537a0;
    case 0x101537adu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_101537ad;
    case 0x101537c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101537c1;
    case 0x101537c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101537c3;
    case 0x101537d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101537d2;
    case 0x101537ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); goto E_101537dd;
    case 0x101537e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101537e5;
    case 0x101537e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101537e7;
    case 0x101537f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101537f6;
    case 0x10153809u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_10153809;
    case 0x10153816u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_10153816;
    case 0x1015389du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); goto E_1015389d;
    case 0x101538ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); goto E_101538ce;
    case 0x101538f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_138 = rd32(sp0 - 0x138u); goto E_101538f2;
    case 0x10153914u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); goto E_10153914;
    case 0x10153959u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); goto E_10153959;
    case 0x1015397au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); goto E_1015397a;
    case 0x10153984u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); goto E_10153984;
    case 0x101539adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_13c = rd32(sp0 - 0x13cu); goto E_101539ad;
    case 0x101539b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_d0 = rd32(sp0 - 0xd0u); goto E_101539b6;
    case 0x101539c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_d0 = rd32(sp0 - 0xd0u); goto E_101539c5;
    case 0x101539cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_d0 = rd32(sp0 - 0xd0u); goto E_101539ca;
    case 0x101539dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_d0 = rd32(sp0 - 0xd0u); goto E_101539da;
    case 0x101539e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_d0 = rd32(sp0 - 0xd0u); goto E_101539e7;
    default: break;
    }
#endif

    COW_AT(10153310)
    wr32(sp0 - 0x128u, in_ebp);
    wr32(sp0 - 0x12cu, in_edi);
    wr32(sp0 - 0x130u, arg4);
    wr32(sp0 - 0x134u, arg3);
    wr32(sp0 - 0x11cu, 0u);
    wr8(sp0 - 0x123u, 0u);
    wr8(sp0 - 0x121u, 0u);
    wr8(sp0 - 0x122u, 0u);
    g->eax = arg4;
    g->ecx = arg3;
    g->edx = in_edx;
    g->esp = sp0 - 0x12cu;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, arg3, arg4);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        ebx = in_ebx;
        esi = in_esi;
        loc_128 = in_ebp;
        loc_12c = in_edi;
        loc_120 = rd32(sp0 - 0x120u);
        goto L_101539da;
    }
    eax = t1;
    ecx = t2;
    ebp = t1;
    COW_AT(1015334f)
    wr32(sp0 - 0x130u, in_esi);
    wr32(sp0 - 0x120u, 0u);
    if (rd8(ebp) == 0u)
    {
        edx = 0u;
        ebx = in_ebx;
        edi = 0u;
        loc_128 = in_ebp;
        loc_12c = in_edi;
        loc_130 = in_esi;
        loc_120 = 0u;
        goto L_101539ca;
    }
    eax = (eax & 0xffffff00u) | rd8(ebp);
    COW_AT(10153363)
    wr32(sp0 - 0x134u, in_ebx);
    edx = 0u;
    esi = 0u;
    loc_128 = in_ebp;
    loc_12c = in_edi;
    loc_130 = in_esi;
    loc_134 = in_ebx;
    loc_11c = 0u;
    loc_120 = 0u;
    loc_d0 = rd32(sp0 - 0xd0u);
L_10153364: ;
    COW_AT(10153364)
    wr32(sp0 - 0x138u, ebp + esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x134u;
    t4 = cow_cdecl(g, COW_IMG(0x101532f0u), 1, ebp + esi);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        edi = ebp + esi;
        goto L_101533a5;
    }
    edx = t6;
    edi = ebp + esi;
    COW_AT(10153374)
    if ((int32_t)(edx + 1u) < (int32_t)arg2)
    {
        eax = edx + 1u;
    COW_AT(1015338f)
        wr32(sp0 - 0x120u, eax);
        t7 = rd8(edi);
        wr8(arg1 + edx, (uint8_t)t7);
        ecx = (arg2 & 0xffffff00u) | t7;
        esi = esi + 1u;
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = eax;
        loc_d0 = rd32(sp0 - 0xd0u);
    }
    else
    {
        eax = edx + 1u;
    COW_AT(10153382)
        wr32(sp0 - 0x11cu, 0xffffffffu);
        ecx = arg2;
        loc_11c = 0xffffffffu;
        loc_120 = rd32(sp0 - 0x120u);
        loc_d0 = rd32(sp0 - 0xd0u);
    }
L_101539b6: ;
    COW_AT(101539b6)
    if (rd8(ebp + esi) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebp + esi);
        edx = loc_120;
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_130 = rd32(sp0 - 0x130u);
        loc_134 = rd32(sp0 - 0x134u);
        goto L_10153364;
    }
    edx = loc_120;
    COW_AT(101539c5)
    ebx = rd32(sp0 - 0x134u);
    edi = loc_11c;
    loc_128 = rd32(sp0 - 0x128u);
    loc_12c = rd32(sp0 - 0x12cu);
    loc_130 = rd32(sp0 - 0x130u);
L_101539ca: ;
    COW_AT(101539ca)
    wr8(arg1 + edx, 0u);
    if ((int32_t)edi < 0)
    {
        esi = loc_130;
        goto L_101539e7;
    }
    esi = loc_130;
L_101539da: ;
    COW_AT(101539da)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = loc_12c;
    g->ebp = loc_128;
    g->edx = edx;
    return loc_120;
L_101533a5: ;
    COW_AT(101533a5)
    wr32(sp0 - 0x138u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x134u;
    t8 = cow_cdecl(g, COW_IMG(0x10153130u), 1, edi);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        ecx = t9;
        edx = t10;
        goto L_101533f1;
    }
    COW_AT(101533b2)
    if ((int32_t)(rd32(sp0 - 0x120u) + 2u) < (int32_t)arg2)
    {
        eax = rd32(sp0 - 0x120u);
        edx = rd32(sp0 - 0x120u) + 2u;
    COW_AT(101533d1)
        t11 = rd8(edi);
        wr8(arg1 + eax, (uint8_t)t11);
        wr8(arg1 + eax + 1u, rd8(ebp + esi + 1u));
        wr32(sp0 - 0x120u, eax + 2u);
        ecx = arg1;
        esi = esi + 2u;
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = eax + 2u;
        eax = eax + 2u;
        loc_d0 = rd32(sp0 - 0xd0u);
    }
    else
    {
        eax = rd32(sp0 - 0x120u);
    COW_AT(101533c4)
        wr32(sp0 - 0x11cu, 0xffffffffu);
        ecx = arg2;
        loc_11c = 0xffffffffu;
        loc_120 = rd32(sp0 - 0x120u);
        loc_d0 = rd32(sp0 - 0xd0u);
    }
    goto L_101539b6;
L_101533f1: ;
    COW_AT(101533f1)
    if ((uint32_t)(int8_t)rd8(ebp + esi + 2u) + 0x7fu > 0xdu)
    {
        eax = (uint32_t)(int8_t)rd8(ebp + esi + 2u) + 0x7fu;
        esi = esi + 3u;
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
        loc_d0 = rd32(sp0 - 0xd0u);
        goto L_101539b6;
    }
    eax = (uint32_t)(int8_t)rd8(ebp + esi + 2u) + 0x7fu;
    esi = esi + 3u;
    COW_AT(10153406)
    t12 = rd32(COW_IMG(0x101539f4u) + eax * 4u);
    switch (t12 - RD)
    {
    case 0x1015340du: goto L_1015340d;
    case 0x10153499u: goto L_10153499;
    case 0x10153517u: goto L_10153517;
    case 0x1015351du: goto L_1015351d;
    case 0x10153532u: goto L_10153532;
    case 0x1015353au: goto L_1015353a;
    case 0x10153547u: goto L_10153547;
    case 0x1015355cu: goto L_1015355c;
    case 0x10153572u: goto L_10153572;
    case 0x10153588u: goto L_10153588;
    case 0x101535f1u: goto L_101535f1;
    case 0x10153604u: goto L_10153604;
    case 0x1015365au: goto L_1015365a;
    case 0x101536e1u: goto L_101536e1;
    default: rt_fatal(g, COW_IMG(0x10153406u), "switch");
    }
    return 0;
L_1015340d: ;
    COW_AT(1015340d)
    t118 = rd8(ebp + esi) & 0x7fu;
    wr32(sp0 - 0xf0u, t118);
    wr32(sp0 - 0x138u, t118);
    wr32(sp0 - 0x13cu, rd32(COW_IMG(0x10578548u)));
    g->eax = rd32(COW_IMG(0x10578548u));
    t119 = rd32(COW_IMG(0x10578548u));
    g->esp = sp0 - 0x134u;
    t120 = cow_cdecl(g, COW_IMG(0x10153100u), 2, t119, t118);
    if ((int16_t)t120 <= 0)
    {
        esi = esi + 2u;
    }
    else
    {
        eax = (uint32_t)(int16_t)t120;
        esi = esi + 2u;
    COW_AT(10153430)
        ebx = eax;
        edi = sp0 - 0x40u;
L_10153439: ;
    COW_AT(10153439)
        wr32(sp0 - 0x138u, arg6);
        wr32(sp0 - 0x13cu, ebp + esi);
        wr32(sp0 - 0x140u, edi);
        g->eax = eax;
        g->esp = sp0 - 0x134u;
        t121 = cow_cdecl(g, COW_IMG(0x101531d0u), 3, edi, ebp + esi, arg6);
        if (ebx != 1u)
        {
            eax = t121;
            ebx = ebx - 1u;
            esi = esi + t121;
            edi = edi + 4u;
            goto L_10153439;
        }
        esi = esi + t121;
    }
    COW_AT(10153456)
    wr32(sp0 - 0x138u, sp0 - 0x40u);
    wr32(sp0 - 0x13cu, 0u);
    t122 = rd32(sp0 - 0xf0u);
    wr32(sp0 - 0x140u, t122);
    wr32(sp0 - 0x144u, 0u);
    t123 = arg2 - rd32(sp0 - 0x120u);
    wr32(sp0 - 0x148u, t123);
    t124 = arg1 + rd32(sp0 - 0x120u);
    wr32(sp0 - 0x14cu, t124);
    g->eax = arg1;
    g->ecx = t124;
    t125 = rd32(sp0 - 0x120u);
    g->esp = sp0 - 0x134u;
    t126 = cow_cdecl(g, COW_IMG(0x10153310u), 6, t124, t123, 0u, t122, 0u, sp0 - 0x40u);
    t127 = g->ecx;
    if ((int32_t)t126 >= 0)
    {
        eax = t126;
        ecx = t127;
        edi = t125;
        goto L_1015364f;
    }
    eax = t126;
    ecx = t127;
    COW_AT(10153490)
    wr32(sp0 - 0x11cu, eax);
    loc_11c = eax;
    loc_120 = rd32(sp0 - 0x120u);
    loc_d0 = rd32(sp0 - 0xd0u);
    goto L_101539b6;
L_10153499: ;
    COW_AT(10153499)
    wr32(sp0 - 0x138u, arg6);
    wr32(sp0 - 0x13cu, ebp + esi);
    wr32(sp0 - 0x140u, sp0 - 0xf4u);
    g->eax = sp0 - 0xf4u;
    g->esp = sp0 - 0x134u;
    t115 = cow_cdecl(g, COW_IMG(0x101531d0u), 3, sp0 - 0xf4u, ebp + esi, arg6);
    wr32(sp0 - 0x144u, arg6);
    t116 = ebp + esi + t115;
    wr32(sp0 - 0x148u, t116);
    wr32(sp0 - 0x14cu, sp0 - 0xecu);
    g->esp = sp0 - 0x140u;
    t117 = cow_cdecl(g, COW_IMG(0x101531d0u), 3, sp0 - 0xecu, t116, arg6);
    if (rd32(sp0 - 0xf4u) != rd32(sp0 - 0xecu))
    {
        eax = rd32(sp0 - 0xf4u);
        ecx = rd32(sp0 - 0xecu);
        esi = esi + t115 + t117;
        sf = (int32_t)(rd32(sp0 - 0xf4u) - rd32(sp0 - 0xecu)) < 0;
        of = ((rd32(sp0 - 0xf4u) ^ rd32(sp0 - 0xecu)) & (rd32(sp0 - 0xf4u) ^ rd32(sp0 - 0xf4u) - rd32(sp0 - 0xecu))) >> 0x1fu;
    COW_AT(101534e5)
        if (sf == of)
        {
    COW_AT(101534fb)
            if ((int32_t)eax <= (int32_t)ecx)
            {
                loc_11c = rd32(sp0 - 0x11cu);
                loc_120 = rd32(sp0 - 0x120u);
                loc_d0 = rd32(sp0 - 0xd0u);
            }
            else
            {
    COW_AT(10153503)
                wr8(sp0 - 0x123u, 0u);
                wr8(sp0 - 0x121u, 0u);
                wr8(sp0 - 0x122u, 1u);
                loc_11c = rd32(sp0 - 0x11cu);
                loc_120 = rd32(sp0 - 0x120u);
                loc_d0 = rd32(sp0 - 0xd0u);
            }
        }
        else
        {
    COW_AT(101534e7)
            wr8(sp0 - 0x123u, 0u);
            wr8(sp0 - 0x121u, 1u);
            wr8(sp0 - 0x122u, 0u);
            loc_11c = rd32(sp0 - 0x11cu);
            loc_120 = rd32(sp0 - 0x120u);
            loc_d0 = rd32(sp0 - 0xd0u);
        }
    }
    else
    {
        eax = rd32(sp0 - 0xf4u);
        ecx = rd32(sp0 - 0xecu);
        esi = esi + t115 + t117;
    COW_AT(101534d1)
        wr8(sp0 - 0x123u, 1u);
        wr8(sp0 - 0x121u, 0u);
        wr8(sp0 - 0x122u, 0u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
        loc_d0 = rd32(sp0 - 0xd0u);
    }
    goto L_101539b6;
L_10153517: ;
    COW_AT(10153517)
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x123u);
L_1015354b: ;
    COW_AT(1015354b)
    if ((uint8_t)eax == 0u) goto L_10153582;
    COW_AT(1015354f)
    ecx = (uint32_t)(int8_t)rd8(ebp + esi);
    esi = esi + (uint32_t)(int8_t)rd8(ebp + esi) + 1u;
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_d0 = rd32(sp0 - 0xd0u);
    goto L_101539b6;
L_1015351d: ;
    COW_AT(1015351d)
    if (rd8(sp0 - 0x123u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x123u);
        goto L_10153582;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x123u);
L_10153525: ;
    COW_AT(10153525)
    esi = esi + (uint32_t)(int8_t)rd8(ebp + esi) + 1u;
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_d0 = rd32(sp0 - 0xd0u);
    goto L_101539b6;
L_10153532: ;
    COW_AT(10153532)
    if (rd8(sp0 - 0x122u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x122u);
        goto L_10153582;
    }
L_1015353a: ;
    COW_AT(1015353a)
    eax = (uint32_t)(int8_t)rd8(ebp + esi);
    esi = esi + (uint32_t)(int8_t)rd8(ebp + esi) + 1u;
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_d0 = rd32(sp0 - 0xd0u);
    goto L_101539b6;
L_10153547: ;
    COW_AT(10153547)
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x121u);
    goto L_1015354b;
L_1015355c: ;
    COW_AT(1015355c)
    if (rd8(sp0 - 0x122u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x122u);
        goto L_10153525;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x122u);
    COW_AT(10153564)
    if (rd8(sp0 - 0x123u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x123u);
        goto L_10153525;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x123u);
    COW_AT(1015356c)
    esi = esi + 1u;
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_d0 = rd32(sp0 - 0xd0u);
    goto L_101539b6;
L_10153572: ;
    COW_AT(10153572)
    if (rd8(sp0 - 0x121u) != 0u) goto L_1015353a;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x121u);
    COW_AT(1015357a)
    if (rd8(sp0 - 0x123u) != 0u) goto L_1015353a;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x123u);
L_10153582: ;
    COW_AT(10153582)
    esi = esi + 1u;
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_d0 = rd32(sp0 - 0xd0u);
    goto L_101539b6;
L_10153588: ;
    COW_AT(10153588)
    wr32(sp0 - 0x138u, arg6);
    wr32(sp0 - 0x13cu, ebp + esi);
    wr32(sp0 - 0x140u, sp0 - 0xf8u);
    g->eax = sp0 - 0xf8u;
    g->esp = sp0 - 0x134u;
    t104 = cow_cdecl(g, COW_IMG(0x101531d0u), 3, sp0 - 0xf8u, ebp + esi, arg6);
    t105 = ebp + esi + t104;
    wr32(sp0 - 0x144u, t105);
    g->ecx = t105;
    g->edx = t104;
    g->esp = sp0 - 0x140u;
    t106 = cow_call_regs(g, COW_IMG(0x101531b0u), t104, g->ecx, g->edx, 1, 1, t105);
    t107 = g->ecx;
    t108 = g->edx;
    t109 = ebp + esi + t108 + 2u;
    wr32(sp0 - 0x148u, t109);
    g->edx = t108 + 2u;
    g->esp = sp0 - 0x144u;
    t110 = cow_call_regs(g, COW_IMG(0x101531b0u), t109, g->ecx, g->edx, 1, 1, t109);
    t111 = g->edx;
    wr32(sp0 - 0xd0u, esi + t110);
    if ((int32_t)rd32(sp0 - 0xf8u) < 0)
    {
        eax = rd32(sp0 - 0xf8u);
        ecx = esi + t110;
        loc_d0 = esi + t110;
        goto L_101535ea;
    }
    eax = rd32(sp0 - 0xf8u);
    ecx = esi + t110;
    edx = t111;
    edi = t106;
    loc_d0 = esi + t110;
    COW_AT(101535ce)
    if ((int32_t)eax >= (int32_t)edi) goto L_101535ea;
    COW_AT(101535d2)
    t112 = eax * 2u + ebp + edx + esi + 2u;
    wr32(sp0 - 0x138u, t112);
    g->ecx = t112;
    g->esp = sp0 - 0x134u;
    t113 = cow_call_regs(g, COW_IMG(0x101531b0u), eax, g->ecx, g->edx, 1, 1, t112);
    t114 = g->ecx;
    eax = t113;
    ecx = t114;
    esi = esi + t113;
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    loc_d0 = rd32(sp0 - 0xd0u);
    goto L_101539b6;
L_101535ea: ;
    COW_AT(101535ea)
    esi = ecx;
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    goto L_101539b6;
L_101535f1: ;
    COW_AT(101535f1)
    if ((int32_t)esi >= (int32_t)rd32(sp0 - 0xd0u))
    {
        eax = rd32(sp0 - 0xd0u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
        loc_d0 = rd32(sp0 - 0xd0u);
    }
    else
    {
        eax = rd32(sp0 - 0xd0u);
    COW_AT(101535fd)
        esi = eax;
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
        loc_d0 = rd32(sp0 - 0xd0u);
    }
    goto L_101539b6;
L_10153604: ;
    COW_AT(10153604)
    wr32(sp0 - 0x138u, arg6);
    wr32(sp0 - 0x13cu, ebp + esi);
    wr32(sp0 - 0x140u, sp0 - 0xe8u);
    g->eax = ebp + esi;
    g->esp = sp0 - 0x134u;
    t97 = cow_cdecl(g, COW_IMG(0x101531d0u), 3, sp0 - 0xe8u, ebp + esi, arg6);
    t98 = rd32(sp0 - 0xe8u);
    wr32(sp0 - 0x144u, t98);
    t99 = arg2 - rd32(sp0 - 0x120u);
    wr32(sp0 - 0x148u, t99);
    t100 = arg1 + rd32(sp0 - 0x120u);
    wr32(sp0 - 0x14cu, t100);
    g->eax = t99;
    g->ecx = arg1;
    t101 = rd32(sp0 - 0x120u);
    g->esp = sp0 - 0x138u;
    t102 = cow_cdecl(g, COW_IMG(0x10153230u), 5, t100, t99, t98, sp0 - 0xe8u, rd32(sp0 - 0x13cu));
    t103 = g->ecx;
    if ((int32_t)t102 >= 0)
    {
        eax = t102;
        ecx = t103;
        esi = esi + t97;
        edi = t101;
        goto L_1015364f;
    }
    eax = t102;
    ecx = t103;
    esi = esi + t97;
    COW_AT(10153646)
    wr32(sp0 - 0x11cu, eax);
    loc_11c = eax;
    loc_120 = rd32(sp0 - 0x120u);
    loc_d0 = rd32(sp0 - 0xd0u);
    goto L_101539b6;
L_1015364f: ;
    COW_AT(1015364f)
    wr32(sp0 - 0x120u, eax + edi);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = eax + edi;
    loc_d0 = rd32(sp0 - 0xd0u);
    goto L_101539b6;
L_1015365a: ;
    COW_AT(1015365a)
    wr32(sp0 - 0x138u, arg6);
    wr32(sp0 - 0x13cu, ebp + esi);
    wr32(sp0 - 0x140u, sp0 - 0xd4u);
    g->eax = arg6;
    g->esp = sp0 - 0x134u;
    t93 = cow_cdecl(g, COW_IMG(0x101531d0u), 3, sp0 - 0xd4u, ebp + esi, arg6);
    if (rd32(arg5 + rd32(sp0 - 0xd4u) * 4u) == 0u)
    {
        eax = rd32(sp0 - 0xd4u);
        ecx = arg5;
        esi = esi + t93;
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
        loc_d0 = rd32(sp0 - 0xd0u);
        goto L_101539b6;
    }
    edx = rd32(arg5 + rd32(sp0 - 0xd4u) * 4u);
    esi = esi + t93;
    COW_AT(1015368b)
    t94 = rd32(sp0 - 0x120u);
    edi = edx;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t95 = ~ecx - 1u;
    if ((int32_t)t95 < (int32_t)(arg2 - t94))
    {
        eax = arg2 - t94;
        ecx = t95;
        ebx = t94;
        edi = t95;
        goto L_101536b7;
    }
    eax = arg2 - t94;
    ecx = t95;
    COW_AT(101536aa)
    wr32(sp0 - 0x11cu, 0xffffffffu);
    loc_11c = 0xffffffffu;
    loc_120 = rd32(sp0 - 0x120u);
    loc_d0 = rd32(sp0 - 0xd0u);
    goto L_101539b6;
L_101536b7: ;
    COW_AT(101536b7)
    wr32(sp0 - 0x138u, eax);
    wr32(sp0 - 0x13cu, edx);
    wr32(sp0 - 0x140u, arg1 + ebx);
    g->esp = sp0 - 0x134u;
    t96 = cow_call_regs(g, COW_IMG(0x10312090u), arg1 + ebx, g->ecx, g->edx, 1, 3, arg1 + ebx, edx, eax);
    wr8(arg1 + arg2 - 1u, 0u);
    eax = t96;
    ecx = arg1;
L_101539ad: ;
    COW_AT(101539ad)
    wr32(sp0 - 0x120u, ebx + edi);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = ebx + edi;
    loc_d0 = rd32(sp0 - 0xd0u);
    goto L_101539b6;
L_101536e1: ;
    COW_AT(101536e1)
    wr32(sp0 - 0x138u, arg6);
    wr32(sp0 - 0x13cu, ebp + esi);
    wr32(sp0 - 0x140u, sp0 - 0xd8u);
    g->eax = ebp + esi;
    g->ecx = sp0 - 0xd8u;
    g->esp = sp0 - 0x134u;
    t13 = cow_cdecl(g, COW_IMG(0x101531d0u), 3, sp0 - 0xd8u, ebp + esi, arg6);
    t14 = g->ecx;
    wr32(sp0 - 0x144u, arg6);
    t15 = ebp + esi + t13;
    wr32(sp0 - 0x148u, t15);
    wr32(sp0 - 0x14cu, sp0 - 0x118u);
    g->eax = sp0 - 0x118u;
    g->esp = sp0 - 0x140u;
    t16 = cow_cdecl(g, COW_IMG(0x101531d0u), 3, sp0 - 0x118u, t15, arg6);
    wr32(sp0 - 0x150u, arg6);
    t17 = ebp + esi + t13 + t16;
    wr32(sp0 - 0x154u, t17);
    wr32(sp0 - 0x158u, sp0 - 0x114u);
    g->edx = sp0 - 0x114u;
    g->esp = sp0 - 0x14cu;
    t18 = cow_cdecl(g, COW_IMG(0x101531d0u), 3, sp0 - 0x114u, t17, arg6);
    t19 = g->edx;
    t20 = rd32(sp0 - 0xd8u);
    wr32(sp0 - 0x138u, t20);
    g->eax = t20;
    g->ecx = rd32(COW_IMG(0x10621808u));
    g->edx = t19;
    t21 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x134u;
    t22 = cow_stdcall(g, COW_IMG(0x1015bd40u), 1, t20);
    t23 = g->ecx;
    t24 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        ecx = t23;
        esi = esi + t13 + t16 + t18;
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
        loc_d0 = rd32(sp0 - 0xd0u);
        goto L_101539b6;
    }
    edx = t24;
    esi = esi + t13 + t16 + t18;
    edi = t22;
    COW_AT(10153738)
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1015375b;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(10153748)
    if (eax == 2u) goto L_10153752;
    COW_AT(1015374d)
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_1015375e;
    }
L_10153752: ;
    COW_AT(10153752)
    eax = 1u;
L_10153769: ;
    COW_AT(10153769)
    t25 = rd32(COW_IMG(0x10153a2cu) + eax * 4u);
    switch (t25 - RD)
    {
    case 0x10153770u: goto L_10153770;
    case 0x1015378fu: goto L_1015378f;
    case 0x10153816u: goto L_10153816;
    case 0x1015389du: goto L_1015389d;
    default: rt_fatal(g, COW_IMG(0x10153769u), "switch");
    }
    return 0;
L_1015375b: ;
    COW_AT(1015375b)
    cf = eax < 3u;
    zf = eax == 3u;
L_1015375e: ;
    COW_AT(1015375e)
    if (!cf && !zf) goto L_10153959;
    COW_AT(10153764)
    goto L_10153769;
L_10153770: ;
    COW_AT(10153770)
    wr32(sp0 - 0x138u, 0x80u);
    g->eax = eax;
    g->edx = rd32(edi);
    t85 = rd32(edi);
    g->esp = sp0 - 0x138u;
    t86 = cow_thiscall(g, rd32(t85 + 4u), edi, 0);
    t87 = g->ecx;
    t88 = g->edx;
    wr32(sp0 - 0x13cu, t86);
    wr32(sp0 - 0x140u, sp0 - 0xc0u);
    g->ecx = t87;
    g->esp = sp0 - 0x134u;
    cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0xc0u, g->ecx, g->edx, 1, 3, sp0 - 0xc0u, t86, 0x80u);
    t89 = g->ecx;
    ecx = t89;
L_10153959: ;
    COW_AT(10153959)
    t90 = rd32(sp0 - 0x120u);
    edi = sp0 - 0xc0u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t91 = ~ecx - 1u;
    if ((int32_t)t91 < (int32_t)(arg2 - t90))
    {
        eax = arg2 - t90;
        ebx = t90;
        edi = t91;
        goto L_10153984;
    }
    eax = arg2 - t90;
    ecx = t91;
    COW_AT(1015397a)
    wr32(sp0 - 0x11cu, 0xffffffffu);
    loc_11c = 0xffffffffu;
    loc_120 = rd32(sp0 - 0x120u);
    loc_d0 = rd32(sp0 - 0xd0u);
    goto L_101539b6;
L_1015378f: ;
    COW_AT(1015378f)
    wr32(sp0 - 0x138u, 0x80u);
    if (rd32(sp0 - 0x118u) != 1u)
    {
        ecx = edi;
        edx = rd32(edi);
    COW_AT(10153809)
        wr32(sp0 - 0x13cu, sp0 - 0xc0u);
        g->esp = sp0 - 0x134u;
        cow_thiscall(g, rd32(edx + 0x10u), ecx, 2, sp0 - 0xc0u, 0x80u);
        t84 = g->ecx;
        ecx = t84;
    }
    else
    {
        ecx = edi;
        edx = rd32(edi);
    COW_AT(101537a0)
        wr32(sp0 - 0x13cu, sp0 - 0xc0u);
        if (rd32(sp0 - 0x114u) != 0u)
        {
            eax = sp0 - 0xc0u;
            loc_138 = 0x80u;
            loc_13c = sp0 - 0xc0u;
            goto L_101537dd;
        }
    COW_AT(101537ad)
        g->eax = sp0 - 0xc0u;
        g->edx = edx;
        g->esp = sp0 - 0x134u;
        t76 = cow_thiscall(g, rd32(edx + 8u), ecx, 2, sp0 - 0xc0u, 0x80u);
        t77 = g->edx;
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        g->ecx = sp0 - 0xc0u;
        t78 = cow_call_regs(g, COW_IMG(0x102589b0u), t76, g->ecx, g->edx, 1, 1, sp0 - 0xc0u);
        t79 = g->ecx;
        if (t78 == 0u)
        {
            ecx = t79;
            goto L_101537e5;
        }
        ecx = t79;
    COW_AT(101537c1)
        eax = 0u;
L_101537c3: ;
    COW_AT(101537c3)
        t80 = rd8(COW_IMG(0x10371e8cu) + eax);
        wr8(eax + sp0 - 0xc0u, (uint8_t)t80);
        if ((uint8_t)t80 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t80;
            goto L_101537c3;
        }
    COW_AT(101537d2)
        wr32(sp0 - 0x138u, 0x7du);
        wr32(sp0 - 0x13cu, sp0 - 0xbdu);
        eax = sp0 - 0xbdu;
        ecx = edi;
        edx = rd32(edi);
        loc_138 = 0x7du;
        loc_13c = sp0 - 0xbdu;
L_101537dd: ;
    COW_AT(101537dd)
        g->esp = sp0 - 0x134u;
        cow_thiscall(g, rd32(edx + 8u), ecx, 2, loc_13c, loc_138);
        t83 = g->ecx;
        ecx = t83;
    }
    goto L_10153959;
L_101537e5: ;
    COW_AT(101537e5)
    eax = 0u;
L_101537e7: ;
    COW_AT(101537e7)
    t81 = rd8(COW_IMG(0x10371e88u) + eax);
    wr8(eax + sp0 - 0xc0u, (uint8_t)t81);
    if ((uint8_t)t81 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t81;
        goto L_101537e7;
    }
    COW_AT(101537f6)
    wr32(sp0 - 0x138u, 0x7eu);
    wr32(sp0 - 0x13cu, sp0 - 0xbeu);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(edi) + 8u), edi, 2, sp0 - 0xbeu, 0x7eu);
    t82 = g->ecx;
    ecx = t82;
    goto L_10153959;
L_10153816: ;
    COW_AT(10153816)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x134u;
    t57 = cow_thiscall(g, COW_IMG(0x10259110u), sp0 - 0xe4u, 0);
    t58 = g->edx;
    wr32(sp0 - 0x138u, 0u);
    g->edx = t58;
    t59 = cow_thiscall(g, COW_IMG(0x102591a0u), sp0 - 0xe4u, 1, 0u);
    t60 = g->edx;
    wr32(sp0 - 0x138u, COW_IMG(0x1034f2b8u));
    cow_thiscall(g, COW_IMG(0x10259410u), sp0 - 0xe4u, 1, COW_IMG(0x1034f2b8u));
    wr32(sp0 - 0x138u, edi);
    t61 = rd32(sp0 - 0x118u) != 1u;
    wr32(sp0 - 0x13cu, t61);
    t62 = rd32(sp0 - 0x114u);
    wr32(sp0 - 0x140u, t62);
    g->eax = rd32(sp0 - 0x118u);
    g->edx = t62;
    t63 = rd32(sp0 - 0x118u);
    t64 = cow_thiscall(g, COW_IMG(0x10259480u), sp0 - 0xe4u, 3, t62, t61, edi);
    t65 = g->edx;
    g->edx = t65;
    cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xccu, 0);
    t66 = g->edx;
    wr32(sp0 - 0x138u, sp0 - 0xccu);
    g->eax = sp0 - 0xccu;
    g->edx = t66;
    t67 = cow_thiscall(g, COW_IMG(0x102599b0u), sp0 - 0xe4u, 1, sp0 - 0xccu);
    t68 = g->edx;
    wr32(sp0 - 0x138u, 0x80u);
    g->edx = t68;
    t69 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xccu, 1, 0x80u);
    t70 = g->edx;
    wr32(sp0 - 0x13cu, t69);
    wr32(sp0 - 0x140u, sp0 - 0xc0u);
    g->edx = t70;
    t71 = cow_call_regs(g, COW_IMG(0x10312090u), t69, g->ecx, g->edx, 1, 3, sp0 - 0xc0u, t69, 0x80u);
    t72 = g->edx;
    t73 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xccu, t72, 0);
    t74 = g->edx;
    cow_thiscall(g, COW_IMG(0x10259100u), sp0 - 0xe4u, 0);
    t75 = g->ecx;
    ecx = t75;
    goto L_10153959;
L_1015389d: ;
    COW_AT(1015389d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x134u;
    t26 = cow_thiscall(g, COW_IMG(0x1025a830u), sp0 - 0x104u, 0);
    t27 = g->edx;
    wr32(sp0 - 0x138u, 2u);
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x1025b200u), sp0 - 0x104u, 1, 2u);
    t29 = g->edx;
    wr32(sp0 - 0x138u, COW_IMG(0x1034f2b8u));
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x1025af10u), sp0 - 0x104u, 1, COW_IMG(0x1034f2b8u));
    t31 = g->edx;
    g->edx = t31;
    cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0x110u, 0);
    t32 = g->edx;
    if ((int32_t)rd32(sp0 - 0x118u) > 1)
    {
        edx = t32;
    COW_AT(101538f2)
        wr32(sp0 - 0x138u, sp0 - 0x110u);
        g->eax = rd32(edi);
        g->edx = edx;
        t40 = rd32(edi);
        g->esp = sp0 - 0x138u;
        t41 = cow_thiscall(g, rd32(t40 + 0x10u), edi, 0);
        t42 = g->edx;
        wr32(sp0 - 0x13cu, 0u);
        t43 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x114u, 1, 0u);
        wr32(sp0 - 0x140u, t43);
        g->edx = rd32(edi);
        t44 = rd32(edi);
        g->esp = sp0 - 0x13cu;
        t45 = cow_thiscall(g, rd32(t44 + 4u), edi, 1, t43);
        t46 = g->edx;
        wr32(sp0 - 0x140u, t45);
        wr32(sp0 - 0x144u, 4u);
        eax = t45;
        edx = t46;
        loc_140 = t45;
        loc_138 = sp0 - 0x110u;
        loc_144 = 4u;
        loc_13c = 0u;
    }
    else
    {
    COW_AT(101538ce)
        wr32(sp0 - 0x138u, sp0 - 0x110u);
        g->eax = sp0 - 0x110u;
        g->edx = rd32(edi);
        t33 = rd32(edi);
        g->esp = sp0 - 0x134u;
        t34 = cow_thiscall(g, rd32(t33 + 0xcu), edi, 1, sp0 - 0x110u);
        t35 = g->edx;
        wr32(sp0 - 0x138u, 0u);
        t36 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x110u, 1, 0u);
        wr32(sp0 - 0x13cu, t36);
        g->edx = rd32(edi);
        t37 = rd32(edi);
        g->esp = sp0 - 0x13cu;
        t38 = cow_thiscall(g, rd32(t37 + 4u), edi, 0);
        t39 = g->edx;
        wr32(sp0 - 0x140u, t38);
        wr32(sp0 - 0x144u, 3u);
        eax = t38;
        edx = t39;
        loc_140 = t38;
        loc_138 = 0u;
        loc_144 = 3u;
        loc_13c = rd32(sp0 - 0x13cu);
    }
    COW_AT(10153914)
    g->edx = edx;
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, COW_IMG(0x1025afd0u), sp0 - 0x104u, 4, loc_144, loc_140, loc_13c, loc_138);
    t47 = g->edx;
    wr32(sp0 - 0x138u, sp0 - 0x110u);
    g->eax = sp0 - 0x110u;
    g->edx = t47;
    t48 = cow_thiscall(g, COW_IMG(0x1025aac0u), sp0 - 0x104u, 1, sp0 - 0x110u);
    t49 = g->edx;
    wr32(sp0 - 0x138u, 0x80u);
    g->edx = t49;
    t50 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0x110u, 1, 0x80u);
    t51 = g->edx;
    wr32(sp0 - 0x13cu, t50);
    wr32(sp0 - 0x140u, sp0 - 0xc0u);
    g->edx = t51;
    t52 = cow_call_regs(g, COW_IMG(0x10312090u), t50, g->ecx, g->edx, 1, 3, sp0 - 0xc0u, t50, 0x80u);
    t53 = g->edx;
    t54 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x110u, t53, 0);
    t55 = g->edx;
    cow_thiscall(g, COW_IMG(0x1025a820u), sp0 - 0x104u, 0);
    t56 = g->ecx;
    ecx = t56;
    goto L_10153959;
L_10153984: ;
    COW_AT(10153984)
    wr32(sp0 - 0x138u, eax);
    wr32(sp0 - 0x13cu, sp0 - 0xc0u);
    wr32(sp0 - 0x140u, arg1 + ebx);
    g->ecx = arg1 + ebx;
    g->esp = sp0 - 0x134u;
    cow_call_regs(g, COW_IMG(0x10312090u), arg1, g->ecx, g->edx, 1, 3, arg1 + ebx, sp0 - 0xc0u, eax);
    t92 = g->ecx;
    wr8(arg1 + arg2 - 1u, 0u);
    eax = arg2;
    ecx = t92;
    goto L_101539ad;
L_101539e7: ;
    COW_AT(101539e7)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = loc_12c;
    g->ebp = loc_128;
    g->edx = edx;
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10153310(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015334fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_130;
        uint32_t loc_134;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        in_edi = rd32(sp0 - 0x12cu);
        in_ebp = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        g->edi = 0u;
        wr32(sp0 - 0x11cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10153363u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_134;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_134 = rd32(sp0 - 0x134u);
        in_esi = rd32(sp0 - 0x130u);
        in_edi = rd32(sp0 - 0x12cu);
        in_ebp = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x130u;
        g->edx = 0u;
        g->esi = 0u;
        wr32(sp0 - 0x120u, 0u);
        wr32(sp0 - 0x11cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10153364u:
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
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_d0;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153374u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153382u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        g->esp = sp0 - 0x134u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1015338fu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        g->esp = sp0 - 0x134u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101533a5u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x101533b2u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x101533c4u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        g->esp = sp0 - 0x134u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101533d1u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x101533f1u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153406u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1015340du:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153430u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153439u:
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
        uint32_t loc_138;
        uint32_t loc_140;
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
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153456u:
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
        uint32_t loc_138;
        uint32_t loc_140;
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
        loc_140 = rd32(sp0 - 0x140u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153490u:
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
        uint32_t loc_13c;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_13c = rd32(sp0 - 0x13cu);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x138u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10153499u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x101534d1u:
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
        uint32_t loc_138;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x14cu, sp0 - 0xecu);
        wr32(sp0 - 0x140u, sp0 - 0xf4u);
        (void)sp0;
        return 1;
    }
    case 0x101534e5u:
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
        uint32_t loc_138;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x14cu, sp0 - 0xecu);
        wr32(sp0 - 0x140u, sp0 - 0xf4u);
        (void)sp0;
        return 1;
    }
    case 0x101534e7u:
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
        uint32_t loc_138;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x14cu, sp0 - 0xecu);
        wr32(sp0 - 0x140u, sp0 - 0xf4u);
        (void)sp0;
        return 1;
    }
    case 0x101534fbu:
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
        uint32_t loc_138;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x14cu, sp0 - 0xecu);
        wr32(sp0 - 0x140u, sp0 - 0xf4u);
        (void)sp0;
        return 1;
    }
    case 0x10153503u:
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
        uint32_t loc_138;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x14cu, sp0 - 0xecu);
        wr32(sp0 - 0x140u, sp0 - 0xf4u);
        (void)sp0;
        return 1;
    }
    case 0x10153517u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1015351du:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153525u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153532u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1015353au:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153547u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1015354bu:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1015354fu:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1015355cu:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153564u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1015356cu:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153572u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1015357au:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153582u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153588u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x101535ceu:
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
        uint32_t loc_138;
        uint32_t loc_d0;
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
        loc_138 = rd32(sp0 - 0x138u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x140u, sp0 - 0xf8u);
        (void)sp0;
        return 1;
    }
    case 0x101535d2u:
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
        uint32_t loc_138;
        uint32_t loc_d0;
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
        loc_138 = rd32(sp0 - 0x138u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x140u, sp0 - 0xf8u);
        (void)sp0;
        return 1;
    }
    case 0x101535eau:
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
        uint32_t loc_138;
        uint32_t loc_d0;
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
        loc_138 = rd32(sp0 - 0x138u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x140u, sp0 - 0xf8u);
        (void)sp0;
        return 1;
    }
    case 0x101535f1u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x101535fdu:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153604u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153646u:
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
        uint32_t loc_138;
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
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x140u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x1015364fu:
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
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1015365au:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1015368bu:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
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
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ecx = arg5;
        wr32(sp0 - 0x140u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x101536aau:
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
        uint32_t loc_138;
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
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x140u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x101536b7u:
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
        uint32_t loc_138;
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
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x140u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x101536e1u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10153738u:
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
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10153748u:
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
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1015374du:
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
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10153752u:
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
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1015375bu:
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
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1015375eu:
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
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10153764u:
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
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10153769u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x134u;
        g->ebx = 1u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10153770u:
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
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1015378fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x134u;
        g->ebx = 1u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101537a0u:
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
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        wr32(sp0 - 0x138u, 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101537adu:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x13cu;
        g->eax = sp0 - 0xc0u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        wr32(sp0 - 0x13cu, sp0 - 0xc0u);
        wr32(sp0 - 0x138u, 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101537c1u:
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
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        wr32(sp0 - 0x13cu, sp0 - 0xc0u);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x101537c3u:
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
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        wr32(sp0 - 0x13cu, sp0 - 0xc0u);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x101537d2u:
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
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        wr32(sp0 - 0x13cu, sp0 - 0xc0u);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x101537ddu:
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
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101537e5u:
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
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        wr32(sp0 - 0x13cu, sp0 - 0xc0u);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x101537e7u:
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
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        wr32(sp0 - 0x13cu, sp0 - 0xc0u);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x101537f6u:
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
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        wr32(sp0 - 0x13cu, sp0 - 0xc0u);
        wr32(sp0 - 0x138u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x10153809u:
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
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        wr32(sp0 - 0x138u, 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10153816u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x134u;
        g->ebx = 1u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1015389du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_144;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x134u;
        g->ebx = 1u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101538ceu:
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
        uint32_t loc_138;
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
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x101538f2u:
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
        uint32_t loc_138;
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
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10153914u:
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
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x144u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10153959u:
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
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x1015397au:
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
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x10153984u:
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
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x158u, sp0 - 0x114u);
        wr32(sp0 - 0x14cu, sp0 - 0x118u);
        (void)sp0;
        return 1;
    }
    case 0x101539adu:
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
        uint32_t loc_13c;
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
        loc_13c = rd32(sp0 - 0x13cu);
        g->esp = sp0 - 0x140u;
        (void)sp0;
        return 1;
    }
    case 0x101539b6u:
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
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_d0;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x101539c5u:
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
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_d0;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x101539cau:
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
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_d0;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101539dau:
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
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_d0;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x101539e7u:
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
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_d0;
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
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10153310(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10153310(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
