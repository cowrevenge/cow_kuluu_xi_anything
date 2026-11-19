/* f_0x10305070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10305070(Guest* g)
{
    double d11;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1030509bu: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1030509b;
    case 0x103050a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050a7;
    case 0x103050a9u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050a9;
    case 0x103050aeu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050ae;
    case 0x103050b1u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050b1;
    case 0x103050b8u: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050b8;
    case 0x103050bdu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050bd;
    case 0x103050cfu: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050cf;
    case 0x103050d6u: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050d6;
    case 0x103050d9u: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050d9;
    case 0x103050dcu: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050dc;
    case 0x103050e5u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050e5;
    case 0x103050edu: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050ed;
    case 0x103050f9u: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103050f9;
    case 0x10305109u: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10305109;
    case 0x10305112u: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10305112;
    case 0x1030511bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1030511b;
    case 0x10305124u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10305124;
    case 0x1030512bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1030512b;
    case 0x1030512eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1030512e;
    case 0x1030513eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1030513e;
    case 0x10305149u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10305149;
    case 0x10305157u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10305157;
    case 0x10305162u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10305162;
    case 0x10305165u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10305165;
    case 0x10305168u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10305168;
    case 0x1030517cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1030517c;
    case 0x10305188u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10305188;
    case 0x1030518du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1030518d;
    case 0x103051b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103051b1;
    case 0x103051bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103051ba;
    case 0x103051bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103051bc;
    case 0x103051ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103051cc;
    case 0x103051efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103051ef;
    case 0x103051f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103051f1;
    case 0x103051fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_103051fb;
    case 0x10305207u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10305207;
    case 0x10305222u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10305222;
    case 0x10305223u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10305223;
    default: break;
    }
#endif

    COW_AT(10305070)
    t1 = rd32(rd32(sp0 + 4u) + 0x198u);
    t2 = rd32(sp0 + 4u);
    t3 = rd32(rd32(sp0 + 4u) + 0xc4u);
    t4 = rd32(rd32(sp0 + 4u) + 0x20u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t4 <= 0)
    {
        eax = t1;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        esi = t2;
        edi = t3;
    COW_AT(1030509b)
        edx = in_edx;
        ebx = eax + 0x2cu;
        edi = edi + 0x24u;
        loc_8 = 0u;
        loc_10 = 0u;
        loc_14 = eax + 0x2cu;
L_103050a9: ;
    COW_AT(103050a9)
        if (rd32(edi) == 1u) goto L_10305124;
        eax = rd32(edi) - 1u;
    COW_AT(103050ae)
        if (eax == 1u) goto L_1030511b;
        eax = eax - 1u;
    COW_AT(103050b1)
        if (eax == 2u) goto L_10305112;
        eax = eax - 2u;
    COW_AT(103050b8)
        if (eax == 4u) goto L_103050cf;
    COW_AT(103050bd)
        wr32(rd32(esi) + 0x14u, 6u);
        t5 = rd32(edi);
        wr32(rd32(esi) + 0x18u, t5);
        ecx = t5;
L_103050e5: ;
    COW_AT(103050e5)
        g->edx = 2u;
        g->esp = sp0 - 0x28u;
        cow_thiscall_cdecl(g, rd32(rd32(esi)), ecx, 1, esi);
        t6 = g->edx;
        ecx = esi;
        edx = t6;
L_1030512e: ;
    COW_AT(1030512e)
        t7 = rd32(sp0 + 4u);
        wr32(ebx - 0x28u, t7);
        if (rd8(edi + 0xcu) != 0u)
        {
    COW_AT(1030513e)
            if (rd32(ebx) != loc_8)
            {
                eax = loc_8;
    COW_AT(10305149)
                t8 = rd32(edi + 0x28u);
                if (rd32(edi + 0x28u) == 0u)
                {
                    edx = t8;
                }
                else
                {
                    edx = t8;
                    loc_18 = t8;
    COW_AT(10305157)
                    wr32(ebx, eax);
                    if (eax == 0u)
                    {
    COW_AT(103051f1)
                        eax = rd32(edi + 0x2cu);
                        ecx = edx - rd32(edi + 0x2cu);
                        edx = 0x40u;
L_103051fb: ;
    COW_AT(103051fb)
                        t14 = rd16(eax + ecx);
                        wr16(eax, (uint16_t)t14);
                        if (edx != 1u)
                        {
                            eax = eax + 2u;
                            edx = edx - 1u;
                            ebx = (ebx & 0xffff0000u) | t14;
                            goto L_103051fb;
                        }
                        edx = edx - 1u;
                    }
                    else
                    {
    COW_AT(10305162)
                        if (eax == 1u)
                        {
    COW_AT(103051bc)
                            t12 = rd32(edi + 0x2cu);
                            t13 = t12 - COW_IMG(0x10349390u);
                            eax = COW_IMG(0x10349390u);
                            edx = edx - COW_IMG(0x10349390u);
                            loc_c = t13;
L_103051cc: ;
    COW_AT(103051cc)
                            wr16(eax + loc_c, (uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)rd16(eax + edx) * (uint32_t)(int16_t)rd16(eax) + 0x800u) >> 0xcu));
                            if ((int32_t)(eax + 2u) < (int32_t)COW_IMG(0x10349410u))
                            {
                                eax = eax + 2u;
                                goto L_103051cc;
                            }
    COW_AT(103051ef)
                        }
                        else
                        {
                            eax = eax - 1u;
    COW_AT(10305165)
                            if (eax == 1u)
                            {
    COW_AT(1030517c)
                                eax = 0u;
                                edx = rd32(edi + 0x2cu);
                                loc_c = COW_IMG(0x10349410u);
L_10305188: ;
    COW_AT(10305188)
                                ecx = COW_IMG(0x10349410u);
L_1030518d: ;
    COW_AT(1030518d)
                                t10 = rd16(eax * 2u + loc_18);
                                d11 = fr(g, fr(g, (double)(int32_t)t10 * rdf64(ecx)) * rdf64(loc_c));
                                wrf32(eax * 4u + edx, (float)d11);
                                if ((int32_t)(ecx + 8u) < (int32_t)COW_IMG(0x10349450u))
                                {
                                    eax = eax + 1u;
                                    ecx = ecx + 8u;
                                    goto L_1030518d;
                                }
                                eax = eax + 1u;
    COW_AT(103051b1)
                                if ((int32_t)(loc_c + 8u) < (int32_t)COW_IMG(0x10349450u))
                                {
                                    loc_c = loc_c + 8u;
                                    goto L_10305188;
                                }
    COW_AT(103051ba)
                            }
                            else
                            {
    COW_AT(10305168)
                                wr32(rd32(esi) + 0x14u, 0x2fu);
                                g->edx = edx;
                                g->esp = sp0 - 0x28u;
                                cow_thiscall_cdecl(g, rd32(rd32(esi)), ecx, 1, esi);
                                t9 = g->edx;
                                edx = t9;
                            }
                        }
                    }
                }
            }
        }
    COW_AT(10305207)
        if ((int32_t)(loc_10 + 1u) < (int32_t)rd32(esi + 0x20u))
        {
            ebx = loc_14 + 4u;
            edi = edi + 0x54u;
            loc_10 = loc_10 + 1u;
            loc_14 = loc_14 + 4u;
            goto L_103050a7;
        }
        eax = loc_10 + 1u;
    COW_AT(10305222)
    }
    COW_AT(10305223)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_103050a7: ;
    COW_AT(103050a7)
    goto L_103050a9;
L_103050cf: ;
    COW_AT(103050cf)
    if (rd32(esi + 0x44u) == 0u) goto L_10305109;
    eax = rd32(esi + 0x44u);
    COW_AT(103050d6)
    if (eax == 1u) goto L_103050f9;
    eax = eax - 1u;
    COW_AT(103050d9)
    if (eax == 1u) goto L_103050ed;
    COW_AT(103050dc)
    wr32(rd32(esi) + 0x14u, 0x2fu);
    ecx = 0u;
    goto L_103050e5;
L_103050ed: ;
    COW_AT(103050ed)
    wr32(sp0 + 4u, COW_IMG(0x1030b0a0u));
    ecx = 0u;
    edx = 2u;
    loc_8 = 2u;
    goto L_1030512e;
L_103050f9: ;
    COW_AT(103050f9)
    wr32(sp0 + 4u, COW_IMG(0x1030b054u));
    ecx = 0u;
    edx = 2u;
    loc_8 = 1u;
    goto L_1030512e;
L_10305109: ;
    COW_AT(10305109)
    wr32(sp0 + 4u, COW_IMG(0x1030b008u));
    edx = 2u;
L_1030512b: ;
    COW_AT(1030512b)
    ecx = 0u;
    loc_8 = 0u;
    goto L_1030512e;
L_10305112: ;
    COW_AT(10305112)
    wr32(sp0 + 4u, COW_IMG(0x1030aaf8u));
    edx = 2u;
    goto L_1030512b;
L_1030511b: ;
    COW_AT(1030511b)
    wr32(sp0 + 4u, COW_IMG(0x1030ae0du));
    goto L_1030512b;
L_10305124: ;
    COW_AT(10305124)
    wr32(sp0 + 4u, COW_IMG(0x1030afcbu));
    goto L_1030512b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10305070(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1030509bu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x103050a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103050a9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103050aeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103050b1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103050b8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->edx = 2u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103050bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->edx = 2u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103050cfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->edx = 2u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103050d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->edx = 2u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103050d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->edx = 2u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103050dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->edx = 2u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103050e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->edx = 2u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103050edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->edx = 2u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103050f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->edx = 2u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10305109u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->edx = 2u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10305112u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->edx = 2u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030511bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10305124u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030512bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030512eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030513eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10305149u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10305157u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10305162u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10305165u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10305168u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030517cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10305188u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030518du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103051b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebx = COW_IMG(0x10349450u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103051bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103051bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103051ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103051efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103051f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103051fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10305207u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10305222u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10305223u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10305070(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10305070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
