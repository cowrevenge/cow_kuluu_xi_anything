/* f_0x102e143e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102e143e(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_3c;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_c;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 140u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e1450u: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebx = rd32(sp0 - 0x70u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x70u); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_102e1450;
    case 0x102e1455u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebx = rd32(sp0 - 0x70u); self = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x70u); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_102e1455;
    case 0x102e1462u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102e1462;
    case 0x102e1469u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e1469;
    case 0x102e147du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e147d;
    case 0x102e1486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e1486;
    case 0x102e1492u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e1492;
    case 0x102e149bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e149b;
    case 0x102e14a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e14a3;
    case 0x102e14a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e14a8;
    case 0x102e14afu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e14af;
    case 0x102e14b4u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e14b4;
    case 0x102e14b9u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e14b9;
    case 0x102e14beu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e14be;
    case 0x102e14c3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e14c3;
    case 0x102e14cbu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e14cb;
    case 0x102e14d2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e14d2;
    case 0x102e14d8u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e14d8;
    case 0x102e14ddu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e14dd;
    case 0x102e14e2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e14e2;
    case 0x102e14e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102e14e6;
    case 0x102e150fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102e150f;
    case 0x102e1519u: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102e1519;
    case 0x102e151eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102e151e;
    case 0x102e1528u: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102e1528;
    case 0x102e1541u: eax = g->eax; ebx = g->ebx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e1541;
    case 0x102e1546u: eax = g->eax; ebx = g->ebx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e1546;
    case 0x102e154cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e154c;
    case 0x102e1557u: eax = g->eax; ebx = g->ebx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e1557;
    case 0x102e155eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102e155e;
    case 0x102e1571u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102e1571;
    case 0x102e1575u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102e1575;
    case 0x102e157eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102e157e;
    case 0x102e1583u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102e1583;
    case 0x102e158fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_102e158f;
    case 0x102e1596u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_102e1596;
    case 0x102e159cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102e159c;
    case 0x102e159fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_102e159f;
    case 0x102e15a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102e15a5;
    case 0x102e15a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e15a6;
    case 0x102e15afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e15af;
    case 0x102e15bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e15bd;
    case 0x102e15c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e15c8;
    case 0x102e15cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e15cf;
    case 0x102e15dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e15da;
    case 0x102e15e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e15e5;
    case 0x102e15f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e15f0;
    case 0x102e15f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e15f7;
    case 0x102e1607u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e1607;
    case 0x102e1634u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e1634;
    case 0x102e163au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e163a;
    case 0x102e1642u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e1642;
    case 0x102e164bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e164b;
    case 0x102e1653u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e1653;
    case 0x102e165fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e165f;
    case 0x102e1667u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e1667;
    case 0x102e166cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e166c;
    case 0x102e1671u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e1671;
    case 0x102e16a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16a8;
    case 0x102e16aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16ae;
    case 0x102e16b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16b3;
    case 0x102e16b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16b9;
    case 0x102e16bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16bd;
    case 0x102e16c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16c2;
    case 0x102e16c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16c6;
    case 0x102e16cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16cb;
    case 0x102e16cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16cf;
    case 0x102e16d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16d4;
    case 0x102e16dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16db;
    case 0x102e16e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16e1;
    case 0x102e16e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16e4;
    case 0x102e16f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e16f4;
    case 0x102e16f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e16f8;
    case 0x102e16fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e16fd;
    case 0x102e1700u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); goto E_102e1700;
    case 0x102e1712u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e1712;
    case 0x102e1716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e1716;
    case 0x102e1733u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102e1733;
    case 0x102e1792u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102e1792;
    default: break;
    }
#endif

    COW_AT(102e143e)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x70u, in_ebx);
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    t1 = rd32(self);
    wr32(sp0 - 0x10u, self);
    if (t1 != 0u)
    {
    COW_AT(102e1450)
        g->esp = sp0 - 0x78u;
        COW_RET(0x102e1455u);
        cow_fastcall(g, COW_IMG(0x102e100bu), self, in_edx, 0);
    }
    COW_AT(102e1455)
    wr32(sp0 - 0x7cu, sp0 - 0x6cu);
    wr32(sp0 - 0x80u, arg2);
    g->esp = sp0 - 0x78u;
    COW_RET(0x102e1462u);
    cow_thiscall(g, rd32(rd32(arg2) + 0x20u), rd32(arg2), 2, arg2, sp0 - 0x6cu);
    COW_AT(102e1462)
    if (rd32(sp0 + 0x10u) == 0u) goto L_102e14e6;
    esi = rd32(sp0 + 0x10u);
    COW_AT(102e1469)
    wr32(sp0 - 0x7cu, 6u);
    edi = sp0 - 0x34u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(sp0 - 0x2cu) > rd32(sp0 - 0x58u)) goto L_102e151e;
    ecx = rd32(sp0 - 0x2cu);
    COW_AT(102e147d)
    t2 = rd32(sp0 - 0x34u);
    if (t2 > ecx) goto L_102e151e;
    COW_AT(102e1486)
    if (rd32(sp0 - 0x28u) > rd32(sp0 - 0x54u)) goto L_102e151e;
    eax = rd32(sp0 - 0x28u);
    COW_AT(102e1492)
    t3 = rd32(sp0 - 0x30u);
    if (t3 > eax) goto L_102e151e;
    COW_AT(102e149b)
    if (rd32(sp0 - 0x20u) > rd32(sp0 - 0x50u)) goto L_102e151e;
    ebx = rd32(sp0 - 0x20u);
    COW_AT(102e14a3)
    t4 = rd32(sp0 - 0x24u);
    if (t4 > ebx) goto L_102e151e;
    COW_AT(102e14a8)
    t5 = rd32(sp0 - 0x34u);
    if (t5 != 0u) goto L_102e14cb;
    COW_AT(102e14af)
    if (ecx != rd32(sp0 - 0x58u)) goto L_102e14cb;
    COW_AT(102e14b4)
    t6 = rd32(sp0 - 0x30u);
    if (t6 != 0u) goto L_102e14cb;
    COW_AT(102e14b9)
    if (eax != rd32(sp0 - 0x54u)) goto L_102e14cb;
    COW_AT(102e14be)
    t7 = rd32(sp0 - 0x24u);
    if (t7 != 0u) goto L_102e14cb;
    COW_AT(102e14c3)
    t8 = rd32(sp0 - 0x50u);
    wr32(sp0 + 0x10u, 0u);
    if (ebx == t8) goto L_102e14d2;
L_102e14cb: ;
    COW_AT(102e14cb)
    wr32(sp0 + 0x10u, 1u);
L_102e14d2: ;
    COW_AT(102e14d2)
    if (arg6 & 1u) goto L_102e14e2;
    COW_AT(102e14d8)
    t9 = rd32(sp0 + 0x10u);
    if (t9 != 0u) goto L_102e14e2;
    COW_AT(102e14dd)
    eax = 1u;
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_24 = rd32(sp0 - 0x24u);
L_102e150f: ;
    COW_AT(102e150f)
    t14 = rd32(sp0 - 0x60u);
    if (t14 != 0u) goto L_102e1528;
    COW_AT(102e1519)
    t15 = rd32(sp0 - 0x64u);
    if ((t15 & 0x200u) != 0u) goto L_102e1528;
L_102e151e: ;
    COW_AT(102e151e)
    eax = 0x8876086cu;
L_102e1792: ;
    COW_AT(102e1792)
    g->ebx = rd32(sp0 - 0x70u);
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 4u);
    return eax;
L_102e14e2: ;
    COW_AT(102e14e2)
    eax = 0u;
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_24 = rd32(sp0 - 0x24u);
    goto L_102e150f;
L_102e14e6: ;
    COW_AT(102e14e6)
    t10 = rd32(sp0 + 0x10u);
    t11 = rd32(sp0 - 0x58u);
    t12 = rd32(sp0 - 0x50u);
    wr32(sp0 + 0x10u, 0u);
    wr32(sp0 - 0x2cu, t11);
    t13 = rd32(sp0 - 0x54u);
    wr32(sp0 - 0x28u, t13);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, t12);
    eax = ~arg6 & 1u;
    ebx = t12;
    loc_2c = t11;
    loc_28 = t13;
    loc_34 = 0u;
    loc_30 = 0u;
    loc_24 = 0u;
    goto L_102e150f;
L_102e1528: ;
    COW_AT(102e1528)
    t16 = ((arg6 & 1u) | 0x80u) << 4u;
    wr32(sp0 - 0xcu, t16);
    if (eax == 0u)
    {
        esi = t16;
        loc_c = t16;
        goto L_102e15a6;
    }
    esi = t16;
    loc_c = t16;
    COW_AT(102e1541)
    t17 = rd32(sp0 - 0x64u);
    if ((t17 & 0x200u) == 0u) goto L_102e15a6;
    COW_AT(102e1546)
    if ((arg6 >> 0x10u & 2u) == 0u) goto L_102e1557;
    COW_AT(102e154c)
    esi = esi | 0x2000u;
L_102e16e4: ;
    COW_AT(102e16e4)
    wr32(sp0 - 0x7cu, esi);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, sp0 - 0x1cu);
    wr32(sp0 - 0x88u, arg2);
    g->eax = arg2;
    g->esp = sp0 - 0x78u;
    COW_RET(0x102e16f4u);
    t51 = cow_thiscall(g, rd32(rd32(arg2) + 0x24u), rd32(arg2), 4, arg2, sp0 - 0x1cu, 0u, esi);
    eax = t51;
    COW_AT(102e16f4)
    if ((int32_t)eax >= 0) goto L_102e1733;
    COW_AT(102e16f8)
    goto L_102e1792;
L_102e1557: ;
    COW_AT(102e1557)
    wr32(sp0 - 0x7cu, 1u);
    g->esp = sp0 - 0x78u;
    COW_RET(0x102e155eu);
    cow_call_regs(g, COW_IMG(0x102daf63u), g->eax, 0x200u, 0u, 1, 1, 1u);
    COW_AT(102e155e)
    wr32(sp0 - 0x7cu, sp0 - 8u);
    wr32(sp0 - 0x80u, COW_IMG(0x103428ecu));
    wr32(sp0 - 0x84u, arg2);
    g->eax = arg2;
    g->edx = sp0 - 8u;
    t18 = rd32(arg2);
    g->esp = sp0 - 0x78u;
    COW_RET(0x102e1571u);
    t19 = cow_thiscall(g, rd32(t18 + 0x1cu), t18, 3, arg2, COW_IMG(0x103428ecu), sp0 - 8u);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(102e1571)
    if ((int32_t)eax < 0)
    {
        loc_c = rd32(sp0 - 0xcu);
    }
    else
    {
    COW_AT(102e1575)
        t22 = rd32(sp0 - 8u);
        wr32(sp0 - 0x7cu, t22);
        g->eax = t22;
        g->edx = edx;
        t23 = rd32(rd32(sp0 - 8u));
        g->esp = sp0 - 0x78u;
        COW_RET(0x102e157eu);
        t24 = cow_thiscall(g, rd32(t23 + 0x34u), t23, 1, t22);
        t25 = g->ecx;
        t26 = g->edx;
        eax = t24;
        ecx = t25;
        edx = t26;
    COW_AT(102e157e)
        if (eax != 1u)
        {
            loc_c = rd32(sp0 - 0xcu);
        }
        else
        {
    COW_AT(102e1583)
            wr32(sp0 - 0xcu, esi | 0x2000u);
            wr32(sp0 + 0x10u, 0u);
            loc_c = esi | 0x2000u;
            esi = esi | 0x2000u;
        }
    COW_AT(102e158f)
        if (rd32(sp0 - 8u) == 0u)
        {
            eax = rd32(sp0 - 8u);
        }
        else
        {
            eax = rd32(sp0 - 8u);
    COW_AT(102e1596)
            wr32(sp0 - 0x7cu, eax);
            g->eax = eax;
            g->edx = edx;
            t27 = rd32(eax);
            g->esp = sp0 - 0x78u;
            COW_RET(0x102e159cu);
            t28 = cow_thiscall(g, rd32(t27 + 8u), t27, 1, eax);
            t29 = g->ecx;
            t30 = g->edx;
            eax = t28;
            ecx = t29;
            edx = t30;
    COW_AT(102e159c)
            wr32(sp0 - 8u, 0u);
            loc_c = rd32(sp0 - 0xcu);
        }
    }
    COW_AT(102e159f)
    wr32(sp0 - 0x7cu, 0u);
    g->esp = sp0 - 0x78u;
    COW_RET(0x102e15a5u);
    cow_call_regs(g, COW_IMG(0x102daf63u), g->eax, ecx, edx, 1, 1, 0u);
    COW_AT(102e15a5)
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_c = rd32(sp0 - 0xcu);
L_102e15a6: ;
    COW_AT(102e15a6)
    t31 = rd32(sp0 + 0x10u);
    if (t31 == 0u) goto L_102e16e4;
    COW_AT(102e15af)
    if (rd32(sp0 - 0x6cu) == 0x31545844u) goto L_102e1671;
    eax = rd32(sp0 - 0x6cu);
    COW_AT(102e15bd)
    if (eax == 0x32545844u) goto L_102e1671;
    COW_AT(102e15c8)
    if (eax == 0x32595559u) goto L_102e1607;
    COW_AT(102e15cf)
    if (eax == 0x33545844u) goto L_102e1671;
    COW_AT(102e15da)
    if (eax == 0x34545844u) goto L_102e1671;
    COW_AT(102e15e5)
    if (eax == 0x35545844u) goto L_102e1671;
    COW_AT(102e15f0)
    if (eax == 0x59565955u) goto L_102e1607;
    COW_AT(102e15f7)
    wr32(sp0 - 0x7cu, 6u);
    esi = sp0 - 0x34u;
    edi = sp0 - 0x4cu;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_c = rd32(sp0 - 0xcu);
    loc_4c = rd32(sp0 - 0x4cu);
    loc_48 = rd32(sp0 - 0x48u);
    loc_3c = rd32(sp0 - 0x3cu);
L_102e16db: ;
    COW_AT(102e16db)
    t38 = rd32(sp0 + 0x10u);
    if (t38 != 0u) goto L_102e16fd;
L_102e16e1: ;
    COW_AT(102e16e1)
    esi = loc_c;
    goto L_102e16e4;
L_102e1607: ;
    COW_AT(102e1607)
    wr32(sp0 - 0x40u, loc_28);
    wr32(sp0 - 0x4cu, loc_34 & 0xfffffffeu);
    t32 = loc_2c + 1u & 0xfffffffeu;
    wr32(sp0 - 0x44u, t32);
    wr32(sp0 - 0x48u, loc_30);
    wr32(sp0 - 0x3cu, loc_24);
    wr32(sp0 - 0x38u, ebx);
    if ((loc_2c + 1u & 0xfffffffeu) <= rd32(sp0 - 0x58u))
    {
        eax = t32;
        ecx = loc_34 & 0xfffffffeu;
        edx = loc_30;
        edi = loc_24;
        loc_4c = loc_34 & 0xfffffffeu;
        loc_48 = loc_30;
        loc_3c = loc_24;
    }
    else
    {
        ecx = loc_34 & 0xfffffffeu;
        edx = loc_30;
        edi = loc_24;
        loc_4c = loc_34 & 0xfffffffeu;
        loc_48 = loc_30;
        loc_3c = loc_24;
    COW_AT(102e1634)
        t33 = rd32(sp0 - 0x58u);
        wr32(sp0 - 0x44u, t33);
        eax = t33;
    }
    COW_AT(102e163a)
    if (ecx != 0u) goto L_102e1700;
    COW_AT(102e1642)
    if (eax != rd32(sp0 - 0x58u)) goto L_102e1700;
    COW_AT(102e164b)
    if (edx != 0u) goto L_102e1700;
    COW_AT(102e1653)
    if (loc_28 != rd32(sp0 - 0x54u)) goto L_102e1700;
    COW_AT(102e165f)
    if (edi != 0u) goto L_102e1700;
    COW_AT(102e1667)
    if (ebx == rd32(sp0 - 0x50u)) goto L_102e16e4;
    COW_AT(102e166c)
L_102e1700: ;
    COW_AT(102e1700)
    wr32(sp0 - 0x7cu, esi);
    wr32(sp0 - 0x80u, sp0 - 0x4cu);
    wr32(sp0 - 0x84u, sp0 - 0x1cu);
    wr32(sp0 - 0x88u, arg2);
    g->eax = arg2;
    g->esp = sp0 - 0x78u;
    COW_RET(0x102e1712u);
    t39 = cow_thiscall(g, rd32(rd32(arg2) + 0x24u), rd32(arg2), 4, arg2, sp0 - 0x1cu, sp0 - 0x4cu, esi);
    eax = t39;
    COW_AT(102e1712)
    if ((int32_t)eax < 0) goto L_102e1792;
    COW_AT(102e1716)
    t40 = rd32(sp0 - 0x34u);
    t41 = t40 - rd32(sp0 - 0x4cu);
    wr32(sp0 - 0x34u, t41);
    t42 = rd32(sp0 - 0x2cu);
    t43 = t42 - rd32(sp0 - 0x4cu);
    wr32(sp0 - 0x2cu, t43);
    t44 = rd32(sp0 - 0x30u);
    t45 = t44 - rd32(sp0 - 0x48u);
    wr32(sp0 - 0x30u, t45);
    t46 = rd32(sp0 - 0x28u);
    t47 = t46 - rd32(sp0 - 0x48u);
    wr32(sp0 - 0x28u, t47);
    t48 = rd32(sp0 - 0x24u);
    t49 = t48 - rd32(sp0 - 0x3cu);
    wr32(sp0 - 0x24u, t49);
    t50 = ebx - rd32(sp0 - 0x3cu);
    wr32(sp0 - 0x20u, t50);
L_102e1733: ;
    COW_AT(102e1733)
    t52 = rd32(sp0 - 0x14u);
    t53 = rd32(sp0 - 0x58u);
    wr32(arg1, t52);
    t54 = rd32(sp0 - 0x6cu);
    wr32(arg1 + 4u, t54);
    t55 = rd32(sp0 - 0x1cu);
    wr32(arg1 + 8u, t55);
    t56 = rd32(sp0 - 0x18u);
    wr32(arg1 + 0xcu, t56);
    wr32(arg1 + 0x10u, 0u);
    wr32(arg1 + 0x14u, 0u);
    wr32(arg1 + 0x20u, 0u);
    t57 = rd32(sp0 - 0x50u);
    wr32(arg1 + 0x24u, t57);
    wr32(sp0 - 0x7cu, 6u);
    esi = sp0 - 0x34u;
    edi = arg1 + 0x28u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(arg1 + 0x44u, arg5);
    wr32(arg1 + 0x18u, t53);
    t58 = rd32(sp0 - 0x54u);
    wr32(arg1 + 0x48u, arg3);
    t59 = rd32(sp0 - 0x10u);
    wr32(arg1 + 0x1cu, t58);
    wr32(arg1 + 0x40u, 1u);
    wr32(t59, arg2);
    eax = 0u;
    goto L_102e1792;
L_102e1671: ;
    COW_AT(102e1671)
    wr32(sp0 - 0x7cu, 0xfffffffcu);
    wr32(sp0 - 0x4cu, loc_34 & 0xfffffffcu);
    t34 = loc_2c + 3u & 0xfffffffcu;
    wr32(sp0 - 0x44u, t34);
    wr32(sp0 - 0x48u, loc_30 & 0xfffffffcu);
    t35 = loc_28 + 3u & 0xfffffffcu;
    wr32(sp0 - 0x40u, t35);
    wr32(sp0 - 0x3cu, loc_24);
    wr32(sp0 - 0x38u, ebx);
    if ((loc_2c + 3u & 0xfffffffcu) <= rd32(sp0 - 0x58u))
    {
        eax = t34;
        ecx = t35;
        edx = loc_34 & 0xfffffffcu;
        esi = loc_30 & 0xfffffffcu;
        edi = loc_24;
        loc_4c = loc_34 & 0xfffffffcu;
        loc_48 = loc_30 & 0xfffffffcu;
        loc_3c = loc_24;
    }
    else
    {
        ecx = t35;
        edx = loc_34 & 0xfffffffcu;
        esi = loc_30 & 0xfffffffcu;
        edi = loc_24;
        loc_4c = loc_34 & 0xfffffffcu;
        loc_48 = loc_30 & 0xfffffffcu;
        loc_3c = loc_24;
    COW_AT(102e16a8)
        t36 = rd32(sp0 - 0x58u);
        wr32(sp0 - 0x44u, t36);
        eax = t36;
    }
    COW_AT(102e16ae)
    if (ecx > rd32(sp0 - 0x54u))
    {
    COW_AT(102e16b3)
        t37 = rd32(sp0 - 0x54u);
        wr32(sp0 - 0x40u, t37);
        ecx = t37;
    }
    COW_AT(102e16b9)
    if (edx != 0u) goto L_102e16d4;
    COW_AT(102e16bd)
    if (eax != rd32(sp0 - 0x58u)) goto L_102e16d4;
    COW_AT(102e16c2)
    if (esi != 0u) goto L_102e16d4;
    COW_AT(102e16c6)
    if (ecx != rd32(sp0 - 0x54u)) goto L_102e16d4;
    COW_AT(102e16cb)
    if (edi != 0u) goto L_102e16d4;
    COW_AT(102e16cf)
    if (ebx == rd32(sp0 - 0x50u)) goto L_102e16e1;
L_102e16d4: ;
    COW_AT(102e16d4)
    wr32(sp0 + 0x10u, 1u);
    goto L_102e16db;
L_102e16fd: ;
    COW_AT(102e16fd)
    esi = loc_c;
    goto L_102e1700;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e143e(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e1450u:
    {
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebx = rd32(sp0 - 0x70u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x10u, self);
        (void)sp0;
        return 1;
    }
    case 0x102e1455u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
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
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebx = rd32(sp0 - 0x70u);
        self = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e1462u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x7cu, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x102e1469u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x102e147du:
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
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1486u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1492u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e149bu:
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
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14a3u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14a8u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14b9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14beu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14d2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14d8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e14e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x7cu, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x102e150fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x78u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1519u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x78u;
        g->ecx = 0x200u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e151eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1528u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x78u;
        g->ecx = 0x200u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1541u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ecx = 0x200u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e1546u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ecx = 0x200u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e154cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1557u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ecx = 0x200u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e155eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x7cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e1571u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x7cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102e1575u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x7cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102e157eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e1583u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e158fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e1596u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e159cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e159fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e15a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e15a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e15afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e15bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e15c8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e15cfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e15dau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e15e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e15f0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e15f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1607u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1634u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e163au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1642u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e164bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1653u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e165fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1667u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e166cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1671u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16aeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16b9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16c2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16c6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16cfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16d4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16e1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16e4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e16f4u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x84u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102e16f8u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x84u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102e16fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1700u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1712u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x84u, sp0 - 0x1cu);
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x102e1716u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x84u, sp0 - 0x1cu);
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x102e1733u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x84u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102e1792u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e143e(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e143e(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
