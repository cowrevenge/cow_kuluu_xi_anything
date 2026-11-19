/* f_0x10064910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10064910(Guest* g)
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
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
    uint32_t loc_110;
    uint32_t loc_114;
    uint32_t loc_118;
    uint32_t loc_11c;
    uint32_t loc_120;
    uint32_t loc_124;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 300u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10064930u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_10c = rd32(sp0 - 0x10cu); goto E_10064930;
    case 0x1006493fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_1006493f;
    case 0x1006494bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006494b;
    case 0x10064960u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_10064960;
    case 0x1006496eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1006496e;
    case 0x10064987u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_108 = rd32(sp0 - 0x108u); goto E_10064987;
    case 0x10064997u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_108 = rd32(sp0 - 0x108u); goto E_10064997;
    case 0x1006499fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_108 = rd32(sp0 - 0x108u); goto E_1006499f;
    case 0x100649a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); goto E_100649a1;
    case 0x100649a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); goto E_100649a9;
    case 0x100649bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100649ba;
    case 0x100649c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100649c8;
    case 0x100649d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100649d6;
    case 0x100649dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100649df;
    case 0x100649e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100649e4;
    case 0x100649eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100649ea;
    case 0x100649f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100649f2;
    case 0x100649f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100649f4;
    case 0x100649f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_100649f7;
    case 0x100649fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_100649fd;
    case 0x10064a0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_10064a0a;
    case 0x10064a25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_10064a25;
    case 0x10064a2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_10064a2a;
    case 0x10064a30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_10064a30;
    case 0x10064a33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_10064a33;
    case 0x10064a4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064a4f;
    case 0x10064a65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_10064a65;
    case 0x10064a7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064a7c;
    case 0x10064a84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_110 = rd32(sp0 - 0x110u); goto E_10064a84;
    case 0x10064a8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_110 = rd32(sp0 - 0x110u); goto E_10064a8d;
    case 0x10064a90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_110 = rd32(sp0 - 0x110u); goto E_10064a90;
    case 0x10064aa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064aa5;
    case 0x10064aafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064aaf;
    case 0x10064ab1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_110 = rd32(sp0 - 0x110u); goto E_10064ab1;
    case 0x10064abeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064abe;
    case 0x10064accu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064acc;
    case 0x10064adbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064adb;
    case 0x10064addu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064add;
    case 0x10064ae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_110 = rd32(sp0 - 0x110u); goto E_10064ae7;
    case 0x10064af4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064af4;
    case 0x10064b02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064b02;
    case 0x10064b11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064b11;
    case 0x10064b13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064b13;
    case 0x10064b1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); goto E_10064b1b;
    case 0x10064b28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); goto E_10064b28;
    case 0x10064b35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_10064b35;
    case 0x10064b51u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064b51;
    case 0x10064b6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064b6a;
    case 0x10064b77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064b77;
    case 0x10064b85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064b85;
    case 0x10064bb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064bb6;
    case 0x10064bccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064bcc;
    case 0x10064bdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064bdc;
    case 0x10064bfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064bfb;
    case 0x10064c16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_108 = rd32(sp0 - 0x108u); goto E_10064c16;
    default: break;
    }
#endif

    COW_AT(10064910)
    wr32(sp0 - 0x114u, in_ebx);
    wr32(sp0 - 0x118u, in_ebp);
    wr32(sp0 - 0x11cu, in_esi);
    wr32(sp0 - 0x120u, in_edi);
    wr32(sp0 - 0x10cu, self);
    wr32(sp0 - 0x110u, 0u);
    if (rd32(self + 0x22cu) == 0u)
    {
        eax = rd32(self + 0x22cu);
        edx = in_edx;
        loc_114 = in_ebx;
        loc_118 = in_ebp;
        loc_11c = in_esi;
        loc_120 = in_edi;
        goto L_10064960;
    }
    eax = rd32(self + 0x22cu);
    edx = in_edx;
    loc_114 = in_ebx;
    loc_118 = in_ebp;
    loc_11c = in_esi;
    loc_120 = in_edi;
    loc_10c = self;
L_10064930: ;
    COW_AT(10064930)
    t1 = rd32(eax * 4u + self + 0x22cu);
    wr32(sp0 - 0x104u, t1);
    if (rd32(eax * 4u + self + 0x22cu) == 0u) goto L_10064960;
    esi = t1;
    loc_104 = t1;
    COW_AT(1006493f)
    wr32(sp0 - 0x124u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t2 = cow_thiscall(g, COW_IMG(0x1006b850u), esi, 1, 0u);
    t3 = g->edx;
    if (t2 != 0u)
    {
        edx = t3;
        goto L_1006496e;
    }
    eax = t2;
    edx = t3;
    COW_AT(1006494b)
    g->ebx = 0u;
    g->esp = sp0 - 0x120u;
    cow_fastcall(g, COW_IMG(0x10064870u), self, edx, 0);
    t4 = g->edx;
    wr32(sp0 - 0x110u, 0u);
    if (rd32(self + 0x22cu) != 0u)
    {
        eax = rd32(self + 0x22cu);
        edx = t4;
        loc_114 = rd32(sp0 - 0x114u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
        loc_10c = rd32(sp0 - 0x10cu);
        goto L_10064930;
    }
    eax = rd32(self + 0x22cu);
    edx = t4;
    loc_114 = rd32(sp0 - 0x114u);
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
L_10064960: ;
    COW_AT(10064960)
    g->ebx = loc_114;
    g->esi = loc_11c;
    g->edi = loc_120;
    g->ebp = loc_118;
    g->edx = edx;
    return 0xffffffffu;
L_1006496e: ;
    COW_AT(1006496e)
    t5 = rd32(esi + 4u);
    wr32(sp0 - 0x124u, t5);
    g->eax = t5;
    g->esp = sp0 - 0x120u;
    t6 = cow_fastcall(g, COW_IMG(0x10067e70u), self + 0x330u, edx, 1, t5);
    t7 = g->edx;
    wr32(sp0 - 0x108u, t6);
    if (t6 != 0u)
    {
        eax = t6;
        edx = t7;
        loc_108 = t6;
        goto L_10064997;
    }
    edx = t7;
L_10064987: ;
    COW_AT(10064987)
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    g->edx = edx;
    return 1u;
L_10064997: ;
    COW_AT(10064997)
    if ((int32_t)eax <= 0) goto L_10064c16;
    COW_AT(1006499f)
    ebx = 0u;
    ebp = self + 0x330u;
    edi = self;
    loc_110 = rd32(sp0 - 0x110u);
L_100649a9: ;
    COW_AT(100649a9)
    wr32(sp0 - 0x124u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t8 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
    t9 = g->edx;
    if (rd8(t8) != 0x2fu)
    {
        eax = t8;
        edx = t9;
        goto L_10064a4f;
    }
    eax = t8;
    edx = t9;
    COW_AT(100649ba)
    wr32(sp0 - 0x124u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t10 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
    t11 = g->edx;
    if (rd8(t10 + 1u) == 0x2fu)
    {
        edx = t11;
        goto L_10064987;
    }
    eax = t10;
    edx = t11;
    COW_AT(100649c8)
    wr32(sp0 - 0x124u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t12 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
    t13 = g->ecx;
    t14 = g->edx;
    if (rd8(t12 + 1u) != 0x2au)
    {
        eax = t12;
        edx = t14;
        goto L_10064a4f;
    }
    ecx = t13;
    edx = t14;
    COW_AT(100649d6)
    if (rd8(rd32(esi + 4u)) == 0u)
    {
        eax = rd32(esi + 4u);
        ecx = (ecx & 0xffffff00u) | rd8(rd32(esi + 4u));
        goto L_100649f7;
    }
    eax = rd32(esi + 4u);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(esi + 4u));
L_100649df: ;
    COW_AT(100649df)
    if ((uint8_t)ecx != 0x2fu) goto L_100649ea;
    COW_AT(100649e4)
    if (rd8(eax + 1u) == 0x2au) goto L_100649f4;
L_100649ea: ;
    COW_AT(100649ea)
    if (rd8(eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        goto L_100649df;
    }
    eax = eax + 1u;
    COW_AT(100649f2)
L_100649fd: ;
    COW_AT(100649fd)
    wr32(sp0 - 0x124u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t15 = cow_thiscall(g, COW_IMG(0x1006b850u), esi, 1, 0u);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 != 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_100649f7;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(10064a0a)
    wr32(sp0 - 0x124u, COW_IMG(0x10353b54u));
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x11cu;
    t18 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353b54u), rd32(sp0 - 0x120u));
    t19 = g->edx;
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    g->edx = t19;
    return 0xffffffffu;
L_100649a1: ;
    COW_AT(100649a1)
    esi = rd32(sp0 - 0x104u);
    edi = rd32(sp0 - 0x10cu);
    goto L_100649a9;
L_100649f4: ;
    COW_AT(100649f4)
    eax = eax + 2u;
L_100649f7: ;
    COW_AT(100649f7)
    if (rd8(eax) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        goto L_10064a25;
    }
    goto L_100649fd;
L_10064a25: ;
    COW_AT(10064a25)
    if ((uint8_t)ecx != 0x2au) goto L_10064a30;
    COW_AT(10064a2a)
    if (rd8(eax + 1u) == 0x2fu) goto L_10064a33;
L_10064a30: ;
    COW_AT(10064a30)
    eax = eax + 1u;
    goto L_100649f7;
L_10064a33: ;
    COW_AT(10064a33)
    wr32(sp0 - 0x124u, eax + 2u);
    g->eax = eax + 2u;
    g->esp = sp0 - 0x120u;
    t20 = cow_fastcall(g, COW_IMG(0x10067e70u), edi + 0x330u, edx, 1, eax + 2u);
    t21 = g->edx;
    wr32(sp0 - 0x108u, t20);
    edx = t21;
    ebx = 0u;
    ebp = edi + 0x330u;
    loc_108 = t20;
    loc_110 = rd32(sp0 - 0x110u);
L_10064b1b: ;
    COW_AT(10064b1b)
    if ((int32_t)(ebx + 1u) < (int32_t)loc_108)
    {
        eax = loc_108;
        ebx = ebx + 1u;
        goto L_100649a1;
    }
    COW_AT(10064b28)
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    g->edx = edx;
    return 0u;
L_10064a4f: ;
    COW_AT(10064a4f)
    wr32(sp0 - 0x124u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t22 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x124u, ebx);
    if (rd8(t22) == 0x23u)
    {
        eax = t22;
        ecx = ebp;
        edx = t24;
        loc_124 = ebx;
        goto L_10064b35;
    }
    eax = t22;
    ecx = ebp;
    edx = t24;
    loc_124 = ebx;
    COW_AT(10064a65)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t25 = cow_thiscall(g, COW_IMG(0x10068050u), ecx, 1, loc_124);
    t26 = g->edx;
    esi = t25;
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
        edx = t26;
        loc_110 = rd32(sp0 - 0x110u);
    }
    else
    {
        edx = t26;
    COW_AT(10064a7c)
        wr32(sp0 - 0x110u, 1u);
        loc_110 = 1u;
    }
    COW_AT(10064a84)
    if (loc_110 == 1u)
    {
        eax = loc_110 - 1u;
        ecx = ebp;
    COW_AT(10064ae7)
        wr32(sp0 - 0x124u, ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t39 = cow_thiscall(g, COW_IMG(0x10068050u), ecx, 1, ebx);
        t40 = g->edx;
        if (rd8(t39) == 0u)
        {
            edx = t40;
            loc_108 = rd32(sp0 - 0x108u);
            loc_110 = rd32(sp0 - 0x110u);
            goto L_10064b1b;
        }
        eax = t39;
        edx = t40;
        esi = 0u;
L_10064af4: ;
    COW_AT(10064af4)
        wr32(sp0 - 0x124u, ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t41 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
        t42 = g->edx;
        if (rd8(esi + t41) == 0x7bu)
        {
            edx = t42;
            goto L_10064b13;
        }
        eax = t41;
        edx = t42;
    COW_AT(10064b02)
        wr32(sp0 - 0x124u, ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t43 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
        t44 = g->edx;
        if (rd8(esi + t43 + 1u) != 0u)
        {
            eax = t43;
            edx = t44;
            esi = esi + 1u;
            goto L_10064af4;
        }
        edx = t44;
    COW_AT(10064b11)
        loc_108 = rd32(sp0 - 0x108u);
        loc_110 = rd32(sp0 - 0x110u);
    }
    else
    {
        eax = loc_110 - 1u;
        ecx = ebp;
    COW_AT(10064a8d)
        if (eax == 1u)
        {
            eax = eax - 1u;
    COW_AT(10064ab1)
            wr32(sp0 - 0x124u, ebx);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x120u;
            t33 = cow_thiscall(g, COW_IMG(0x10068050u), ecx, 1, ebx);
            t34 = g->edx;
            if (rd8(t33) == 0u)
            {
                edx = t34;
                loc_108 = rd32(sp0 - 0x108u);
                loc_110 = rd32(sp0 - 0x110u);
                goto L_10064b1b;
            }
            eax = t33;
            edx = t34;
            esi = 0u;
L_10064abe: ;
    COW_AT(10064abe)
            wr32(sp0 - 0x124u, ebx);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x120u;
            t35 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
            t36 = g->edx;
            if (rd8(esi + t35) == 0x7du)
            {
                edx = t36;
                goto L_10064add;
            }
            eax = t35;
            edx = t36;
    COW_AT(10064acc)
            wr32(sp0 - 0x124u, ebx);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x120u;
            t37 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
            t38 = g->edx;
            if (rd8(esi + t37 + 1u) != 0u)
            {
                eax = t37;
                edx = t38;
                esi = esi + 1u;
                goto L_10064abe;
            }
            edx = t38;
    COW_AT(10064adb)
            loc_108 = rd32(sp0 - 0x108u);
            loc_110 = rd32(sp0 - 0x110u);
        }
        else
        {
            eax = eax - 1u;
    COW_AT(10064a90)
            wr32(sp0 - 0x124u, 0u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x120u;
            t27 = cow_thiscall(g, COW_IMG(0x10068050u), ecx, 1, 0u);
            t28 = g->edx;
            wr32(sp0 - 0x124u, t27);
            g->ebx = ebx;
            t29 = rd32(sp0 - 0x10cu);
            t30 = cow_thiscall(g, COW_IMG(0x10065a10u), t29, 1, t27);
            t31 = g->ecx;
            eax = t30;
            ecx = t31;
            edx = sp0 - 0x100u;
L_10064aa5: ;
    COW_AT(10064aa5)
            t32 = rd8(eax);
            wr8(edx, (uint8_t)t32);
            if ((uint8_t)t32 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t32;
                edx = edx + 1u;
                goto L_10064aa5;
            }
            edx = edx + 1u;
    COW_AT(10064aaf)
            loc_108 = rd32(sp0 - 0x108u);
            loc_110 = rd32(sp0 - 0x110u);
        }
    }
    goto L_10064b1b;
L_10064add: ;
    COW_AT(10064add)
    wr32(sp0 - 0x110u, 0u);
    loc_108 = rd32(sp0 - 0x108u);
    loc_110 = 0u;
    goto L_10064b1b;
L_10064b13: ;
    COW_AT(10064b13)
    wr32(sp0 - 0x110u, 2u);
    loc_108 = rd32(sp0 - 0x108u);
    loc_110 = 2u;
    goto L_10064b1b;
L_10064b35: ;
    COW_AT(10064b35)
    g->eax = eax;
    g->esp = sp0 - 0x120u;
    t45 = cow_thiscall(g, COW_IMG(0x10068050u), ecx, 1, loc_124);
    esi = t45 + 1u;
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
        edx = 0u;
        goto L_10064987;
    }
    eax = t45;
    COW_AT(10064b51)
    g->eax = eax;
    g->edx = 0u;
    g->esp = sp0 - 0x120u;
    t46 = cow_thiscall(g, COW_IMG(0x1006b4e0u), sp0 - 0x100u, 0);
    t47 = g->edx;
    wr32(sp0 - 0x124u, ebx + 1u);
    g->edx = t47;
    t48 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx + 1u);
    t49 = g->edx;
    if (rd8(t48) == 0x2fu)
    {
        eax = t48;
        edx = t49;
        esi = ebx + 1u;
        goto L_10064bb6;
    }
    eax = t48;
    edx = t49;
    esi = ebx + 1u;
    COW_AT(10064b6a)
    wr32(sp0 - 0x124u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t50 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, esi);
    t51 = g->edx;
    if (rd8(t50) == 0x5cu)
    {
        eax = t50;
        edx = t51;
        goto L_10064bb6;
    }
    eax = t50;
    edx = t51;
    COW_AT(10064b77)
    wr32(sp0 - 0x124u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t52 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, esi);
    t53 = g->edx;
    if (rd8(t52 + 1u) == 0x3au)
    {
        eax = t52;
        edx = t53;
        goto L_10064bb6;
    }
    edx = t53;
    COW_AT(10064b85)
    t54 = rd32(sp0 - 0x10cu) + 0x12cu;
    wr32(sp0 - 0x124u, t54);
    g->eax = t54;
    t55 = rd32(sp0 - 0x10cu);
    g->esp = sp0 - 0x120u;
    t56 = cow_fastcall(g, COW_IMG(0x1006b520u), sp0 - 0x100u, edx, 1, t54);
    t57 = g->edx;
    g->edx = t57;
    t58 = cow_thiscall(g, COW_IMG(0x1006b650u), sp0 - 0x100u, 0);
    t59 = g->edx;
    wr32(sp0 - 0x124u, esi);
    g->edx = t59;
    t60 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, esi);
    t61 = g->edx;
    wr32(sp0 - 0x124u, t60);
    g->edx = t61;
    t62 = cow_thiscall(g, COW_IMG(0x1006b6b0u), sp0 - 0x100u, 1, t60);
    t63 = g->edx;
    eax = t62;
    edx = t63;
    edi = t55;
L_10064bcc: ;
    COW_AT(10064bcc)
    wr32(sp0 - 0x124u, sp0 - 0x100u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x120u;
    t68 = cow_fastcall(g, COW_IMG(0x100647c0u), edi, edx, 1, sp0 - 0x100u);
    t69 = g->ecx;
    t70 = g->edx;
    if ((uint8_t)t68 == 0u)
    {
        eax = t68;
        ecx = t69;
        goto L_10064bfb;
    }
    eax = t68;
    edx = t70;
    COW_AT(10064bdc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t71 = cow_thiscall(g, COW_IMG(0x10064910u), edi, 0);
    t72 = g->edx;
    g->edx = t72;
    cow_stdcall(g, COW_IMG(0x1006b4f0u), 0);
    t73 = g->edx;
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    g->edx = t73;
    return t71;
L_10064bb6: ;
    COW_AT(10064bb6)
    wr32(sp0 - 0x124u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t64 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, esi);
    t65 = g->edx;
    wr32(sp0 - 0x124u, t64);
    t66 = cow_fastcall(g, COW_IMG(0x1006b520u), sp0 - 0x100u, t65, 1, t64);
    t67 = g->edx;
    eax = t66;
    edx = t67;
    edi = rd32(sp0 - 0x10cu);
    goto L_10064bcc;
L_10064bfb: ;
    COW_AT(10064bfb)
    wr32(sp0 - 0x124u, sp0 - 0x100u);
    wr32(sp0 - 0x128u, COW_IMG(0x10353b28u));
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x120u;
    t74 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, sp0 - 0x100u, 1, 2, COW_IMG(0x10353b28u), sp0 - 0x100u);
    t75 = g->edx;
    g->edx = t75;
    cow_stdcall(g, COW_IMG(0x1006b4f0u), 0);
    t76 = g->edx;
    edx = t76;
L_10064c16: ;
    COW_AT(10064c16)
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10064910(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10064930u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        wr32(sp0 - 0x110u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1006493fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        wr32(sp0 - 0x110u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1006494bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064960u:
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
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
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
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x1006496eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064987u:
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
        uint32_t loc_108;
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
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064997u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_108;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->ebp = self + 0x330u;
        (void)sp0;
        return 1;
    }
    case 0x1006499fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_108;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        g->ebp = self + 0x330u;
        (void)sp0;
        return 1;
    }
    case 0x100649a1u:
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
        uint32_t loc_108;
        uint32_t loc_110;
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
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100649a9u:
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
        uint32_t loc_108;
        uint32_t loc_110;
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
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100649bau:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100649c8u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100649d6u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100649dfu:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100649e4u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100649eau:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100649f2u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100649f4u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100649f7u:
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
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100649fdu:
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
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064a0au:
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
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064a25u:
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
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064a2au:
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
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064a30u:
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
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064a33u:
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
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064a4fu:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064a65u:
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
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x10064a7cu:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064a84u:
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
        uint32_t loc_110;
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
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064a8du:
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
        uint32_t loc_110;
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
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064a90u:
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
        uint32_t loc_110;
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
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064aa5u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064aafu:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064ab1u:
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
        uint32_t loc_110;
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
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064abeu:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064accu:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064adbu:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064addu:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064ae7u:
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
        uint32_t loc_110;
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
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064af4u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064b02u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064b11u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064b13u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064b1bu:
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
        uint32_t loc_108;
        uint32_t loc_110;
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
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064b28u:
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
        uint32_t loc_108;
        uint32_t loc_110;
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
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064b35u:
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
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x10064b51u:
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
        g->esp = sp0 - 0x120u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064b6au:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064b77u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064b85u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064bb6u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064bccu:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x10064bdcu:
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
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10064bfbu:
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
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10064c16u:
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
        uint32_t loc_108;
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10064910(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10064910(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
