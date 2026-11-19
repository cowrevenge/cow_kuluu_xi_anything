/* f_0x100e0d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e0d50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e0d65u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0d65;
    case 0x100e0d7du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0d7d;
    case 0x100e0d84u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0d84;
    case 0x100e0d8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0d8c;
    case 0x100e0da8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0da8;
    case 0x100e0dafu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0daf;
    case 0x100e0db8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0db8;
    case 0x100e0dd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0dd1;
    case 0x100e0ddeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0dde;
    case 0x100e0deau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0dea;
    case 0x100e0dfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0dfe;
    case 0x100e0e0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0e0e;
    case 0x100e0e1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0e1c;
    case 0x100e0e2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0e2b;
    case 0x100e0e44u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0e44;
    case 0x100e0e57u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0e57;
    case 0x100e0e63u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0e63;
    case 0x100e0e72u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0e72;
    case 0x100e0e89u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0e89;
    case 0x100e0e91u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0e91;
    case 0x100e0ebfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0ebf;
    case 0x100e0ecbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0ecb;
    case 0x100e0ed8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0ed8;
    case 0x100e0ef2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0ef2;
    case 0x100e0f07u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0f07;
    case 0x100e0f12u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0f12;
    case 0x100e0f19u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0f19;
    case 0x100e0f23u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0f23;
    case 0x100e0f30u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0f30;
    case 0x100e0f72u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0f72;
    case 0x100e0f85u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0f85;
    case 0x100e0fa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0fa7;
    case 0x100e0fb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0fb3;
    case 0x100e0fc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0fc7;
    case 0x100e0fd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0fd7;
    case 0x100e0fe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0fe5;
    case 0x100e0ff0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e0ff0;
    case 0x100e1000u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1000;
    case 0x100e1010u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1010;
    case 0x100e101au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e101a;
    case 0x100e1029u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1029;
    case 0x100e1040u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1040;
    case 0x100e104fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e104f;
    case 0x100e105fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e105f;
    case 0x100e106du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e106d;
    case 0x100e1080u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1080;
    case 0x100e1094u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1094;
    case 0x100e10a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e10a5;
    case 0x100e10b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e10b0;
    case 0x100e10b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e10b7;
    case 0x100e10c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e10c1;
    case 0x100e10ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e10eb;
    case 0x100e10f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e10f5;
    case 0x100e10fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e10fa;
    case 0x100e110cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e110c;
    case 0x100e1116u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1116;
    case 0x100e1123u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1123;
    case 0x100e1128u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1128;
    case 0x100e1132u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1132;
    case 0x100e1136u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1136;
    case 0x100e113eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e113e;
    case 0x100e1140u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1140;
    case 0x100e1148u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1148;
    case 0x100e1150u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1150;
    case 0x100e1167u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1167;
    case 0x100e1177u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1177;
    case 0x100e118fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e118f;
    case 0x100e1195u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1195;
    case 0x100e119fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e119f;
    case 0x100e11d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e11d2;
    case 0x100e11e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e11e4;
    case 0x100e11f8u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e11f8;
    case 0x100e11feu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e11fe;
    case 0x100e120du: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e120d;
    case 0x100e1240u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1240;
    case 0x100e124eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e124e;
    case 0x100e1252u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1252;
    case 0x100e125du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e125d;
    case 0x100e1264u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1264;
    case 0x100e126eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e126e;
    case 0x100e1290u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1290;
    case 0x100e129du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e129d;
    case 0x100e12a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e12a5;
    case 0x100e12abu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e12ab;
    case 0x100e12acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e12ac;
    case 0x100e12b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e12b4;
    case 0x100e12bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e12bd;
    case 0x100e12cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e12cd;
    case 0x100e12dau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e12da;
    case 0x100e12eeu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e12ee;
    case 0x100e12f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e12f4;
    case 0x100e1303u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1303;
    case 0x100e1336u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1336;
    case 0x100e1344u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1344;
    case 0x100e134fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e134f;
    case 0x100e1355u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1355;
    case 0x100e135fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e135f;
    case 0x100e1397u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e1397;
    case 0x100e139bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e139b;
    default: break;
    }
#endif

    COW_AT(100e0d50)
    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_100e139b;
    }
    COW_AT(100e0d65)
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x100dbe10u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd16(arg1 + 0xcu) > 3u)
    {
        ecx = t2;
        goto L_100e1344;
    }
    eax = rd16(arg1 + 0xcu);
    ecx = t2;
    edx = t3;
    loc_4 = t1;
    COW_AT(100e0d7d)
    t4 = rd32(COW_IMG(0x100e13a8u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x100e0d84u: goto L_100e0d84;
    case 0x100e0e44u: goto L_100e0e44;
    case 0x100e0e89u: goto L_100e0e89;
    case 0x100e1040u: goto L_100e1040;
    default: rt_fatal(g, COW_IMG(0x100e0d7du), "switch");
    }
    return 0;
L_100e0d84: ;
    COW_AT(100e0d84)
    edx = 0u;
L_100e0d8c: ;
    COW_AT(100e0d8c)
    if (rd32(arg1 + (uint16_t)edx * 0x7d4u + 0x1f20u) != 0u) goto L_100e0dd1;
    eax = (uint16_t)edx * 0x1f5u;
    COW_AT(100e0da8)
    if ((uint16_t)(edx + 1u) < 2u)
    {
        edx = edx + 1u;
        goto L_100e0d8c;
    }
    COW_AT(100e0daf)
    if (rd16(arg1 + 0x1ea0u) == 0u) goto L_100e139b;
    COW_AT(100e0db8)
    wr16(arg1 + 0x1ea0u, 0u);
    wr16(arg1 + 0x1ea2u, 2u);
    wr16(arg1 + 0xcu, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100e0dd1: ;
    COW_AT(100e0dd1)
    if (rd32(arg1 + rd16(arg1 + 0x1ea0u) * 4u + 0x1ea4u) == 0u)
    {
        eax = rd32(arg1 + rd16(arg1 + 0x1ea0u) * 4u + 0x1ea4u);
        goto L_100e0e1c;
    }
    eax = rd32(arg1 + rd16(arg1 + 0x1ea0u) * 4u + 0x1ea4u);
    ecx = rd16(arg1 + 0x1ea0u);
    COW_AT(100e0dde)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t33 = cow_thiscall(g, eax, ecx, 0);
    t34 = g->edx;
    if ((uint8_t)t33 != 0u)
    {
        eax = t33;
        goto L_100e0e1c;
    }
    eax = t33;
    edx = t34;
    COW_AT(100e0dea)
    wr16(arg1 + 0x1ea0u, 0u);
    wr16(arg1 + 0x1ea2u, 2u);
    esi = arg1 + 0x1f0cu;
    edi = 2u;
L_100e0dfe: ;
    COW_AT(100e0dfe)
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t35 = cow_fastcall(g, COW_IMG(0x100e13c0u), esi, edx, 0);
    t36 = g->edx;
    if (edi != 1u)
    {
        eax = t35;
        edx = t36;
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e0dfe;
    }
    eax = t35;
    COW_AT(100e0e0e)
    wr16(arg1 + 0xcu, 2u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100e0e1c: ;
    COW_AT(100e0e1c)
    if (rd32(arg1 + rd16(arg1 + 0x1ea0u) * 4u + 0x1ea4u) != 0u) goto L_100e139b;
    COW_AT(100e0e2b)
    wr16(arg1 + 0x1ea0u, 0u);
    wr16(arg1 + 0x1ea2u, 2u);
    wr16(arg1 + 0xcu, 3u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100e0e44: ;
    COW_AT(100e0e44)
    if (rd32(arg1 + rd16(arg1 + 0x1ee8u) * 4u + 0x1eecu) == 0u)
    {
        eax = rd32(arg1 + rd16(arg1 + 0x1ee8u) * 4u + 0x1eecu);
        goto L_100e0e63;
    }
    eax = rd32(arg1 + rd16(arg1 + 0x1ee8u) * 4u + 0x1eecu);
    COW_AT(100e0e57)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t32 = cow_thiscall(g, eax, ecx, 0);
    if ((uint8_t)t32 == 0u)
    {
        eax = t32;
        goto L_100e0e72;
    }
    eax = t32;
L_100e0e63: ;
    COW_AT(100e0e63)
    if (rd32(arg1 + rd16(arg1 + 0x1ee8u) * 4u + 0x1eecu) != 0u) goto L_100e139b;
L_100e0e72: ;
    COW_AT(100e0e72)
    wr16(arg1 + 0x1ee8u, 0u);
    wr16(arg1 + 0x1eeau, 2u);
    wr16(arg1 + 0xcu, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100e0e89: ;
    COW_AT(100e0e89)
    loc_c = rd32(sp0 - 0xcu) & 0xffffffu;
    loc_8 = 0u;
L_100e0e91: ;
    COW_AT(100e0e91)
    if (rd32(arg1 + (uint16_t)loc_8 * 0x7d4u + 0x1f20u) == 0u)
    {
        ecx = (uint16_t)loc_8 * 0x19u;
        goto L_100e0f72;
    }
    eax = rd32(arg1 + (uint16_t)loc_8 * 0x7d4u + 0x1f20u);
    ecx = (uint16_t)loc_8 * 0x19u;
    edx = (uint16_t)loc_8 * 0x7du;
    esi = arg1 + (uint16_t)loc_8 * 0x7d4u;
    edi = arg1 + (uint16_t)loc_8 * 0x7d4u + 0x26bcu;
    COW_AT(100e0ebf)
    if (rd16(edi) == 0u) goto L_100e0f72;
    eax = (eax & 0xffff0000u) | rd16(edi);
    COW_AT(100e0ecb)
    if (rd32(edi + (uint16_t)eax * 4u + 4u) == 0u) goto L_100e0ef2;
    eax = rd32(edi + (uint16_t)eax * 4u + 4u);
    COW_AT(100e0ed8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t21 = cow_thiscall(g, eax, esi + 0x1f0cu, 0);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        eax = t21;
        edx = t23;
        goto L_100e0fe5;
    }
    ecx = t22;
L_100e0ef2: ;
    COW_AT(100e0ef2)
    if (loc_4 > rd32(esi + 0x1f0cu) + 0x1eu)
    {
        eax = loc_4;
        edx = rd32(esi + 0x1f0cu) + 0x1eu;
        goto L_100e0fe5;
    }
    edx = rd32(esi + 0x1f0cu) + 0x1eu;
    COW_AT(100e0f07)
    if (rd32(edi + rd16(edi) * 4u + 4u) == 0u)
    {
    COW_AT(100e0f19)
        if (rd32(esi + 0x1f20u) != 0u)
        {
            eax = rd32(esi + 0x1f20u);
    COW_AT(100e0f23)
            t24 = rd32(esi + 0x1f24u);
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, eax, t24, 0);
            t25 = g->ecx;
            ecx = t25;
        }
    COW_AT(100e0f30)
        wr8(esi + 0x1f10u, 0u);
        wr32(esi + 0x1f0cu, 0u);
        wr32(esi + 0x1f20u, 0u);
        wr32(esi + 0x1f24u, 0u);
        wr16(esi + 0x1f28u, 0u);
        wr8(esi + 0x1f11u, 0u);
        wr16(esi + 0x1f12u, 0u);
        wr16(esi + 0x26bcu, 0u);
        wr16(esi + 0x26beu, 2u);
        wr32(esi + 0x26c0u, 0u);
    }
    else
    {
    COW_AT(100e0f12)
        loc_c = (loc_c & 0xffffffu) | 0x1000000u;
    }
L_100e0f72: ;
    COW_AT(100e0f72)
    if ((uint16_t)(loc_8 + 1u) < 2u)
    {
        loc_8 = loc_8 + 1u;
        goto L_100e0e91;
    }
    COW_AT(100e0f85)
    if (rd32(arg1 + rd16(arg1 + 0xcu) * 0x24u + rd16(arg1 + rd16(arg1 + 0xcu) * 0x24u + 0x1ea0u) * 4u + 0x1ea4u) == 0u)
    {
        eax = rd32(arg1 + rd16(arg1 + 0xcu) * 0x24u + rd16(arg1 + rd16(arg1 + 0xcu) * 0x24u + 0x1ea0u) * 4u + 0x1ea4u);
        esi = arg1 + rd16(arg1 + 0xcu) * 0x24u + 0x1ea0u;
        goto L_100e1010;
    }
    eax = rd32(arg1 + rd16(arg1 + 0xcu) * 0x24u + rd16(arg1 + rd16(arg1 + 0xcu) * 0x24u + 0x1ea0u) * 4u + 0x1ea4u);
    edx = rd16(arg1 + 0xcu) * 9u;
    esi = arg1 + rd16(arg1 + 0xcu) * 0x24u + 0x1ea0u;
    COW_AT(100e0fa7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t28 = cow_thiscall(g, eax, ecx, 0);
    t29 = g->edx;
    if ((uint8_t)t28 != 0u)
    {
        eax = t28;
        goto L_100e1010;
    }
    eax = t28;
    edx = t29;
    COW_AT(100e0fb3)
    wr16(esi, 0u);
    wr16(esi + 2u, 2u);
    esi = arg1 + 0x1f0cu;
    edi = 2u;
L_100e0fc7: ;
    COW_AT(100e0fc7)
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t30 = cow_fastcall(g, COW_IMG(0x100e13c0u), esi, edx, 0);
    t31 = g->edx;
    if (edi != 1u)
    {
        eax = t30;
        edx = t31;
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e0fc7;
    }
    eax = t30;
    COW_AT(100e0fd7)
    wr16(arg1 + 0xcu, 2u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100e0fe5: ;
    COW_AT(100e0fe5)
    esi = arg1 + 0x1f0cu;
    edi = 2u;
L_100e0ff0: ;
    COW_AT(100e0ff0)
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t26 = cow_fastcall(g, COW_IMG(0x100e13c0u), esi, edx, 0);
    t27 = g->edx;
    if (edi != 1u)
    {
        eax = t26;
        edx = t27;
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e0ff0;
    }
    eax = t26;
    COW_AT(100e1000)
    wr16(arg1 + 0xcu, 2u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100e1010: ;
    COW_AT(100e1010)
    if (loc_c >> 0x18u != 0u) goto L_100e139b;
    COW_AT(100e101a)
    if (rd32(esi + rd16(esi) * 4u + 4u) != 0u) goto L_100e139b;
    COW_AT(100e1029)
    wr16(esi, 0u);
    wr16(esi + 2u, 2u);
    wr16(arg1 + 0xcu, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100e1040: ;
    COW_AT(100e1040)
    eax = 2u;
    esi = arg1 + 0x1f0cu;
    loc_c = rd32(sp0 - 0xcu) & 0xffffffu;
L_100e104f: ;
    COW_AT(100e104f)
    if (rd32(esi + 0x14u) == 0u)
    {
        loc_8 = eax - 1u;
        goto L_100e10fa;
    }
    loc_8 = eax - 1u;
    COW_AT(100e105f)
    if (rd16(esi + 0x7b2u) != 1u) goto L_100e10fa;
    COW_AT(100e106d)
    if (rd32(esi + rd16(esi + 0x7b0u) * 4u + 0x7b4u) == 0u)
    {
        edx = rd16(esi + 0x7b0u);
        edi = esi + 0x7b0u;
        goto L_100e1094;
    }
    eax = rd32(esi + rd16(esi + 0x7b0u) * 4u + 0x7b4u);
    edx = rd16(esi + 0x7b0u);
    edi = esi + 0x7b0u;
    COW_AT(100e1080)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t5 = cow_thiscall(g, eax, ecx, 0);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        edx = t6;
        goto L_100e11e4;
    }
    edx = t6;
L_100e1094: ;
    COW_AT(100e1094)
    if (loc_4 > rd32(esi) + 0x1eu) goto L_100e11e4;
    COW_AT(100e10a5)
    if (rd32(edi + rd16(edi) * 4u + 4u) != 0u)
    {
        ecx = rd16(edi);
    COW_AT(100e10eb)
        if (rd16(esi + 0x7b2u) == 1u)
        {
    COW_AT(100e10f5)
            loc_c = (loc_c & 0xffffffu) | 0x1000000u;
        }
    }
    else
    {
        ecx = rd16(edi);
    COW_AT(100e10b0)
        if (rd32(esi + 0x14u) != 0u)
        {
            eax = rd32(esi + 0x14u);
    COW_AT(100e10b7)
            t7 = rd32(esi + 0x18u);
            g->edx = t7;
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, eax, ecx, 0);
            t8 = g->ecx;
            t9 = g->edx;
            ecx = t8;
            edx = t9;
        }
    COW_AT(100e10c1)
        wr8(esi + 4u, 0u);
        wr32(esi, 0u);
        wr32(esi + 0x14u, 0u);
        wr32(esi + 0x18u, 0u);
        wr16(esi + 0x1cu, 0u);
        wr8(esi + 5u, 0u);
        wr16(esi + 6u, 0u);
        wr16(edi, 0u);
        wr16(esi + 0x7b2u, 2u);
        wr32(esi + 0x7b4u, 0u);
    }
L_100e10fa: ;
    COW_AT(100e10fa)
    if ((int32_t)loc_8 > 0)
    {
        eax = loc_8;
        esi = esi + 0x7d4u;
        goto L_100e104f;
    }
    COW_AT(100e110c)
    if (loc_c >> 0x18u != 0u) goto L_100e1290;
    COW_AT(100e1116)
    eax = arg1 + 0x1f0cu;
    ecx = 2u;
    esi = 0u;
L_100e1123: ;
    COW_AT(100e1123)
    if (rd32(eax + 0x14u) != 0u)
    {
    COW_AT(100e1128)
        if (rd16(eax + 0x7b2u) != 1u)
        {
    COW_AT(100e1132)
            if (esi == 0u) goto L_100e113e;
    COW_AT(100e1136)
            if (rd32(esi) <= rd32(eax))
            {
                edx = rd32(esi);
                goto L_100e1140;
            }
            edx = rd32(esi);
L_100e113e: ;
    COW_AT(100e113e)
            esi = eax;
        }
    }
L_100e1140: ;
    COW_AT(100e1140)
    if (ecx != 1u)
    {
        eax = eax + 0x7d4u;
        ecx = ecx - 1u;
        goto L_100e1123;
    }
    ecx = ecx - 1u;
    COW_AT(100e1148)
    if (esi == 0u) goto L_100e1290;
    COW_AT(100e1150)
    if (rd32(esi + rd16(esi + 0x7b0u) * 4u + 0x7b4u) == 0u)
    {
        edi = esi + 0x7b0u;
        goto L_100e1252;
    }
    eax = rd32(esi + rd16(esi + 0x7b0u) * 4u + 0x7b4u);
    edi = esi + 0x7b0u;
    COW_AT(100e1167)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t13 = cow_thiscall(g, eax, ecx, 0);
    t14 = g->edx;
    if ((uint8_t)t13 != 0u)
    {
        edx = t14;
        goto L_100e124e;
    }
    COW_AT(100e1177)
    wr16(edi, 0u);
    wr16(edi + 2u, 2u);
    ecx = arg1;
    esi = arg1 + 0x1f20u;
    edi = 2u;
L_100e118f: ;
    COW_AT(100e118f)
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
    COW_AT(100e1195)
        t15 = rd32(esi + 4u);
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, eax, ecx, 0);
        t16 = g->ecx;
        ecx = t16;
    }
    COW_AT(100e119f)
    wr8(esi - 0x10u, 0u);
    wr32(esi - 0x14u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    wr16(esi + 8u, 0u);
    wr8(esi - 0xfu, 0u);
    wr16(esi - 0xeu, 0u);
    wr16(esi + 0x79cu, 0u);
    wr16(esi + 0x79eu, 2u);
    wr32(esi + 0x7a0u, 0u);
    if (edi != 1u)
    {
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e118f;
    }
    COW_AT(100e11d2)
    wr16(arg1 + 0xcu, 2u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (arg1 & 0xffffff00u) | 1u;
L_100e11e4: ;
    COW_AT(100e11e4)
    wr16(edi, 0u);
    wr16(edi + 2u, 2u);
    esi = arg1 + 0x1f20u;
    edi = 2u;
L_100e11f8: ;
    COW_AT(100e11f8)
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
    }
    else
    {
        eax = rd32(esi);
    COW_AT(100e11fe)
        t10 = rd32(esi + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t11 = cow_thiscall(g, eax, t10, 0);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    COW_AT(100e120d)
    wr8(esi - 0x10u, 0u);
    wr32(esi - 0x14u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    wr16(esi + 8u, 0u);
    wr8(esi - 0xfu, 0u);
    wr16(esi - 0xeu, 0u);
    wr16(esi + 0x79cu, 0u);
    wr16(esi + 0x79eu, 2u);
    wr32(esi + 0x7a0u, 0u);
    if (edi != 1u)
    {
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e11f8;
    }
    COW_AT(100e1240)
    wr16(arg1 + 0xcu, 2u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100e124e: ;
    COW_AT(100e124e)
L_100e1252: ;
    COW_AT(100e1252)
    if (rd32(edi + rd16(edi) * 4u + 4u) != 0u) goto L_100e12cd;
    ecx = rd16(edi);
    COW_AT(100e125d)
    if (rd32(esi + 0x14u) != 0u)
    {
        eax = rd32(esi + 0x14u);
    COW_AT(100e1264)
        t17 = rd32(esi + 0x18u);
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, eax, ecx, 0);
    }
    COW_AT(100e126e)
    wr8(esi + 4u, 0u);
    wr32(esi, 0u);
    wr32(esi + 0x14u, 0u);
    wr32(esi + 0x18u, 0u);
    wr16(esi + 0x1cu, 0u);
    wr8(esi + 5u, 0u);
    wr16(esi + 6u, 0u);
    wr16(edi, 0u);
    wr16(edi + 2u, 2u);
    wr32(edi + 4u, 0u);
L_100e1290: ;
    COW_AT(100e1290)
    eax = arg1 + 0x26beu;
    ecx = 2u;
    edx = 0u;
L_100e129d: ;
    COW_AT(100e129d)
    if (rd32(eax - 0x79eu) != 0u)
    {
    COW_AT(100e12a5)
        if (rd16(eax) != 3u)
        {
    COW_AT(100e12ab)
            edx = edx + 1u;
        }
    }
    COW_AT(100e12ac)
    if (ecx != 1u)
    {
        eax = eax + 0x7d4u;
        ecx = ecx - 1u;
        goto L_100e129d;
    }
    eax = eax + 0x7d4u;
    COW_AT(100e12b4)
    if ((uint16_t)edx != 0u) goto L_100e139b;
    COW_AT(100e12bd)
    wr16(arg1 + 0xcu, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100e12cd: ;
    COW_AT(100e12cd)
    if (loc_4 <= rd32(esi) + 0x1eu) goto L_100e1290;
    COW_AT(100e12da)
    wr16(edi, 0u);
    wr16(edi + 2u, 2u);
    esi = arg1 + 0x1f20u;
    edi = 2u;
L_100e12ee: ;
    COW_AT(100e12ee)
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
    }
    else
    {
        eax = rd32(esi);
    COW_AT(100e12f4)
        t18 = rd32(esi + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t19 = cow_thiscall(g, eax, t18, 0);
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
    COW_AT(100e1303)
    wr8(esi - 0x10u, 0u);
    wr32(esi - 0x14u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    wr16(esi + 8u, 0u);
    wr8(esi - 0xfu, 0u);
    wr16(esi - 0xeu, 0u);
    wr16(esi + 0x79cu, 0u);
    wr16(esi + 0x79eu, 2u);
    wr32(esi + 0x7a0u, 0u);
    if (edi != 1u)
    {
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e12ee;
    }
    COW_AT(100e1336)
    wr16(arg1 + 0xcu, 2u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100e1344: ;
    COW_AT(100e1344)
    esi = arg1 + 0x1f20u;
    edi = 2u;
L_100e134f: ;
    COW_AT(100e134f)
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
    COW_AT(100e1355)
        t37 = rd32(esi + 4u);
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, eax, ecx, 0);
        t38 = g->ecx;
        ecx = t38;
    }
    COW_AT(100e135f)
    wr8(esi - 0x10u, 0u);
    wr32(esi - 0x14u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    wr16(esi + 8u, 0u);
    wr8(esi - 0xfu, 0u);
    wr16(esi - 0xeu, 0u);
    wr16(esi + 0x79cu, 0u);
    wr16(esi + 0x79eu, 2u);
    wr32(esi + 0x7a0u, 0u);
    if (edi != 1u)
    {
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e134f;
    }
    COW_AT(100e1397)
    wr16(arg1 + 0xcu, 2u);
    eax = 2u;
L_100e139b: ;
    COW_AT(100e139b)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e0d50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e0d65u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0d7du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0d84u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0d8cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        g->esi = arg1 + 0x1ea0u;
        (void)sp0;
        return 1;
    }
    case 0x100e0da8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        g->esi = arg1 + 0x1ea0u;
        (void)sp0;
        return 1;
    }
    case 0x100e0dafu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        g->esi = arg1 + 0x1ea0u;
        (void)sp0;
        return 1;
    }
    case 0x100e0db8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        g->esi = arg1 + 0x1ea0u;
        (void)sp0;
        return 1;
    }
    case 0x100e0dd1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        g->esi = arg1 + 0x1ea0u;
        (void)sp0;
        return 1;
    }
    case 0x100e0ddeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        g->esi = arg1 + 0x1ea0u;
        (void)sp0;
        return 1;
    }
    case 0x100e0deau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        g->esi = arg1 + 0x1ea0u;
        (void)sp0;
        return 1;
    }
    case 0x100e0dfeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 2u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0e0eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 2u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0e1cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        g->esi = arg1 + 0x1ea0u;
        (void)sp0;
        return 1;
    }
    case 0x100e0e2bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        g->esi = arg1 + 0x1ea0u;
        (void)sp0;
        return 1;
    }
    case 0x100e0e44u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0e57u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        g->esi = arg1 + 0x1ee8u;
        (void)sp0;
        return 1;
    }
    case 0x100e0e63u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        g->esi = arg1 + 0x1ee8u;
        (void)sp0;
        return 1;
    }
    case 0x100e0e72u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        g->esi = arg1 + 0x1ee8u;
        (void)sp0;
        return 1;
    }
    case 0x100e0e89u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0e91u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0ebfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0ecbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0ed8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0ef2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0f07u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0f12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0f19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0f23u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0f30u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0f72u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0f85u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0fa7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0fb3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0fc7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 2u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0fd7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 2u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0fe5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e0ff0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1000u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1010u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e101au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1029u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1040u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e104fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e105fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e106du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1080u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1094u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e10a5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e10b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e10b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e10c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e10ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e10f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e10fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e110cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1116u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1123u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1128u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1132u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1136u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e113eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1140u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1148u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1150u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1167u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1177u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100e118fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100e1195u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100e119fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100e11d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100e11e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e11f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ecx = 2u;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e11feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e120du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ecx = 2u;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1240u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ecx = 2u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e124eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100e1252u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e125du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1264u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e126eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1290u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e129du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e12a5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e12abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e12acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e12b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e12bdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e12cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e12dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e12eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ecx = 2u;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e12f4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1303u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ecx = 2u;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1336u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ecx = 2u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1344u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e134fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1355u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e135fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e1397u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->eax = 2u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e139bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0d50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e0d50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
