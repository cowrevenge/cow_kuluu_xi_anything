/* f_0x10088bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10088bd0(Guest* g)
{
    double d123;
    double d2;
    double d23;
    double d27;
    double d28;
    double d34;
    double d42;
    double d6;
    double d65;
    double d7;
    double d70;
    double d79;
    double d80;
    double d87;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t sf;
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
    uint32_t t124;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
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
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t8;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10088be3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10088be3;
    case 0x10088be9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10088be9;
    case 0x10088bfau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088bfa;
    case 0x10088c01u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088c01;
    case 0x10088c0bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088c0b;
    case 0x10088c28u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088c28;
    case 0x10088c3au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088c3a;
    case 0x10088c3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10088c3f;
    case 0x10088c47u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10088c47;
    case 0x10088c56u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10088c56;
    case 0x10088c61u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088c61;
    case 0x10088c88u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088c88;
    case 0x10088c91u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10088c91;
    case 0x10088ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ca1;
    case 0x10088ca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ca7;
    case 0x10088cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10088cac;
    case 0x10088cb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088cb1;
    case 0x10088cc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088cc4;
    case 0x10088cccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ccc;
    case 0x10088cd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10088cd9;
    case 0x10088cedu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ced;
    case 0x10088cf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088cf9;
    case 0x10088cfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10088cfe;
    case 0x10088d03u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d03;
    case 0x10088d28u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d28;
    case 0x10088d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d31;
    case 0x10088d39u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d39;
    case 0x10088d40u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d40;
    case 0x10088d45u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d45;
    case 0x10088d53u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d53;
    case 0x10088d83u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d83;
    case 0x10088d97u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d97;
    case 0x10088dabu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088dab;
    case 0x10088dcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088dcb;
    case 0x10088dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088dd5;
    case 0x10088debu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088deb;
    case 0x10088e01u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088e01;
    case 0x10088e17u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088e17;
    case 0x10088e3au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088e3a;
    case 0x10088e5cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088e5c;
    case 0x10088e68u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10088e68;
    case 0x10088e71u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088e71;
    case 0x10088e84u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088e84;
    case 0x10088e8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088e8c;
    case 0x10088ea4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ea4;
    case 0x10088ea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ea9;
    case 0x10088ec5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ec5;
    case 0x10088ed4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10088ed4;
    case 0x10088eddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088edd;
    case 0x10088eeau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088eea;
    case 0x10088ef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ef0;
    case 0x10088f04u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088f04;
    case 0x10088f18u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088f18;
    case 0x10088f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088f2d;
    case 0x10088f37u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088f37;
    case 0x10088f4du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088f4d;
    case 0x10088f63u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088f63;
    case 0x10088f7au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088f7a;
    case 0x10088f80u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088f80;
    case 0x10088f85u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10088f85;
    case 0x10088f9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088f9b;
    case 0x10088fa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088fa3;
    case 0x10088facu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088fac;
    case 0x10088fb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088fb4;
    case 0x10088fbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088fbc;
    case 0x10088fc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); goto E_10088fc6;
    case 0x10088fd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088fd8;
    case 0x10088fe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); goto E_10088fe7;
    case 0x10088feeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088fee;
    case 0x10088ff4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ff4;
    case 0x10088ffdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10088ffd;
    case 0x10089013u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089013;
    case 0x1008901au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1008901a;
    case 0x10089029u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089029;
    case 0x10089036u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089036;
    case 0x10089038u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089038;
    case 0x1008903du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1008903d;
    case 0x1008904cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1008904c;
    case 0x1008905bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1008905b;
    case 0x10089061u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089061;
    case 0x10089066u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10089066;
    case 0x1008906bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1008906b;
    case 0x10089082u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089082;
    case 0x1008908du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1008908d;
    case 0x10089092u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089092;
    case 0x10089097u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089097;
    case 0x100890a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100890a7;
    case 0x100890ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100890cc;
    case 0x100890ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100890ce;
    case 0x100890deu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100890de;
    default: break;
    }
#endif

    COW_AT(10088bd0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    if (rd32(rd32(COW_IMG(0x10487ee0u)) + 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10487ee0u));
        goto L_10088be9;
    }
    COW_AT(10088be3)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_10088be9: ;
    COW_AT(10088be9)
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(COW_IMG(0x10487eb4u)) + 1u > 3u)
    {
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_10088f85;
    }
    ecx = rd32(COW_IMG(0x10487eb4u)) + 1u;
    COW_AT(10088bfa)
    t1 = rd32(COW_IMG(0x100890f0u) + ecx * 4u);
    switch (t1 - RD)
    {
    case 0x10088c01u: goto L_10088c01;
    case 0x10088c61u: goto L_10088c61;
    case 0x10088c88u: goto L_10088c88;
    case 0x10088e5cu: goto L_10088e5c;
    default: rt_fatal(g, COW_IMG(0x10088bfau), "switch");
    }
    return 0;
L_10088c01: ;
    COW_AT(10088c01)
    if (rd32(COW_IMG(0x10578478u)) == 0u)
    {
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10578478u));
    COW_AT(10088c0b)
        wr32(sp0 - 0x14u, COW_IMG(0x1035baecu));
        wr8(ecx + 0x65u, 2u);
        wr32(ecx + 0x68u, 0x80808080u);
        g->eax = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t116 = cow_thiscall(g, COW_IMG(0x10150a30u), rd32(COW_IMG(0x10578478u)), 1, rd32(sp0 - 0x14u));
        t117 = g->edx;
        eax = t116;
        edx = t117;
    COW_AT(10088c28)
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, COW_IMG(0x1035bad8u));
        g->ebx = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035bad8u), 1u, 0u);
        t118 = g->edx;
        edx = t118;
    COW_AT(10088c3a)
        eax = rd32(COW_IMG(0x10487ee0u));
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
    }
    COW_AT(10088c3f)
    if ((int32_t)rd32(eax + 0x24u) < 2)
    {
        ecx = rd32(eax + 0x24u);
    COW_AT(10088c47)
        wr16(COW_IMG(0x10485ff2u), rd16(COW_IMG(0x1035b564u) + ecx * 2u));
    }
    COW_AT(10088c56)
    t119 = rd32(COW_IMG(0x10487eb4u));
    wr32(COW_IMG(0x10487eb4u), t119 + 1u);
L_10088f85: ;
    COW_AT(10088f85)
    t120 = rd32(eax + 0xcu) + rd32(eax + 4u);
    wr32(eax + 4u, t120);
    t121 = rd32(rd32(COW_IMG(0x10487ee0u)) + 4u);
    if ((int32_t)t121 >= 0)
    {
        eax = rd32(COW_IMG(0x10487ee0u));
        edi = loc_10;
    }
    else
    {
        eax = rd32(COW_IMG(0x10487ee0u));
        edi = loc_10;
    COW_AT(10088f9b)
        wr32(eax + 4u, 0u);
        eax = rd32(COW_IMG(0x10487ee0u));
    }
    COW_AT(10088fa3)
    if ((int32_t)rd32(eax + 4u) <= (int32_t)rd32(eax))
    {
        edx = rd32(eax + 4u);
    }
    else
    {
        ecx = rd32(eax);
        edx = rd32(eax + 4u);
    COW_AT(10088fac)
        wr32(eax + 4u, ecx);
        eax = rd32(COW_IMG(0x10487ee0u));
    }
    COW_AT(10088fb4)
    t122 = rd32(COW_IMG(0x10578478u));
    if (t122 == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
    }
    else
    {
    COW_AT(10088fbc)
        wr32(sp0 - 4u, rd32(eax));
        if (rd32(eax) == 0u)
        {
            loc_4 = rd32(eax);
        }
        else
        {
            ecx = rd32(eax);
            loc_4 = rd32(eax);
    COW_AT(10088fc6)
            d123 = fr(g, fr(g, (double)(int32_t)rd32(eax + 4u) * (double)rdf32(COW_IMG(0x1032a3c8u))) / (double)(int32_t)loc_4);
            fpush(g, d123);
            g->esp = sp0 - 0xcu;
            t124 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            eax = t124;
    COW_AT(10088fd8)
            wr16(rd32(COW_IMG(0x106643a8u)) + 0x3au, (uint16_t)eax);
            eax = rd32(COW_IMG(0x10487ee0u));
            loc_4 = rd32(sp0 - 4u);
        }
    }
    COW_AT(10088fe7)
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = edi;
    return rd32(eax + 4u);
L_10088c61: ;
    COW_AT(10088c61)
    wr32(COW_IMG(0x10487eb8u), 0u);
    wr32(COW_IMG(0x10487ebcu), 0u);
    wr32(COW_IMG(0x10487ec0u), 0u);
    wr32(COW_IMG(0x10487ec4u), 0u);
    wr32(COW_IMG(0x10487eb4u), 1u);
    loc_4 = self;
    loc_8 = in_ebx;
    loc_c = in_esi;
    loc_10 = in_edi;
    goto L_10088f85;
L_10088c88: ;
    COW_AT(10088c88)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, 0x3fu);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t62 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 4u, in_edi, in_esi);
    t63 = g->ecx;
    t64 = g->edx;
    d65 = cow_take_float(g);
    eax = t62;
    ecx = t63;
    edx = t64;
    x0 = d65;
    COW_AT(10088c91)
    if (x0 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10088ca1)
        t66 = rd32(COW_IMG(0x10487ec4u));
        wr32(COW_IMG(0x10487ec4u), t66 + 1u);
    }
    COW_AT(10088ca7)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t67 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t68 = g->ecx;
    t69 = g->edx;
    d70 = cow_take_float(g);
    eax = t67;
    ecx = t68;
    edx = t69;
    x0 = d70;
    COW_AT(10088cac)
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0 - 0x10u;
    t71 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t72 = g->edx;
    eax = t71;
    edx = t72;
    COW_AT(10088cb1)
    t73 = eax + rd32(COW_IMG(0x10487ebcu));
    t74 = rd32(COW_IMG(0x10487ebcu));
    wr32(COW_IMG(0x10487ebcu), t73);
    if ((int32_t)(eax + t74) <= 5)
    {
        ecx = t73;
    }
    else
    {
        ecx = t73;
    COW_AT(10088cc4)
        t75 = rd32(COW_IMG(0x10487ec4u));
        if (t75 != 0u)
        {
    COW_AT(10088ccc)
            g->edx = edx;
            t76 = rd32(COW_IMG(0x10487ee0u));
            g->esp = sp0 - 0x10u;
            t77 = cow_call_regs(g, COW_IMG(0x10014cf0u), t76, g->ecx, g->edx, 1, 0);
            t78 = g->edx;
            d79 = cow_take_float(g);
            eax = t77;
            edx = t78;
            edi = t76 + 4u;
            x0 = d79;
    COW_AT(10088cd9)
            g->edx = edx;
            d80 = fr(g, fr(g, x0 * (double)(int32_t)rd32(rd32(COW_IMG(0x10487ee0u)) + 0x18u)) * (double)rdf32(COW_IMG(0x10329a08u)));
            fpush(g, d80);
            g->esp = sp0 - 0x10u;
            t81 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t82 = g->edx;
            eax = t81;
            edx = t82;
    COW_AT(10088ced)
            t83 = eax + rd32(edi);
            wr32(edi, t83);
            wr32(COW_IMG(0x10487ec4u), 0u);
            ecx = t83;
        }
    }
    COW_AT(10088cf9)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t84 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t85 = g->ecx;
    t86 = g->edx;
    d87 = cow_take_float(g);
    eax = t84;
    ecx = t85;
    edx = t86;
    x0 = d87;
    COW_AT(10088cfe)
    fpush(g, x0);
    g->esp = sp0 - 0x10u;
    t88 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    eax = t88;
    COW_AT(10088d03)
    t89 = rd32(COW_IMG(0x10487eb8u)) + eax * rd32(rd32(COW_IMG(0x10487ee0u)) + 0x10u);
    t90 = rd32(COW_IMG(0x10487ee0u));
    t91 = rd32(rd32(COW_IMG(0x10487ee0u)) + 0x10u);
    t92 = rd32(COW_IMG(0x10487eb8u));
    wr32(COW_IMG(0x10487eb8u), t89);
    if ((int32_t)(t92 + eax * t91) < 6000)
    {
        eax = t90;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_10088f85;
    }
    ecx = t89;
    edx = eax * t91;
    eax = t90;
    COW_AT(10088d28)
    t93 = rd32(eax + 4u);
    if (t93 == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_10088f85;
    }
    COW_AT(10088d31)
    wr32(eax + 0x2cu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t94 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
    t95 = g->edx;
    eax = t94;
    edx = t95;
    COW_AT(10088d39)
    if ((int32_t)(eax & 0x80000001u) >= 0)
    {
        eax = eax & 0x80000001u;
    }
    else
    {
        eax = eax & 0x80000001u;
    COW_AT(10088d40)
        eax = (eax - 1u | 0xfffffffeu) + 1u;
    }
    COW_AT(10088d45)
    t96 = rd32(COW_IMG(0x10487ee0u));
    wr32(t96 + 0x28u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t97 = cow_fastcall(g, COW_IMG(0x103149e0u), t96, edx, 0);
    eax = t97;
    COW_AT(10088d53)
    t98 = cow_divs(g, eax, rd32(rd32(COW_IMG(0x10487ee0u)) + 8u) * 2u);
    t99 = cow_mods(g, eax, rd32(rd32(COW_IMG(0x10487ee0u)) + 8u) * 2u);
    t100 = t99 * 0xau + 0x14u;
    wr32(COW_IMG(0x10487eb8u), t100);
    t101 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t101);
    wr32(sp0 - 0x18u, 0x37687366u);
    g->eax = rd32(t101);
    t102 = rd32(t101);
    g->esp = sp0 - 0x10u;
    t103 = cow_thiscall(g, rd32(t102 + 0x29cu), t101, 2, 0x37687366u, t101);
    eax = t103;
    COW_AT(10088d83)
    t104 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t104);
    wr32(sp0 - 0x18u, 0x38687366u);
    g->edx = rd32(t104);
    t105 = rd32(t104);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t105 + 0x29cu), t104, 2, 0x38687366u, t104);
    t106 = g->edx;
    edx = t106;
    COW_AT(10088d97)
    t107 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t107);
    wr32(sp0 - 0x18u, 0x39687366u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(t107) + 0x29cu), t107, 2, 0x39687366u, t107);
    COW_AT(10088dab)
    wr32(sp0 - 0x14u, 0u);
    t108 = rd32(self + 0xa0u);
    wr32(sp0 - 0x18u, t108);
    t109 = rd32(COW_IMG(0x1035b568u) + rd32(rd32(COW_IMG(0x10487ee0u)) + 0x28u) * 4u);
    wr32(sp0 - 0x1cu, t109);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(t108) + 0x298u), t108, 3, t109, t108, 0u);
    COW_AT(10088dcb)
    if (rd32(self + 0xa4u) != 0u)
    {
        edi = rd32(self + 0xa4u);
    COW_AT(10088dd5)
        t110 = rd32(self + 0xa0u);
        wr32(sp0 - 0x14u, t110);
        wr32(sp0 - 0x18u, 0x37687366u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x37687366u, t110);
    COW_AT(10088deb)
        t111 = rd32(self + 0xa0u);
        wr32(sp0 - 0x14u, t111);
        wr32(sp0 - 0x18u, 0x38687366u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x38687366u, t111);
    COW_AT(10088e01)
        t112 = rd32(self + 0xa0u);
        wr32(sp0 - 0x14u, t112);
        wr32(sp0 - 0x18u, 0x39687366u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x39687366u, t112);
    COW_AT(10088e17)
        wr32(sp0 - 0x14u, 0u);
        t113 = rd32(self + 0xa0u);
        wr32(sp0 - 0x18u, t113);
        t114 = rd32(COW_IMG(0x1035b568u) + rd32(rd32(COW_IMG(0x10487ee0u)) + 0x28u) * 4u);
        wr32(sp0 - 0x1cu, t114);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(edi) + 0x298u), edi, 3, t114, t113, 0u);
    }
    COW_AT(10088e3a)
    t115 = rd32(COW_IMG(0x10487eb4u));
    wr32(COW_IMG(0x10487ebcu), 0u);
    wr32(COW_IMG(0x10487ec0u), 0u);
    wr32(COW_IMG(0x10487ec4u), 0u);
    wr32(COW_IMG(0x10487eb4u), t115 + 1u);
L_10088f80: ;
    COW_AT(10088f80)
    eax = rd32(COW_IMG(0x10487ee0u));
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    goto L_10088f85;
L_10088e5c: ;
    COW_AT(10088e5c)
    d2 = (double)(float)(double)(int32_t)rd32(eax + 0x2cu);
    wrf32(sp0 - 4u, (float)d2);
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    d6 = cow_take_float(g);
    eax = t3;
    ecx = t4;
    edx = t5;
    x0 = d6;
    COW_AT(10088e68)
    g->ecx = ecx;
    d7 = fr(g, (double)rdf32(sp0 - 4u) - x0);
    fpush(g, d7);
    g->esp = sp0 - 0x10u;
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t9 = g->ecx;
    eax = t8;
    ecx = t9;
    COW_AT(10088e71)
    t10 = rd32(COW_IMG(0x10487ee0u));
    wr32(t10 + 0x2cu, eax);
    t11 = rd32(rd32(COW_IMG(0x10487ee0u)) + 0x2cu);
    if ((int32_t)t11 >= 0)
    {
        eax = rd32(COW_IMG(0x10487ee0u));
        edx = t10;
    }
    else
    {
        eax = rd32(COW_IMG(0x10487ee0u));
        edx = t10;
    COW_AT(10088e84)
        if ((int32_t)rd32(eax + 0x24u) >= 2)
        {
            eax = rd32(eax + 0x24u);
        }
        else
        {
            eax = rd32(eax + 0x24u);
    COW_AT(10088e8c)
            wr32(sp0 - 0x14u, 0u);
            t12 = rd32(self + 0xa0u);
            wr32(sp0 - 0x18u, t12);
            t13 = rd32(COW_IMG(0x1035b55cu) + eax * 4u);
            wr32(sp0 - 0x1cu, t13);
            g->eax = t13;
            g->edx = rd32(t12);
            t14 = rd32(t12);
            g->esp = sp0 - 0x10u;
            t15 = cow_thiscall(g, rd32(t14 + 0x298u), t12, 3, t13, t12, 0u);
            t16 = g->ecx;
            t17 = g->edx;
            eax = t15;
            ecx = t16;
            edx = t17;
    COW_AT(10088ea4)
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t18 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
            eax = t18;
    COW_AT(10088ea9)
            t19 = cow_divs(g, eax, 6u);
            t20 = cow_mods(g, eax, 6u);
            t21 = t20 * 0x3cu + 0x12cu;
            t22 = rd32(COW_IMG(0x10487ee0u));
            wr32(t22 + 0x2cu, t21);
            eax = t22;
            ecx = 6u;
            edx = t21;
        }
    }
    COW_AT(10088ec5)
    d23 = (double)(float)(double)(int32_t)rd32(COW_IMG(0x10487eb8u));
    wrf32(sp0 - 4u, (float)d23);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t24 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t25 = g->ecx;
    t26 = g->edx;
    d27 = cow_take_float(g);
    eax = t24;
    ecx = t25;
    edx = t26;
    x0 = d27;
    COW_AT(10088ed4)
    g->ecx = ecx;
    g->edx = edx;
    d28 = fr(g, (double)rdf32(sp0 - 4u) - x0);
    fpush(g, d28);
    g->esp = sp0 - 0x10u;
    t29 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(10088edd)
    wr32(COW_IMG(0x10487eb8u), eax);
    if ((int32_t)eax >= 0)
    {
        zf = eax == 0u;
        goto L_10088fee;
    }
    COW_AT(10088eea)
    wr32(COW_IMG(0x10487eb8u), 0u);
L_10088ef0: ;
    COW_AT(10088ef0)
    t50 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t50);
    wr32(sp0 - 0x18u, 0x38687366u);
    g->edx = rd32(t50);
    t51 = rd32(t50);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t51 + 0x29cu), t50, 2, 0x38687366u, t50);
    t52 = g->edx;
    edx = t52;
    COW_AT(10088f04)
    t53 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t53);
    wr32(sp0 - 0x18u, 0x39687366u);
    g->eax = rd32(t53);
    t54 = rd32(t53);
    g->esp = sp0 - 0x10u;
    t55 = cow_thiscall(g, rd32(t54 + 0x29cu), t53, 2, 0x39687366u, t53);
    eax = t55;
    COW_AT(10088f18)
    wr32(sp0 - 0x14u, 0u);
    t56 = rd32(self + 0xa0u);
    wr32(sp0 - 0x18u, t56);
    wr32(sp0 - 0x1cu, 0x37687366u);
    g->edx = rd32(t56);
    t57 = rd32(t56);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t57 + 0x298u), t56, 3, 0x37687366u, t56, 0u);
    t58 = g->edx;
    edx = t58;
    COW_AT(10088f2d)
    if (rd32(self + 0xa4u) != 0u)
    {
        edi = rd32(self + 0xa4u);
    COW_AT(10088f37)
        t59 = rd32(self + 0xa0u);
        wr32(sp0 - 0x14u, t59);
        wr32(sp0 - 0x18u, 0x38687366u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x38687366u, t59);
    COW_AT(10088f4d)
        t60 = rd32(self + 0xa0u);
        wr32(sp0 - 0x14u, t60);
        wr32(sp0 - 0x18u, 0x39687366u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x39687366u, t60);
    COW_AT(10088f63)
        wr32(sp0 - 0x14u, 0u);
        t61 = rd32(self + 0xa0u);
        wr32(sp0 - 0x18u, t61);
        wr32(sp0 - 0x1cu, 0x37687366u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(edi) + 0x298u), edi, 3, 0x37687366u, t61, 0u);
    }
    COW_AT(10088f7a)
    wr32(COW_IMG(0x10487eb4u), 0u);
    goto L_10088f80;
L_10088fee: ;
    COW_AT(10088fee)
    if (zf) goto L_10088ef0;
    COW_AT(10088ff4)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t32 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 4u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t33 = g->edx;
    d34 = cow_take_float(g);
    eax = t32;
    edx = t33;
    x0 = d34;
    COW_AT(10088ffd)
    t35 = rd32(rd32(COW_IMG(0x10487ee0u)) + 0x28u);
    if (t35 != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = rd32(COW_IMG(0x10487ee0u));
        goto L_10089038;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    ecx = rd32(COW_IMG(0x10487ee0u));
    COW_AT(10089013)
    if ((eax & 0x4100u) != 0u)
    {
        eax = eax & 0x4100u;
        goto L_10089029;
    }
    COW_AT(1008901a)
    t36 = rd32(COW_IMG(0x10487ec0u)) + 1u;
    wr32(COW_IMG(0x10487ec0u), t36);
    eax = t36;
L_10089061: ;
    COW_AT(10089061)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t39 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t40 = g->ecx;
    t41 = g->edx;
    d42 = cow_take_float(g);
    eax = t39;
    ecx = t40;
    edx = t41;
    x0 = d42;
    COW_AT(10089066)
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0 - 0x10u;
    t43 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t44 = g->edx;
    eax = t43;
    edx = t44;
    COW_AT(1008906b)
    t45 = eax + rd32(COW_IMG(0x10487ebcu));
    t46 = rd32(COW_IMG(0x10487ebcu));
    wr32(COW_IMG(0x10487ebcu), t45);
    if ((int32_t)(eax + t46) > 5)
    {
        ecx = t45;
    COW_AT(10089082)
        wr32(COW_IMG(0x10487ebcu), 0u);
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t47 = cow_stdcall(g, COW_IMG(0x10014d60u), 0);
        eax = t47;
    COW_AT(1008908d)
        if ((int32_t)eax >= 4)
        {
    COW_AT(10089092)
            eax = 4u;
        }
    COW_AT(10089097)
        if ((int32_t)rd32(COW_IMG(0x10487ec0u)) <= (int32_t)rd32(COW_IMG(0x10487ec4u)))
        {
            sf = (int32_t)(rd32(COW_IMG(0x10487ec0u)) - rd32(COW_IMG(0x10487ec4u))) < 0;
            of = ((rd32(COW_IMG(0x10487ec0u)) ^ rd32(COW_IMG(0x10487ec4u))) & (rd32(COW_IMG(0x10487ec0u)) ^ rd32(COW_IMG(0x10487ec0u)) - rd32(COW_IMG(0x10487ec4u)))) >> 0x1fu;
    COW_AT(100890cc)
            if (sf != of)
            {
    COW_AT(100890ce)
                t49 = rd32(rd32(COW_IMG(0x10487ee0u)) + 0x18u) + rd32(rd32(COW_IMG(0x10487ee0u)) + 4u);
                wr32(rd32(COW_IMG(0x10487ee0u)) + 4u, t49);
            }
    COW_AT(100890de)
            wr32(COW_IMG(0x10487ec0u), 0u);
            wr32(COW_IMG(0x10487ec4u), 0u);
        }
        else
        {
    COW_AT(100890a7)
            t48 = rd32(rd32(COW_IMG(0x10487ee0u)) + 4u) - rd32(rd32(COW_IMG(0x10487ee0u)) + 0x14u) * eax;
            wr32(rd32(COW_IMG(0x10487ee0u)) + 4u, t48);
            wr32(COW_IMG(0x10487ec0u), 0u);
            wr32(COW_IMG(0x10487ec4u), 0u);
        }
    }
    goto L_10088f80;
L_10089029: ;
    COW_AT(10089029)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10089061;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10089036)
L_1008905b: ;
    COW_AT(1008905b)
    t38 = rd32(COW_IMG(0x10487ec4u));
    wr32(COW_IMG(0x10487ec4u), t38 + 1u);
    goto L_10089061;
L_10089038: ;
    COW_AT(10089038)
    if (PARITY(eax >> 8u & 5u)) goto L_1008904c;
    COW_AT(1008903d)
    t37 = rd32(COW_IMG(0x10487ec0u)) + 1u;
    wr32(COW_IMG(0x10487ec0u), t37);
    eax = t37;
    goto L_10089061;
L_1008904c: ;
    COW_AT(1008904c)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_10089061;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    goto L_1008905b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10088bd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10088be3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10088be9u:
    {
        uint32_t eax;
        uint32_t ecx;
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
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10088bfau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10088c01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10088c91u:
    {
        uint32_t eax;
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
    case 0x10088ca1u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088ca7u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088cacu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088cb1u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088cc4u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088cccu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088cd9u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088cedu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088cf9u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088cfeu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d03u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d28u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d31u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d39u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d40u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d45u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d53u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d83u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d97u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088dabu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088dcbu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088dd5u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088debu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088e01u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088e17u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088e3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088e5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088e68u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088e71u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088e84u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088e8cu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088ea4u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088ea9u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088ec5u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088ed4u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088eddu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088eeau:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088ef0u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f04u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f18u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f2du:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f37u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f4du:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f63u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088fa3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088facu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088fb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088fbcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088fc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10088fd8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10088fe7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10088feeu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088ff4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088ffdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
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
    case 0x10089013u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008901au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089029u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089036u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089038u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008903du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008904cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008905bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089061u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089066u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008906bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089082u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008908du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089092u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089097u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100890a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100890ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100890ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100890deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10088bd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10088bd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
