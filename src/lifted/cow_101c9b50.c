/* f_0x101c9b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_101c9b50(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d16;
    double d17;
    double d22;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c9b5au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101c9b5a;
    case 0x101c9b62u: in_eax = g->eax; self = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101c9b62;
    case 0x101c9b90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9b90;
    case 0x101c9ba5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9ba5;
    case 0x101c9bbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9bba;
    case 0x101c9bc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9bc9;
    case 0x101c9bceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9bce;
    case 0x101c9bd4u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9bd4;
    case 0x101c9bdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9bdc;
    case 0x101c9bebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9beb;
    case 0x101c9bf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9bf0;
    case 0x101c9bf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9bf4;
    case 0x101c9bfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9bfe;
    case 0x101c9c02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c02;
    case 0x101c9c0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c0c;
    case 0x101c9c1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c1d;
    case 0x101c9c24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c24;
    case 0x101c9c29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c29;
    case 0x101c9c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c2d;
    case 0x101c9c53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c53;
    case 0x101c9c5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c5a;
    case 0x101c9c62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c62;
    case 0x101c9c7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c7e;
    case 0x101c9c83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c83;
    case 0x101c9c89u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c89;
    case 0x101c9c8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c8d;
    case 0x101c9c9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9c9c;
    case 0x101c9ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9ca1;
    case 0x101c9ca5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9ca5;
    case 0x101c9cafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9caf;
    case 0x101c9cb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9cb3;
    case 0x101c9cbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9cbd;
    case 0x101c9cceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9cce;
    case 0x101c9cd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9cd5;
    case 0x101c9cdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9cda;
    case 0x101c9cdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9cde;
    case 0x101c9d25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9d25;
    case 0x101c9d29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9d29;
    case 0x101c9d30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9d30;
    case 0x101c9d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9d31;
    case 0x101c9d42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101c9d42;
    default: break;
    }
#endif

    COW_AT(101c9b50)
    if (arg3 != 0u) goto L_101c9b62;
    COW_AT(101c9b5a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (uint32_t)(int16_t)rd16(sp0 + 4u);
L_101c9b62: ;
    COW_AT(101c9b62)
    g->eax = in_eax;
    g->ecx = self;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
    t2 = g->ecx;
    t3 = rd32(sp0 + 0x10u);
    edi = arg3;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x10u < sp0 - 0x14u;
    pf = PARITY((uint8_t)(sp0 - 0x10u));
    af = (sp0 - 0x14u ^ sp0 - 0x10u) >> 4u & 1u;
    zf = sp0 == 0x10u;
    sf = (int32_t)(sp0 - 0x10u) < 0;
    of = ((sp0 - 0x14u ^ sp0 - 0x10u) & (sp0 - 0x10u ^ 4u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (t3 != 0x80808080u)
    {
        ecx = ~ecx - 1u;
        edx = t1;
        ebx = t3;
        loc_4 = t1;
        goto L_101c9c62;
    }
    ecx = ~ecx - 1u;
    edx = t1;
    ebx = t3;
    loc_4 = t1;
    COW_AT(101c9b90)
    d4 = (double)rdf32(sp0 + 0x18u);
    if (d4 != (double)rdf32(COW_IMG(0x1032961cu))) goto L_101c9c62;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(101c9ba5)
    d5 = (double)rdf32(sp0 + 0x1cu);
    if (d5 != (double)rdf32(COW_IMG(0x1032961cu))) goto L_101c9c62;
    COW_AT(101c9bba)
    if ((int32_t)(ecx - 1u) < 0)
    {
        esi = rd32(sp0 + 4u);
        goto L_101c9d42;
    }
    esi = rd32(sp0 + 4u);
    edi = ecx - 1u;
    COW_AT(101c9bc9)
    ebx = (ebx & 0xffff0000u) | rd16(sp0 + 8u);
L_101c9bce: ;
    COW_AT(101c9bce)
    if ((int32_t)edi <= 0)
    {
        ecx = 0u;
    }
    else
    {
    COW_AT(101c9bd4)
        ecx = rd8(arg3 + edi - 1u);
    }
    COW_AT(101c9bdc)
    t6 = rd8(arg3 + edi);
    wr8(sp0 + 8u, (uint8_t)t6);
    if ((uint8_t)t6 != 0x85u)
    {
        eax = (arg3 & 0xffffff00u) | t6;
    COW_AT(101c9beb)
        if ((uint8_t)ecx != 0x85u) goto L_101c9c0c;
    COW_AT(101c9bf0)
        if ((uint8_t)eax != 0xdau) goto L_101c9bfe;
    COW_AT(101c9bf4)
        ecx = rd32(rd32(edx) + 0x17cu);
L_101c9c29: ;
    COW_AT(101c9c29)
        if (ecx != 0u)
        {
    COW_AT(101c9c2d)
            t7 = (uint32_t)(int16_t)(esi + ((edx & 0xffff0000u) | (uint16_t)(rd16(ecx + 0x20u) - rd16(ecx + 0x22u))) + 1u);
            t8 = rd16(ecx + 0x20u);
            t9 = rd16(ecx + 0x22u);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t7, (uint32_t)(int16_t)ebx, 0x80808080u, 0u, 0u);
            esi = esi + ((edx & 0xffff0000u) | (uint16_t)(t8 - t9)) + 1u;
            edx = loc_4;
        }
    }
L_101c9c53: ;
    COW_AT(101c9c53)
    if ((int32_t)(edi - 1u) >= 0)
    {
        edi = edi - 1u;
        goto L_101c9bce;
    }
    COW_AT(101c9c5a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (uint32_t)(int16_t)esi;
L_101c9bfe: ;
    COW_AT(101c9bfe)
    if ((uint8_t)eax != 0xc8u) goto L_101c9c0c;
    COW_AT(101c9c02)
    ecx = rd32(rd32(edx) + 0x180u);
    goto L_101c9c29;
L_101c9c0c: ;
    COW_AT(101c9c0c)
    if ((int32_t)((uint8_t)rd32(sp0 + 8u) - 0x20u) < 0) goto L_101c9c53;
    eax = (uint8_t)rd32(sp0 + 8u) - 0x20u;
    COW_AT(101c9c1d)
    if ((int32_t)eax > 139) goto L_101c9c53;
    COW_AT(101c9c24)
    ecx = rd32(eax * 4u + rd32(edx));
    goto L_101c9c29;
L_101c9c62: ;
    COW_AT(101c9c62)
    t10 = (uint32_t)(int16_t)rd16(sp0 + 4u);
    wr32(sp0 + 4u, t10);
    t11 = rd32(sp0 + 4u);
    wrf32(sp0 + 4u, (float)(double)(int32_t)t11);
    if ((int32_t)(ecx - 1u) < 0)
    {
        eax = t10;
    }
    else
    {
        eax = t10;
        edi = ecx - 1u;
    COW_AT(101c9c7e)
        ebp = rd32(sp0 + 0x1cu);
L_101c9c83: ;
    COW_AT(101c9c83)
        if ((int32_t)edi <= 0)
        {
            ecx = 0u;
        }
        else
        {
    COW_AT(101c9c89)
            ecx = rd8(arg3 + edi - 1u);
        }
    COW_AT(101c9c8d)
        t12 = rd8(arg3 + edi);
        wr8(sp0 + 0x1cu, (uint8_t)t12);
        if ((uint8_t)t12 == 0x85u)
        {
            eax = (eax & 0xffffff00u) | t12;
        }
        else
        {
            eax = (eax & 0xffffff00u) | t12;
    COW_AT(101c9c9c)
            if ((uint8_t)ecx != 0x85u) goto L_101c9cbd;
    COW_AT(101c9ca1)
            if ((uint8_t)eax != 0xdau) goto L_101c9caf;
    COW_AT(101c9ca5)
            ecx = rd32(edx);
            esi = rd32(rd32(edx) + 0x17cu);
L_101c9cda: ;
    COW_AT(101c9cda)
            if (esi != 0u)
            {
    COW_AT(101c9cde)
                t13 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - 1u;
                t14 = rd16(esi + 0x20u);
                wr32(sp0 + 0x10u, t13);
                t15 = (uint32_t)(int16_t)rd16(sp0 + 8u);
                d16 = fr(g, (double)rdf32(sp0 + 4u) - fr(g, (double)(int32_t)rd32(sp0 + 0x10u) * (double)rdf32(sp0 + 0x18u)));
                wrf32(sp0 + 4u, (float)d16);
                g->edx = t15;
                d17 = (double)rdf32(sp0 + 4u);
                fpush(g, d17);
                g->esp = sp0 - 0x30u;
                t18 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)(int16_t)t14, g->ecx, g->edx, 1, 0);
                t19 = g->edx;
                g->esp = sp0 - 0x14u;
                t20 = cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, t18, t15, arg6, ebp, ebx, 0u, 0u, 0u);
                t21 = g->ecx;
                eax = t20;
                ecx = t21;
                edx = loc_4;
            }
    COW_AT(101c9d25)
        }
L_101c9d29: ;
    COW_AT(101c9d29)
        if ((int32_t)(edi - 1u) >= 0)
        {
            edi = edi - 1u;
            goto L_101c9c83;
        }
    COW_AT(101c9d30)
    }
    COW_AT(101c9d31)
    d22 = fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d22);
    g->esp = sp0 - 0x10u;
    t23 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    esi = t23;
L_101c9d42: ;
    COW_AT(101c9d42)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (uint32_t)(int16_t)esi;
L_101c9caf: ;
    COW_AT(101c9caf)
    if ((uint8_t)eax != 0xc8u) goto L_101c9cbd;
    COW_AT(101c9cb3)
    eax = rd32(edx);
    esi = rd32(rd32(edx) + 0x180u);
    goto L_101c9cda;
L_101c9cbd: ;
    COW_AT(101c9cbd)
    if ((int32_t)((uint8_t)rd32(sp0 + 0x1cu) - 0x20u) < 0)
    {
        eax = (uint8_t)rd32(sp0 + 0x1cu) - 0x20u;
        ecx = (uint8_t)rd32(sp0 + 0x1cu);
        goto L_101c9d29;
    }
    eax = (uint8_t)rd32(sp0 + 0x1cu) - 0x20u;
    ecx = (uint8_t)rd32(sp0 + 0x1cu);
    COW_AT(101c9cce)
    if ((int32_t)eax > 139) goto L_101c9d29;
    COW_AT(101c9cd5)
    ecx = rd32(edx);
    esi = rd32(eax * 4u + rd32(edx));
    goto L_101c9cda;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c9b50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c9b5au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101c9b62u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_eax = g->eax;
        self = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9b90u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9ba5u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9bbau:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9bc9u:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9bceu:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9bd4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c9bdcu:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9bebu:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9bf0u:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9bf4u:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9bfeu:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9c02u:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9c0cu:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9c1du:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9c24u:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9c29u:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9c2du:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9c53u:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9c5au:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9c62u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9c7eu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9c83u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9c89u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9c8du:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9c9cu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9ca1u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9ca5u:
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
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
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
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c9cafu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9cb3u:
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
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
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
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c9cbdu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9cceu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9cd5u:
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
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
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
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c9cdau:
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
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
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
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c9cdeu:
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
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
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
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c9d25u:
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
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
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
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c9d29u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9d30u:
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
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
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
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c9d31u:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c9d42u:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c9b50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c9b50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
