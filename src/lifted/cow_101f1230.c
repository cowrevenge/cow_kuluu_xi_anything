/* f_0x101f1230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101f1230(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
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
    uint32_t t12;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f125cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; goto E_101f125c;
    case 0x101f1264u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f1264;
    case 0x101f126au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f126a;
    case 0x101f1277u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1277;
    case 0x101f127du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f127d;
    case 0x101f1282u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1282;
    case 0x101f1289u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1289;
    case 0x101f1294u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1294;
    case 0x101f12a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f12a8;
    case 0x101f12afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12af;
    case 0x101f12bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12bb;
    case 0x101f12c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12c2;
    case 0x101f12d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12d1;
    case 0x101f12e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12e1;
    case 0x101f12e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12e9;
    case 0x101f12edu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12ed;
    case 0x101f12f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12f8;
    case 0x101f12fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12fc;
    case 0x101f1316u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f1316;
    case 0x101f1325u: ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f1325;
    case 0x101f132bu: ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f132b;
    case 0x101f1330u: ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f1330;
    case 0x101f1338u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f1338;
    case 0x101f1341u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f1341;
    case 0x101f1356u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f1356;
    case 0x101f135cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f135c;
    case 0x101f1360u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f1360;
    case 0x101f136bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f136b;
    case 0x101f1377u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1377;
    case 0x101f138au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f138a;
    case 0x101f139du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f139d;
    case 0x101f13b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f13b0;
    case 0x101f13c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f13c3;
    case 0x101f13d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f13d6;
    case 0x101f13e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f13e9;
    case 0x101f13fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f13fc;
    case 0x101f1408u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1408;
    case 0x101f140eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f140e;
    case 0x101f1456u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1456;
    case 0x101f1463u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1463;
    case 0x101f146eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f146e;
    case 0x101f1479u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101f1479;
    case 0x101f1481u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1481;
    case 0x101f1486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1486;
    case 0x101f149eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f149e;
    case 0x101f14a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14a7;
    case 0x101f14aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14ae;
    case 0x101f14afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14af;
    case 0x101f14b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14b6;
    case 0x101f14bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14bc;
    case 0x101f14c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14c2;
    case 0x101f14c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14c4;
    case 0x101f14c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14c9;
    case 0x101f14d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14d1;
    case 0x101f14d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14d3;
    case 0x101f14f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14f3;
    case 0x101f14fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14fa;
    case 0x101f14feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14fe;
    case 0x101f1502u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1502;
    case 0x101f1505u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1505;
    case 0x101f1532u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1532;
    case 0x101f1534u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f1534;
    case 0x101f1538u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f1538;
    case 0x101f153eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f153e;
    case 0x101f1546u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f1546;
    case 0x101f1549u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f1549;
    case 0x101f154fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f154f;
    case 0x101f156fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f156f;
    case 0x101f157au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f157a;
    case 0x101f158bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f158b;
    case 0x101f1597u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_101f1597;
    case 0x101f15abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f15ab;
    case 0x101f15b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f15b9;
    case 0x101f15c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f15c0;
    case 0x101f15cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f15cf;
    case 0x101f15d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f15d2;
    case 0x101f15d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f15d4;
    case 0x101f15d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f15d9;
    case 0x101f15dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f15df;
    case 0x101f15eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f15ee;
    case 0x101f15f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f15f6;
    case 0x101f1600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f1600;
    case 0x101f160fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f160f;
    case 0x101f161bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f161b;
    case 0x101f1620u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f1620;
    case 0x101f1631u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1631;
    case 0x101f1643u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1643;
    case 0x101f164bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f164b;
    case 0x101f1655u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1655;
    case 0x101f1660u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1660;
    case 0x101f166au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f166a;
    case 0x101f167eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f167e;
    case 0x101f1686u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1686;
    case 0x101f16a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_101f16a2;
    case 0x101f16c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f16c8;
    case 0x101f16d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f16d3;
    case 0x101f16dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101f16da;
    case 0x101f16e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f16e2;
    case 0x101f16e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101f16e9;
    case 0x101f16f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101f16f3;
    case 0x101f1716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1716;
    case 0x101f171du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f171d;
    case 0x101f1725u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1725;
    case 0x101f172cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f172c;
    case 0x101f1734u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1734;
    case 0x101f173bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f173b;
    case 0x101f1744u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1744;
    case 0x101f1748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101f1748;
    case 0x101f1754u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_101f1754;
    case 0x101f1766u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1766;
    case 0x101f176du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f176d;
    case 0x101f1774u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1774;
    case 0x101f1782u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1782;
    case 0x101f178cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101f178c;
    default: break;
    }
#endif

    COW_AT(101f1230)
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    wr32(sp0 - 0x20u, 0u);
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 7u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x2cu, 0u);
    if (rd8(self + 0x92u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x92u);
        edx = in_edx;
        loc_2c = 0u;
        goto L_101f12a8;
    }
    COW_AT(101f125c)
    g->eax = rd32(rd32(self + 0x5cu));
    g->edx = in_edx;
    t1 = rd32(rd32(self + 0x5cu));
    t2 = rd32(self + 0x5cu);
    g->esp = sp0 - 0x40u;
    t3 = cow_thiscall(g, rd32(t1 + 0x54u), t2, 0);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(101f1264)
    wr32(sp0 - 0x44u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t6 = cow_cdecl(g, COW_IMG(0x100fd6e0u), 1, eax);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(101f126a)
    wr8(self + 0x92u, (uint8_t)eax);
    if ((uint8_t)eax != 0u)
    {
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101f12a8;
    }
    COW_AT(101f1277)
    t8 = rd16(self + 0x52u);
    if ((int16_t)t8 > 0)
    {
    COW_AT(101f127d)
        t9 = rd32(self + 0x58u);
        if (t9 != 0u)
        {
    COW_AT(101f1282)
            g->eax = eax;
            g->esp = sp0 - 0x40u;
            t10 = cow_fastcall(g, COW_IMG(0x101f1100u), self, edx, 0);
            t11 = g->edx;
            eax = t10;
            edx = t11;
    COW_AT(101f1289)
            wr32(sp0 - 0x44u, 1u);
            wr32(sp0 - 0x48u, 0u);
            wr32(sp0 - 0x4cu, 0u);
            g->esi = self;
            g->edi = edi;
            g->esp = sp0 - 0x40u;
            cow_fastcall(g, COW_IMG(0x101f7020u), self, edx, 3, 0u, 0u, 1u);
        }
    }
    COW_AT(101f1294)
    wr16(self + 0x54u, 0u);
    wr16(self + 0x52u, 0u);
    wr16(self + 0x50u, 0u);
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    return;
L_101f12a8: ;
    COW_AT(101f12a8)
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t12 = cow_fastcall(g, COW_IMG(0x101f1100u), self, edx, 0);
    t13 = g->ecx;
    t14 = g->edx;
    eax = t12;
    ecx = t13;
    edx = t14;
    COW_AT(101f12af)
    wr32(sp0 - 0x44u, 3u);
    wr8(sp0 - 0x2du, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t15 = cow_cdecl(g, COW_IMG(0x100fd6e0u), 1, 3u);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(101f12bb)
    if ((uint8_t)eax != 0u) goto L_101f12d1;
    COW_AT(101f12c2)
    wr32(self + 0x94u, 1u);
L_101f135c: ;
    COW_AT(101f135c)
    wr16(self + 0x54u, 0u);
L_101f1360: ;
    COW_AT(101f1360)
    if (rd32(self + 0x5cu) == 0u)
    {
        ebp = 0u;
        loc_2c = rd32(sp0 - 0x2cu);
    }
    else
    {
        ecx = rd32(self + 0x5cu);
    COW_AT(101f136b)
        wr32(sp0 - 0x44u, rd32(COW_IMG(0x10666e4cu)));
        g->eax = rd32(ecx);
        t26 = rd32(ecx);
        g->esp = sp0 - 0x40u;
        t27 = cow_thiscall(g, rd32(t26 + 0x40u), ecx, 1, rd32(COW_IMG(0x10666e4cu)));
        eax = t27;
    COW_AT(101f1377)
        wr32(sp0 - 0x20u, eax);
        wr32(sp0 - 0x44u, rd32(COW_IMG(0x10666e50u)));
        g->eax = rd32(rd32(self + 0x5cu));
        t28 = rd32(rd32(self + 0x5cu));
        g->esp = sp0 - 0x40u;
        t29 = cow_thiscall(g, rd32(t28 + 0x40u), rd32(self + 0x5cu), 1, rd32(COW_IMG(0x10666e50u)));
        eax = t29;
    COW_AT(101f138a)
        wr32(sp0 - 0x1cu, eax);
        wr32(sp0 - 0x44u, rd32(COW_IMG(0x10666e54u)));
        g->eax = rd32(rd32(self + 0x5cu));
        t30 = rd32(rd32(self + 0x5cu));
        g->esp = sp0 - 0x40u;
        t31 = cow_thiscall(g, rd32(t30 + 0x40u), rd32(self + 0x5cu), 1, rd32(COW_IMG(0x10666e54u)));
        eax = t31;
    COW_AT(101f139d)
        wr32(sp0 - 0x18u, eax);
        wr32(sp0 - 0x44u, rd32(COW_IMG(0x10666e58u)));
        g->eax = rd32(rd32(self + 0x5cu));
        t32 = rd32(rd32(self + 0x5cu));
        g->esp = sp0 - 0x40u;
        t33 = cow_thiscall(g, rd32(t32 + 0x40u), rd32(self + 0x5cu), 1, rd32(COW_IMG(0x10666e58u)));
        eax = t33;
    COW_AT(101f13b0)
        wr32(sp0 - 0x14u, eax);
        wr32(sp0 - 0x44u, rd32(COW_IMG(0x10666e5cu)));
        g->eax = rd32(rd32(self + 0x5cu));
        t34 = rd32(rd32(self + 0x5cu));
        g->esp = sp0 - 0x40u;
        t35 = cow_thiscall(g, rd32(t34 + 0x40u), rd32(self + 0x5cu), 1, rd32(COW_IMG(0x10666e5cu)));
        eax = t35;
    COW_AT(101f13c3)
        wr32(sp0 - 0x10u, eax);
        wr32(sp0 - 0x44u, rd32(COW_IMG(0x10666e60u)));
        g->eax = rd32(rd32(self + 0x5cu));
        t36 = rd32(rd32(self + 0x5cu));
        g->esp = sp0 - 0x40u;
        t37 = cow_thiscall(g, rd32(t36 + 0x40u), rd32(self + 0x5cu), 1, rd32(COW_IMG(0x10666e60u)));
        eax = t37;
    COW_AT(101f13d6)
        wr32(sp0 - 0xcu, eax);
        wr32(sp0 - 0x44u, rd32(COW_IMG(0x10666e64u)));
        g->eax = rd32(rd32(self + 0x5cu));
        t38 = rd32(rd32(self + 0x5cu));
        g->esp = sp0 - 0x40u;
        t39 = cow_thiscall(g, rd32(t38 + 0x40u), rd32(self + 0x5cu), 1, rd32(COW_IMG(0x10666e64u)));
        eax = t39;
    COW_AT(101f13e9)
        wr32(sp0 - 8u, eax);
        wr32(sp0 - 0x44u, rd32(COW_IMG(0x10666e68u)));
        g->eax = rd32(rd32(self + 0x5cu));
        g->edx = rd32(COW_IMG(0x10666e68u));
        t40 = rd32(rd32(self + 0x5cu));
        t41 = rd32(COW_IMG(0x10666e68u));
        g->esp = sp0 - 0x40u;
        t42 = cow_thiscall(g, rd32(t40 + 0x40u), rd32(self + 0x5cu), 1, t41);
        t43 = g->edx;
        eax = t42;
        edx = t43;
    COW_AT(101f13fc)
        wr32(sp0 - 4u, eax);
        g->eax = rd32(rd32(self + 0x5cu));
        t44 = rd32(rd32(self + 0x5cu));
        g->esp = sp0 - 0x40u;
        t45 = cow_thiscall(g, rd32(t44 + 0x44u), rd32(self + 0x5cu), 0);
        eax = t45;
    COW_AT(101f1408)
        wr32(sp0 - 0x2cu, eax);
        ebp = eax;
        loc_2c = eax;
    }
    COW_AT(101f140e)
    t46 = rd32(sp0 - 0xcu) + rd32(sp0 - 4u) + rd32(sp0 - 8u) + ((eax & 0xffff0000u) | rd8(rd32(self + 0x60u) + rd32(rd32(self + 0x60u) + 0xcu) + 0x18u)) + rd32(sp0 - 0x10u) + rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u);
    t47 = rd32(sp0 - 0x1cu);
    t48 = rd32(sp0 - 0x20u);
    t49 = rd16(self + 0x54u);
    t50 = rd32(self + 0x60u);
    wr16(self + 0x52u, (uint16_t)(t49 + (uint16_t)(ebp + t46 + t47 + t48)));
    if ((uint16_t)(t49 + (uint16_t)(ebp + t46 + t47 + t48)) != 0u)
    {
        eax = (ebp + t46 + t47 + t48 & 0xffff0000u) | (uint16_t)(t49 + (uint16_t)(ebp + t46 + t47 + t48));
        edx = t48;
        goto L_101f1481;
    }
    ecx = t50;
    edi = t47;
    COW_AT(101f1456)
    if (rd32(self + 0x5cu) != rd32(COW_IMG(0x10663754u)))
    {
        eax = rd32(self + 0x5cu);
        edx = rd32(COW_IMG(0x10663754u));
    }
    else
    {
        eax = rd32(self + 0x5cu);
        edx = rd32(COW_IMG(0x10663754u));
    COW_AT(101f1463)
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x48u, 0x12u);
        wr32(sp0 - 0x4cu, 1u);
        wr32(sp0 - 0x50u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t51 = cow_thiscall(g, COW_IMG(0x1021c7e0u), ecx, 4, 0u, 1u, 0x12u, 0u);
        t52 = g->edx;
        eax = t51;
        edx = t52;
    }
    COW_AT(101f146e)
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    g->esi = self;
    g->edi = edi;
    g->esp = sp0 - 0x40u;
    cow_fastcall(g, COW_IMG(0x101f7020u), self, edx, 3, 0u, 0u, 1u);
    COW_AT(101f1479)
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    return;
L_101f12d1: ;
    COW_AT(101f12d1)
    if (rd8(rd32(COW_IMG(0x10666e38u)) + rd32(rd32(COW_IMG(0x10666e38u)) + 0xcu) + 0x18u) == 0u)
    {
        eax = rd32(COW_IMG(0x10666e38u));
        goto L_101f1356;
    }
    eax = rd32(COW_IMG(0x10666e38u));
    COW_AT(101f12e1)
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x5cu));
    t17 = rd32(rd32(self + 0x5cu));
    g->esp = sp0 - 0x40u;
    t18 = cow_thiscall(g, rd32(t17 + 0x20u), rd32(self + 0x5cu), 0);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(101f12e9)
    if (eax == 0u) goto L_101f1356;
    COW_AT(101f12ed)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t20 = cow_thiscall(g, COW_IMG(0x1021ccb0u), rd32(COW_IMG(0x10666e38u)), 0);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(101f12f8)
    if ((uint8_t)eax != 0u) goto L_101f1338;
    COW_AT(101f12fc)
    t22 = rd8(rd32(COW_IMG(0x10666e38u)) + rd32(rd32(COW_IMG(0x10666e38u)) + 0xcu) + 0x18u);
    wr16(self + 0x54u, (uint16_t)(((edx & 0xffff0000u) | t22) - 1u));
    if ((int16_t)(((edx & 0xffff0000u) | t22) - 1u) <= 0)
    {
        eax = ((edx & 0xffff0000u) | t22) - 1u;
    }
    else
    {
    COW_AT(101f1316)
        if (rd32(self + 0x94u) == 2u)
        {
            eax = 2u;
        }
        else
        {
    COW_AT(101f1325)
            t23 = rd16(self + 0x52u);
            if ((int16_t)t23 > 0)
            {
    COW_AT(101f132b)
                wr8(sp0 - 0x2du, 1u);
            }
    COW_AT(101f1330)
            wr32(self + 0x94u, 2u);
            eax = 2u;
        }
    }
    goto L_101f1360;
L_101f1338: ;
    COW_AT(101f1338)
    t24 = rd32(self + 0x94u);
    if (t24 != 2u) goto L_101f135c;
    COW_AT(101f1341)
    t25 = rd32(COW_IMG(0x10666e38u));
    wr16(self + 0x54u, (uint16_t)(((edx & 0xffff0000u) | rd8(t25 + rd32(t25 + 0xcu) + 0x18u)) - 1u));
    eax = t25;
    goto L_101f1360;
L_101f1356: ;
    COW_AT(101f1356)
    wr32(self + 0x94u, 0u);
    goto L_101f135c;
L_101f1481: ;
    COW_AT(101f1481)
    t53 = rd32(self + 0x58u);
    if (t53 == 0u)
    {
    COW_AT(101f1486)
        t54 = (uint32_t)(int16_t)eax * 0x54u;
        wr32(sp0 - 0x44u, t54);
        g->eax = (uint32_t)(int16_t)eax * 8u - (uint32_t)(int16_t)eax;
        g->esp = sp0 - 0x38u;
        t55 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t54, edx, 1, 3, t54, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
        t56 = g->edx;
        edx = t56;
        edi = (uint32_t)(int16_t)eax;
        eax = t55;
    COW_AT(101f149e)
        if (eax == 0u)
        {
    COW_AT(101f14c2)
            ebx = 0u;
        }
        else
        {
            ebx = eax;
    COW_AT(101f14a7)
            if ((int32_t)(edi - 1u) >= 0)
            {
                ebp = ebx;
                edi = edi - 1u;
    COW_AT(101f14ae)
                edi = edi + 1u;
L_101f14af: ;
    COW_AT(101f14af)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x40u;
                t57 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebp, 0);
                t58 = g->edx;
                eax = t57;
                edx = t58;
    COW_AT(101f14b6)
                if (edi != 1u)
                {
                    ebp = ebp + 0x54u;
                    edi = edi - 1u;
                    goto L_101f14af;
                }
            }
    COW_AT(101f14bc)
            ebp = rd32(sp0 - 0x2cu);
        }
    COW_AT(101f14c4)
        wr32(self + 0x58u, ebx);
    }
    COW_AT(101f14c9)
    wr16(self + 0x50u, 0u);
    if ((int32_t)ebp > 0)
    {
    COW_AT(101f14d1)
        edi = ebp;
L_101f14d3: ;
    COW_AT(101f14d3)
        if (rd32(self + 0x5cu) == 0u)
        {
            edx = (edx & 0xffff0000u) | rd16(self + 0x50u);
        }
        else
        {
            eax = rd32(self + 0x58u) + (uint32_t)(int16_t)rd16(self + 0x50u) * 0x54u;
            ecx = rd32(self + 0x5cu);
            edx = (edx & 0xffff0000u) | rd16(self + 0x50u);
    COW_AT(101f14f3)
            wr32(sp0 - 0x44u, edx);
            wr32(sp0 - 0x48u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            t59 = cow_thiscall(g, rd32(rd32(ecx) + 0x38u), ecx, 2, eax, edx);
            t60 = g->edx;
            eax = t59;
            edx = t60;
    COW_AT(101f14fa)
            if ((uint8_t)eax != 0u)
            {
    COW_AT(101f14fe)
                t61 = rd16(self + 0x50u);
                wr16(self + 0x50u, (uint16_t)(t61 + 1u));
            }
        }
    COW_AT(101f1502)
        if (edi != 1u)
        {
            edi = edi - 1u;
            goto L_101f14d3;
        }
    }
    COW_AT(101f1505)
    t62 = rd32(rd32(self + 0x60u));
    wr32(COW_IMG(0x10663780u), t62);
    wr32(sp0 - 0x2cu, 0u);
    if ((int32_t)((uint32_t)(int16_t)rd16(self + 0x54u) + rd8(rd32(self + 0x60u) + rd32(rd32(self + 0x60u) + 0xcu) + 0x18u)) <= 0)
    {
        ecx = rd32(self + 0x60u);
        edx = 0u;
        edi = (uint32_t)(int16_t)rd16(self + 0x54u);
        goto L_101f16c8;
    }
    eax = (t62 & 0xffff0000u) | rd16(self + 0x54u);
    ecx = rd32(self + 0x60u);
    COW_AT(101f1532)
    edx = 0u;
    loc_2c = 0u;
L_101f1538: ;
    COW_AT(101f1538)
    t63 = rd16(self + 0x50u);
    if ((int16_t)t63 >= (int16_t)eax)
    {
    COW_AT(101f1546)
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx - rd8(self + 0x54u));
    }
    else
    {
    COW_AT(101f153e)
        ecx = rd32(COW_IMG(0x10666e38u));
    }
    COW_AT(101f1549)
    wr32(sp0 - 0x44u, edx);
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t64 = cow_thiscall(g, COW_IMG(0x1021cb80u), ecx, 1, edx);
    eax = t64;
    COW_AT(101f154f)
    if (eax == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x50u) * 8u - (uint32_t)(int16_t)rd16(self + 0x50u);
        goto L_101f16a2;
    }
    edx = rd32(self + 0x58u);
    ebx = rd32(self + 0x58u) + (uint32_t)(int16_t)rd16(self + 0x50u) * 0x54u;
    edi = eax;
    eax = (uint32_t)(int16_t)rd16(self + 0x50u) * 8u - (uint32_t)(int16_t)rd16(self + 0x50u);
    COW_AT(101f156f)
    if (rd8(edi + 2u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 2u);
        goto L_101f16a2;
    }
    COW_AT(101f157a)
    wr32(sp0 - 0x44u, rd16(edi));
    g->eax = rd16(edi);
    g->edx = edx;
    t65 = rd16(edi);
    t66 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x40u;
    t67 = cow_thiscall(g, COW_IMG(0x1015bc40u), t66, 1, t65);
    t68 = g->ecx;
    t69 = g->edx;
    eax = t67;
    ecx = t68;
    edx = t69;
    COW_AT(101f158b)
    wr32(sp0 - 0x28u, eax);
    if (eax == 0u) goto L_101f16a2;
    loc_28 = eax;
    COW_AT(101f1597)
    wr32(sp0 - 0x44u, eax);
    t70 = rd8(eax + 0x1b3u);
    wr8(eax + 0x1b3u, (uint8_t)(t70 + 1u));
    g->eax = eax;
    g->ecx = (ecx & 0xffffff00u) | (uint8_t)(t70 + 1u);
    g->esp = sp0 - 0x38u;
    t71 = cow_call_regs(g, COW_IMG(0x1015a680u), g->eax, g->ecx, edx, 1, 3, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    t72 = g->ecx;
    t73 = g->edx;
    eax = t71;
    ecx = t72;
    edx = t73;
    COW_AT(101f15ab)
    t74 = rd16(edi);
    wr32(sp0 - 0x24u, eax);
    if ((uint16_t)t74 != 0xffffu)
    {
        loc_24 = eax;
        goto L_101f15c0;
    }
    loc_24 = eax;
    COW_AT(101f15b9)
    ebp = 0x80404040u;
L_101f15f6: ;
    COW_AT(101f15f6)
    if (rd8(edi + 8u) > 0x1bu)
    {
        eax = rd8(edi + 8u);
        goto L_101f161b;
    }
    eax = rd8(edi + 8u);
    COW_AT(101f1600)
    t81 = rd32(COW_IMG(0x101f1794u) + rd8(COW_IMG(0x101f17a0u) + eax) * 4u);
    switch (t81 - RD)
    {
    case 0x101f160fu: goto L_101f160f;
    case 0x101f161bu: goto L_101f161b;
    case 0x101f1620u: goto L_101f1620;
    default: rt_fatal(g, COW_IMG(0x101f1608u), "switch");
    }
    return;
L_101f1534: ;
    COW_AT(101f1534)
    edx = loc_2c;
    goto L_101f1538;
L_101f15c0: ;
    COW_AT(101f15c0)
    if ((int16_t)rd16(self + 0x50u) >= (int16_t)rd16(self + 0x54u))
    {
        ecx = rd32(self + 0x5cu);
        edx = rd32(rd32(self + 0x5cu));
    COW_AT(101f15d4)
        wr32(sp0 - 0x44u, eax);
        wr32(sp0 - 0x48u, edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t77 = cow_thiscall(g, rd32(edx + 0x30u), ecx, 2, edi, eax);
        t78 = g->edx;
        eax = t77;
        edx = t78;
    }
    else
    {
        ecx = rd32(self + 0x5cu);
        edx = rd32(rd32(self + 0x5cu));
    COW_AT(101f15cf)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t75 = cow_thiscall(g, rd32(edx + 0x20u), ecx, 0);
        t76 = g->edx;
        eax = t75;
        edx = t76;
    COW_AT(101f15d2)
    }
    COW_AT(101f15d9)
    if (eax != 0u)
    {
        ebp = eax;
        goto L_101f15ee;
    }
    COW_AT(101f15df)
    t79 = rd8(rd32(sp0 - 0x28u) + 0x1b3u);
    t80 = rd32(sp0 - 0x28u);
    wr8(t80 + 0x1b3u, (uint8_t)(t79 - 1u));
    eax = t80;
L_101f16a2: ;
    COW_AT(101f16a2)
    t94 = rd32(sp0 - 0x2cu) + 1u;
    wr32(sp0 - 0x2cu, t94);
    if ((int32_t)t94 < (int32_t)((uint32_t)(int16_t)rd16(self + 0x54u) + rd8(rd32(self + 0x60u) + rd32(rd32(self + 0x60u) + 0xcu) + 0x18u)))
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x54u);
        ecx = rd32(self + 0x60u);
        loc_2c = t94;
        goto L_101f1534;
    }
    ecx = rd32(self + 0x60u);
    edx = (uint32_t)(int16_t)rd16(self + 0x54u);
    edi = t94;
L_101f16c8: ;
    COW_AT(101f16c8)
    if (rd32(self + 0x5cu) == 0u)
    {
        eax = rd32(self + 0x5cu);
    }
    else
    {
        eax = rd32(self + 0x5cu);
    COW_AT(101f16d3)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x40u;
        t95 = cow_stdcall(g, COW_IMG(0x101effd0u), 0);
        t96 = g->ecx;
        eax = t95;
        ecx = t96;
    COW_AT(101f16da)
        wr32(sp0 - 0x24u, eax);
        if ((int32_t)eax > 0)
        {
            loc_24 = eax;
    COW_AT(101f16e2)
            wr32(sp0 - 0x2cu, self + 0x78u);
            ecx = self + 0x78u;
            ebp = 0u;
            loc_2c = self + 0x78u;
L_101f16e9: ;
    COW_AT(101f16e9)
            if ((int32_t)rd32(ebp * 4u + sp0 - 0x20u) <= 0)
            {
                edi = 0u;
                goto L_101f1748;
            }
            edi = 0u;
L_101f16f3: ;
    COW_AT(101f16f3)
            t97 = rd32(self + 0x58u) + (uint32_t)(int16_t)rd16(self + 0x50u) * 0x54u;
            wr32(sp0 - 0x44u, t97);
            wr32(sp0 - 0x48u, edi);
            wr32(sp0 - 0x4cu, ebp);
            g->eax = t97;
            g->ecx = rd32(self + 0x5cu);
            g->edx = rd32(rd32(self + 0x5cu));
            t98 = rd32(self + 0x5cu);
            t99 = rd32(rd32(self + 0x5cu));
            g->esp = sp0 - 0x48u;
            t100 = cow_cdecl(g, COW_IMG(0x101effe0u), 1, ebp);
            t101 = g->ecx;
            t102 = g->edx;
            eax = t100;
            ecx = t101;
            edx = t102;
    COW_AT(101f1716)
            wr32(sp0 - 0x4cu, eax);
            g->eax = eax;
            g->esp = sp0 - 0x40u;
            t103 = cow_thiscall(g, rd32(edx + 0x48u), ecx, 3, eax, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
            eax = t103;
    COW_AT(101f171d)
            if ((uint8_t)eax == 0u)
            {
                ecx = rd32(sp0 - 0x2cu);
            }
            else
            {
                ecx = rd32(sp0 - 0x2cu);
    COW_AT(101f1725)
                t104 = rd16(ecx - 0x10u);
                if ((int16_t)t104 < 0)
                {
    COW_AT(101f172c)
                    wr16(ecx - 0x10u, rd16(self + 0x50u));
                }
    COW_AT(101f1734)
                t105 = rd16(self + 0x50u);
                wr16(self + 0x50u, (uint16_t)(t105 + 1u));
                t106 = rd16(ecx);
                wr16(ecx, (uint16_t)(t106 + 1u));
            }
    COW_AT(101f173b)
            if ((int32_t)(edi + 1u) < (int32_t)rd32(ebp * 4u + sp0 - 0x20u))
            {
                edi = edi + 1u;
                loc_24 = rd32(sp0 - 0x24u);
                loc_2c = rd32(sp0 - 0x2cu);
                goto L_101f16f3;
            }
            edi = edi + 1u;
    COW_AT(101f1744)
            eax = rd32(sp0 - 0x24u);
            loc_24 = rd32(sp0 - 0x24u);
L_101f1748: ;
    COW_AT(101f1748)
            wr32(sp0 - 0x2cu, ecx + 2u);
            if ((int32_t)(ebp + 1u) < (int32_t)eax)
            {
                ebp = ebp + 1u;
                loc_2c = ecx + 2u;
                ecx = ecx + 2u;
                goto L_101f16e9;
            }
            ecx = ecx + 2u;
        }
    }
    COW_AT(101f1754)
    wr32(sp0 - 0x44u, 1u);
    t107 = (ecx & 0xffff0000u) | rd16(self + 0x50u);
    wr32(sp0 - 0x48u, t107);
    t108 = rd32(self + 0x58u);
    wr32(sp0 - 0x4cu, t108);
    g->esi = self;
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t109 = cow_fastcall(g, COW_IMG(0x101f7020u), self, t108, 3, t108, t107, 1u);
    t110 = g->edx;
    eax = t109;
    edx = t110;
    COW_AT(101f1766)
    t111 = rd8(sp0 - 0x2du);
    if ((uint8_t)t111 == 1u)
    {
    COW_AT(101f176d)
        g->eax = eax;
        g->esp = sp0 - 0x40u;
        t112 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        eax = t112;
    COW_AT(101f1774)
        if ((int16_t)rd16(self + 0x52u) >= (int32_t)(eax + (uint32_t)(int16_t)rd16(self + 0x54u)))
        {
            eax = eax + (uint32_t)(int16_t)rd16(self + 0x54u);
            edx = (uint32_t)(int16_t)rd16(self + 0x52u);
    COW_AT(101f1782)
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, eax);
            g->esp = sp0 - 0x40u;
            cow_call_regs(g, COW_IMG(0x101f7080u), eax, self, edx, 0, 2, eax, 0u);
        }
    }
    COW_AT(101f178c)
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    return;
L_101f15ee: ;
    COW_AT(101f15ee)
    if (ebp == 0x80804020u)
    {
        loc_24 = rd32(sp0 - 0x24u);
        goto L_101f1620;
    }
    loc_24 = rd32(sp0 - 0x24u);
    goto L_101f15f6;
L_101f160f: ;
    COW_AT(101f160f)
    if (rd32(self + 0x5cu) == rd32(COW_IMG(0x10663474u)))
    {
        eax = rd32(COW_IMG(0x10663474u));
        edx = rd32(self + 0x5cu);
        goto L_101f1620;
    }
    eax = rd32(COW_IMG(0x10663474u));
    edx = rd32(self + 0x5cu);
L_101f161b: ;
    COW_AT(101f161b)
    ebp = 0x80404040u;
L_101f1620: ;
    COW_AT(101f1620)
    wr32(sp0 - 0x44u, 0x80808080u);
    wr32(sp0 - 0x48u, edi);
    wr32(sp0 - 0x4cu, 0x16u);
    wr32(sp0 - 0x50u, 0u);
    g->esp = sp0 - 0x40u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), ebx, edx, 4, 0u, 0x16u, edi, 0x80808080u);
    t82 = g->edx;
    edx = t82;
    COW_AT(101f1631)
    wr32(sp0 - 0x44u, ebp);
    wr32(sp0 - 0x48u, rd16(edi));
    wr32(sp0 - 0x4cu, 0x19u);
    wr32(sp0 - 0x50u, 1u);
    g->esp = sp0 - 0x40u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), ebx, edx, 4, 1u, 0x19u, rd16(edi), ebp);
    t83 = g->ecx;
    t84 = g->edx;
    ecx = t83;
    edx = t84;
    COW_AT(101f1643)
    if (rd32(sp0 - 0x24u) != 0u)
    {
        eax = rd32(sp0 - 0x24u);
    COW_AT(101f164b)
        if (rd32(eax + 0x14c0u) != 0u)
        {
            eax = rd32(eax + 0x14c0u);
    COW_AT(101f1655)
            t85 = rd16(eax);
            if ((uint16_t)t85 > 1u)
            {
                eax = (eax & 0xffffff00u) | (uint16_t)t85 > 1u;
    COW_AT(101f1660)
                if ((int16_t)rd16(self + 0x50u) >= (int16_t)rd16(self + 0x54u))
                {
    COW_AT(101f166a)
                    wr32(sp0 - 0x44u, 0x80808080u);
                    t86 = rd32(edi + 4u);
                    wr32(sp0 - 0x48u, t86);
                    wr32(sp0 - 0x4cu, 7u);
                    wr32(sp0 - 0x50u, 2u);
                    g->esp = sp0 - 0x40u;
                    cow_fastcall(g, COW_IMG(0x101f4b20u), ebx, t86, 4, 2u, 7u, t86, 0x80808080u);
                    t87 = g->edx;
                    edx = t87;
                }
            }
        }
    }
    COW_AT(101f167e)
    g->eax = rd32(rd32(self + 0x5cu));
    t88 = rd32(rd32(self + 0x5cu));
    t89 = rd32(self + 0x5cu);
    g->esp = sp0 - 0x40u;
    t90 = cow_thiscall(g, rd32(t88 + 8u), t89, 0);
    t91 = g->ecx;
    eax = t90;
    ecx = t91;
    COW_AT(101f1686)
    wr32(ebx + 0x4cu, eax);
    t92 = rd32(sp0 - 0x28u);
    wr32(ebx + 0x48u, edi);
    wr8(t92 + 0x1b3u, (uint8_t)(rd8(t92 + 0x1b3u) - 1u));
    t93 = rd16(self + 0x50u);
    wr16(self + 0x50u, (uint16_t)(t93 + 1u));
    eax = t92;
    goto L_101f16a2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f1230(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f125cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f1264u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f126au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1277u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f127du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1282u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1289u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1294u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f12a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f12afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f12bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f12c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f12d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f12e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f12e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f12edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f12f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f12fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1316u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1325u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->eax = 2u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f132bu:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->eax = 2u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1330u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->eax = 2u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1338u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1341u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1356u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f135cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1360u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f136bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1377u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f138au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f139du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f13b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f13c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f13d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f13e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f13fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1408u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f140eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1456u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1463u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f146eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1479u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1481u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1486u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f149eu:
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
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x101f14a7u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f14aeu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f14afu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f14b6u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f14bcu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f14c2u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f14c4u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f14c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f14d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f14d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f14f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f14fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f14feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1502u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f1505u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1532u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->edx = 0u;
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f1534u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1538u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f153eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1546u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1549u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f154fu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f156fu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f157au:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f158bu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1597u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f15abu:
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
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x101f15b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f15c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f15cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f15d2u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f15d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f15d9u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f15dfu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f15eeu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f15f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1600u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f160fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f161bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1620u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1631u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1643u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f164bu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1655u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1660u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f166au:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f167eu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1686u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f16a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f16c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f16d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f16dau:
    {
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
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f16e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f16e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f16f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1716u:
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
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x101f171du:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1725u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f172cu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1734u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f173bu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1744u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1748u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1754u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1766u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f176du:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1774u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f1782u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101f178cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f1230(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101f1230(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
