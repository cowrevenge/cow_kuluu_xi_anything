/* f_0x10089850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10089850(Guest* g)
{
    double d10;
    double d11;
    double d136;
    double d143;
    double d144;
    double d149;
    double d26;
    double d30;
    double d31;
    double d36;
    double d49;
    double d5;
    double d75;
    double d83;
    double d87;
    double d88;
    double d95;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    double loc_8_f;
    uint32_t of;
    uint32_t sf;
    uint32_t t1;
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
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
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
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10089865u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10089865;
    case 0x1008986eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1008986e;
    case 0x10089873u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10089873;
    case 0x1008987au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1008987a;
    case 0x10089881u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089881;
    case 0x10089886u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089886;
    case 0x10089898u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089898;
    case 0x1008989fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1008989f;
    case 0x100898adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100898ad;
    case 0x100898bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100898bc;
    case 0x100898c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100898c7;
    case 0x100898f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100898f0;
    case 0x100898f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100898f5;
    case 0x100898fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100898fa;
    case 0x100898ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100898ff;
    case 0x10089912u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089912;
    case 0x1008991bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1008991b;
    case 0x1008992bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1008992b;
    case 0x10089938u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089938;
    case 0x1008994cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1008994c;
    case 0x10089958u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089958;
    case 0x1008995du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1008995d;
    case 0x10089962u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089962;
    case 0x10089985u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089985;
    case 0x1008998eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1008998e;
    case 0x10089996u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089996;
    case 0x1008999du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1008999d;
    case 0x100899a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100899a2;
    case 0x100899b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100899b0;
    case 0x100899e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100899e0;
    case 0x100899f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100899f4;
    case 0x10089a08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089a08;
    case 0x10089a28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089a28;
    case 0x10089a2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089a2f;
    case 0x10089a41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089a41;
    case 0x10089a4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089a4b;
    case 0x10089a61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089a61;
    case 0x10089a77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089a77;
    case 0x10089a8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089a8d;
    case 0x10089ab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089ab0;
    case 0x10089ac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089ac9;
    case 0x10089acdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089acd;
    case 0x10089adeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089ade;
    case 0x10089ae3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089ae3;
    case 0x10089aeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089aee;
    case 0x10089b00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089b00;
    case 0x10089b09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089b09;
    case 0x10089b1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089b1c;
    case 0x10089b24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089b24;
    case 0x10089b3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089b3c;
    case 0x10089b41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089b41;
    case 0x10089b5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089b5d;
    case 0x10089b6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089b6c;
    case 0x10089b75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089b75;
    case 0x10089b82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089b82;
    case 0x10089b88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089b88;
    case 0x10089b9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089b9c;
    case 0x10089bb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089bb0;
    case 0x10089bc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089bc5;
    case 0x10089bcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089bcf;
    case 0x10089be5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089be5;
    case 0x10089bfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089bfb;
    case 0x10089c12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089c12;
    case 0x10089c21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089c21;
    case 0x10089c27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089c27;
    case 0x10089c42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089c42;
    case 0x10089c4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089c4b;
    case 0x10089c54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089c54;
    case 0x10089c57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089c57;
    case 0x10089c5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089c5d;
    case 0x10089c69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089c69;
    case 0x10089c71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089c71;
    case 0x10089c9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_8_f = rdf32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089c9e;
    case 0x10089cabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_8_f = rdf32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089cab;
    case 0x10089cb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_8_f = rdf32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089cb1;
    case 0x10089cbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089cbc;
    case 0x10089cd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089cd6;
    case 0x10089ceeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089cee;
    case 0x10089cf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089cf4;
    case 0x10089cfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089cfd;
    case 0x10089d13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089d13;
    case 0x10089d1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089d1a;
    case 0x10089d29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089d29;
    case 0x10089d36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089d36;
    case 0x10089d38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089d38;
    case 0x10089d3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089d3d;
    case 0x10089d4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089d4c;
    case 0x10089d5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089d5b;
    case 0x10089d61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089d61;
    case 0x10089d70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089d70;
    case 0x10089d7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089d7a;
    case 0x10089d7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089d7e;
    case 0x10089d80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089d80;
    case 0x10089d9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089d9a;
    case 0x10089dacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089dac;
    case 0x10089daeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089dae;
    case 0x10089db0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089db0;
    case 0x10089dbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089dbe;
    case 0x10089dc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089dc2;
    case 0x10089dd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089dd1;
    case 0x10089dd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089dd3;
    case 0x10089dd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089dd8;
    case 0x10089dddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089ddd;
    case 0x10089df7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089df7;
    case 0x10089e08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089e08;
    case 0x10089e0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089e0e;
    case 0x10089e1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089e1f;
    default: break;
    }
#endif

    COW_AT(10089850)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(rd32(COW_IMG(0x10487ee8u)) + 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10487ee8u));
        ecx = rd32(rd32(COW_IMG(0x10487ee8u)) + 4u);
        goto L_10089873;
    }
    eax = rd32(COW_IMG(0x10487ee8u));
    COW_AT(10089865)
    wr32(sp0 - 0x14u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10089ff0u), self, 1, 1u);
    t1 = g->edx;
    edx = t1;
    COW_AT(1008986e)
    ebp = in_ebp;
    edi = in_edi;
L_10089c57: ;
    COW_AT(10089c57)
    esi = rd32(COW_IMG(0x10487ee8u));
L_10089c5d: ;
    COW_AT(10089c5d)
    if (rd32(COW_IMG(0x10578478u)) == 0u) goto L_10089e1f;
    COW_AT(10089c69)
    if (rd32(esi) == 0u) goto L_10089e1f;
    COW_AT(10089c71)
    t141 = rd32(esi + 8u);
    wr32(sp0 - 4u, t141);
    t142 = rd32(esi + 4u) - rd32(esi + 8u);
    wr32(sp0 - 8u, t142);
    wrf32(sp0 - 8u, (float)(double)(float)(double)(int32_t)t142);
    d143 = fr(g, (double)(int32_t)t142 * (double)rdf32(COW_IMG(0x1032ae5cu)));
    if (!((double)rdf32(COW_IMG(0x1032a3f0u)) <= d143))
    {
        eax = (t141 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1032a3f0u)), d143, 1u);
        ecx = t142;
        loc_4 = t141;
        x0 = fr(g, (double)(int32_t)t142 * (double)rdf32(COW_IMG(0x1032ae5cu)));
    }
    else
    {
        eax = (t141 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1032a3f0u)), d143, 1u);
        ecx = t142;
        loc_4 = t141;
        loc_8_f = (double)(float)(double)(int32_t)t142;
        x0 = fr(g, (double)(int32_t)t142 * (double)rdf32(COW_IMG(0x1032ae5cu)));
    COW_AT(10089c9e)
        if (!(x0 <= (double)rdf32(COW_IMG(0x1032961cu))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
    COW_AT(10089cab)
            x0 = loc_8_f;
        }
    }
    COW_AT(10089cb1)
    g->ecx = ecx;
    g->edx = edx;
    d144 = fr(g, (double)(int32_t)loc_4 + x0);
    fpush(g, d144);
    g->esp = sp0 - 0x10u;
    t145 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t146 = g->ecx;
    t147 = g->edx;
    eax = t145;
    ecx = t146;
    edx = t147;
    COW_AT(10089cbc)
    wr32(esi + 8u, eax);
    t148 = rd32(COW_IMG(0x10487ee8u));
    d149 = fr(g, fr(g, (double)(int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 8u) * (double)rdf32(COW_IMG(0x1032a3c8u))) / (double)(int32_t)rd32(rd32(COW_IMG(0x10487ee8u))));
    fpush(g, d149);
    g->esp = sp0 - 0x10u;
    t150 = cow_call_regs(g, COW_IMG(0x10311c6cu), t148, g->ecx, g->edx, 1, 0);
    eax = t150;
    COW_AT(10089cd6)
    t151 = rd32(sp0 - 0xcu);
    t152 = rd32(sp0 - 0x10u);
    wr16(rd32(COW_IMG(0x106643a8u)) + 0x3au, (uint16_t)eax);
    g->ebx = t151;
    g->esi = t152;
    g->edi = edi;
    g->ebp = ebp;
    return rd32(rd32(COW_IMG(0x10487ee8u)) + 4u);
L_10089873: ;
    COW_AT(10089873)
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_edi);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_stdcall(g, COW_IMG(0x10014d60u), 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(1008987a)
    if ((int32_t)eax < 4)
    {
        ebp = eax;
    }
    else
    {
    COW_AT(10089881)
        ebp = 4u;
    }
    COW_AT(10089886)
    if (rd32(COW_IMG(0x10487ec8u)) + 1u > 3u) goto L_10089c21;
    eax = rd32(COW_IMG(0x10487ec8u)) + 1u;
    ecx = rd32(COW_IMG(0x10487ec8u));
    COW_AT(10089898)
    t4 = rd32(COW_IMG(0x10089e28u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x1008989fu: goto L_1008989f;
    case 0x100898c7u: goto L_100898c7;
    case 0x100898f5u: goto L_100898f5;
    case 0x10089aeeu: goto L_10089aee;
    default: rt_fatal(g, COW_IMG(0x10089898u), "switch");
    }
    return 0;
L_1008989f: ;
    COW_AT(1008989f)
    if ((int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 0x28u) >= 2)
    {
        ecx = rd32(COW_IMG(0x10487ee8u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x28u);
        ecx = rd32(COW_IMG(0x10487ee8u));
    COW_AT(100898ad)
        wr16(COW_IMG(0x10485ff2u), rd16(COW_IMG(0x1035b578u) + eax * 2u));
    }
    COW_AT(100898bc)
    wr32(COW_IMG(0x10487ec8u), 0u);
L_10089c27: ;
    COW_AT(10089c27)
    t138 = rd32(ecx + 4u) + rd32(ecx + 0x10u) * ebp;
    t139 = rd32(ecx + 0x10u);
    t140 = rd32(sp0 - 0x18u);
    wr32(ecx + 4u, t138);
    if ((int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 4u) >= 0)
    {
        edx = t139 * ebp;
        ebp = rd32(sp0 - 0x14u);
        esi = rd32(COW_IMG(0x10487ee8u));
        edi = t140;
    }
    else
    {
        edx = t139 * ebp;
        ebp = rd32(sp0 - 0x14u);
        esi = rd32(COW_IMG(0x10487ee8u));
        edi = t140;
    COW_AT(10089c42)
        wr32(esi + 4u, 0u);
        esi = rd32(COW_IMG(0x10487ee8u));
    }
    COW_AT(10089c4b)
    if ((int32_t)rd32(esi + 4u) <= (int32_t)rd32(esi)) goto L_10089c5d;
    eax = rd32(esi);
    COW_AT(10089c54)
    wr32(esi + 4u, eax);
    goto L_10089c57;
L_100898c7: ;
    COW_AT(100898c7)
    wr32(COW_IMG(0x10487eccu), 0u);
    wr32(COW_IMG(0x10487ed0u), 0u);
    wr32(COW_IMG(0x10487ed4u), 0u);
    wr32(COW_IMG(0x10487ed8u), 0u);
    wr32(COW_IMG(0x10487ec8u), 1u);
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x10089ee0u), self, edx, 0);
    COW_AT(100898f0)
L_10089c21: ;
    COW_AT(10089c21)
    ecx = rd32(COW_IMG(0x10487ee8u));
    goto L_10089c27;
L_100898f5: ;
    COW_AT(100898f5)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t72 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t73 = g->ecx;
    t74 = g->edx;
    d75 = cow_take_float(g);
    eax = t72;
    ecx = t73;
    edx = t74;
    x0 = d75;
    COW_AT(100898fa)
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0 - 0x18u;
    t76 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t77 = g->edx;
    eax = t76;
    edx = t77;
    COW_AT(100898ff)
    t78 = eax + rd32(COW_IMG(0x10487ed0u));
    t79 = rd32(COW_IMG(0x10487ed0u));
    wr32(COW_IMG(0x10487ed0u), t78);
    if ((int32_t)(eax + t79) <= 30)
    {
        ecx = t78;
    }
    else
    {
        ecx = t78;
    COW_AT(10089912)
        wr32(sp0 - 0x1cu, 4u);
        wr32(sp0 - 0x20u, 0x3fu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t80 = cow_cdecl(g, COW_IMG(0x10089e40u), 2, 0x3fu, 4u);
        t81 = g->ecx;
        t82 = g->edx;
        d83 = cow_take_float(g);
        eax = t80;
        ecx = t81;
        edx = t82;
        x0 = d83;
    COW_AT(1008991b)
        if (x0 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        }
        else
        {
    COW_AT(1008992b)
            g->edx = edx;
            t84 = rd32(COW_IMG(0x10487ee8u));
            g->esp = sp0 - 0x18u;
            t85 = cow_call_regs(g, COW_IMG(0x10014cf0u), t84, g->ecx, g->edx, 1, 0);
            t86 = g->edx;
            d87 = cow_take_float(g);
            eax = t85;
            edx = t86;
            edi = t84 + 4u;
            x0 = d87;
    COW_AT(10089938)
            g->edx = edx;
            d88 = fr(g, fr(g, x0 * (double)(int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 0x1cu)) * (double)rdf32(COW_IMG(0x10329a08u)));
            fpush(g, d88);
            g->esp = sp0 - 0x18u;
            t89 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t90 = g->edx;
            eax = t89;
            edx = t90;
    COW_AT(1008994c)
            t91 = eax + rd32(edi);
            wr32(edi, t91);
            wr32(COW_IMG(0x10487ed8u), 0u);
            ecx = t91;
        }
    }
    COW_AT(10089958)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t92 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t93 = g->ecx;
    t94 = g->edx;
    d95 = cow_take_float(g);
    eax = t92;
    ecx = t93;
    edx = t94;
    x0 = d95;
    COW_AT(1008995d)
    fpush(g, x0);
    g->esp = sp0 - 0x18u;
    t96 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    eax = t96;
    COW_AT(10089962)
    t97 = rd32(COW_IMG(0x10487eccu)) + eax * rd32(rd32(COW_IMG(0x10487ee8u)) + 0x14u);
    t98 = rd32(COW_IMG(0x10487ee8u));
    t99 = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x14u);
    t100 = rd32(COW_IMG(0x10487eccu));
    wr32(COW_IMG(0x10487eccu), t97);
    if ((int32_t)(t100 + eax * t99) < 6000)
    {
        ecx = t98;
        goto L_10089c27;
    }
    ecx = t98;
    edx = eax * t99;
    eax = t97;
    COW_AT(10089985)
    if (rd32(ecx + 4u) == 0u) goto L_10089c27;
    COW_AT(1008998e)
    wr32(ecx + 0x34u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t101 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
    t102 = g->edx;
    eax = t101;
    edx = t102;
    COW_AT(10089996)
    if ((int32_t)(eax & 0x80000001u) >= 0)
    {
        eax = eax & 0x80000001u;
    }
    else
    {
        eax = eax & 0x80000001u;
    COW_AT(1008999d)
        eax = (eax - 1u | 0xfffffffeu) + 1u;
    }
    COW_AT(100899a2)
    t103 = rd32(COW_IMG(0x10487ee8u));
    wr32(t103 + 0x30u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t104 = cow_fastcall(g, COW_IMG(0x103149e0u), t103, edx, 0);
    eax = t104;
    COW_AT(100899b0)
    t105 = cow_divs(g, eax, rd32(rd32(COW_IMG(0x10487ee8u)) + 0xcu) * 2u);
    t106 = cow_mods(g, eax, rd32(rd32(COW_IMG(0x10487ee8u)) + 0xcu) * 2u);
    t107 = t106 * 0xau + 0x14u;
    wr32(COW_IMG(0x10487eccu), t107);
    t108 = rd32(self + 0xa0u);
    wr32(sp0 - 0x1cu, t108);
    wr32(sp0 - 0x20u, 0x37687366u);
    g->eax = rd32(t108);
    t109 = rd32(t108);
    g->esp = sp0 - 0x18u;
    t110 = cow_thiscall(g, rd32(t109 + 0x29cu), t108, 2, 0x37687366u, t108);
    eax = t110;
    COW_AT(100899e0)
    t111 = rd32(self + 0xa0u);
    wr32(sp0 - 0x1cu, t111);
    wr32(sp0 - 0x20u, 0x38687366u);
    g->edx = rd32(t111);
    t112 = rd32(t111);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(t112 + 0x29cu), t111, 2, 0x38687366u, t111);
    t113 = g->edx;
    edx = t113;
    COW_AT(100899f4)
    t114 = rd32(self + 0xa0u);
    wr32(sp0 - 0x1cu, t114);
    wr32(sp0 - 0x20u, 0x39687366u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(t114) + 0x29cu), t114, 2, 0x39687366u, t114);
    COW_AT(10089a08)
    wr32(sp0 - 0x1cu, 0u);
    t115 = rd32(self + 0xa0u);
    wr32(sp0 - 0x20u, t115);
    t116 = rd32(COW_IMG(0x1035b57cu) + rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u) * 4u);
    wr32(sp0 - 0x24u, t116);
    g->eax = t116;
    g->edx = rd32(t115);
    t117 = rd32(t115);
    g->esp = sp0 - 0x18u;
    t118 = cow_thiscall(g, rd32(t117 + 0x298u), t115, 3, t116, t115, 0u);
    t119 = g->edx;
    eax = t118;
    edx = t119;
    COW_AT(10089a28)
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t120 = cow_stdcall(g, COW_IMG(0x10089f40u), 0);
    eax = t120;
    COW_AT(10089a2f)
    wr32(sp0 - 0x1cu, eax);
    t121 = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u);
    wr32(sp0 - 0x20u, t121);
    g->eax = eax;
    g->edx = t121;
    g->esp = sp0 - 0x18u;
    t122 = cow_thiscall(g, COW_IMG(0x10089f50u), self, 2, t121, eax);
    t123 = g->edx;
    eax = t122;
    edx = t123;
    COW_AT(10089a41)
    if (rd32(self + 0xa4u) != 0u)
    {
        edi = rd32(self + 0xa4u);
    COW_AT(10089a4b)
        t124 = rd32(self + 0xa0u);
        wr32(sp0 - 0x1cu, t124);
        wr32(sp0 - 0x20u, 0x37687366u);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x37687366u, t124);
    COW_AT(10089a61)
        t125 = rd32(self + 0xa0u);
        wr32(sp0 - 0x1cu, t125);
        wr32(sp0 - 0x20u, 0x38687366u);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x38687366u, t125);
    COW_AT(10089a77)
        t126 = rd32(self + 0xa0u);
        wr32(sp0 - 0x1cu, t126);
        wr32(sp0 - 0x20u, 0x39687366u);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x39687366u, t126);
    COW_AT(10089a8d)
        wr32(sp0 - 0x1cu, 0u);
        t127 = rd32(self + 0xa0u);
        wr32(sp0 - 0x20u, t127);
        t128 = rd32(COW_IMG(0x1035b57cu) + rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u) * 4u);
        wr32(sp0 - 0x24u, t128);
        g->eax = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u);
        g->edx = rd32(edi);
        t129 = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u);
        t130 = rd32(edi);
        g->esp = sp0 - 0x18u;
        t131 = cow_thiscall(g, rd32(t130 + 0x298u), edi, 3, t128, t127, 0u);
        t132 = g->edx;
        eax = t131;
        edx = t132;
    }
    COW_AT(10089ab0)
    wr32(COW_IMG(0x10487ed0u), 0u);
    wr32(COW_IMG(0x10487ed4u), 0u);
    wr32(COW_IMG(0x10487ed8u), 0u);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t133 = cow_stdcall(g, COW_IMG(0x10089f40u), 0);
    t134 = g->ecx;
    t135 = g->edx;
    eax = t133;
    ecx = t134;
    edx = t135;
    COW_AT(10089ac9)
    if (eax != 0u)
    {
    COW_AT(10089acd)
        d136 = fr(g, (double)(int32_t)rd32(COW_IMG(0x10487eccu)) * (double)rdf32(COW_IMG(0x1032d698u)));
        fpush(g, d136);
        g->esp = sp0 - 0x18u;
        t137 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        eax = t137;
    COW_AT(10089ade)
        wr32(COW_IMG(0x10487eccu), eax);
    }
    COW_AT(10089ae3)
    wr32(COW_IMG(0x10487ec8u), rd32(COW_IMG(0x10487ec8u)) + 1u);
    goto L_10089c21;
L_10089aee: ;
    COW_AT(10089aee)
    d5 = (double)(float)(double)(int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 0x34u);
    wrf32(sp0 - 8u, (float)d5);
    g->ecx = ecx;
    g->edx = rd32(COW_IMG(0x10487ee8u));
    t6 = rd32(COW_IMG(0x10487ee8u));
    g->esp = sp0 - 0x18u;
    t7 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    d10 = cow_take_float(g);
    eax = t7;
    ecx = t8;
    edx = t9;
    x0 = d10;
    COW_AT(10089b00)
    g->edx = edx;
    d11 = fr(g, (double)rdf32(sp0 - 8u) - x0);
    fpush(g, d11);
    g->esp = sp0 - 0x18u;
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(10089b09)
    t14 = rd32(COW_IMG(0x10487ee8u));
    wr32(t14 + 0x34u, eax);
    if ((int32_t)rd32(rd32(COW_IMG(0x10487ee8u)) + 0x34u) >= 0)
    {
        eax = rd32(COW_IMG(0x10487ee8u));
        ecx = t14;
    }
    else
    {
        eax = rd32(COW_IMG(0x10487ee8u));
        ecx = t14;
    COW_AT(10089b1c)
        if ((int32_t)rd32(eax + 0x28u) >= 2)
        {
            eax = rd32(eax + 0x28u);
        }
        else
        {
            eax = rd32(eax + 0x28u);
    COW_AT(10089b24)
            wr32(sp0 - 0x1cu, 0u);
            t15 = rd32(self + 0xa0u);
            wr32(sp0 - 0x20u, t15);
            t16 = rd32(COW_IMG(0x1035b570u) + eax * 4u);
            wr32(sp0 - 0x24u, t16);
            g->eax = t16;
            g->edx = rd32(t15);
            t17 = rd32(t15);
            g->esp = sp0 - 0x18u;
            t18 = cow_thiscall(g, rd32(t17 + 0x298u), t15, 3, t16, t15, 0u);
            t19 = g->ecx;
            t20 = g->edx;
            eax = t18;
            ecx = t19;
            edx = t20;
    COW_AT(10089b3c)
            g->eax = eax;
            g->esp = sp0 - 0x18u;
            t21 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
            eax = t21;
    COW_AT(10089b41)
            t22 = cow_divs(g, eax, 6u);
            t23 = cow_mods(g, eax, 6u);
            t24 = t23 * 0x3cu + 0x12cu;
            t25 = rd32(COW_IMG(0x10487ee8u));
            wr32(t25 + 0x34u, t24);
            eax = t25;
            ecx = 6u;
            edx = t24;
        }
    }
    COW_AT(10089b5d)
    d26 = (double)(float)(double)(int32_t)rd32(COW_IMG(0x10487eccu));
    wrf32(sp0 - 8u, (float)d26);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t27 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t28 = g->ecx;
    t29 = g->edx;
    d30 = cow_take_float(g);
    eax = t27;
    ecx = t28;
    edx = t29;
    x0 = d30;
    COW_AT(10089b6c)
    g->ecx = ecx;
    g->edx = edx;
    d31 = fr(g, (double)rdf32(sp0 - 8u) - x0);
    fpush(g, d31);
    g->esp = sp0 - 0x18u;
    t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t33 = g->ecx;
    t34 = g->edx;
    eax = t32;
    ecx = t33;
    edx = t34;
    COW_AT(10089b75)
    wr32(COW_IMG(0x10487eccu), eax);
    if ((int32_t)eax >= 0)
    {
        zf = eax == 0u;
        goto L_10089cee;
    }
    COW_AT(10089b82)
    wr32(COW_IMG(0x10487eccu), 0u);
L_10089b88: ;
    COW_AT(10089b88)
    t56 = rd32(self + 0xa0u);
    wr32(sp0 - 0x1cu, t56);
    wr32(sp0 - 0x20u, 0x38687366u);
    g->edx = rd32(t56);
    t57 = rd32(t56);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(t57 + 0x29cu), t56, 2, 0x38687366u, t56);
    t58 = g->edx;
    edx = t58;
    COW_AT(10089b9c)
    t59 = rd32(self + 0xa0u);
    wr32(sp0 - 0x1cu, t59);
    wr32(sp0 - 0x20u, 0x39687366u);
    g->eax = rd32(t59);
    t60 = rd32(t59);
    g->esp = sp0 - 0x18u;
    t61 = cow_thiscall(g, rd32(t60 + 0x29cu), t59, 2, 0x39687366u, t59);
    eax = t61;
    COW_AT(10089bb0)
    wr32(sp0 - 0x1cu, 0u);
    t62 = rd32(self + 0xa0u);
    wr32(sp0 - 0x20u, t62);
    wr32(sp0 - 0x24u, 0x37687366u);
    g->eax = eax;
    g->edx = rd32(t62);
    t63 = rd32(t62);
    g->esp = sp0 - 0x18u;
    t64 = cow_thiscall(g, rd32(t63 + 0x298u), t62, 3, 0x37687366u, t62, 0u);
    t65 = g->edx;
    eax = t64;
    edx = t65;
    COW_AT(10089bc5)
    if (rd32(self + 0xa4u) != 0u)
    {
        edi = rd32(self + 0xa4u);
    COW_AT(10089bcf)
        t66 = rd32(self + 0xa0u);
        wr32(sp0 - 0x1cu, t66);
        wr32(sp0 - 0x20u, 0x38687366u);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x38687366u, t66);
    COW_AT(10089be5)
        t67 = rd32(self + 0xa0u);
        wr32(sp0 - 0x1cu, t67);
        wr32(sp0 - 0x20u, 0x39687366u);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x39687366u, t67);
    COW_AT(10089bfb)
        wr32(sp0 - 0x1cu, 0u);
        t68 = rd32(self + 0xa0u);
        wr32(sp0 - 0x20u, t68);
        wr32(sp0 - 0x24u, 0x37687366u);
        g->eax = t68;
        g->edx = rd32(edi);
        t69 = rd32(edi);
        g->esp = sp0 - 0x18u;
        t70 = cow_thiscall(g, rd32(t69 + 0x298u), edi, 3, 0x37687366u, t68, 0u);
        t71 = g->edx;
        eax = t70;
        edx = t71;
    }
    COW_AT(10089c12)
    wr32(sp0 - 0x1cu, 1u);
    wr32(COW_IMG(0x10487ec8u), 0u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10089ff0u), self, 1, 1u);
    goto L_10089c21;
L_10089cee: ;
    COW_AT(10089cee)
    if (zf) goto L_10089b88;
    COW_AT(10089cf4)
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, 0x3fu);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t35 = cow_cdecl(g, COW_IMG(0x10089e40u), 2, 0x3fu, 4u);
    d36 = cow_take_float(g);
    eax = t35;
    x0 = d36;
    COW_AT(10089cfd)
    if (rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = rd32(COW_IMG(0x10487ee8u));
        goto L_10089d38;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    ecx = rd32(COW_IMG(0x10487ee8u));
    COW_AT(10089d13)
    if ((eax & 0x4100u) != 0u)
    {
        eax = eax & 0x4100u;
        goto L_10089d29;
    }
    COW_AT(10089d1a)
    t37 = rd32(COW_IMG(0x10487ed4u)) + 1u;
    wr32(COW_IMG(0x10487ed4u), t37);
L_10089d61: ;
    COW_AT(10089d61)
    if ((int32_t)rd32(COW_IMG(0x10487ed4u)) <= (int32_t)rd32(COW_IMG(0x10487ed8u)))
    {
        eax = rd32(COW_IMG(0x10487ed4u));
        edx = rd32(COW_IMG(0x10487ed8u));
        sf = (int32_t)(rd32(COW_IMG(0x10487ed4u)) - rd32(COW_IMG(0x10487ed8u))) < 0;
        of = ((rd32(COW_IMG(0x10487ed4u)) ^ rd32(COW_IMG(0x10487ed8u))) & (rd32(COW_IMG(0x10487ed4u)) ^ rd32(COW_IMG(0x10487ed4u)) - rd32(COW_IMG(0x10487ed8u)))) >> 0x1fu;
        goto L_10089dae;
    }
    eax = rd32(COW_IMG(0x10487ed4u));
    edx = rd32(COW_IMG(0x10487ed8u));
    COW_AT(10089d70)
    g->eax = eax;
    t39 = rd32(ecx + 0x18u);
    g->esp = sp0 - 0x18u;
    t40 = cow_stdcall(g, COW_IMG(0x10089f40u), 0);
    eax = t40;
    edi = t39;
    COW_AT(10089d7a)
    if (eax != 0u)
    {
    COW_AT(10089d7e)
        edi = edi * 2u;
    }
    COW_AT(10089d80)
    t41 = rd32(rd32(COW_IMG(0x10487ee8u)) + 4u) - edi;
    t42 = rd32(COW_IMG(0x10487ee8u));
    wr32(t42 + 4u, t41);
    wr32(COW_IMG(0x10487eccu), 0u);
    g->eax = t42;
    g->esp = sp0 - 0x18u;
    t43 = cow_stdcall(g, COW_IMG(0x10089f40u), 0);
    eax = t43;
    COW_AT(10089d9a)
    wr32(sp0 - 0x1cu, eax);
    t44 = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u);
    wr32(sp0 - 0x20u, t44);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10089fa0u), self, 2, t44, eax);
    COW_AT(10089dac)
L_10089e08: ;
    COW_AT(10089e08)
    ecx = rd32(COW_IMG(0x10487ee8u));
L_10089e0e: ;
    COW_AT(10089e0e)
    wr32(COW_IMG(0x10487ed4u), 0u);
    wr32(COW_IMG(0x10487ed8u), 0u);
    goto L_10089c27;
L_10089d29: ;
    COW_AT(10089d29)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_10089d61;
    COW_AT(10089d36)
L_10089d5b: ;
    COW_AT(10089d5b)
    wr32(COW_IMG(0x10487ed8u), rd32(COW_IMG(0x10487ed8u)) + 1u);
    goto L_10089d61;
L_10089d38: ;
    COW_AT(10089d38)
    if (PARITY(eax >> 8u & 5u)) goto L_10089d4c;
    COW_AT(10089d3d)
    t38 = rd32(COW_IMG(0x10487ed4u)) + 1u;
    wr32(COW_IMG(0x10487ed4u), t38);
    goto L_10089d61;
L_10089d4c: ;
    COW_AT(10089d4c)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u) goto L_10089d61;
    goto L_10089d5b;
L_10089dae: ;
    COW_AT(10089dae)
    if (sf == of) goto L_10089e0e;
    COW_AT(10089db0)
    t45 = rd32(ecx + 0x1cu);
    wr32(sp0 - 8u, t45);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t46 = cow_stdcall(g, COW_IMG(0x10089f40u), 0);
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
    edi = t45;
    COW_AT(10089dbe)
    if (eax != 0u)
    {
    COW_AT(10089dc2)
        d49 = fr(g, (double)(int32_t)rd32(sp0 - 8u) * (double)rdf32(COW_IMG(0x10329ce4u)));
        fpush(g, d49);
        g->esp = sp0 - 0x18u;
        t50 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        eax = t50;
    COW_AT(10089dd1)
        edi = eax;
    }
    COW_AT(10089dd3)
    if ((int32_t)edi < 1)
    {
    COW_AT(10089dd8)
        edi = 1u;
    }
    COW_AT(10089ddd)
    t51 = edi + rd32(rd32(COW_IMG(0x10487ee8u)) + 4u);
    t52 = rd32(COW_IMG(0x10487ee8u));
    wr32(t52 + 4u, t51);
    wr32(COW_IMG(0x10487eccu), 0u);
    g->eax = t52;
    g->edx = t51;
    g->esp = sp0 - 0x18u;
    t53 = cow_stdcall(g, COW_IMG(0x10089f40u), 0);
    t54 = g->edx;
    eax = t53;
    edx = t54;
    COW_AT(10089df7)
    wr32(sp0 - 0x1cu, eax);
    t55 = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x30u);
    wr32(sp0 - 0x20u, t55);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10089fc0u), self, 2, t55, eax);
    goto L_10089e08;
L_10089e1f: ;
    COW_AT(10089e1f)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = edi;
    g->ebp = ebp;
    return rd32(esi + 4u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10089850(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10089865u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008986eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089873u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008987au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089881u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089886u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089898u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008989fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100898adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100898bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100898c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100898f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100898f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100898fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100898ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089912u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008991bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008992bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089938u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008994cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089958u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008995du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089962u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089985u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008998eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089996u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008999du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100899a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100899b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100899e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100899f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089a08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089a28u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089a2fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089a41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089a4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089a61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089a77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089a8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089ab0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089ac9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089acdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089adeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089ae3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089aeeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089b00u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089b09u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089b1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089b24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089b3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089b41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089b5du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089b6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089b75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089b82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089b88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089b9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089bb0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089bc5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089bcfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089be5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089bfbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089c12u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089c21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089c27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089c42u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089c4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089c54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089c57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089c5du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089c69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089c71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10089c9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        double loc_8_f;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10089cabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        double loc_8_f;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10089cb1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        double loc_8_f;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10089cbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10089cd6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10089ceeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089cf4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089cfdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d1au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d38u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d3du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d4cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d70u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d7eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d80u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089d9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089dacu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089daeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089db0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089dbeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089dc2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089dd1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089dd3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089dd8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089dddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089df7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089e08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089e0eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089e1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10089850(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10089850(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
