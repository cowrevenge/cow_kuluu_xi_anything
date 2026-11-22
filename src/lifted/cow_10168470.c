/* f_0x10168470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10168470(Guest* g)
{
    double d14;
    double d18;
    double d34;
    double d35;
    double d37;
    double d38;
    double d41;
    double d42;
    double d44;
    double d45;
    double d48;
    double d49;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d57;
    double d58;
    double d59;
    double d60;
    double d72;
    double d74;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    double d88;
    double d89;
    double d90;
    double d91;
    double d92;
    double d93;
    double d94;
    double d95;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_64;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_80;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
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
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    uint32_t t36;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t43;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t50;
    uint32_t t56;
    uint32_t t6;
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
    uint32_t t73;
    uint32_t t75;
    uint32_t t76;
    uint32_t t8;
    uint32_t t9;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
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
    cow_frame(g, sp0, 208u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10168495u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb8u); in_esi = rd32(sp0 - 0xb4u); in_ebp = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebp = rd32(sp0 - 0xb0u); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb8u); g->esi = rd32(sp0 - 0xb4u); goto E_10168495;
    case 0x101684a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_101684a6;
    case 0x101684b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_101684b4;
    case 0x101684c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_101684c2;
    case 0x101684d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_101684d9;
    case 0x101684ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_101684ec;
    case 0x101684f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_101684f8;
    case 0x101684ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_101684ff;
    case 0x10168505u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_10168505;
    case 0x10168511u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); goto E_10168511;
    case 0x10168515u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); goto E_10168515;
    case 0x1016851cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); goto E_1016851c;
    case 0x10168522u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); goto E_10168522;
    case 0x1016852eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_1016852e;
    case 0x10168532u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_10168532;
    case 0x10168539u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_10168539;
    case 0x10168543u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_10168543;
    case 0x10168545u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_10168545;
    case 0x1016854au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_1016854a;
    case 0x10168551u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_10168551;
    case 0x10168557u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_10168557;
    case 0x10168563u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); goto E_10168563;
    case 0x10168567u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); goto E_10168567;
    case 0x1016856eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); goto E_1016856e;
    case 0x10168574u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); goto E_10168574;
    case 0x10168580u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_10168580;
    case 0x10168584u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_10168584;
    case 0x1016858bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_1016858b;
    case 0x10168595u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_10168595;
    case 0x10168597u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_10168597;
    case 0x10168598u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_10168598;
    case 0x1016859cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_1016859c;
    case 0x101685a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_101685a6;
    case 0x101685b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_101685b2;
    case 0x101685b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_101685b6;
    case 0x101685c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_101685c2;
    case 0x101685d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_101685d4;
    case 0x101685e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_101685e8;
    case 0x101685feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_101685fe;
    case 0x10168614u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_10168614;
    case 0x10168622u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_10168622;
    case 0x1016862au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_1016862a;
    case 0x1016862eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_1016862e;
    case 0x1016863du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_1016863d;
    case 0x10168657u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_10168657;
    case 0x10168667u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10168667;
    case 0x10168687u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_10168687;
    case 0x10168764u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_10168764;
    case 0x10168808u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10168808;
    case 0x10168815u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_10168815;
    case 0x1016881cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016881c;
    case 0x1016881eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_1016881e;
    case 0x10168823u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_10168823;
    case 0x10168849u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10168849;
    case 0x1016884bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_1016884b;
    case 0x10168867u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10168867;
    case 0x10168883u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_10168883;
    case 0x10168887u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_10168887;
    case 0x1016889du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_1016889d;
    case 0x101688a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_101688a1;
    case 0x101688abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_101688ab;
    case 0x101688b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_101688b3;
    case 0x101688c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_101688c4;
    case 0x101688d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_101688d5;
    case 0x101688e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_101688e3;
    case 0x101688e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101688e8;
    case 0x101688f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101688f0;
    case 0x101688f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101688f5;
    case 0x101688ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101688ff;
    case 0x1016890bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1016890b;
    case 0x10168913u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10168913;
    case 0x1016891bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1016891b;
    case 0x1016892fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1016892f;
    case 0x10168937u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10168937;
    case 0x10168a97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10168a97;
    case 0x10168b30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10168b30;
    case 0x10168bc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10168bc9;
    case 0x10168c60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10168c60;
    case 0x10168cf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10168cf9;
    case 0x10168d00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10168d00;
    case 0x10168d0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); goto E_10168d0a;
    default: break;
    }
#endif

    COW_AT(10168470)
    wr32(sp0 - 0xacu, in_ebx);
    wr32(sp0 - 0xb0u, in_ebp);
    wr32(sp0 - 0xb4u, in_esi);
    wr32(sp0 - 0xb8u, in_edi);
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xc0u, 0x1cu);
    wr32(sp0 - 0xc4u, arg1);
    wr32(sp0 - 0x7cu, self);
    g->eax = rd32(arg1);
    g->edx = in_edx;
    t1 = rd32(arg1);
    g->esp = sp0 - 0xb8u;
    t2 = cow_thiscall(g, rd32(t1 + 0xc8u), self, 3, arg1, 0x1cu, 0u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(10168495)
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xc0u, 0x89u);
    wr32(sp0 - 0xc4u, arg1);
    g->eax = eax;
    t4 = rd32(arg1);
    g->esp = sp0 - 0xb8u;
    t5 = cow_thiscall(g, rd32(t4 + 0xc8u), t4, 3, arg1, 0x89u, 0u);
    t6 = g->ecx;
    eax = t5;
    ecx = t6;
    COW_AT(101684a6)
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xc0u, 0x1bu);
    wr32(sp0 - 0xc4u, arg1);
    g->edx = rd32(arg1);
    t7 = rd32(arg1);
    g->esp = sp0 - 0xb8u;
    cow_thiscall(g, rd32(t7 + 0xc8u), ecx, 3, arg1, 0x1bu, 0u);
    t8 = g->ecx;
    t9 = g->edx;
    ecx = t8;
    edx = t9;
    COW_AT(101684b4)
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, arg1);
    g->eax = rd32(arg1);
    g->edx = edx;
    t10 = rd32(arg1);
    g->esp = sp0 - 0xb8u;
    t11 = cow_thiscall(g, rd32(t10 + 0xf4u), ecx, 3, arg1, 0u, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(101684c2)
    g->ecx = ecx;
    g->edx = edx;
    d14 = fr(g, fr(g, (double)rdf32(self + 0x40u) + (double)rdf32(arg2)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d14);
    g->esp = sp0 - 0xb8u;
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(101684d9)
    g->ecx = ecx;
    g->edx = edx;
    d18 = fr(g, fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(arg2 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d18);
    g->esp = sp0 - 0xb8u;
    t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t20 = g->ecx;
    t21 = g->edx;
    ecx = t20;
    edx = t21;
    edi = eax;
    eax = t19;
    COW_AT(101684ec)
    if (rd8(self + 0x34139u) == 0u)
    {
    COW_AT(1016854a)
        if ((int32_t)(edi - 1u) >= 0)
        {
            ecx = edi - 1u;
    COW_AT(10168557)
            t24 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0x88u, t24);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                edx = t24;
                loc_88 = t24;
            }
            else
            {
                edx = t24;
    COW_AT(10168563)
                wr32(sp0 - 0x88u, ecx);
                loc_88 = ecx;
            }
        }
        else
        {
    COW_AT(10168551)
            wr32(sp0 - 0x88u, 0u);
            loc_88 = 0u;
        }
    COW_AT(10168567)
        if ((int32_t)(edi + 1u) >= 0)
        {
            ecx = edi + 1u;
    COW_AT(10168574)
            t25 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0x8cu, t25);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                edx = t25;
                loc_8c = t25;
            }
            else
            {
                edx = t25;
    COW_AT(10168580)
                wr32(sp0 - 0x8cu, ecx);
                loc_8c = ecx;
            }
        }
        else
        {
    COW_AT(1016856e)
            wr32(sp0 - 0x8cu, 0u);
            loc_8c = 0u;
        }
    COW_AT(10168584)
        if ((int32_t)(eax - 1u) < 0)
        {
            esi = 0u;
        }
        else
        {
            ecx = eax - 1u;
    COW_AT(1016858b)
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x4cu) - 1u))
            {
                edx = rd32(self + 0x4cu);
                esi = rd32(self + 0x4cu) - 1u;
            }
            else
            {
                edx = rd32(self + 0x4cu);
    COW_AT(10168595)
                esi = ecx;
            }
        }
    COW_AT(10168597)
        eax = eax + 1u;
    }
    else
    {
    COW_AT(101684f8)
        if ((int32_t)(edi - 2u) >= 0)
        {
            ecx = edi - 2u;
    COW_AT(10168505)
            t22 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0x88u, t22);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                edx = t22;
                loc_88 = t22;
            }
            else
            {
                edx = t22;
    COW_AT(10168511)
                wr32(sp0 - 0x88u, ecx);
                loc_88 = ecx;
            }
        }
        else
        {
    COW_AT(101684ff)
            wr32(sp0 - 0x88u, 0u);
            loc_88 = 0u;
        }
    COW_AT(10168515)
        if ((int32_t)(edi + 2u) >= 0)
        {
            ecx = edi + 2u;
    COW_AT(10168522)
            t23 = rd32(self + 0x48u) - 1u;
            wr32(sp0 - 0x8cu, t23);
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x48u) - 1u))
            {
                edx = t23;
                loc_8c = t23;
            }
            else
            {
                edx = t23;
    COW_AT(1016852e)
                wr32(sp0 - 0x8cu, ecx);
                loc_8c = ecx;
            }
        }
        else
        {
    COW_AT(1016851c)
            wr32(sp0 - 0x8cu, 0u);
            loc_8c = 0u;
        }
    COW_AT(10168532)
        if ((int32_t)(eax - 2u) < 0)
        {
            esi = 0u;
        }
        else
        {
            ecx = eax - 2u;
    COW_AT(10168539)
            if ((int32_t)ecx > (int32_t)(rd32(self + 0x4cu) - 1u))
            {
                edx = rd32(self + 0x4cu);
                esi = rd32(self + 0x4cu) - 1u;
            }
            else
            {
                edx = rd32(self + 0x4cu);
    COW_AT(10168543)
                esi = ecx;
            }
        }
    COW_AT(10168545)
        eax = eax + 2u;
    }
    COW_AT(10168598)
    if ((int32_t)eax >= 0)
    {
    COW_AT(101685a6)
        t26 = rd32(self + 0x4cu) - 1u;
        wr32(sp0 - 0x90u, t26);
        if ((int32_t)eax > (int32_t)(rd32(self + 0x4cu) - 1u))
        {
            loc_90 = t26;
        }
        else
        {
    COW_AT(101685b2)
            wr32(sp0 - 0x90u, eax);
            loc_90 = eax;
        }
    }
    else
    {
    COW_AT(1016859c)
        wr32(sp0 - 0x90u, 0u);
        loc_90 = 0u;
    }
    COW_AT(101685b6)
    wr32(sp0 - 0xbcu, 0x42u);
    wr32(sp0 - 0xc0u, arg1);
    g->esp = sp0 - 0xb8u;
    cow_thiscall(g, rd32(rd32(arg1) + 0x130u), rd32(arg1), 2, arg1, 0x42u);
    COW_AT(101685c2)
    wr32(sp0 - 0x80u, esi);
    if ((int32_t)esi > (int32_t)rd32(sp0 - 0x90u))
    {
        eax = rd32(sp0 - 0x90u);
        edx = esi;
        goto L_101688d5;
    }
    edx = esi;
    ebx = self;
    loc_80 = esi;
L_101685d4: ;
    COW_AT(101685d4)
    t27 = rd32(sp0 - 0x88u);
    wr32(sp0 - 0x78u, t27);
    if ((int32_t)rd32(sp0 - 0x88u) > (int32_t)rd32(sp0 - 0x8cu)) goto L_101688c4;
    eax = t27;
    loc_78 = t27;
L_101685e8: ;
    COW_AT(101685e8)
    if (rd32(eax * 4u + rd32(ebx + 0x60u) + rd32(ebx + 0x48u) * edx * 4u) == 0u) goto L_101688b3;
    ecx = rd32(eax * 4u + rd32(ebx + 0x60u) + rd32(ebx + 0x48u) * edx * 4u);
L_101685fe: ;
    COW_AT(101685fe)
    wr32(sp0 - 0x84u, ecx + 4u);
    if ((rd32(ecx) >> 8u & 0x20u) == 0u)
    {
        eax = ecx + 4u;
        loc_84 = ecx + 4u;
        ecx = rd32(ecx) & 0x7ffu;
    COW_AT(10168622)
        if ((int32_t)ecx > 0)
        {
    COW_AT(1016862a)
            wr32(sp0 - 0x70u, ecx);
            loc_70 = ecx;
L_1016862e: ;
    COW_AT(1016862e)
            t29 = rd32(eax + 4u);
            wr32(sp0 - 0x74u, t29);
            if (rd32(eax + 4u) != 0u)
            {
                edi = t29;
                loc_74 = t29;
    COW_AT(1016863d)
                if (rd32(rd32(sp0 - 0x7cu) + 4u) != rd32(rd32(eax) + 0xbcu))
                {
                    ecx = rd32(rd32(eax) + 0xbcu);
                    edx = rd32(rd32(sp0 - 0x7cu) + 4u);
                    ebx = rd32(eax);
                    esi = rd32(edi + 8u);
    COW_AT(10168657)
                    wr32(sp0 - 0xbcu, ebx);
                    wr32(sp0 - 0xc0u, 0x100u);
                    wr32(sp0 - 0xc4u, arg1);
                    g->esp = sp0 - 0xb8u;
                    cow_thiscall(g, rd32(rd32(arg1) + 0x94u), ecx, 3, arg1, 0x100u, ebx);
    COW_AT(10168667)
                    wr32(sp0 - 0x6cu, 0u);
                    t30 = rd16(rd32(sp0 - 0x74u) + 0xcu);
                    t31 = rd32(rd32(sp0 - 0x74u) + 4u);
                    wr32(sp0 - 0x64u, t31);
                    if ((int16_t)t30 <= 0) goto L_10168883;
                    eax = rd32(sp0 - 0x74u);
                    edi = rd32(edi);
                    loc_6c = 0u;
                    loc_64 = t31;
L_10168687: ;
    COW_AT(10168687)
                    t32 = rd32(edi + (rd16(esi) & 0x7fffu) * 0xcu);
                    t33 = rd16(esi);
                    wr32(COW_IMG(0x10621988u), t32);
                    d34 = (double)rdf32(edi + (t33 & 0x7fffu) * 0xcu + 4u);
                    wrf32(COW_IMG(0x1062198cu), (float)d34);
                    d35 = (double)rdf32(edi + (t33 & 0x7fffu) * 0xcu + 8u);
                    wrf32(COW_IMG(0x10621990u), (float)d35);
                    t36 = rd32(edi + (t33 & 0x7fffu) * 0xcu);
                    wr32(COW_IMG(0x106219d8u), t36);
                    d37 = (double)rdf32(edi + (t33 & 0x7fffu) * 0xcu + 4u);
                    wrf32(COW_IMG(0x106219dcu), (float)d37);
                    d38 = (double)rdf32(edi + (t33 & 0x7fffu) * 0xcu + 8u);
                    wrf32(COW_IMG(0x106219e0u), (float)d38);
                    t39 = rd32(edi + (rd16(esi + 2u) & 0x3fffu) * 0xcu);
                    t40 = rd16(esi + 2u);
                    wr32(COW_IMG(0x10621998u), t39);
                    d41 = (double)rdf32(edi + (t40 & 0x3fffu) * 0xcu + 4u);
                    wrf32(COW_IMG(0x1062199cu), (float)d41);
                    d42 = (double)rdf32(edi + (t40 & 0x3fffu) * 0xcu + 8u);
                    wrf32(COW_IMG(0x106219a0u), (float)d42);
                    t43 = rd32(edi + (t40 & 0x3fffu) * 0xcu);
                    wr32(COW_IMG(0x106219a8u), t43);
                    d44 = (double)rdf32(edi + (t40 & 0x3fffu) * 0xcu + 4u);
                    wrf32(COW_IMG(0x106219acu), (float)d44);
                    d45 = (double)rdf32(edi + (t40 & 0x3fffu) * 0xcu + 8u);
                    wrf32(COW_IMG(0x106219b0u), (float)d45);
                    t46 = rd32(edi + (rd16(esi + 4u) & 0x3fffu) * 0xcu);
                    t47 = rd16(esi + 4u);
                    wr32(COW_IMG(0x106219b8u), t46);
                    d48 = (double)rdf32(edi + (t47 & 0x3fffu) * 0xcu + 4u);
                    wrf32(COW_IMG(0x106219bcu), (float)d48);
                    d49 = (double)rdf32(edi + (t47 & 0x3fffu) * 0xcu + 8u);
                    wrf32(COW_IMG(0x106219c0u), (float)d49);
                    t50 = rd32(edi + (t47 & 0x3fffu) * 0xcu);
                    wr32(COW_IMG(0x106219c8u), t50);
                    d51 = (double)rdf32(edi + (t47 & 0x3fffu) * 0xcu + 4u);
                    wrf32(COW_IMG(0x106219ccu), (float)d51);
                    d52 = (double)rdf32(edi + (t47 & 0x3fffu) * 0xcu + 8u);
                    wrf32(COW_IMG(0x106219d0u), (float)d52);
                    if (arg3 != 2u)
                    {
                        ecx = edi + (t40 & 0x3fffu) * 0xcu;
                        edx = edi + (t47 & 0x3fffu) * 0xcu;
    COW_AT(1016884b)
                        wr32(sp0 - 0xbcu, 0x10u);
                        wr32(sp0 - 0xc0u, COW_IMG(0x10621988u));
                        wr32(sp0 - 0xc4u, 3u);
                        wr32(sp0 - 0xc8u, 2u);
                        wr32(sp0 - 0xccu, arg1);
                        g->esp = sp0 - 0xb8u;
                        cow_thiscall(g, rd32(rd32(arg1) + 0x120u), ecx, 5, arg1, 2u, 3u, COW_IMG(0x10621988u), 0x10u);
                    }
                    else
                    {
                        eax = edi + (t33 & 0x7fffu) * 0xcu;
                        ecx = edi + (t40 & 0x3fffu) * 0xcu;
                        edx = edi + (t47 & 0x3fffu) * 0xcu;
    COW_AT(10168764)
                        d53 = fr(g, fr(g, fr(g, (double)rdf32(edx + 8u) + (double)rdf32(ecx + 8u)) + (double)rdf32(eax + 8u)) * (double)rdf32(COW_IMG(0x1032a84cu)));
                        d54 = fr(g, fr(g, fr(g, (double)rdf32(edx + 4u) + (double)rdf32(ecx + 4u)) + (double)rdf32(eax + 4u)) * (double)rdf32(COW_IMG(0x1032a84cu)));
                        d55 = fr(g, fr(g, fr(g, (double)rdf32(edx) + (double)rdf32(ecx)) + (double)rdf32(eax)) * (double)rdf32(COW_IMG(0x1032a84cu)));
                        wrf32(sp0 - 0x68u, (float)(double)(float)d53);
                        t56 = rd16(esi + 6u);
                        wrf32(COW_IMG(0x106219e8u), (float)d55);
                        wrf32(COW_IMG(0x106219ecu), (float)d54);
                        wrf32(COW_IMG(0x106219f0u), (float)d53);
                        d57 = fr(g, d55 + (double)rdf32(loc_64 + (t56 & 0x7fffu) * 0xcu));
                        wrf32(COW_IMG(0x106219f8u), (float)d57);
                        d58 = fr(g, d54 + (double)rdf32(loc_64 + (t56 & 0x7fffu) * 0xcu + 4u));
                        wrf32(COW_IMG(0x106219fcu), (float)d58);
                        d59 = fr(g, (double)(float)d53 + (double)rdf32(loc_64 + (t56 & 0x7fffu) * 0xcu + 8u));
                        wrf32(COW_IMG(0x10621a00u), (float)d59);
                        d60 = fr(g, fr(g, fr(g, (double)rdf32(ebx + 0x9cu) * (double)rdf32(loc_64 + (t56 & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(ebx + 0x84u) * (double)rdf32(loc_64 + (t56 & 0x7fffu) * 0xcu))) + fr(g, (double)rdf32(ebx + 0x90u) * (double)rdf32(loc_64 + (t56 & 0x7fffu) * 0xcu + 4u)));
                        if ((cow_fsw(g, d60, (double)rdf32(COW_IMG(0x1033663cu)), 1u) & 0x4100u) == 0u)
                        {
                            ecx = loc_64;
                            x0 = d60;
                            goto L_1016881c;
                        }
                        eax = cow_fsw(g, d60, (double)rdf32(COW_IMG(0x1033663cu)), 1u) & 0x4100u;
                        ecx = loc_64;
                        x0 = d60;
    COW_AT(10168808)
                        if (x0 < (double)rdf32(COW_IMG(0x10336638u))) goto L_1016881e;
    COW_AT(10168815)
                        eax = 0x80088008u;
L_10168823: ;
    COW_AT(10168823)
                        wr32(sp0 - 0xbcu, 0x10u);
                        wr32(sp0 - 0xc0u, COW_IMG(0x10621988u));
                        wr32(COW_IMG(0x106219f4u), eax);
                        wr32(COW_IMG(0x10621a04u), eax);
                        wr32(sp0 - 0xc4u, 4u);
                        wr32(sp0 - 0xc8u, 2u);
                        wr32(sp0 - 0xccu, arg1);
                        g->esp = sp0 - 0xb8u;
                        cow_thiscall(g, rd32(rd32(arg1) + 0x120u), ecx, 5, arg1, 2u, 4u, COW_IMG(0x10621988u), 0x10u);
    COW_AT(10168849)
                    }
    COW_AT(10168867)
                    t61 = rd32(sp0 - 0x6cu) + 1u;
                    t62 = rd32(sp0 - 0x6cu);
                    wr32(sp0 - 0x6cu, t61);
                    if ((int32_t)(t62 + 1u) < (int16_t)rd16(rd32(sp0 - 0x74u) + 0xcu))
                    {
                        eax = t61;
                        esi = esi + 8u;
                        loc_6c = t61;
                        loc_64 = rd32(sp0 - 0x64u);
                        goto L_10168687;
                    }
L_10168883: ;
    COW_AT(10168883)
                    eax = rd32(sp0 - 0x84u);
                    loc_80 = rd32(sp0 - 0x80u);
                    loc_78 = rd32(sp0 - 0x78u);
                    loc_70 = rd32(sp0 - 0x70u);
                }
            }
    COW_AT(10168887)
            wr32(sp0 - 0x84u, eax + 8u);
            wr32(sp0 - 0x70u, loc_70 - 1u);
            if (loc_70 != 1u)
            {
                loc_84 = eax + 8u;
                eax = eax + 8u;
                loc_70 = loc_70 - 1u;
                goto L_1016862e;
            }
            eax = eax + 8u;
    COW_AT(1016889d)
            ebx = rd32(sp0 - 0x7cu);
        }
    }
    else
    {
        eax = ecx + 4u;
        ecx = rd32(ecx) & 0x7ffu;
    COW_AT(10168614)
        t28 = eax + ecx * 8u;
        wr32(sp0 - 0x84u, t28);
        eax = t28;
    }
    COW_AT(101688a1)
    if (rd32(eax) != 0u)
    {
        ecx = rd32(eax);
        goto L_101685fe;
    }
    COW_AT(101688ab)
    eax = loc_78;
    edx = loc_80;
L_101688b3: ;
    COW_AT(101688b3)
    wr32(sp0 - 0x78u, eax + 1u);
    if ((int32_t)(eax + 1u) <= (int32_t)rd32(sp0 - 0x8cu))
    {
        loc_78 = eax + 1u;
        eax = eax + 1u;
        goto L_101685e8;
    }
L_101688c4: ;
    COW_AT(101688c4)
    wr32(sp0 - 0x80u, edx + 1u);
    if ((int32_t)(edx + 1u) <= (int32_t)rd32(sp0 - 0x90u))
    {
        loc_80 = edx + 1u;
        edx = edx + 1u;
        goto L_101685d4;
    }
    eax = rd32(sp0 - 0x90u);
    edx = edx + 1u;
L_101688d5: ;
    COW_AT(101688d5)
    if (rd32(COW_IMG(0x106631d4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106631d4u));
    COW_AT(101688e3)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xb8u;
        t63 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
        t64 = g->ecx;
        t65 = g->edx;
        eax = t63;
        ecx = t64;
        edx = t65;
    COW_AT(101688e8)
        if ((uint8_t)eax == 0u)
        {
    COW_AT(101688f0)
            g->eax = eax;
            g->esp = sp0 - 0xb8u;
            t66 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, edx, 1, 0);
            t67 = g->edx;
            eax = t66;
            edx = t67;
    COW_AT(101688f5)
            if (eax == 0u) goto L_10168d0a;
            esi = eax;
L_101688ff: ;
    COW_AT(101688ff)
            wr32(sp0 - 0xbcu, COW_IMG(0x10330684u));
            g->eax = eax;
            g->esp = sp0 - 0xb8u;
            t68 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, edx, 1, COW_IMG(0x10330684u));
            t69 = g->edx;
            eax = t68;
            edx = t69;
    COW_AT(1016890b)
            if ((uint8_t)eax != 0u)
            {
    COW_AT(10168913)
                if (esi != 0u)
                {
    COW_AT(1016891b)
                    wr32(sp0 - 0xbcu, sp0 - 0x60u);
                    wr32(sp0 - 0xc0u, sp0 - 0x10u);
                    g->eax = sp0 - 0x60u;
                    g->edx = edx;
                    g->esp = sp0 - 0xb8u;
                    t70 = cow_thiscall(g, COW_IMG(0x100c4bc0u), esi, 2, sp0 - 0x10u, sp0 - 0x60u);
                    t71 = g->edx;
                    eax = t70;
                    edx = t71;
    COW_AT(1016892f)
                    if (eax != 0u)
                    {
    COW_AT(10168937)
                        d72 = (double)rdf32(esi + 0x764u);
                        t73 = rd32(esi + 0x76cu);
                        d74 = fr(g, d72 * (double)rdf32(COW_IMG(0x1032a3d0u)));
                        wr32(sp0 - 0x80u, t73);
                        t75 = rd32(sp0 - 0x10u);
                        wr32(sp0 - 0x20u, t75);
                        t76 = rd32(sp0 - 0xcu);
                        wr32(sp0 - 0x1cu, t76);
                        wrf32(sp0 - 0xa8u, (float)(double)(float)d74);
                        d77 = fr(g, d72 * (double)rdf32(COW_IMG(0x10329a08u)));
                        wrf32(sp0 - 0xa4u, (float)(double)(float)d77);
                        d78 = fr(g, (double)rdf32(COW_IMG(0x1032a3d0u)) * (double)rdf32(esi + 0x768u));
                        wrf32(sp0 - 0xa0u, (float)(double)(float)d78);
                        d79 = fr(g, (double)rdf32(esi + 0x768u) * (double)rdf32(COW_IMG(0x10329a08u)));
                        wrf32(sp0 - 0x9cu, (float)(double)(float)d79);
                        d80 = fr(g, cow_bits2f(t73) * (double)rdf32(COW_IMG(0x1032a3d0u)));
                        wrf32(sp0 - 0x98u, (float)(double)(float)d80);
                        d81 = fr(g, cow_bits2f(t73) * (double)rdf32(COW_IMG(0x10329a08u)));
                        wrf32(sp0 - 0x94u, (float)(double)(float)d81);
                        d82 = fr(g, cos((double)rdf32(sp0 - 0x58u)));
                        d83 = fr(g, d82 * fr(g, cos((double)rdf32(sp0 - 0x5cu))));
                        d84 = fr(g, sin((double)rdf32(sp0 - 0x58u)));
                        d85 = fr(g, sin((double)rdf32(sp0 - 0x5cu)));
                        d86 = fr(g, sin((double)rdf32(sp0 - 0x60u)));
                        d87 = fr(g, cos((double)rdf32(sp0 - 0x5cu)));
                        d88 = fr(g, cos((double)rdf32(sp0 - 0x60u)));
                        wrf32(sp0 - 0x50u, (float)(double)(float)d83);
                        d89 = (double)(float)fr(g, fr(g, fr(g, d85 * d86) * d82) - fr(g, d84 * d88));
                        wrf32(sp0 - 0x40u, (float)d89);
                        d90 = (double)(float)fr(g, fr(g, fr(g, d85 * d82) * d88) + fr(g, d84 * d86));
                        wrf32(sp0 - 0x30u, (float)d90);
                        d91 = (double)(float)fr(g, d84 * d87);
                        wrf32(sp0 - 0x4cu, (float)d91);
                        d92 = (double)(float)fr(g, fr(g, d82 * d88) + fr(g, d86 * fr(g, d84 * d85)));
                        wrf32(sp0 - 0x3cu, (float)d92);
                        d93 = (double)(float)fr(g, fr(g, d88 * fr(g, d84 * d85)) - fr(g, d86 * d82));
                        wrf32(sp0 - 0x2cu, (float)d93);
                        wrf32(sp0 - 0x48u, (float)(double)(float)-d85);
                        d94 = (double)(float)fr(g, d86 * d87);
                        wrf32(sp0 - 0x38u, (float)d94);
                        d95 = (double)(float)fr(g, d87 * d88);
                        wrf32(sp0 - 0x28u, (float)d95);
                        t96 = rd32(sp0 - 8u);
                        wr32(sp0 - 0x18u, t96);
                        wr32(sp0 - 0xbcu, sp0 - 0x50u);
                        wr32(sp0 - 0xc0u, 0x100u);
                        wr32(sp0 - 0xc4u, arg1);
                        wr32(sp0 - 0x44u, 0u);
                        wr32(sp0 - 0x34u, 0u);
                        wr32(sp0 - 0x24u, 0u);
                        wr32(sp0 - 0x14u, 0x3f800000u);
                        g->esp = sp0 - 0xb8u;
                        cow_thiscall(g, rd32(rd32(arg1) + 0x94u), sp0 - 0x50u, 3, arg1, 0x100u, sp0 - 0x50u);
    COW_AT(10168a97)
                        t97 = rd32(sp0 - 0xa8u);
                        t98 = rd32(sp0 - 0xa0u);
                        wr32(COW_IMG(0x10621988u), t97);
                        t99 = rd32(sp0 - 0xa4u);
                        t100 = rd32(sp0 - 0x98u);
                        wr32(COW_IMG(0x10621998u), t99);
                        wr32(COW_IMG(0x106219a8u), t99);
                        t101 = rd32(sp0 - 0xa8u);
                        wr32(COW_IMG(0x1062198cu), t98);
                        wr32(COW_IMG(0x1062199cu), t98);
                        t102 = rd32(sp0 - 0x9cu);
                        wr32(COW_IMG(0x106219b8u), t101);
                        t103 = rd32(COW_IMG(0x10621988u));
                        wr32(COW_IMG(0x106219acu), t102);
                        wr32(COW_IMG(0x106219bcu), t102);
                        t104 = rd32(COW_IMG(0x1062198cu));
                        wr32(COW_IMG(0x106219c8u), t103);
                        wr32(sp0 - 0xbcu, 0x10u);
                        wr32(sp0 - 0xc0u, COW_IMG(0x10621988u));
                        t105 = rd32(COW_IMG(0x10621994u));
                        wr32(COW_IMG(0x10621990u), t100);
                        wr32(COW_IMG(0x106219a0u), t100);
                        wr32(COW_IMG(0x106219b0u), t100);
                        wr32(COW_IMG(0x106219c0u), t100);
                        wr32(COW_IMG(0x106219ccu), t104);
                        wr32(COW_IMG(0x106219d0u), t100);
                        wr32(COW_IMG(0x106219d4u), t105);
                        wr32(sp0 - 0xc4u, 4u);
                        wr32(sp0 - 0xc8u, 3u);
                        wr32(sp0 - 0xccu, arg1);
                        g->esp = sp0 - 0xb8u;
                        cow_thiscall(g, rd32(rd32(arg1) + 0x120u), t100, 5, arg1, 3u, 4u, COW_IMG(0x10621988u), 0x10u);
    COW_AT(10168b30)
                        t106 = rd32(sp0 - 0x98u);
                        t107 = rd32(sp0 - 0xa8u);
                        t108 = rd32(sp0 - 0xa0u);
                        wr32(COW_IMG(0x10621990u), t106);
                        t109 = rd32(sp0 - 0x94u);
                        wr32(COW_IMG(0x1062198cu), t108);
                        wr32(COW_IMG(0x1062199cu), t108);
                        t110 = rd32(sp0 - 0x9cu);
                        wr32(COW_IMG(0x106219a0u), t109);
                        wr32(COW_IMG(0x106219b0u), t109);
                        t111 = rd32(sp0 - 0x98u);
                        wr32(COW_IMG(0x10621988u), t107);
                        wr32(COW_IMG(0x10621998u), t107);
                        wr32(COW_IMG(0x106219a8u), t107);
                        wr32(COW_IMG(0x106219acu), t110);
                        wr32(COW_IMG(0x106219b8u), t107);
                        wr32(COW_IMG(0x106219bcu), t110);
                        t112 = rd32(COW_IMG(0x1062198cu));
                        wr32(COW_IMG(0x106219c0u), t111);
                        t113 = rd32(COW_IMG(0x10621990u));
                        wr32(COW_IMG(0x106219c8u), t107);
                        wr32(sp0 - 0xbcu, 0x10u);
                        wr32(sp0 - 0xc0u, COW_IMG(0x10621988u));
                        t114 = rd32(COW_IMG(0x10621994u));
                        wr32(COW_IMG(0x106219ccu), t112);
                        wr32(COW_IMG(0x106219d0u), t113);
                        wr32(COW_IMG(0x106219d4u), t114);
                        wr32(sp0 - 0xc4u, 4u);
                        wr32(sp0 - 0xc8u, 3u);
                        wr32(sp0 - 0xccu, arg1);
                        g->esp = sp0 - 0xb8u;
                        cow_thiscall(g, rd32(rd32(arg1) + 0x120u), t114, 5, arg1, 3u, 4u, COW_IMG(0x10621988u), 0x10u);
    COW_AT(10168bc9)
                        t115 = rd32(sp0 - 0xa8u);
                        t116 = rd32(sp0 - 0xa0u);
                        wr32(COW_IMG(0x10621988u), t115);
                        t117 = rd32(sp0 - 0xa4u);
                        t118 = rd32(sp0 - 0x94u);
                        wr32(COW_IMG(0x10621998u), t117);
                        wr32(COW_IMG(0x106219a8u), t117);
                        t119 = rd32(sp0 - 0xa8u);
                        wr32(COW_IMG(0x1062198cu), t116);
                        wr32(COW_IMG(0x1062199cu), t116);
                        t120 = rd32(sp0 - 0x9cu);
                        wr32(COW_IMG(0x106219b8u), t119);
                        t121 = rd32(COW_IMG(0x10621988u));
                        wr32(COW_IMG(0x106219acu), t120);
                        wr32(COW_IMG(0x106219bcu), t120);
                        t122 = rd32(COW_IMG(0x1062198cu));
                        wr32(COW_IMG(0x106219c8u), t121);
                        wr32(sp0 - 0xbcu, 0x10u);
                        wr32(sp0 - 0xc0u, COW_IMG(0x10621988u));
                        t123 = rd32(COW_IMG(0x10621994u));
                        wr32(COW_IMG(0x10621990u), t118);
                        wr32(COW_IMG(0x106219a0u), t118);
                        wr32(COW_IMG(0x106219b0u), t118);
                        wr32(COW_IMG(0x106219c0u), t118);
                        wr32(COW_IMG(0x106219ccu), t122);
                        wr32(COW_IMG(0x106219d0u), t118);
                        wr32(COW_IMG(0x106219d4u), t123);
                        wr32(sp0 - 0xc4u, 4u);
                        wr32(sp0 - 0xc8u, 3u);
                        wr32(sp0 - 0xccu, arg1);
                        g->esp = sp0 - 0xb8u;
                        cow_thiscall(g, rd32(rd32(arg1) + 0x120u), rd32(arg1), 5, arg1, 3u, 4u, COW_IMG(0x10621988u), 0x10u);
    COW_AT(10168c60)
                        t124 = rd32(sp0 - 0x98u);
                        t125 = rd32(sp0 - 0xa0u);
                        t126 = rd32(sp0 - 0xa4u);
                        wr32(COW_IMG(0x10621990u), t124);
                        t127 = rd32(sp0 - 0x94u);
                        wr32(COW_IMG(0x1062198cu), t125);
                        wr32(COW_IMG(0x1062199cu), t125);
                        t128 = rd32(sp0 - 0x9cu);
                        wr32(COW_IMG(0x106219a0u), t127);
                        wr32(COW_IMG(0x106219b0u), t127);
                        t129 = rd32(sp0 - 0x98u);
                        wr32(COW_IMG(0x10621988u), t126);
                        wr32(COW_IMG(0x10621998u), t126);
                        wr32(COW_IMG(0x106219a8u), t126);
                        wr32(COW_IMG(0x106219acu), t128);
                        wr32(COW_IMG(0x106219b8u), t126);
                        wr32(COW_IMG(0x106219bcu), t128);
                        t130 = rd32(COW_IMG(0x1062198cu));
                        wr32(COW_IMG(0x106219c0u), t129);
                        t131 = rd32(COW_IMG(0x10621990u));
                        wr32(COW_IMG(0x106219c8u), t126);
                        wr32(sp0 - 0xbcu, 0x10u);
                        wr32(sp0 - 0xc0u, COW_IMG(0x10621988u));
                        t132 = rd32(COW_IMG(0x10621994u));
                        wr32(COW_IMG(0x106219ccu), t130);
                        wr32(COW_IMG(0x106219d0u), t131);
                        wr32(COW_IMG(0x106219d4u), t132);
                        wr32(sp0 - 0xc4u, 4u);
                        wr32(sp0 - 0xc8u, 3u);
                        wr32(sp0 - 0xccu, arg1);
                        g->eax = rd32(arg1);
                        g->edx = t132;
                        t133 = rd32(arg1);
                        g->esp = sp0 - 0xb8u;
                        t134 = cow_thiscall(g, rd32(t133 + 0x120u), t131, 5, arg1, 3u, 4u, COW_IMG(0x10621988u), 0x10u);
                        t135 = g->edx;
                        eax = t134;
                        edx = t135;
                    }
                }
            }
    COW_AT(10168cf9)
            g->eax = eax;
            g->esp = sp0 - 0xb8u;
            t136 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
            t137 = g->edx;
            eax = t136;
            edx = t137;
    COW_AT(10168d00)
            if (eax != 0u)
            {
                esi = eax;
                goto L_101688ff;
            }
        }
    }
L_10168d0a: ;
    COW_AT(10168d0a)
    g->ebx = rd32(sp0 - 0xacu);
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->ebp = rd32(sp0 - 0xb0u);
    g->edx = edx;
    return eax;
L_1016881c: ;
    COW_AT(1016881c)
L_1016881e: ;
    COW_AT(1016881e)
    eax = 0x80080880u;
    goto L_10168823;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10168470(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10168495u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb8u);
        in_esi = rd32(sp0 - 0xb4u);
        in_ebp = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        wr32(sp0 - 0x7cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101684a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101684b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101684c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101684d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101684ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101684f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101684ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168505u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168511u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168515u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016851cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168522u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016852eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168532u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168539u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168543u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168545u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016854au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168551u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168557u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168563u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168567u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016856eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168574u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168580u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168584u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016858bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168595u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168597u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168598u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016859cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101685a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101685b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101685b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101685c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101685d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101685e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101685feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168614u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168622u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016862au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016862eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016863du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168657u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168667u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168687u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10168764u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10168808u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10168815u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x1016881cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x1016881eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10168823u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10168849u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016884bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10168867u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168883u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168887u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016889du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101688a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101688abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101688b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101688c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101688d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101688e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101688e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101688f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101688f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101688ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016890bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168913u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016891bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016892fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        wr32(sp0 - 0xc0u, sp0 - 0x10u);
        wr32(sp0 - 0xbcu, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10168937u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        wr32(sp0 - 0xc0u, sp0 - 0x10u);
        wr32(sp0 - 0xbcu, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10168a97u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        wr32(sp0 - 0xbcu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10168b30u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168bc9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168c60u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168cf9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168d00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168d0au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10168470(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10168470(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
