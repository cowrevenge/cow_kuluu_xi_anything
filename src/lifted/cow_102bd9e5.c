/* f_0x102bd9e5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bd9e5(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_4;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102bd9f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bd9f6;
    case 0x102bd9fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102bd9fb;
    case 0x102bda07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102bda07;
    case 0x102bda10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bda10;
    case 0x102bda18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bda18;
    case 0x102bda27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bda27;
    case 0x102bda32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bda32;
    case 0x102bda3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bda3d;
    case 0x102bda3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bda3f;
    case 0x102bda52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bda52;
    case 0x102bda59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bda59;
    case 0x102bda61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bda61;
    case 0x102bda66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bda66;
    case 0x102bda79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bda79;
    case 0x102bda80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bda80;
    case 0x102bda88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bda88;
    case 0x102bda8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bda8d;
    case 0x102bda9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bda9a;
    case 0x102bdaaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102bdaae;
    case 0x102bdab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdab3;
    case 0x102bdabau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdaba;
    case 0x102bdabeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdabe;
    case 0x102bdac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdac4;
    case 0x102bdacfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdacf;
    case 0x102bdad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdad3;
    case 0x102bdad7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102bdad7;
    case 0x102bdadfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdadf;
    case 0x102bdaf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdaf2;
    case 0x102bdafdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdafd;
    case 0x102bdb06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102bdb06;
    case 0x102bdb0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdb0b;
    case 0x102bdb12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdb12;
    case 0x102bdb16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdb16;
    case 0x102bdb1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdb1c;
    case 0x102bdb27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdb27;
    case 0x102bdb29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102bdb29;
    case 0x102bdb30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdb30;
    case 0x102bdb37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdb37;
    case 0x102bdb4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdb4a;
    case 0x102bdb51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdb51;
    case 0x102bdb59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdb59;
    case 0x102bdb5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdb5e;
    case 0x102bdb71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdb71;
    case 0x102bdb78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdb78;
    case 0x102bdb80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdb80;
    case 0x102bdb85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdb85;
    case 0x102bdb98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdb98;
    case 0x102bdb9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdb9f;
    case 0x102bdba7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdba7;
    case 0x102bdbacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdbac;
    case 0x102bdbbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdbbf;
    case 0x102bdbc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdbc6;
    case 0x102bdbceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdbce;
    case 0x102bdbd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdbd3;
    case 0x102bdbe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdbe6;
    case 0x102bdbedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdbed;
    case 0x102bdbf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdbf5;
    case 0x102bdbfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdbfa;
    case 0x102bdc0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdc0d;
    case 0x102bdc14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdc14;
    case 0x102bdc1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdc1c;
    case 0x102bdc21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdc21;
    case 0x102bdc34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdc34;
    case 0x102bdc3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdc3b;
    case 0x102bdc43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdc43;
    case 0x102bdc48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdc48;
    case 0x102bdc5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdc5b;
    case 0x102bdc62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdc62;
    case 0x102bdc6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdc6a;
    case 0x102bdc6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdc6f;
    case 0x102bdc82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdc82;
    case 0x102bdc89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdc89;
    case 0x102bdc91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdc91;
    case 0x102bdc96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdc96;
    case 0x102bdca9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdca9;
    case 0x102bdcb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdcb0;
    case 0x102bdcb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdcb8;
    case 0x102bdcbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdcbd;
    case 0x102bdcd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdcd0;
    case 0x102bdcd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdcd7;
    case 0x102bdcdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdcdf;
    case 0x102bdce4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdce4;
    case 0x102bdcf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdcf7;
    case 0x102bdcfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdcfe;
    case 0x102bdd06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdd06;
    case 0x102bdd0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd0b;
    case 0x102bdd1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd1e;
    case 0x102bdd25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd25;
    case 0x102bdd2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdd2d;
    case 0x102bdd32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd32;
    case 0x102bdd45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd45;
    case 0x102bdd4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd4c;
    case 0x102bdd54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdd54;
    case 0x102bdd56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd56;
    case 0x102bdd69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd69;
    case 0x102bdd70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd70;
    case 0x102bdd78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdd78;
    case 0x102bdd7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd7a;
    case 0x102bdd8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd8d;
    case 0x102bdd94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd94;
    case 0x102bdd9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bdd9c;
    case 0x102bdd9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bdd9e;
    case 0x102bddb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bddb1;
    case 0x102bddbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bddbb;
    case 0x102bddc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bddc0;
    case 0x102bddc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102bddc2;
    case 0x102bddc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bddc7;
    case 0x102bddcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bddca;
    case 0x102bddd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102bddd4;
    default: break;
    }
#endif

    COW_AT(102bd9e5)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 0u);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t1);
    g->esp = sp0 - 4u;
    COW_RET(0x102bd9f6u);
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, in_edx, 1, 5, t1, 0u, in_edi, in_esi, in_ebx);
    t2 = g->edx;
    edx = t2;
    esi = t1;
    loc_18 = rd32(sp0 - 0x18u);
    COW_AT(102bd9f6)
    ecx = 0u;
    ebx = rd32(sp0 + 8u);
    loc_4 = in_ebp;
    loc_8 = in_ebx;
    loc_c = in_esi;
    loc_10 = in_edi;
L_102bd9fb: ;
    COW_AT(102bd9fb)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    wr32(sp0 - 0x1cu, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102bda07u);
    cow_call_regs(g, COW_IMG(0x102c3c7du), g->eax, g->ecx, edx, 1, 3, esi, sp0 + 4u, 4u);
    t3 = g->ecx;
    t4 = g->edx;
    ecx = t3;
    edx = t4;
    COW_AT(102bda07)
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    COW_RET(0x102bda10u);
    t5 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(102bda10)
    wr32(sp0 - 0x24u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    COW_RET(0x102bda18u);
    cow_cdecl(g, COW_IMG(0x102c3647u), 1, esi);
    t8 = g->ecx;
    t9 = g->edx;
    ecx = t8;
    edx = t9;
    edi = eax;
    COW_AT(102bda18)
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, esi + 0x11cu);
    wr32(sp0 - 0x30u, esi);
    g->eax = esi + 0x11cu;
    g->ecx = ecx;
    g->esp = sp0 - 0x1cu;
    COW_RET(0x102bda27u);
    t10 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, esi, esi + 0x11cu, 4u, rd32(sp0 - 0x24u), sp0 + 4u);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(102bda27)
    if (edi > 0x7fffffffu)
    {
    COW_AT(102bda32)
        wr32(sp0 - 0x14u, COW_IMG(0x103c7e40u));
        wr32(sp0 - 0x18u, esi);
        g->esp = sp0 - 8u;
        COW_RET(0x102bda3du);
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, esi, COW_IMG(0x103c7e40u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t13 = g->edx;
        edx = t13;
    COW_AT(102bda3d)
        ecx = COW_IMG(0x103c7e40u);
    }
    COW_AT(102bda3f)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e04u));
    wr32(sp0 - 0x1cu, esi + 0x11cu);
    g->eax = esi + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102bda52u);
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e04u), 4u);
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(102bda52)
    if (eax != 0u) goto L_102bda66;
    COW_AT(102bda59)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x1cu, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102bda61u);
    cow_call_regs(g, COW_IMG(0x102c49bfu), g->eax, g->ecx, edx, 1, 3, esi, ebx, edi);
    t17 = g->ecx;
    t18 = g->edx;
    ecx = t17;
    edx = t18;
    COW_AT(102bda61)
L_102bddc7: ;
    COW_AT(102bddc7)
L_102bddca: ;
    COW_AT(102bddca)
    t134 = rd8(esi + 0x68u);
    if ((t134 & 0x10u) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102bd9fb;
    }
    COW_AT(102bddd4)
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102bda66: ;
    COW_AT(102bda66)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e14u));
    wr32(sp0 - 0x1cu, esi + 0x11cu);
    g->eax = esi + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102bda79u);
    t19 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e14u), 4u);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(102bda79)
    if (eax != 0u) goto L_102bda8d;
    COW_AT(102bda80)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x1cu, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102bda88u);
    cow_call_regs(g, COW_IMG(0x102c4c1au), g->eax, g->ecx, edx, 1, 3, esi, ebx, edi);
    t22 = g->ecx;
    t23 = g->edx;
    ecx = t22;
    edx = t23;
    COW_AT(102bda88)
    goto L_102bddc7;
L_102bda8d: ;
    COW_AT(102bda8d)
    wr32(sp0 - 0x14u, esi + 0x11cu);
    wr32(sp0 - 0x18u, esi);
    g->eax = esi + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102bda9au);
    t24 = cow_cdecl(g, COW_IMG(0x102c3bfau), 2, esi, esi + 0x11cu);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    COW_AT(102bda9a)
    t26 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e0cu));
    wr32(sp0 - 0x1cu, esi + 0x11cu);
    if (eax == 0u)
    {
        eax = esi + 0x11cu;
        ecx = t26;
        loc_1c = esi + 0x11cu;
        goto L_102bdb06;
    }
    eax = esi + 0x11cu;
    ecx = t26;
    loc_1c = esi + 0x11cu;
    COW_AT(102bdaae)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102bdab3u);
    t27 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, loc_1c, COW_IMG(0x10342e0cu), 4u);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(102bdab3)
    if (eax != 0u)
    {
    COW_AT(102bdad3)
        t33 = rd32(esi + 0x68u);
        wr32(esi + 0x68u, t33 | 8u);
    }
    else
    {
    COW_AT(102bdaba)
        if (edi != 0u) goto L_102bdac4;
    COW_AT(102bdabe)
        t30 = rd8(esi + 0x68u);
        if ((t30 & 8u) == 0u) goto L_102bdad7;
L_102bdac4: ;
    COW_AT(102bdac4)
        wr32(sp0 - 0x14u, COW_IMG(0x103c7f40u));
        wr32(sp0 - 0x18u, esi);
        g->eax = eax;
        g->esp = sp0 - 8u;
        COW_RET(0x102bdacfu);
        t31 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, esi, COW_IMG(0x103c7f40u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t32 = g->edx;
        eax = t31;
        edx = t32;
    COW_AT(102bdacf)
        ecx = COW_IMG(0x103c7f40u);
    }
L_102bdad7: ;
    COW_AT(102bdad7)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x1cu, esi);
    g->ebx = ebx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102bdadfu);
    cow_call_regs(g, COW_IMG(0x102c627du), eax, ecx, edx, 1, 3, esi, ebx, edi);
    t34 = g->ecx;
    t35 = g->edx;
    ecx = t34;
    edx = t35;
    COW_AT(102bdadf)
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, COW_IMG(0x10342e1cu));
    wr32(sp0 - 0x28u, esi + 0x11cu);
    g->eax = esi + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    COW_RET(0x102bdaf2u);
    t36 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e1cu), 4u);
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    COW_AT(102bdaf2)
    if (eax == 0u)
    {
    COW_AT(102bdafd)
        t39 = rd32(esi + 0x68u);
        wr32(esi + 0x68u, t39 | 2u);
    }
    goto L_102bddca;
L_102bdb06: ;
    COW_AT(102bdb06)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102bdb0bu);
    t40 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, loc_1c, COW_IMG(0x10342e0cu), 4u);
    t41 = g->ecx;
    t42 = g->edx;
    eax = t40;
    ecx = t41;
    edx = t42;
    COW_AT(102bdb0b)
    if (eax != 0u) goto L_102bdb37;
    COW_AT(102bdb12)
    if (edi != 0u) goto L_102bdb1c;
    COW_AT(102bdb16)
    t43 = rd8(esi + 0x68u);
    if ((t43 & 8u) == 0u) goto L_102bdb29;
L_102bdb1c: ;
    COW_AT(102bdb1c)
    wr32(sp0 - 0x14u, COW_IMG(0x103c7f40u));
    wr32(sp0 - 0x18u, esi);
    g->eax = eax;
    g->esp = sp0 - 8u;
    COW_RET(0x102bdb27u);
    t44 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, esi, COW_IMG(0x103c7f40u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t45 = g->edx;
    eax = t44;
    edx = t45;
    COW_AT(102bdb27)
    ecx = COW_IMG(0x103c7f40u);
L_102bdb29: ;
    COW_AT(102bdb29)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 4u;
    COW_RET(0x102bdb30u);
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, esi, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t46 = g->edx;
    edx = t46;
    COW_AT(102bdb30)
    ecx = rd32(sp0 - 0x14u);
    goto L_102bddca;
L_102bdb37: ;
    COW_AT(102bdb37)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e1cu));
    wr32(sp0 - 0x1cu, esi + 0x11cu);
    g->eax = esi + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102bdb4au);
    t47 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e1cu), 4u);
    t48 = g->ecx;
    t49 = g->edx;
    eax = t47;
    ecx = t48;
    edx = t49;
    COW_AT(102bdb4a)
    if (eax != 0u)
    {
    COW_AT(102bdb5e)
        wr32(sp0 - 0x14u, 4u);
        wr32(sp0 - 0x18u, COW_IMG(0x10342e24u));
        wr32(sp0 - 0x1cu, esi + 0x11cu);
        g->eax = esi + 0x11cu;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        COW_RET(0x102bdb71u);
        t52 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e24u), 4u);
        t53 = g->ecx;
        t54 = g->edx;
        eax = t52;
        ecx = t53;
        edx = t54;
    COW_AT(102bdb71)
        if (eax != 0u)
        {
    COW_AT(102bdb85)
            wr32(sp0 - 0x14u, 4u);
            wr32(sp0 - 0x18u, COW_IMG(0x10342e2cu));
            wr32(sp0 - 0x1cu, esi + 0x11cu);
            g->eax = esi + 0x11cu;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            COW_RET(0x102bdb98u);
            t57 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e2cu), 4u);
            t58 = g->ecx;
            t59 = g->edx;
            eax = t57;
            ecx = t58;
            edx = t59;
    COW_AT(102bdb98)
            if (eax != 0u)
            {
    COW_AT(102bdbac)
                wr32(sp0 - 0x14u, 4u);
                wr32(sp0 - 0x18u, COW_IMG(0x10342e34u));
                wr32(sp0 - 0x1cu, esi + 0x11cu);
                g->eax = esi + 0x11cu;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                COW_RET(0x102bdbbfu);
                t62 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e34u), 4u);
                t63 = g->ecx;
                t64 = g->edx;
                eax = t62;
                ecx = t63;
                edx = t64;
    COW_AT(102bdbbf)
                if (eax != 0u)
                {
    COW_AT(102bdbd3)
                    wr32(sp0 - 0x14u, 4u);
                    wr32(sp0 - 0x18u, COW_IMG(0x10342e3cu));
                    wr32(sp0 - 0x1cu, esi + 0x11cu);
                    g->eax = esi + 0x11cu;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    COW_RET(0x102bdbe6u);
                    t67 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e3cu), 4u);
                    t68 = g->ecx;
                    t69 = g->edx;
                    eax = t67;
                    ecx = t68;
                    edx = t69;
    COW_AT(102bdbe6)
                    if (eax != 0u)
                    {
    COW_AT(102bdbfa)
                        wr32(sp0 - 0x14u, 4u);
                        wr32(sp0 - 0x18u, COW_IMG(0x10342e54u));
                        wr32(sp0 - 0x1cu, esi + 0x11cu);
                        g->eax = esi + 0x11cu;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        COW_RET(0x102bdc0du);
                        t72 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e54u), 4u);
                        t73 = g->ecx;
                        t74 = g->edx;
                        eax = t72;
                        ecx = t73;
                        edx = t74;
    COW_AT(102bdc0d)
                        if (eax != 0u)
                        {
    COW_AT(102bdc21)
                            wr32(sp0 - 0x14u, 4u);
                            wr32(sp0 - 0x18u, COW_IMG(0x10342e5cu));
                            wr32(sp0 - 0x1cu, esi + 0x11cu);
                            g->eax = esi + 0x11cu;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            COW_RET(0x102bdc34u);
                            t77 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e5cu), 4u);
                            t78 = g->ecx;
                            t79 = g->edx;
                            eax = t77;
                            ecx = t78;
                            edx = t79;
    COW_AT(102bdc34)
                            if (eax != 0u)
                            {
    COW_AT(102bdc48)
                                wr32(sp0 - 0x14u, 4u);
                                wr32(sp0 - 0x18u, COW_IMG(0x10342e64u));
                                wr32(sp0 - 0x1cu, esi + 0x11cu);
                                g->eax = esi + 0x11cu;
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                COW_RET(0x102bdc5bu);
                                t82 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e64u), 4u);
                                t83 = g->ecx;
                                t84 = g->edx;
                                eax = t82;
                                ecx = t83;
                                edx = t84;
    COW_AT(102bdc5b)
                                if (eax != 0u)
                                {
    COW_AT(102bdc6f)
                                    wr32(sp0 - 0x14u, 4u);
                                    wr32(sp0 - 0x18u, COW_IMG(0x10342e6cu));
                                    wr32(sp0 - 0x1cu, esi + 0x11cu);
                                    g->eax = esi + 0x11cu;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x10u;
                                    COW_RET(0x102bdc82u);
                                    t87 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e6cu), 4u);
                                    t88 = g->ecx;
                                    t89 = g->edx;
                                    eax = t87;
                                    ecx = t88;
                                    edx = t89;
    COW_AT(102bdc82)
                                    if (eax != 0u)
                                    {
    COW_AT(102bdc96)
                                        wr32(sp0 - 0x14u, 4u);
                                        wr32(sp0 - 0x18u, COW_IMG(0x10342e74u));
                                        wr32(sp0 - 0x1cu, esi + 0x11cu);
                                        g->eax = esi + 0x11cu;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x10u;
                                        COW_RET(0x102bdca9u);
                                        t92 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e74u), 4u);
                                        t93 = g->ecx;
                                        t94 = g->edx;
                                        eax = t92;
                                        ecx = t93;
                                        edx = t94;
    COW_AT(102bdca9)
                                        if (eax != 0u)
                                        {
    COW_AT(102bdcbd)
                                            wr32(sp0 - 0x14u, 4u);
                                            wr32(sp0 - 0x18u, COW_IMG(0x10342e84u));
                                            wr32(sp0 - 0x1cu, esi + 0x11cu);
                                            g->eax = esi + 0x11cu;
                                            g->edx = edx;
                                            g->esp = sp0 - 0x10u;
                                            COW_RET(0x102bdcd0u);
                                            t97 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e84u), 4u);
                                            t98 = g->ecx;
                                            t99 = g->edx;
                                            eax = t97;
                                            ecx = t98;
                                            edx = t99;
    COW_AT(102bdcd0)
                                            if (eax != 0u)
                                            {
    COW_AT(102bdce4)
                                                wr32(sp0 - 0x14u, 4u);
                                                wr32(sp0 - 0x18u, COW_IMG(0x10342e44u));
                                                wr32(sp0 - 0x1cu, esi + 0x11cu);
                                                g->eax = esi + 0x11cu;
                                                g->edx = edx;
                                                g->esp = sp0 - 0x10u;
                                                COW_RET(0x102bdcf7u);
                                                t102 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e44u), 4u);
                                                t103 = g->ecx;
                                                t104 = g->edx;
                                                eax = t102;
                                                ecx = t103;
                                                edx = t104;
    COW_AT(102bdcf7)
                                                if (eax != 0u)
                                                {
    COW_AT(102bdd0b)
                                                    wr32(sp0 - 0x14u, 4u);
                                                    wr32(sp0 - 0x18u, COW_IMG(0x10342e7cu));
                                                    wr32(sp0 - 0x1cu, esi + 0x11cu);
                                                    g->eax = esi + 0x11cu;
                                                    g->edx = edx;
                                                    g->esp = sp0 - 0x10u;
                                                    COW_RET(0x102bdd1eu);
                                                    t107 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e7cu), 4u);
                                                    t108 = g->ecx;
                                                    t109 = g->edx;
                                                    eax = t107;
                                                    ecx = t108;
                                                    edx = t109;
    COW_AT(102bdd1e)
                                                    if (eax != 0u)
                                                    {
    COW_AT(102bdd32)
                                                        wr32(sp0 - 0x14u, 4u);
                                                        wr32(sp0 - 0x18u, COW_IMG(0x10342e8cu));
                                                        wr32(sp0 - 0x1cu, esi + 0x11cu);
                                                        g->eax = esi + 0x11cu;
                                                        g->edx = edx;
                                                        g->esp = sp0 - 0x10u;
                                                        COW_RET(0x102bdd45u);
                                                        t112 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e8cu), 4u);
                                                        t113 = g->ecx;
                                                        t114 = g->edx;
                                                        eax = t112;
                                                        ecx = t113;
                                                        edx = t114;
    COW_AT(102bdd45)
                                                        if (eax != 0u)
                                                        {
    COW_AT(102bdd56)
                                                            wr32(sp0 - 0x14u, 4u);
                                                            wr32(sp0 - 0x18u, COW_IMG(0x10342e94u));
                                                            wr32(sp0 - 0x1cu, esi + 0x11cu);
                                                            g->eax = esi + 0x11cu;
                                                            g->edx = edx;
                                                            g->esp = sp0 - 0x10u;
                                                            COW_RET(0x102bdd69u);
                                                            t117 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e94u), 4u);
                                                            t118 = g->ecx;
                                                            t119 = g->edx;
                                                            eax = t117;
                                                            ecx = t118;
                                                            edx = t119;
    COW_AT(102bdd69)
                                                            if (eax != 0u)
                                                            {
    COW_AT(102bdd7a)
                                                                wr32(sp0 - 0x14u, 4u);
                                                                wr32(sp0 - 0x18u, COW_IMG(0x10342e9cu));
                                                                wr32(sp0 - 0x1cu, esi + 0x11cu);
                                                                g->eax = esi + 0x11cu;
                                                                g->edx = edx;
                                                                g->esp = sp0 - 0x10u;
                                                                COW_RET(0x102bdd8du);
                                                                t122 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342e9cu), 4u);
                                                                t123 = g->ecx;
                                                                t124 = g->edx;
                                                                eax = t122;
                                                                ecx = t123;
                                                                edx = t124;
    COW_AT(102bdd8d)
                                                                if (eax != 0u)
                                                                {
    COW_AT(102bdd9e)
                                                                    wr32(sp0 - 0x14u, 4u);
                                                                    wr32(sp0 - 0x18u, COW_IMG(0x10342ea4u));
                                                                    wr32(sp0 - 0x1cu, esi + 0x11cu);
                                                                    g->eax = esi + 0x11cu;
                                                                    g->edx = edx;
                                                                    g->esp = sp0 - 0x10u;
                                                                    COW_RET(0x102bddb1u);
                                                                    t127 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, esi + 0x11cu, COW_IMG(0x10342ea4u), 4u);
                                                                    t128 = g->ecx;
                                                                    t129 = g->edx;
                                                                    eax = t127;
                                                                    ecx = t128;
                                                                    edx = t129;
    COW_AT(102bddb1)
                                                                    wr32(sp0 - 0x14u, edi);
                                                                    wr32(sp0 - 0x18u, ebx);
                                                                    wr32(sp0 - 0x1cu, esi);
                                                                    if (eax != 0u)
                                                                    {
                                                                        loc_14 = edi;
                                                                        loc_18 = ebx;
                                                                        loc_1c = esi;
    COW_AT(102bddc2)
                                                                        g->ebx = ebx;
                                                                        g->esp = sp0 - 0x10u;
                                                                        COW_RET(0x102bddc7u);
                                                                        cow_call_regs(g, COW_IMG(0x102c627du), eax, ecx, edx, 1, 3, loc_1c, loc_18, loc_14);
                                                                        t132 = g->ecx;
                                                                        t133 = g->edx;
                                                                        ecx = t132;
                                                                        edx = t133;
                                                                    }
                                                                    else
                                                                    {
                                                                        loc_14 = edi;
                                                                        loc_18 = ebx;
                                                                        loc_1c = esi;
    COW_AT(102bddbb)
                                                                        g->esp = sp0 - 0x10u;
                                                                        COW_RET(0x102bddc0u);
                                                                        cow_call_regs(g, COW_IMG(0x102c6136u), g->eax, ecx, edx, 1, 3, loc_1c, loc_18, loc_14);
                                                                        t130 = g->ecx;
                                                                        t131 = g->edx;
                                                                        ecx = t130;
                                                                        edx = t131;
    COW_AT(102bddc0)
                                                                    }
                                                                }
                                                                else
                                                                {
    COW_AT(102bdd94)
                                                                    wr32(sp0 - 0x14u, edi);
                                                                    wr32(sp0 - 0x18u, ebx);
                                                                    wr32(sp0 - 0x1cu, esi);
                                                                    g->ecx = ecx;
                                                                    g->esp = sp0 - 0xcu;
                                                                    COW_RET(0x102bdd9cu);
                                                                    cow_call_regs(g, COW_IMG(0x102c5728u), g->eax, g->ecx, edx, 1, 4, esi, ebx, edi, rd32(sp0 - 0x10u));
                                                                    t125 = g->ecx;
                                                                    t126 = g->edx;
                                                                    ecx = t125;
                                                                    edx = t126;
    COW_AT(102bdd9c)
                                                                }
                                                            }
                                                            else
                                                            {
    COW_AT(102bdd70)
                                                                wr32(sp0 - 0x14u, edi);
                                                                wr32(sp0 - 0x18u, ebx);
                                                                wr32(sp0 - 0x1cu, esi);
                                                                g->ecx = ecx;
                                                                g->esp = sp0 - 0xcu;
                                                                COW_RET(0x102bdd78u);
                                                                cow_call_regs(g, COW_IMG(0x102c5f85u), g->eax, g->ecx, edx, 1, 4, esi, ebx, edi, rd32(sp0 - 0x10u));
                                                                t120 = g->ecx;
                                                                t121 = g->edx;
                                                                ecx = t120;
                                                                edx = t121;
    COW_AT(102bdd78)
                                                            }
                                                        }
                                                        else
                                                        {
    COW_AT(102bdd4c)
                                                            wr32(sp0 - 0x14u, edi);
                                                            wr32(sp0 - 0x18u, ebx);
                                                            wr32(sp0 - 0x1cu, esi);
                                                            g->esp = sp0 - 0x10u;
                                                            COW_RET(0x102bdd54u);
                                                            cow_call_regs(g, COW_IMG(0x102c6037u), g->eax, ecx, edx, 1, 3, esi, ebx, edi);
                                                            t115 = g->ecx;
                                                            t116 = g->edx;
                                                            ecx = t115;
                                                            edx = t116;
    COW_AT(102bdd54)
                                                        }
                                                    }
                                                    else
                                                    {
    COW_AT(102bdd25)
                                                        wr32(sp0 - 0x14u, edi);
                                                        wr32(sp0 - 0x18u, ebx);
                                                        wr32(sp0 - 0x1cu, esi);
                                                        g->esp = sp0 - 0x10u;
                                                        COW_RET(0x102bdd2du);
                                                        cow_call_regs(g, COW_IMG(0x102c558au), g->eax, ecx, edx, 1, 3, esi, ebx, edi);
                                                        t110 = g->ecx;
                                                        t111 = g->edx;
                                                        ecx = t110;
                                                        edx = t111;
    COW_AT(102bdd2d)
                                                    }
                                                }
                                                else
                                                {
    COW_AT(102bdcfe)
                                                    wr32(sp0 - 0x14u, edi);
                                                    wr32(sp0 - 0x18u, ebx);
                                                    wr32(sp0 - 0x1cu, esi);
                                                    g->esp = sp0 - 0x10u;
                                                    COW_RET(0x102bdd06u);
                                                    cow_call_regs(g, COW_IMG(0x102c5423u), g->eax, ecx, edx, 1, 3, esi, ebx, edi);
                                                    t105 = g->ecx;
                                                    t106 = g->edx;
                                                    ecx = t105;
                                                    edx = t106;
    COW_AT(102bdd06)
                                                }
                                            }
                                            else
                                            {
    COW_AT(102bdcd7)
                                                wr32(sp0 - 0x14u, edi);
                                                wr32(sp0 - 0x18u, ebx);
                                                wr32(sp0 - 0x1cu, esi);
                                                g->ecx = ecx;
                                                g->esp = sp0 - 0xcu;
                                                COW_RET(0x102bdcdfu);
                                                cow_call_regs(g, COW_IMG(0x102c5254u), g->eax, g->ecx, edx, 1, 4, esi, ebx, edi, rd32(sp0 - 0x10u));
                                                t100 = g->ecx;
                                                t101 = g->edx;
                                                ecx = t100;
                                                edx = t101;
    COW_AT(102bdcdf)
                                            }
                                        }
                                        else
                                        {
    COW_AT(102bdcb0)
                                            wr32(sp0 - 0x14u, edi);
                                            wr32(sp0 - 0x18u, ebx);
                                            wr32(sp0 - 0x1cu, esi);
                                            g->esp = sp0 - 0xcu;
                                            COW_RET(0x102bdcb8u);
                                            cow_call_regs(g, COW_IMG(0x102c4d70u), g->eax, ecx, edx, 1, 4, esi, ebx, edi, rd32(sp0 - 0x10u));
                                            t95 = g->ecx;
                                            t96 = g->edx;
                                            ecx = t95;
                                            edx = t96;
    COW_AT(102bdcb8)
                                        }
                                    }
                                    else
                                    {
    COW_AT(102bdc89)
                                        wr32(sp0 - 0x14u, edi);
                                        wr32(sp0 - 0x18u, ebx);
                                        wr32(sp0 - 0x1cu, esi);
                                        g->ecx = ecx;
                                        g->esp = sp0 - 0xcu;
                                        COW_RET(0x102bdc91u);
                                        cow_call_regs(g, COW_IMG(0x102c5b02u), g->eax, g->ecx, edx, 1, 4, esi, ebx, edi, rd32(sp0 - 0x10u));
                                        t90 = g->ecx;
                                        t91 = g->edx;
                                        ecx = t90;
                                        edx = t91;
    COW_AT(102bdc91)
                                    }
                                }
                                else
                                {
    COW_AT(102bdc62)
                                    wr32(sp0 - 0x14u, edi);
                                    wr32(sp0 - 0x18u, ebx);
                                    wr32(sp0 - 0x1cu, esi);
                                    g->esp = sp0 - 0x10u;
                                    COW_RET(0x102bdc6au);
                                    cow_call_regs(g, COW_IMG(0x102c5e30u), g->eax, ecx, edx, 1, 3, esi, ebx, edi);
                                    t85 = g->ecx;
                                    t86 = g->edx;
                                    ecx = t85;
                                    edx = t86;
    COW_AT(102bdc6a)
                                }
                            }
                            else
                            {
    COW_AT(102bdc3b)
                                wr32(sp0 - 0x14u, edi);
                                wr32(sp0 - 0x18u, ebx);
                                wr32(sp0 - 0x1cu, esi);
                                g->esp = sp0 - 0x10u;
                                COW_RET(0x102bdc43u);
                                cow_call_regs(g, COW_IMG(0x102c5c44u), g->eax, ecx, edx, 1, 3, esi, ebx, edi);
                                t80 = g->ecx;
                                t81 = g->edx;
                                ecx = t80;
                                edx = t81;
    COW_AT(102bdc43)
                            }
                        }
                        else
                        {
    COW_AT(102bdc14)
                            wr32(sp0 - 0x14u, edi);
                            wr32(sp0 - 0x18u, ebx);
                            wr32(sp0 - 0x1cu, esi);
                            g->ecx = ecx;
                            g->esp = sp0 - 0xcu;
                            COW_RET(0x102bdc1cu);
                            cow_call_regs(g, COW_IMG(0x102c5ba3u), g->eax, g->ecx, edx, 1, 4, esi, ebx, edi, rd32(sp0 - 0x10u));
                            t75 = g->ecx;
                            t76 = g->edx;
                            ecx = t75;
                            edx = t76;
    COW_AT(102bdc1c)
                        }
                    }
                    else
                    {
    COW_AT(102bdbed)
                        wr32(sp0 - 0x14u, edi);
                        wr32(sp0 - 0x18u, ebx);
                        wr32(sp0 - 0x1cu, esi);
                        g->ecx = ecx;
                        g->esp = sp0 - 0x10u;
                        COW_RET(0x102bdbf5u);
                        cow_call_regs(g, COW_IMG(0x102c5a36u), g->eax, g->ecx, edx, 1, 3, esi, ebx, edi);
                        t70 = g->ecx;
                        t71 = g->edx;
                        ecx = t70;
                        edx = t71;
    COW_AT(102bdbf5)
                    }
                }
                else
                {
    COW_AT(102bdbc6)
                    wr32(sp0 - 0x14u, edi);
                    wr32(sp0 - 0x18u, ebx);
                    wr32(sp0 - 0x1cu, esi);
                    g->ecx = ecx;
                    g->esp = sp0 - 0xcu;
                    COW_RET(0x102bdbceu);
                    cow_call_regs(g, COW_IMG(0x102c4c5du), g->eax, g->ecx, edx, 1, 4, esi, ebx, edi, rd32(sp0 - 0x10u));
                    t65 = g->ecx;
                    t66 = g->edx;
                    ecx = t65;
                    edx = t66;
    COW_AT(102bdbce)
                }
            }
            else
            {
    COW_AT(102bdb9f)
                wr32(sp0 - 0x14u, edi);
                wr32(sp0 - 0x18u, ebx);
                wr32(sp0 - 0x1cu, esi);
                g->ecx = ecx;
                g->esp = sp0 - 0x10u;
                COW_RET(0x102bdba7u);
                cow_call_regs(g, COW_IMG(0x102c4e6eu), g->eax, g->ecx, edx, 1, 3, esi, ebx, edi);
                t60 = g->ecx;
                t61 = g->edx;
                ecx = t60;
                edx = t61;
    COW_AT(102bdba7)
            }
        }
        else
        {
    COW_AT(102bdb78)
            wr32(sp0 - 0x14u, edi);
            wr32(sp0 - 0x18u, ebx);
            wr32(sp0 - 0x1cu, esi);
            g->esp = sp0 - 0xcu;
            COW_RET(0x102bdb80u);
            cow_call_regs(g, COW_IMG(0x102c58bdu), g->eax, ecx, edx, 1, 4, esi, ebx, edi, rd32(sp0 - 0x10u));
            t55 = g->ecx;
            t56 = g->edx;
            ecx = t55;
            edx = t56;
    COW_AT(102bdb80)
        }
    }
    else
    {
    COW_AT(102bdb51)
        wr32(sp0 - 0x14u, edi);
        wr32(sp0 - 0x18u, ebx);
        wr32(sp0 - 0x1cu, esi);
        g->esp = sp0 - 0x10u;
        COW_RET(0x102bdb59u);
        cow_call_regs(g, COW_IMG(0x102c4adbu), g->eax, ecx, edx, 1, 3, esi, ebx, edi);
        t50 = g->ecx;
        t51 = g->edx;
        ecx = t50;
        edx = t51;
    COW_AT(102bdb59)
    }
    goto L_102bddc7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102bd9e5(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102bd9f6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102bd9fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bda07u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda10u:
    {
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
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda18u:
    {
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
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda27u:
    {
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
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda32u:
    {
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda3du:
    {
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
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x14u, COW_IMG(0x103c7e40u));
        (void)sp0;
        return 1;
    }
    case 0x102bda3fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda52u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda59u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda61u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda66u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda79u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda80u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda88u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda8du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bda9au:
    {
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
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdaaeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, COW_IMG(0x10342e0cu));
        wr32(sp0 - 0x14u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdab3u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdabau:
    {
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdabeu:
    {
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdac4u:
    {
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdacfu:
    {
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
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x14u, COW_IMG(0x103c7f40u));
        (void)sp0;
        return 1;
    }
    case 0x102bdad3u:
    {
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdad7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bdadfu:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bdaf2u:
    {
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
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bdafdu:
    {
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bdb06u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, COW_IMG(0x10342e0cu));
        wr32(sp0 - 0x14u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb0bu:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb12u:
    {
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb16u:
    {
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb1cu:
    {
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb27u:
    {
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
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x14u, COW_IMG(0x103c7f40u));
        (void)sp0;
        return 1;
    }
    case 0x102bdb29u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb30u:
    {
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
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb37u:
    {
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb4au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb51u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb59u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb5eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb71u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb78u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb80u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb85u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb98u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdb9fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdba7u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdbacu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdbbfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdbc6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdbceu:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdbd3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdbe6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdbedu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdbf5u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdbfau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc0du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc14u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc1cu:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc21u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc34u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc3bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc43u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc48u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc5bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc62u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc6au:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc6fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc82u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc89u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc91u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdc96u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdca9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdcb0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdcb8u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdcbdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdcd0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdcd7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdcdfu:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdce4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdcf7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdcfeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd06u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd0bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd1eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd25u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd2du:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd32u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd45u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd4cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd54u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd56u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd69u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd70u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd78u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd8du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd94u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd9cu:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bdd9eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bddb1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bddbbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bddc0u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bddc2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bddc7u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102bddcau:
    {
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bddd4u:
    {
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102bd9e5(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102bd9e5(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
