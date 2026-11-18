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
    uint32_t t11;
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
    case 0x101f125cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_101f125c;
    case 0x101f1277u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1277;
    case 0x101f127du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f127d;
    case 0x101f1282u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1282;
    case 0x101f1294u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1294;
    case 0x101f12a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_101f12a8;
    case 0x101f12c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12c2;
    case 0x101f12d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12d1;
    case 0x101f12e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12e1;
    case 0x101f12edu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101f12ed;
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
    case 0x101f140eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f140e;
    case 0x101f1456u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f1456;
    case 0x101f1463u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f1463;
    case 0x101f146eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f146e;
    case 0x101f1481u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f1481;
    case 0x101f1486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f1486;
    case 0x101f14a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14a7;
    case 0x101f14aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14ae;
    case 0x101f14afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14af;
    case 0x101f14bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14bc;
    case 0x101f14c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14c2;
    case 0x101f14c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14c4;
    case 0x101f14c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f14c9;
    case 0x101f14d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f14d1;
    case 0x101f14d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f14d3;
    case 0x101f14f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f14f3;
    case 0x101f14feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f14fe;
    case 0x101f1502u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f1502;
    case 0x101f1505u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101f1505;
    case 0x101f1532u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1532;
    case 0x101f1534u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f1534;
    case 0x101f1538u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f1538;
    case 0x101f153eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f153e;
    case 0x101f1546u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f1546;
    case 0x101f1549u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f1549;
    case 0x101f156fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f156f;
    case 0x101f157au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f157a;
    case 0x101f1597u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_101f1597;
    case 0x101f15b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f15b9;
    case 0x101f15c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f15c0;
    case 0x101f15cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f15cf;
    case 0x101f15d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f15d4;
    case 0x101f15d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f15d9;
    case 0x101f15dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f15df;
    case 0x101f15eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f15ee;
    case 0x101f15f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f15f6;
    case 0x101f1600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f1600;
    case 0x101f160fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f160f;
    case 0x101f161bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f161b;
    case 0x101f1620u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f1620;
    case 0x101f164bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f164b;
    case 0x101f1655u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1655;
    case 0x101f1660u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1660;
    case 0x101f166au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f166a;
    case 0x101f167eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f167e;
    case 0x101f16a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_101f16a2;
    case 0x101f16c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f16c8;
    case 0x101f16d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_101f16d3;
    case 0x101f16e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101f16e2;
    case 0x101f16e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101f16e9;
    case 0x101f16f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101f16f3;
    case 0x101f1725u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1725;
    case 0x101f172cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f172c;
    case 0x101f1734u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1734;
    case 0x101f173bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f173b;
    case 0x101f1744u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f1744;
    case 0x101f1748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101f1748;
    case 0x101f1754u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_101f1754;
    case 0x101f176du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f176d;
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
    wr32(sp0 - 0x44u, t3);
    g->edx = t5;
    t6 = cow_cdecl(g, COW_IMG(0x100fd6e0u), 1, t3);
    t7 = g->edx;
    wr8(self + 0x92u, (uint8_t)t6);
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101f12a8;
    }
    eax = t6;
    edx = t7;
    COW_AT(101f1277)
    if ((int16_t)rd16(self + 0x52u) > 0)
    {
    COW_AT(101f127d)
        if (rd32(self + 0x58u) != 0u)
        {
    COW_AT(101f1282)
            g->eax = eax;
            g->esp = sp0 - 0x40u;
            t8 = cow_fastcall(g, COW_IMG(0x101f1100u), self, edx, 0);
            t9 = g->edx;
            wr32(sp0 - 0x44u, 1u);
            wr32(sp0 - 0x48u, 0u);
            wr32(sp0 - 0x4cu, 0u);
            g->esi = self;
            g->edi = edi;
            cow_fastcall(g, COW_IMG(0x101f7020u), self, t9, 3, 0u, 0u, 1u);
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
    t10 = cow_fastcall(g, COW_IMG(0x101f1100u), self, edx, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x44u, 3u);
    wr8(sp0 - 0x2du, 0u);
    g->edx = t12;
    t13 = cow_cdecl(g, COW_IMG(0x100fd6e0u), 1, 3u);
    t14 = g->edx;
    if ((uint8_t)t13 != 0u)
    {
        edx = t14;
        goto L_101f12d1;
    }
    eax = t13;
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
        t22 = rd32(ecx);
        t23 = rd32(COW_IMG(0x10666e4cu));
        g->esp = sp0 - 0x44u;
        t24 = cow_thiscall(g, rd32(t22 + 0x40u), ecx, 0);
        wr32(sp0 - 0x24u, t24);
        wr32(sp0 - 0x48u, rd32(COW_IMG(0x10666e50u)));
        g->eax = rd32(rd32(self + 0x5cu));
        t25 = rd32(rd32(self + 0x5cu));
        t26 = cow_thiscall(g, rd32(t25 + 0x40u), rd32(self + 0x5cu), 1, rd32(COW_IMG(0x10666e50u)));
        wr32(sp0 - 0x20u, t26);
        wr32(sp0 - 0x48u, rd32(COW_IMG(0x10666e54u)));
        g->eax = rd32(rd32(self + 0x5cu));
        t27 = rd32(rd32(self + 0x5cu));
        t28 = rd32(COW_IMG(0x10666e54u));
        g->esp = sp0 - 0x48u;
        t29 = cow_thiscall(g, rd32(t27 + 0x40u), rd32(self + 0x5cu), 0);
        wr32(sp0 - 0x20u, t29);
        wr32(sp0 - 0x4cu, rd32(COW_IMG(0x10666e58u)));
        g->eax = rd32(rd32(self + 0x5cu));
        t30 = rd32(rd32(self + 0x5cu));
        g->esp = sp0 - 0x34u;
        t31 = cow_thiscall(g, rd32(t30 + 0x40u), rd32(self + 0x5cu), 6, rd32(COW_IMG(0x10666e58u)), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
        wr32(sp0 - 8u, t31);
        wr32(sp0 - 0x38u, rd32(COW_IMG(0x10666e5cu)));
        g->eax = rd32(rd32(self + 0x5cu));
        t32 = rd32(rd32(self + 0x5cu));
        t33 = cow_thiscall(g, rd32(t32 + 0x40u), rd32(self + 0x5cu), 1, rd32(COW_IMG(0x10666e5cu)));
        wr32(sp0 - 4u, t33);
        wr32(sp0 - 0x38u, rd32(COW_IMG(0x10666e60u)));
        g->eax = rd32(rd32(self + 0x5cu));
        t34 = rd32(rd32(self + 0x5cu));
        t35 = rd32(COW_IMG(0x10666e60u));
        g->esp = sp0 - 0x38u;
        t36 = cow_thiscall(g, rd32(t34 + 0x40u), rd32(self + 0x5cu), 0);
        wr32(sp0 - 4u, t36);
        wr32(sp0 - 0x3cu, rd32(COW_IMG(0x10666e64u)));
        g->eax = rd32(rd32(self + 0x5cu));
        t37 = rd32(rd32(self + 0x5cu));
        t38 = rd32(COW_IMG(0x10666e64u));
        g->esp = sp0 - 0x3cu;
        t39 = cow_thiscall(g, rd32(t37 + 0x40u), rd32(self + 0x5cu), 0);
        wr32(sp0 - 4u, t39);
        wr32(sp0 - 0x40u, rd32(COW_IMG(0x10666e68u)));
        g->eax = rd32(rd32(self + 0x5cu));
        g->edx = rd32(COW_IMG(0x10666e68u));
        t40 = rd32(rd32(self + 0x5cu));
        t41 = rd32(COW_IMG(0x10666e68u));
        g->esp = sp0 - 0x40u;
        t42 = cow_thiscall(g, rd32(t40 + 0x40u), rd32(self + 0x5cu), 0);
        t43 = g->edx;
        wr32(sp0 - 4u, t42);
        g->eax = rd32(rd32(self + 0x5cu));
        t44 = rd32(rd32(self + 0x5cu));
        t45 = cow_thiscall(g, rd32(t44 + 0x44u), rd32(self + 0x5cu), 0);
        wr32(sp0 - 0x2cu, t45);
        eax = t45;
        ebp = t45;
        loc_2c = t45;
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
    t15 = rd32(rd32(self + 0x5cu));
    g->esp = sp0 - 0x40u;
    t16 = cow_thiscall(g, rd32(t15 + 0x20u), rd32(self + 0x5cu), 0);
    t17 = g->edx;
    if (t16 == 0u)
    {
        eax = t16;
        goto L_101f1356;
    }
    eax = t16;
    edx = t17;
    COW_AT(101f12ed)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t18 = cow_thiscall(g, COW_IMG(0x1021ccb0u), rd32(COW_IMG(0x10666e38u)), 0);
    t19 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        eax = t18;
        edx = t19;
        goto L_101f1338;
    }
    edx = t19;
    COW_AT(101f12fc)
    t20 = rd8(rd32(COW_IMG(0x10666e38u)) + rd32(rd32(COW_IMG(0x10666e38u)) + 0xcu) + 0x18u);
    wr16(self + 0x54u, (uint16_t)(((edx & 0xffff0000u) | t20) - 1u));
    if ((int16_t)(((edx & 0xffff0000u) | t20) - 1u) <= 0)
    {
        eax = ((edx & 0xffff0000u) | t20) - 1u;
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
            if ((int16_t)rd16(self + 0x52u) > 0)
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
    if (rd32(self + 0x94u) != 2u) goto L_101f135c;
    COW_AT(101f1341)
    t21 = rd32(COW_IMG(0x10666e38u));
    wr16(self + 0x54u, (uint16_t)(((edx & 0xffff0000u) | rd8(t21 + rd32(t21 + 0xcu) + 0x18u)) - 1u));
    eax = t21;
    goto L_101f1360;
L_101f1356: ;
    COW_AT(101f1356)
    wr32(self + 0x94u, 0u);
    goto L_101f135c;
L_101f1481: ;
    COW_AT(101f1481)
    if (rd32(self + 0x58u) == 0u)
    {
    COW_AT(101f1486)
        t53 = (uint32_t)(int16_t)eax * 0x54u;
        wr32(sp0 - 0x44u, t53);
        g->eax = (uint32_t)(int16_t)eax * 8u - (uint32_t)(int16_t)eax;
        g->esp = sp0 - 0x38u;
        t54 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t53, edx, 1, 3, t53, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
        t55 = g->edx;
        if (t54 == 0u)
        {
            edx = t55;
    COW_AT(101f14c2)
            ebx = 0u;
        }
        else
        {
            edx = t55;
            ebx = t54;
            edi = (uint32_t)(int16_t)eax;
            eax = t54;
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
                t56 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebp, 0);
                t57 = g->edx;
                if (edi != 1u)
                {
                    eax = t56;
                    edx = t57;
                    ebp = ebp + 0x54u;
                    edi = edi - 1u;
                    goto L_101f14af;
                }
                edx = t57;
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
            t58 = cow_thiscall(g, rd32(rd32(ecx) + 0x38u), ecx, 2, eax, edx);
            t59 = g->edx;
            if ((uint8_t)t58 == 0u)
            {
                edx = t59;
            }
            else
            {
                edx = t59;
    COW_AT(101f14fe)
                wr16(self + 0x50u, (uint16_t)(rd16(self + 0x50u) + 1u));
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
    t60 = rd32(rd32(self + 0x60u));
    wr32(COW_IMG(0x10663780u), t60);
    wr32(sp0 - 0x2cu, 0u);
    if ((int32_t)((uint32_t)(int16_t)rd16(self + 0x54u) + rd8(rd32(self + 0x60u) + rd32(rd32(self + 0x60u) + 0xcu) + 0x18u)) <= 0)
    {
        ecx = rd32(self + 0x60u);
        edx = 0u;
        edi = (uint32_t)(int16_t)rd16(self + 0x54u);
        goto L_101f16c8;
    }
    eax = (t60 & 0xffff0000u) | rd16(self + 0x54u);
    ecx = rd32(self + 0x60u);
    COW_AT(101f1532)
    edx = 0u;
    loc_2c = 0u;
L_101f1538: ;
    COW_AT(101f1538)
    if ((int16_t)rd16(self + 0x50u) >= (int16_t)eax)
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
    t61 = cow_thiscall(g, COW_IMG(0x1021cb80u), ecx, 1, edx);
    if (t61 == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x50u) * 8u - (uint32_t)(int16_t)rd16(self + 0x50u);
        goto L_101f16a2;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x50u) * 8u - (uint32_t)(int16_t)rd16(self + 0x50u);
    edx = rd32(self + 0x58u);
    ebx = rd32(self + 0x58u) + (uint32_t)(int16_t)rd16(self + 0x50u) * 0x54u;
    edi = t61;
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
    t62 = rd16(edi);
    t63 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x40u;
    t64 = cow_thiscall(g, COW_IMG(0x1015bc40u), t63, 1, t62);
    t65 = g->ecx;
    t66 = g->edx;
    wr32(sp0 - 0x28u, t64);
    if (t64 == 0u)
    {
        eax = t64;
        goto L_101f16a2;
    }
    eax = t64;
    ecx = t65;
    edx = t66;
    loc_28 = t64;
    COW_AT(101f1597)
    wr32(sp0 - 0x44u, eax);
    t67 = rd8(eax + 0x1b3u);
    wr8(eax + 0x1b3u, (uint8_t)(t67 + 1u));
    g->eax = eax;
    g->ecx = (ecx & 0xffffff00u) | (uint8_t)(t67 + 1u);
    g->esp = sp0 - 0x38u;
    t68 = cow_call_regs(g, COW_IMG(0x1015a680u), g->eax, g->ecx, edx, 1, 3, eax, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    t69 = g->ecx;
    t70 = g->edx;
    wr32(sp0 - 0x24u, t68);
    if (rd16(edi) != 0xffffu)
    {
        eax = t68;
        ecx = t69;
        loc_24 = t68;
        goto L_101f15c0;
    }
    edx = t70;
    loc_24 = t68;
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
    t76 = rd32(COW_IMG(0x101f1794u) + rd8(COW_IMG(0x101f17a0u) + eax) * 4u);
    switch (t76 - RD)
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
        t73 = cow_thiscall(g, rd32(edx + 0x30u), ecx, 2, edi, eax);
        t74 = g->edx;
        eax = t73;
        edx = t74;
    }
    else
    {
        ecx = rd32(self + 0x5cu);
        edx = rd32(rd32(self + 0x5cu));
    COW_AT(101f15cf)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t71 = cow_thiscall(g, rd32(edx + 0x20u), ecx, 0);
        t72 = g->edx;
        eax = t71;
        edx = t72;
    }
    COW_AT(101f15d9)
    if (eax != 0u)
    {
        ebp = eax;
        goto L_101f15ee;
    }
    COW_AT(101f15df)
    t75 = rd32(sp0 - 0x28u);
    wr8(t75 + 0x1b3u, (uint8_t)(rd8(t75 + 0x1b3u) - 1u));
    eax = t75;
L_101f16a2: ;
    COW_AT(101f16a2)
    t87 = rd32(sp0 - 0x2cu) + 1u;
    wr32(sp0 - 0x2cu, t87);
    if ((int32_t)t87 < (int32_t)((uint32_t)(int16_t)rd16(self + 0x54u) + rd8(rd32(self + 0x60u) + rd32(rd32(self + 0x60u) + 0xcu) + 0x18u)))
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x54u);
        ecx = rd32(self + 0x60u);
        loc_2c = t87;
        goto L_101f1534;
    }
    ecx = rd32(self + 0x60u);
    edx = (uint32_t)(int16_t)rd16(self + 0x54u);
    edi = t87;
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
        t88 = cow_stdcall(g, COW_IMG(0x101effd0u), 0);
        t89 = g->ecx;
        wr32(sp0 - 0x24u, t88);
        if ((int32_t)t88 <= 0)
        {
            eax = t88;
            ecx = t89;
        }
        else
        {
            eax = t88;
            loc_24 = t88;
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
            t90 = rd32(self + 0x58u) + (uint32_t)(int16_t)rd16(self + 0x50u) * 0x54u;
            wr32(sp0 - 0x44u, t90);
            wr32(sp0 - 0x48u, edi);
            wr32(sp0 - 0x4cu, ebp);
            g->eax = t90;
            g->ecx = rd32(self + 0x5cu);
            g->edx = rd32(rd32(self + 0x5cu));
            t91 = rd32(self + 0x5cu);
            t92 = rd32(rd32(self + 0x5cu));
            g->esp = sp0 - 0x48u;
            t93 = cow_cdecl(g, COW_IMG(0x101effe0u), 1, ebp);
            t94 = g->ecx;
            t95 = g->edx;
            wr32(sp0 - 0x4cu, t93);
            g->esp = sp0 - 0x40u;
            t96 = cow_thiscall(g, rd32(t95 + 0x48u), t94, 3, t93, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
            if ((uint8_t)t96 == 0u)
            {
                ecx = rd32(sp0 - 0x2cu);
            }
            else
            {
                eax = t96;
                ecx = rd32(sp0 - 0x2cu);
    COW_AT(101f1725)
                if ((int16_t)rd16(ecx - 0x10u) < 0)
                {
    COW_AT(101f172c)
                    wr16(ecx - 0x10u, rd16(self + 0x50u));
                }
    COW_AT(101f1734)
                wr16(self + 0x50u, (uint16_t)(rd16(self + 0x50u) + 1u));
                wr16(ecx, (uint16_t)(rd16(ecx) + 1u));
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
    t97 = (ecx & 0xffff0000u) | rd16(self + 0x50u);
    wr32(sp0 - 0x48u, t97);
    t98 = rd32(self + 0x58u);
    wr32(sp0 - 0x4cu, t98);
    g->esi = self;
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t99 = cow_fastcall(g, COW_IMG(0x101f7020u), self, t98, 3, t98, t97, 1u);
    t100 = g->edx;
    if (rd8(sp0 - 0x2du) == 1u)
    {
        eax = t99;
        edx = t100;
    COW_AT(101f176d)
        g->eax = eax;
        g->esp = sp0 - 0x40u;
        t101 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        if ((int16_t)rd16(self + 0x52u) >= (int32_t)(t101 + (uint32_t)(int16_t)rd16(self + 0x54u)))
        {
            eax = t101 + (uint32_t)(int16_t)rd16(self + 0x54u);
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
    t77 = g->edx;
    wr32(sp0 - 0x44u, ebp);
    wr32(sp0 - 0x48u, rd16(edi));
    wr32(sp0 - 0x4cu, 0x19u);
    wr32(sp0 - 0x50u, 1u);
    cow_fastcall(g, COW_IMG(0x101f4b20u), ebx, t77, 4, 1u, 0x19u, rd16(edi), ebp);
    t78 = g->ecx;
    t79 = g->edx;
    if (rd32(sp0 - 0x24u) == 0u)
    {
        edx = t79;
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
        ecx = t78;
        edx = t79;
    COW_AT(101f164b)
        if (rd32(eax + 0x14c0u) != 0u)
        {
            eax = rd32(eax + 0x14c0u);
    COW_AT(101f1655)
            if (rd16(eax) > 1u)
            {
                eax = (eax & 0xffffff00u) | rd16(eax) > 1u;
    COW_AT(101f1660)
                if ((int16_t)rd16(self + 0x50u) >= (int16_t)rd16(self + 0x54u))
                {
    COW_AT(101f166a)
                    wr32(sp0 - 0x44u, 0x80808080u);
                    t80 = rd32(edi + 4u);
                    wr32(sp0 - 0x48u, t80);
                    wr32(sp0 - 0x4cu, 7u);
                    wr32(sp0 - 0x50u, 2u);
                    g->esp = sp0 - 0x40u;
                    cow_fastcall(g, COW_IMG(0x101f4b20u), ebx, t80, 4, 2u, 7u, t80, 0x80808080u);
                    t81 = g->edx;
                    edx = t81;
                }
            }
        }
    }
    COW_AT(101f167e)
    g->eax = rd32(rd32(self + 0x5cu));
    t82 = rd32(rd32(self + 0x5cu));
    t83 = rd32(self + 0x5cu);
    g->esp = sp0 - 0x40u;
    t84 = cow_thiscall(g, rd32(t82 + 8u), t83, 0);
    t85 = g->ecx;
    wr32(ebx + 0x4cu, t84);
    t86 = rd32(sp0 - 0x28u);
    wr32(ebx + 0x48u, edi);
    wr8(t86 + 0x1b3u, (uint8_t)(rd8(t86 + 0x1b3u) - 1u));
    wr16(self + 0x50u, (uint16_t)(rd16(self + 0x50u) + 1u));
    eax = t86;
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
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x20u, 0u);
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
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x20u, 0u);
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
    case 0x101f1463u:
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
    case 0x101f146eu:
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
    case 0x101f1481u:
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
    case 0x101f1486u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x40u;
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
    case 0x101f14d1u:
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
    case 0x101f14d3u:
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
    case 0x101f14f3u:
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
    case 0x101f1505u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
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
