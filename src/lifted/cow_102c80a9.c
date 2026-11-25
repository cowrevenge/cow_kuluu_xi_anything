/* f_0x102c80a9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=9 */
void cow_fn_102c80a9(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    unsigned of;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg9 = rd32(sp0 + 0x24u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c80b9u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c80b9;
    case 0x102c80c4u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c80c4;
    case 0x102c80cau: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c80ca;
    case 0x102c80d0u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c80d0;
    case 0x102c80dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c80db;
    case 0x102c80ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c80dd;
    case 0x102c80e7u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c80e7;
    case 0x102c80ecu: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c80ec;
    case 0x102c80f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c80f7;
    case 0x102c80f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c80f9;
    case 0x102c8101u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8101;
    case 0x102c8106u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8106;
    case 0x102c810bu: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c810b;
    case 0x102c8110u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8110;
    case 0x102c8115u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8115;
    case 0x102c8120u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8120;
    case 0x102c8122u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8122;
    case 0x102c812au: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c812a;
    case 0x102c812fu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c812f;
    case 0x102c8134u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8134;
    case 0x102c8139u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8139;
    case 0x102c8144u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8144;
    case 0x102c8146u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8146;
    case 0x102c814bu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c814b;
    case 0x102c8151u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8151;
    case 0x102c8156u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8156;
    case 0x102c815bu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c815b;
    case 0x102c8160u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8160;
    case 0x102c8166u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8166;
    case 0x102c8171u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8171;
    case 0x102c8173u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8173;
    case 0x102c8179u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8179;
    case 0x102c8184u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8184;
    case 0x102c8186u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8186;
    case 0x102c818cu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c818c;
    case 0x102c8197u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8197;
    case 0x102c8199u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8199;
    case 0x102c81a6u: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81a6;
    case 0x102c81afu: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81af;
    case 0x102c81bau: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81ba;
    case 0x102c81bfu: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81bf;
    case 0x102c81c5u: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81c5;
    case 0x102c81ceu: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81ce;
    case 0x102c81d4u: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81d4;
    case 0x102c81d9u: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81d9;
    case 0x102c81deu: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81de;
    case 0x102c81e3u: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81e3;
    case 0x102c81eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81ee;
    case 0x102c81f3u: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81f3;
    case 0x102c81f8u: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c81f8;
    case 0x102c8203u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8203;
    case 0x102c8205u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8205;
    case 0x102c8230u: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8230;
    case 0x102c8235u: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8235;
    case 0x102c823bu: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c823b;
    case 0x102c823fu: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c823f;
    case 0x102c8244u: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8244;
    case 0x102c8247u: ecx = g->ecx; edx = g->edx; cf = g->cf; of = g->of; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8247;
    case 0x102c8269u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8269;
    case 0x102c8276u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c8276;
    case 0x102c827eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c827e;
    case 0x102c828au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102c828a;
    default: break;
    }
#endif

    COW_AT(102c80a9)
    if (arg1 != 0u)
    {
    COW_AT(102c80b9)
        if (arg2 != 0u)
        {
    COW_AT(102c80c4)
            if (arg3 == 0u) goto L_102c80d0;
    COW_AT(102c80ca)
            if (arg4 != 0u)
            {
                ecx = self;
                edx = in_edx;
                goto L_102c80dd;
            }
L_102c80d0: ;
    COW_AT(102c80d0)
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c98a8u), in_edi, in_esi);
            t1 = g->edx;
            edx = t1;
    COW_AT(102c80db)
            ecx = COW_IMG(0x103c98a8u);
L_102c80dd: ;
    COW_AT(102c80dd)
            if (arg3 > 0x7fffffffu) goto L_102c80ec;
    COW_AT(102c80e7)
            if (arg4 <= 0x7fffffffu) goto L_102c80f9;
L_102c80ec: ;
    COW_AT(102c80ec)
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c988cu), in_edi, in_esi);
            t2 = g->edx;
            edx = t2;
    COW_AT(102c80f7)
            ecx = COW_IMG(0x103c988cu);
L_102c80f9: ;
    COW_AT(102c80f9)
            if (arg5 == 1u)
            {
                eax = arg5;
            }
            else
            {
    COW_AT(102c8101)
                if (arg5 == 2u)
                {
                    eax = arg5;
                }
                else
                {
    COW_AT(102c8106)
                    if (arg5 == 4u)
                    {
                        eax = arg5;
                    }
                    else
                    {
    COW_AT(102c810b)
                        if (arg5 == 8u)
                        {
                            eax = arg5;
                        }
                        else
                        {
    COW_AT(102c8110)
                            if (arg5 == 0x10u)
                            {
                                eax = arg5;
                            }
                            else
                            {
    COW_AT(102c8115)
                                g->eax = arg5;
                                g->esp = sp0 - 4u;
                                t3 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c9870u), in_edi, in_esi);
                                t4 = g->edx;
                                eax = t3;
                                edx = t4;
    COW_AT(102c8120)
                                ecx = COW_IMG(0x103c9870u);
                            }
                        }
                    }
                }
            }
    COW_AT(102c8122)
            if ((int32_t)arg6 < 0) goto L_102c8139;
    COW_AT(102c812a)
            if (arg6 == 1u) goto L_102c8139;
    COW_AT(102c812f)
            if (arg6 == 5u) goto L_102c8139;
    COW_AT(102c8134)
            if ((int32_t)arg6 <= 6) goto L_102c8146;
L_102c8139: ;
    COW_AT(102c8139)
            g->eax = eax;
            g->esp = sp0 - 8u;
            t5 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c9854u), in_ebx, in_edi);
            t6 = g->edx;
            eax = t5;
            edx = t6;
    COW_AT(102c8144)
            ecx = COW_IMG(0x103c9854u);
L_102c8146: ;
    COW_AT(102c8146)
            if (arg6 != 3u) goto L_102c8151;
    COW_AT(102c814b)
            if ((int32_t)arg5 > 8) goto L_102c8166;
L_102c8151: ;
    COW_AT(102c8151)
            if (arg6 == 2u) goto L_102c8160;
    COW_AT(102c8156)
            if (arg6 == 4u) goto L_102c8160;
    COW_AT(102c815b)
            if (arg6 != 6u) goto L_102c8173;
L_102c8160: ;
    COW_AT(102c8160)
            if ((int32_t)arg5 >= 8) goto L_102c8173;
L_102c8166: ;
    COW_AT(102c8166)
            g->eax = eax;
            g->esp = sp0 - 8u;
            t7 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c9820u), in_ebx, in_edi);
            t8 = g->edx;
            eax = t7;
            edx = t8;
    COW_AT(102c8171)
            ecx = COW_IMG(0x103c9820u);
L_102c8173: ;
    COW_AT(102c8173)
            if ((int32_t)arg7 >= 2)
            {
    COW_AT(102c8179)
                g->eax = eax;
                g->esp = sp0 - 8u;
                t9 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c97fcu), in_ebx, in_edi);
                t10 = g->edx;
                eax = t9;
                edx = t10;
    COW_AT(102c8184)
                ecx = COW_IMG(0x103c97fcu);
            }
    COW_AT(102c8186)
            if (arg8 != 0u)
            {
    COW_AT(102c818c)
                g->esp = sp0 - 8u;
                cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c97d8u), in_ebx, in_edi);
                t11 = g->edx;
                edx = t11;
    COW_AT(102c8197)
                ecx = COW_IMG(0x103c97d8u);
            }
    COW_AT(102c8199)
            t12 = rd32(arg1 + 0x68u);
            if ((t12 & 0x1000u) != 0u)
            {
    COW_AT(102c81a6)
                t13 = rd32(arg1 + 0x230u);
                if (t13 != 0u)
                {
    COW_AT(102c81af)
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c97a4u));
                    t14 = g->edx;
                    edx = t14;
    COW_AT(102c81ba)
                    ecx = COW_IMG(0x103c97a4u);
                }
            }
    COW_AT(102c81bf)
            if (arg9 != 0u)
            {
    COW_AT(102c81c5)
                t15 = rd8(arg1 + 0x230u);
                if ((t15 & 4u) == 0u) goto L_102c81e3;
    COW_AT(102c81ce)
                if (arg9 != 0x40u) goto L_102c81e3;
    COW_AT(102c81d4)
                t16 = rd32(arg1 + 0x68u);
                if ((t16 & 0x1000u) != 0u) goto L_102c81e3;
    COW_AT(102c81d9)
                if (arg6 == 2u) goto L_102c81f3;
    COW_AT(102c81de)
                if (arg6 == 6u) goto L_102c81f3;
L_102c81e3: ;
    COW_AT(102c81e3)
                g->esp = sp0 - 8u;
                cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c9784u), in_ebx, in_edi);
                t17 = g->edx;
                edx = t17;
    COW_AT(102c81ee)
                ecx = COW_IMG(0x103c9784u);
L_102c81f3: ;
    COW_AT(102c81f3)
                t18 = rd32(arg1 + 0x68u);
                if ((t18 & 0x1000u) != 0u)
                {
    COW_AT(102c81f8)
                    g->esp = sp0 - 0x10u;
                    cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c9764u));
    COW_AT(102c8203)
                    ecx = COW_IMG(0x103c9764u);
                }
            }
    COW_AT(102c8205)
            wr32(arg2 + 4u, arg4);
            wr8(arg2 + 0x1au, (uint8_t)arg8);
            wr8(arg2 + 0x1bu, (uint8_t)arg9);
            wr32(arg2, arg3);
            wr8(arg2 + 0x18u, (uint8_t)arg5);
            wr8(arg2 + 0x19u, (uint8_t)arg6);
            wr8(arg2 + 0x1cu, (uint8_t)arg7);
            if ((uint8_t)arg6 == 3u)
            {
                ecx = (ecx & 0xffffff00u) | (uint8_t)arg5;
                goto L_102c823b;
            }
            ecx = (ecx & 0xffffff00u) | (uint8_t)arg5;
    COW_AT(102c8230)
            if ((arg6 & 2u) == 0u) goto L_102c823b;
    COW_AT(102c8235)
            wr8(arg2 + 0x1du, 3u);
L_102c823f: ;
    COW_AT(102c823f)
            if ((arg6 & 4u) != 0u)
            {
    COW_AT(102c8244)
                t19 = rd8(arg2 + 0x1du);
                wr8(arg2 + 0x1du, (uint8_t)(t19 + 1u));
            }
    COW_AT(102c8247)
            t20 = rd8(arg2 + 0x1du);
            eax = (arg4 & 0xffffff00u) | t20;
            cf = 0u;
            of = 0u;
            { /* imul cl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)ecx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
            wr8(arg2 + 0x1eu, (uint8_t)eax);
            t21 = cow_divu(g, 0x7fffffffu, (uint32_t)((int32_t)((uint8_t)eax + 7u) >> 3u));
            t22 = cow_modu(g, 0x7fffffffu, (uint32_t)((int32_t)((uint8_t)eax + 7u) >> 3u));
            if (arg3 <= t21 - 0x40u)
            {
                ecx = (uint8_t)eax;
    COW_AT(102c827e)
                t24 = (ecx * arg3 + 7u) >> 3u;
                wr32(arg2 + 0xcu, t24);
            }
            else
            {
                ecx = (uint8_t)eax;
                eax = t21 - 0x40u;
                edx = t22;
    COW_AT(102c8269)
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c9724u));
    COW_AT(102c8276)
                t23 = rd32(arg2 + 0xcu);
                wr32(arg2 + 0xcu, 0u);
            }
        }
    }
    COW_AT(102c828a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_102c823b: ;
    COW_AT(102c823b)
    wr8(arg2 + 0x1du, 1u);
    goto L_102c823f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c80a9(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c80b9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c80c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c80cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c80d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c80dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x14u, arg1);
        wr32(sp0 - 0x10u, COW_IMG(0x103c98a8u));
        (void)sp0;
        return 1;
    }
    case 0x102c80ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c80e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = 0x7fffffffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c80ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = 0x7fffffffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c80f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x14u, arg1);
        wr32(sp0 - 0x10u, COW_IMG(0x103c988cu));
        (void)sp0;
        return 1;
    }
    case 0x102c80f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8101u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8106u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c810bu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8110u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8115u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8120u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x14u, arg1);
        wr32(sp0 - 0x10u, COW_IMG(0x103c9870u));
        (void)sp0;
        return 1;
    }
    case 0x102c8122u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c812au:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c812fu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8134u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8139u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8144u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x18u, arg1);
        wr32(sp0 - 0x14u, COW_IMG(0x103c9854u));
        (void)sp0;
        return 1;
    }
    case 0x102c8146u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c814bu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8151u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8156u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c815bu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8160u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8166u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8171u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x18u, arg1);
        wr32(sp0 - 0x14u, COW_IMG(0x103c9820u));
        (void)sp0;
        return 1;
    }
    case 0x102c8173u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8179u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8184u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x18u, arg1);
        wr32(sp0 - 0x14u, COW_IMG(0x103c97fcu));
        (void)sp0;
        return 1;
    }
    case 0x102c8186u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c818cu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c8197u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        wr32(sp0 - 0x18u, arg1);
        wr32(sp0 - 0x14u, COW_IMG(0x103c97d8u));
        (void)sp0;
        return 1;
    }
    case 0x102c8199u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c81a6u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x102c81afu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x102c81bau:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0x1000u;
        wr32(sp0 - 0x18u, arg1);
        wr32(sp0 - 0x14u, COW_IMG(0x103c97a4u));
        (void)sp0;
        return 1;
    }
    case 0x102c81bfu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x102c81c5u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x102c81ceu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x102c81d4u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x102c81d9u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x102c81deu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x102c81e3u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x102c81eeu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0x1000u;
        wr32(sp0 - 0x18u, arg1);
        wr32(sp0 - 0x14u, COW_IMG(0x103c9784u));
        (void)sp0;
        return 1;
    }
    case 0x102c81f3u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x102c81f8u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c8203u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        wr32(sp0 - 0x18u, arg1);
        wr32(sp0 - 0x14u, COW_IMG(0x103c9764u));
        (void)sp0;
        return 1;
    }
    case 0x102c8205u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c8230u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (arg4 & 0xffffff00u) | (uint8_t)arg7;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c8235u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (arg4 & 0xffffff00u) | (uint8_t)arg7;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c823bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (arg4 & 0xffffff00u) | (uint8_t)arg7;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c823fu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (arg4 & 0xffffff00u) | (uint8_t)arg7;
        g->ebx = arg6;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c8244u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (arg4 & 0xffffff00u) | (uint8_t)arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c8247u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = (arg4 & 0xffffff00u) | (uint8_t)arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c8269u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c8276u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        wr32(sp0 - 0x14u, arg1);
        wr32(sp0 - 0x10u, COW_IMG(0x103c9724u));
        (void)sp0;
        return 1;
    }
    case 0x102c827eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c828au:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c80a9(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c80a9(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
