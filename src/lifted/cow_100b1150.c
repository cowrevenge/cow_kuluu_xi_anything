/* f_0x100b1150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b1150(Guest* g)
{
    uint32_t cf;
    double d31;
    double d5;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b117eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b117e;
    case 0x100b118du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b118d;
    case 0x100b11a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b11a2;
    case 0x100b11c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b11c5;
    case 0x100b11d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b11d8;
    case 0x100b11edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b11ed;
    case 0x100b1212u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1212;
    case 0x100b1226u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1226;
    case 0x100b1238u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1238;
    case 0x100b124du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b124d;
    case 0x100b1283u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1283;
    case 0x100b1299u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1299;
    case 0x100b12abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b12ab;
    case 0x100b12c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b12c0;
    case 0x100b12e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b12e5;
    case 0x100b12f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b12f9;
    case 0x100b1318u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1318;
    case 0x100b1326u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1326;
    case 0x100b1345u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1345;
    case 0x100b1353u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1353;
    case 0x100b1372u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1372;
    case 0x100b1380u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1380;
    case 0x100b139fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b139f;
    case 0x100b13adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b13ad;
    case 0x100b13d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b13d1;
    case 0x100b13dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b13df;
    case 0x100b13feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b13fe;
    case 0x100b140cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b140c;
    case 0x100b142au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b142a;
    case 0x100b1438u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1438;
    case 0x100b1457u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1457;
    case 0x100b1465u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1465;
    case 0x100b147cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100b147c;
    case 0x100b1493u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1493;
    case 0x100b14aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b14aa;
    case 0x100b14c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b14c7;
    case 0x100b14d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b14d5;
    case 0x100b14f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b14f4;
    case 0x100b1502u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1502;
    case 0x100b150fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b150f;
    case 0x100b151eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b151e;
    case 0x100b1533u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1533;
    case 0x100b1543u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1543;
    case 0x100b1548u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1548;
    case 0x100b154du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b154d;
    case 0x100b1552u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1552;
    case 0x100b15a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b15a7;
    case 0x100b15bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b15bb;
    case 0x100b15dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b15da;
    case 0x100b15e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b15e8;
    case 0x100b1607u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1607;
    case 0x100b1615u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1615;
    case 0x100b1634u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1634;
    case 0x100b1642u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1642;
    case 0x100b1661u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1661;
    case 0x100b166fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b166f;
    case 0x100b1685u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1685;
    case 0x100b1693u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1693;
    case 0x100b16a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b16a9;
    case 0x100b16b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b16b7;
    case 0x100b16cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b16cd;
    case 0x100b16dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b16db;
    case 0x100b16f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b16f1;
    case 0x100b16ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b16ff;
    case 0x100b1715u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1715;
    case 0x100b1723u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1723;
    case 0x100b173au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100b173a;
    case 0x100b1751u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1751;
    case 0x100b176bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b176b;
    case 0x100b177bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b177b;
    case 0x100b1780u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1780;
    case 0x100b1785u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1785;
    case 0x100b178au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b178a;
    case 0x100b17e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b17e7;
    case 0x100b17fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b17fb;
    case 0x100b181au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b181a;
    case 0x100b1828u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1828;
    case 0x100b1847u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1847;
    case 0x100b1855u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1855;
    case 0x100b1874u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1874;
    case 0x100b1882u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1882;
    case 0x100b18a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b18a1;
    case 0x100b18afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b18af;
    case 0x100b18ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b18ce;
    case 0x100b18dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b18dc;
    case 0x100b18f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b18f2;
    case 0x100b1900u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1900;
    case 0x100b1916u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1916;
    case 0x100b1924u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1924;
    case 0x100b193au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b193a;
    case 0x100b1948u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1948;
    case 0x100b195eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b195e;
    case 0x100b196cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b196c;
    case 0x100b1983u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100b1983;
    case 0x100b1999u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1999;
    case 0x100b19aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b19ae;
    case 0x100b19ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b19dd;
    case 0x100b19efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b19ef;
    case 0x100b1a01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1a01;
    case 0x100b1a1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1a1a;
    case 0x100b1a2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1a2f;
    case 0x100b1a50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1a50;
    case 0x100b1a61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1a61;
    case 0x100b1a82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1a82;
    case 0x100b1a99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1a99;
    case 0x100b1ac0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1ac0;
    case 0x100b1ad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1ad5;
    case 0x100b1ae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1ae7;
    case 0x100b1afdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1afd;
    case 0x100b1b14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1b14;
    case 0x100b1b2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1b2a;
    case 0x100b1b50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1b50;
    case 0x100b1b64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1b64;
    case 0x100b1b84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1b84;
    case 0x100b1b92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1b92;
    case 0x100b1bb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1bb2;
    case 0x100b1bc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1bc0;
    case 0x100b1be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1be0;
    case 0x100b1beeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1bee;
    case 0x100b1c0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1c0e;
    case 0x100b1c1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1c1c;
    case 0x100b1c41u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1c41;
    case 0x100b1c4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1c4f;
    case 0x100b1c6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1c6f;
    case 0x100b1c7du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1c7d;
    case 0x100b1c9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1c9c;
    case 0x100b1caau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1caa;
    case 0x100b1ccau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1cca;
    case 0x100b1cd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1cd8;
    case 0x100b1cf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1cf8;
    case 0x100b1d06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100b1d06;
    case 0x100b1d1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100b1d1e;
    case 0x100b1d35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1d35;
    case 0x100b1d47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100b1d47;
    case 0x100b1d72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100b1d72;
    case 0x100b1d7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100b1d7a;
    default: break;
    }
#endif

    COW_AT(100b1150)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = (in_edi & 0xffff0000u) | rd16(self + 0x256u);
    t2 = (rd32(self + 0x20u) & 0xffffff00u) | rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u);
    if ((uint8_t)t2 > 0x17u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_100b1d7a;
    }
    eax = (uint8_t)t2;
    ecx = t2;
    edi = t1;
    COW_AT(100b117e)
    t3 = rd32(COW_IMG(0x100b1d8cu) + rd8(COW_IMG(0x100b1dc4u) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x100b118du: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b118d;
    case 0x100b11d8u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b11d8;
    case 0x100b1238u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1238;
    case 0x100b12abu: goto L_100b12ab;
    case 0x100b1493u: goto L_100b1493;
    case 0x100b151eu: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b151e;
    case 0x100b1751u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1751;
    case 0x100b1999u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1999;
    case 0x100b19ddu: goto L_100b19dd;
    case 0x100b1a1au: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1a1a;
    case 0x100b1a50u: goto L_100b1a50;
    case 0x100b1a99u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1a99;
    case 0x100b1b14u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1b14;
    case 0x100b1d35u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1d35;
    default: rt_fatal(g, COW_IMG(0x100b1186u), "switch");
    }
    return;
L_100b118d: ;
    COW_AT(100b118d)
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_100b1d72;
    }
    eax = rd16(self + 2u);
    COW_AT(100b11a2)
    wr32(sp0 - 0x20u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t72 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfcu) != (uint16_t)t72)
    {
        eax = t72;
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b11c5)
        wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 1u);
        wr16(ecx + 0xfcu, (uint16_t)eax);
    }
L_100b1502: ;
    COW_AT(100b1502)
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
L_100b150f: ;
    COW_AT(100b150f)
    wr32(eax + 0x130u, rd32(eax + 0x130u) | 0x20000u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_100b1d72: ;
    COW_AT(100b1d72)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
L_100b1d7a: ;
    COW_AT(100b1d7a)
    wr8(self + 0x25au, 1u);
    g->ebx = loc_10;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return;
L_100b11d8: ;
    COW_AT(100b11d8)
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_100b1d72;
    }
    eax = rd16(self + 2u);
    COW_AT(100b11ed)
    wr32(sp0 - 0x20u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t70 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu) != (uint32_t)(int8_t)t70)
    {
        eax = t70;
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b1212)
        wr8(ecx + 0xefu, (uint8_t)eax);
        t71 = (rd32(ecx + 0x120u) & 0xffffff00u) | (uint8_t)(rd32(ecx + 0x120u) | 1u);
        wr32(ecx + 0x120u, t71);
    }
    COW_AT(100b1226)
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    goto L_100b150f;
L_100b1238: ;
    COW_AT(100b1238)
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_100b1d72;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b124d)
    wr32(sp0 - 0x20u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t69 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) != (uint16_t)t69)
    {
        eax = t69;
        ecx = (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u);
        edx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        cf = rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) < (uint16_t)t69;
        pf = PARITY((uint8_t)(rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) - (uint16_t)t69));
        zf = (uint16_t)(rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) - (uint16_t)t69) == 0u;
        sf = (int16_t)(rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) - (uint16_t)t69) < 0;
        of = ((rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) ^ (uint16_t)t69) & (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) ^ (uint16_t)(rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) - (uint16_t)t69))) >> 0xfu;
    COW_AT(100b1283)
        wr16(ecx * 2u + edx + 0xfcu, (uint16_t)eax);
        wr16(edx + 0xf4u, (uint16_t)(rd16(edx + 0xf4u) | 1u << (ecx & 0x1fu)));
    }
    COW_AT(100b1299)
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    goto L_100b150f;
L_100b12ab: ;
    COW_AT(100b12ab)
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        edx = rd16(self + 2u);
    COW_AT(100b12c0)
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t55 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu) == (uint32_t)(int8_t)t55)
        {
            eax = t55;
            edx = rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu);
        }
        else
        {
            eax = t55;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu);
    COW_AT(100b12e5)
            wr8(ecx + 0xefu, (uint8_t)eax);
            t56 = (rd32(ecx + 0x120u) & 0xffffff00u) | (uint8_t)(rd32(ecx + 0x120u) | 1u);
            wr32(ecx + 0x120u, t56);
            eax = t56;
        }
    COW_AT(100b12f9)
        wr32(sp0 - 0x20u, 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t57 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t58 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfcu) == (uint16_t)t57)
        {
            eax = t57;
            edx = t58;
        }
        else
        {
            eax = t57;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t58;
    COW_AT(100b1318)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 1u);
            wr16(ecx + 0xfcu, (uint16_t)eax);
        }
    COW_AT(100b1326)
        wr32(sp0 - 0x20u, 6u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t59 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfeu) == (uint16_t)t59)
        {
            eax = t59;
            edx = rd16(self + 2u);
        }
        else
        {
            eax = t59;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
    COW_AT(100b1345)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 2u);
            wr16(ecx + 0xfeu, (uint16_t)eax);
        }
    COW_AT(100b1353)
        wr32(sp0 - 0x20u, 8u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t60 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
        t61 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x100u) == (uint16_t)t60)
        {
            eax = t60;
            edx = t61;
        }
        else
        {
            eax = t60;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t61;
    COW_AT(100b1372)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 4u);
            wr16(ecx + 0x100u, (uint16_t)eax);
        }
    COW_AT(100b1380)
        wr32(sp0 - 0x20u, 0xau);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t62 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x102u) == (uint16_t)t62)
        {
            eax = t62;
            edx = rd16(self + 2u);
        }
        else
        {
            eax = t62;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
    COW_AT(100b139f)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 8u);
            wr16(ecx + 0x102u, (uint16_t)eax);
        }
    COW_AT(100b13ad)
        wr32(sp0 - 0x20u, 0xcu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t63 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
        t64 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x104u) == (uint16_t)t63)
        {
            eax = t63;
            edx = t64;
        }
        else
        {
            eax = t63;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t64;
    COW_AT(100b13d1)
            wr16(ecx + 0xf4u, rd16(ecx + 0xf4u) | 0x10u);
            wr16(ecx + 0x104u, (uint16_t)eax);
        }
    COW_AT(100b13df)
        wr32(sp0 - 0x20u, 0xeu);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t65 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xeu);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x106u) == (uint16_t)t65)
        {
            eax = t65;
            edx = rd16(self + 2u);
        }
        else
        {
            eax = t65;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
    COW_AT(100b13fe)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x20u);
            wr16(ecx + 0x106u, (uint16_t)eax);
        }
    COW_AT(100b140c)
        wr32(sp0 - 0x20u, 0x10u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t66 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0x10u);
        t67 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x108u) == (uint16_t)t66)
        {
            eax = t66;
            edx = t67;
        }
        else
        {
            eax = t66;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t67;
    COW_AT(100b142a)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x40u);
            wr16(ecx + 0x108u, (uint16_t)eax);
        }
    COW_AT(100b1438)
        wr32(sp0 - 0x20u, 0x12u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t68 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0x12u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x10au) != (uint16_t)t68)
        {
            eax = t68;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b1457)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x80u);
            wr16(ecx + 0x10au, (uint16_t)eax);
        }
    COW_AT(100b1465)
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x130u, rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x130u) | 0x20000u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(100b147c)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0x14u));
    wr8(self + 0x25au, 1u);
    g->ebx = loc_10;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return;
L_100b1493: ;
    COW_AT(100b1493)
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_100b1d72;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b14aa)
    wr8(eax + 0xeeu, 7u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfcu) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        edx = rd16(self + 2u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        edx = rd16(self + 2u);
    COW_AT(100b14c7)
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 1u);
        wr16(eax + 0xfcu, 0u);
    }
    COW_AT(100b14d5)
    wr32(sp0 - 0x20u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t54 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x10eu) != (uint16_t)t54)
    {
        eax = t54;
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b14f4)
        wr8(ecx + 0xf5u, rd8(ecx + 0xf5u) | 2u);
        wr16(ecx + 0x10eu, (uint16_t)eax);
    }
    goto L_100b1502;
L_100b151e: ;
    COW_AT(100b151e)
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        eax = rd16(self + 2u);
    COW_AT(100b1533)
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t44 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        if ((int32_t)t44 < 3)
        {
            edi = 0u;
        }
        else
        {
            eax = t44;
    COW_AT(100b1543)
            if ((int32_t)eax <= 4) goto L_100b154d;
    COW_AT(100b1548)
            if (eax != 8u)
            {
                edi = 0u;
                goto L_100b1552;
            }
L_100b154d: ;
    COW_AT(100b154d)
            edi = 1u;
        }
L_100b1552: ;
    COW_AT(100b1552)
        wr32(sp0 - 0x20u, 4u);
        t45 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x120u) & 0x3fffffffu) ^ (uint32_t)(uint8_t)edi << 0x1eu;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x120u, t45);
        g->eax = (uint32_t)(uint8_t)edi << 0x1eu;
        g->esp = sp0 - 0x1cu;
        t46 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu) == (uint32_t)(int8_t)((uint8_t)t46 + 0x20u))
        {
            eax = (t46 & 0xffffff00u) | (uint8_t)((uint8_t)t46 + 0x20u);
            edx = rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu);
        }
        else
        {
            eax = (t46 & 0xffffff00u) | (uint8_t)((uint8_t)t46 + 0x20u);
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu);
    COW_AT(100b15a7)
            wr8(ecx + 0xefu, (uint8_t)eax);
            t47 = (rd32(ecx + 0x120u) & 0xffffff00u) | (uint8_t)(rd32(ecx + 0x120u) | 1u);
            wr32(ecx + 0x120u, t47);
            eax = t47;
        }
    COW_AT(100b15bb)
        wr32(sp0 - 0x20u, 6u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t48 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        t49 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x100u) == (uint16_t)t48)
        {
            eax = t48;
            edx = t49;
        }
        else
        {
            eax = t48;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t49;
    COW_AT(100b15da)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 4u);
            wr16(ecx + 0x100u, (uint16_t)eax);
        }
    COW_AT(100b15e8)
        wr32(sp0 - 0x20u, 8u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t50 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfeu) == (uint16_t)t50)
        {
            eax = t50;
            edx = rd16(self + 2u);
        }
        else
        {
            eax = t50;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
    COW_AT(100b1607)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 2u);
            wr16(ecx + 0xfeu, (uint16_t)eax);
        }
    COW_AT(100b1615)
        wr32(sp0 - 0x20u, 0xau);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t51 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
        t52 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x106u) == (uint16_t)t51)
        {
            eax = t51;
            edx = t52;
        }
        else
        {
            eax = t51;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t52;
    COW_AT(100b1634)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x20u);
            wr16(ecx + 0x106u, (uint16_t)eax);
        }
    COW_AT(100b1642)
        wr32(sp0 - 0x20u, 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t53 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x102u) != (uint16_t)t53)
        {
            eax = t53;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b1661)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 8u);
            wr16(ecx + 0x102u, (uint16_t)eax);
        }
    COW_AT(100b166f)
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x104u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b1685)
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x10u);
            wr16(eax + 0x104u, 0u);
        }
    COW_AT(100b1693)
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfcu) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b16a9)
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 1u);
            wr16(eax + 0xfcu, 0u);
        }
    COW_AT(100b16b7)
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x108u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b16cd)
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x40u);
            wr16(eax + 0x108u, 0u);
        }
    COW_AT(100b16db)
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x10au) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b16f1)
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x80u);
            wr16(eax + 0x10au, 0u);
        }
    COW_AT(100b16ff)
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x10cu) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b1715)
            wr8(eax + 0xf5u, rd8(eax + 0xf5u) | 1u);
            wr16(eax + 0x10cu, 0u);
        }
    COW_AT(100b1723)
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x130u, rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x130u) | 0x20000u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(100b173a)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xeu));
    wr8(self + 0x25au, 1u);
    g->ebx = loc_10;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return;
L_100b1751: ;
    COW_AT(100b1751)
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        eax = rd16(self + 2u);
    COW_AT(100b176b)
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t32 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        if ((int32_t)t32 < 3)
        {
            edi = 0u;
        }
        else
        {
            eax = t32;
    COW_AT(100b177b)
            if ((int32_t)eax <= 4) goto L_100b1785;
    COW_AT(100b1780)
            if (eax != 8u)
            {
                edi = 0u;
                goto L_100b178a;
            }
L_100b1785: ;
    COW_AT(100b1785)
            edi = 1u;
        }
L_100b178a: ;
    COW_AT(100b178a)
        wr32(sp0 - 0x20u, 4u);
        t33 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x120u) & 0x3fffffffu) ^ (uint32_t)(uint8_t)edi << 0x1eu;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x120u, t33);
        g->eax = (uint32_t)(uint8_t)edi << 0x1eu;
        g->esp = sp0 - 0x1cu;
        t34 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t35 = (t34 & 0xffffff00u) | (uint8_t)((uint8_t)t34 + 0x20u);
        wr32(sp0 - 0xcu, t35);
        if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu) == (uint32_t)(int8_t)t35)
        {
            eax = t35;
            edx = (uint32_t)(int8_t)t35;
        }
        else
        {
            eax = t35;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = (uint32_t)(int8_t)t35;
    COW_AT(100b17e7)
            wr8(ecx + 0xefu, (uint8_t)eax);
            t36 = (rd32(ecx + 0x120u) & 0xffffff00u) | (uint8_t)(rd32(ecx + 0x120u) | 1u);
            wr32(ecx + 0x120u, t36);
            eax = t36;
        }
    COW_AT(100b17fb)
        wr32(sp0 - 0x20u, 6u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t37 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        t38 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x100u) == (uint16_t)t37)
        {
            eax = t37;
            edx = t38;
        }
        else
        {
            eax = t37;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t38;
    COW_AT(100b181a)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 4u);
            wr16(ecx + 0x100u, (uint16_t)eax);
        }
    COW_AT(100b1828)
        wr32(sp0 - 0x20u, 8u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t39 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfeu) == (uint16_t)t39)
        {
            eax = t39;
            edx = rd16(self + 2u);
        }
        else
        {
            eax = t39;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
    COW_AT(100b1847)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 2u);
            wr16(ecx + 0xfeu, (uint16_t)eax);
        }
    COW_AT(100b1855)
        wr32(sp0 - 0x20u, 0xau);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t40 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
        t41 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x106u) == (uint16_t)t40)
        {
            eax = t40;
            edx = t41;
        }
        else
        {
            eax = t40;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t41;
    COW_AT(100b1874)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x20u);
            wr16(ecx + 0x106u, (uint16_t)eax);
        }
    COW_AT(100b1882)
        wr32(sp0 - 0x20u, 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t42 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x102u) == (uint16_t)t42)
        {
            eax = t42;
            edx = rd16(self + 2u);
        }
        else
        {
            eax = t42;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
    COW_AT(100b18a1)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 8u);
            wr16(ecx + 0x102u, (uint16_t)eax);
        }
    COW_AT(100b18af)
        wr32(sp0 - 0x20u, 0xeu);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t43 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xeu);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x104u) != (uint16_t)t43)
        {
            eax = t43;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b18ce)
            wr16(ecx + 0xf4u, rd16(ecx + 0xf4u) | 0x10u);
            wr16(ecx + 0x104u, (uint16_t)eax);
        }
    COW_AT(100b18dc)
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfcu) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b18f2)
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 1u);
            wr16(eax + 0xfcu, 0u);
        }
    COW_AT(100b1900)
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x108u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b1916)
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x40u);
            wr16(eax + 0x108u, 0u);
        }
    COW_AT(100b1924)
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x10au) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b193a)
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x80u);
            wr16(eax + 0x10au, 0u);
        }
    COW_AT(100b1948)
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x10cu) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b195e)
            wr8(eax + 0xf5u, rd8(eax + 0xf5u) | 1u);
            wr16(eax + 0x10cu, 0u);
        }
    COW_AT(100b196c)
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x130u, rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x130u) | 0x20000u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(100b1983)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0x10u));
    wr8(self + 0x25au, 1u);
    g->ebx = loc_10;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return;
L_100b1999: ;
    COW_AT(100b1999)
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b19ae)
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t30 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        wr32(sp0 - 0xcu, t30);
        d31 = fr(g, (double)(int32_t)t30 * (double)rdf32(COW_IMG(0x10329a18u)));
        wrf32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x204u, (float)d31);
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    goto L_100b1d72;
L_100b19dd: ;
    COW_AT(100b19dd)
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u) goto L_100b1a01;
    eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    COW_AT(100b19ef)
    if (!(rd32(eax + 0x120u) >> 9u & 1u))
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_100b1d7a;
    }
L_100b1a01: ;
    COW_AT(100b1a01)
    wr8(self + 0x25au, 1u);
    wr16(self + 0x256u, (uint16_t)(edi + 2u));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_100b1a1a: ;
    COW_AT(100b1a1a)
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        eax = rd16(self + 2u);
    COW_AT(100b1a2f)
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t28 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t29 = g->edx;
        wr32(sp0 - 0x20u, t28);
        cow_fastcall(g, COW_IMG(0x1008a750u), rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u), t29, 1, t28);
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    goto L_100b1d72;
L_100b1a50: ;
    COW_AT(100b1a50)
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b1a61)
        t26 = rd32(eax + 0x128u);
        t27 = t26 ^ (((uint32_t)(int8_t)((uint8_t)ecx != 0x12u) << 4u ^ rd32(eax + 0x128u)) & 0x10u);
        wr32(eax + 0x128u, t27);
    }
    COW_AT(100b1a82)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_100b1a99: ;
    COW_AT(100b1a99)
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, sp0 - 4u);
    wr32(sp0 - 0x28u, 2u);
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t21 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t22 = g->edx;
    wr32(sp0 - 0x28u, t21);
    g->esp = sp0 - 0x1cu;
    t23 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t22, 3, t21, sp0 - 4u, sp0 - 0xcu);
    if ((uint8_t)t23 == 1u)
    {
        ebx = (uint8_t)ecx != 0x14u;
    COW_AT(100b1ac0)
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0xcu) * 4u) != 0u)
        {
            ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0xcu) * 4u);
    COW_AT(100b1ad5)
            t24 = rd32(ecx + 0x74u);
            wr32(sp0 - 0xcu, t24);
            if (rd32(ecx + 0x78u) == rd32(sp0 - 4u))
            {
    COW_AT(100b1ae7)
                t25 = (ebx & 1u) << 4u ^ ((rd32(ecx + 0x128u) & 0xffffff00u) | (rd32(ecx + 0x128u) & 0xefu));
                wr32(ecx + 0x128u, t25);
            }
        }
    }
    COW_AT(100b1afd)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_100b1b14: ;
    COW_AT(100b1b14)
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    COW_AT(100b1b2a)
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        if (rd8(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0xefu) == (uint32_t)(int8_t)t6)
        {
            eax = t6;
            edx = (uint32_t)(int8_t)t6;
        }
        else
        {
            eax = t6;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = (uint32_t)(int8_t)t6;
    COW_AT(100b1b50)
            wr8(ecx + 0xefu, (uint8_t)eax);
            t7 = (rd32(ecx + 0x120u) & 0xffffff00u) | (uint8_t)(rd32(ecx + 0x120u) | 1u);
            wr32(ecx + 0x120u, t7);
            eax = t7;
        }
    COW_AT(100b1b64)
        wr32(sp0 - 0x20u, 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t8 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t9 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0xfcu) == (uint16_t)t8)
        {
            eax = t8;
            edx = t9;
        }
        else
        {
            eax = t8;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = t9;
    COW_AT(100b1b84)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 1u);
            wr16(ecx + 0xfcu, (uint16_t)eax);
        }
    COW_AT(100b1b92)
        wr32(sp0 - 0x20u, 6u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t10 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0xfeu) == (uint16_t)t10)
        {
            eax = t10;
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        }
        else
        {
            eax = t10;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    COW_AT(100b1bb2)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 2u);
            wr16(ecx + 0xfeu, (uint16_t)eax);
        }
    COW_AT(100b1bc0)
        wr32(sp0 - 0x20u, 8u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
        t12 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x100u) == (uint16_t)t11)
        {
            eax = t11;
            edx = t12;
        }
        else
        {
            eax = t11;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = t12;
    COW_AT(100b1be0)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 4u);
            wr16(ecx + 0x100u, (uint16_t)eax);
        }
    COW_AT(100b1bee)
        wr32(sp0 - 0x20u, 0xau);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t13 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x102u) == (uint16_t)t13)
        {
            eax = t13;
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        }
        else
        {
            eax = t13;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    COW_AT(100b1c0e)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 8u);
            wr16(ecx + 0x102u, (uint16_t)eax);
        }
    COW_AT(100b1c1c)
        wr32(sp0 - 0x20u, 0xcu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t14 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
        t15 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x104u) == (uint16_t)t14)
        {
            eax = t14;
            edx = t15;
        }
        else
        {
            eax = t14;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = t15;
    COW_AT(100b1c41)
            wr16(ecx + 0xf4u, rd16(ecx + 0xf4u) | 0x10u);
            wr16(ecx + 0x104u, (uint16_t)eax);
        }
    COW_AT(100b1c4f)
        wr32(sp0 - 0x20u, 0xeu);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t16 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xeu);
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x106u) == (uint16_t)t16)
        {
            eax = t16;
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        }
        else
        {
            eax = t16;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    COW_AT(100b1c6f)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x20u);
            wr16(ecx + 0x106u, (uint16_t)eax);
        }
    COW_AT(100b1c7d)
        wr32(sp0 - 0x20u, 0x10u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t17 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0x10u);
        t18 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x108u) == (uint16_t)t17)
        {
            eax = t17;
            edx = t18;
        }
        else
        {
            eax = t17;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = t18;
    COW_AT(100b1c9c)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x40u);
            wr16(ecx + 0x108u, (uint16_t)eax);
        }
    COW_AT(100b1caa)
        wr32(sp0 - 0x20u, 0x12u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t19 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0x12u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x10au) == (uint16_t)t19)
        {
            eax = t19;
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        }
        else
        {
            eax = t19;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    COW_AT(100b1cca)
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x80u);
            wr16(ecx + 0x10au, (uint16_t)eax);
        }
    COW_AT(100b1cd8)
        wr32(sp0 - 0x20u, 0x14u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t20 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0x14u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x10cu) != (uint16_t)t20)
        {
            eax = t20;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    COW_AT(100b1cf8)
            wr8(ecx + 0xf5u, rd8(ecx + 0xf5u) | 1u);
            wr16(ecx + 0x10cu, (uint16_t)eax);
        }
    COW_AT(100b1d06)
        wr32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x130u, rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x130u) | 0x20000u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(100b1d1e)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0x16u));
    wr8(self + 0x25au, 1u);
    g->ebx = loc_10;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return;
L_100b1d35: ;
    COW_AT(100b1d35)
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    COW_AT(100b1d47)
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t4 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        wr32(sp0 - 4u, t4);
        d5 = fr(g, (double)(int32_t)t4 * (double)rdf32(COW_IMG(0x10329a18u)));
        wrf32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x204u, (float)d5);
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    goto L_100b1d72;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b1150(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b117eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b118du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b11a2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b11c5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b11d8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b11edu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1212u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1226u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1238u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b124du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1283u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1299u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b12abu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b12c0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b12e5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b12f9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1318u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1326u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1345u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1353u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1372u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1380u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b139fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b13adu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b13d1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100b13dfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100b13feu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100b140cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100b142au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1438u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1457u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1465u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b147cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1493u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b14aau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b14c7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b14d5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b14f4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1502u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b150fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b151eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1533u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1543u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1548u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b154du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1552u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b15a7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b15bbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b15dau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b15e8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1607u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1615u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1634u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1642u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1661u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b166fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1685u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1693u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b16a9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b16b7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b16cdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b16dbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b16f1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b16ffu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1715u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1723u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b173au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1751u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b176bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b177bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1780u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1785u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b178au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b17e7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b17fbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b181au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1828u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1847u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1855u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1874u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1882u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b18a1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b18afu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b18ceu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b18dcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b18f2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1900u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1916u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1924u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b193au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b1948u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b195eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b196cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100b1983u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100b1999u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b19aeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b19ddu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b19efu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1a01u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1a1au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1a2fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1a50u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1a61u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1a82u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1a99u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1ac0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100b1ad5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100b1ae7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100b1afdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100b1b14u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1b2au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1b50u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1b64u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1b84u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1b92u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1bb2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1bc0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1be0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1beeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1c0eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1c1cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1c41u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100b1c4fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100b1c6fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100b1c7du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100b1c9cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1caau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1ccau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1cd8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1cf8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1d06u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1d1eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1d35u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1d47u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1d72u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b1d7au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b1150(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100b1150(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
