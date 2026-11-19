/* f_0x10079420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10079420(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_460;
    uint32_t loc_464;
    uint32_t loc_468;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1148u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10079443u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079443;
    case 0x10079455u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079455;
    case 0x1007945au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007945a;
    case 0x1007945eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007945e;
    case 0x10079463u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_468 = rd32(sp0 - 0x468u); loc_464 = rd32(sp0 - 0x464u); loc_460 = rd32(sp0 - 0x460u); goto E_10079463;
    case 0x10079468u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_468 = rd32(sp0 - 0x468u); loc_464 = rd32(sp0 - 0x464u); loc_460 = rd32(sp0 - 0x460u); goto E_10079468;
    case 0x10079486u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_468 = rd32(sp0 - 0x468u); loc_464 = rd32(sp0 - 0x464u); loc_460 = rd32(sp0 - 0x460u); goto E_10079486;
    case 0x100794b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100794b6;
    case 0x100794c5u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100794c5;
    case 0x100794cau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100794ca;
    case 0x100794ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100794ce;
    case 0x100794d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100794d4;
    case 0x100794e6u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100794e6;
    case 0x100794ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100794eb;
    case 0x100794efu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100794ef;
    case 0x100794fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100794fd;
    case 0x1007950fu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007950f;
    case 0x10079514u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079514;
    case 0x10079518u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079518;
    case 0x10079526u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079526;
    case 0x10079538u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079538;
    case 0x1007953du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007953d;
    case 0x10079545u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079545;
    case 0x10079554u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079554;
    case 0x10079559u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079559;
    case 0x10079561u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079561;
    case 0x10079573u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079573;
    case 0x10079578u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079578;
    case 0x1007957cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007957c;
    case 0x1007958au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007958a;
    case 0x10079599u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079599;
    case 0x1007959eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007959e;
    case 0x100795a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100795a2;
    case 0x100795b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100795b0;
    case 0x100795c2u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100795c2;
    case 0x100795c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100795c7;
    case 0x100795cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100795cb;
    case 0x100795d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100795d8;
    case 0x100795e7u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100795e7;
    case 0x100795ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100795ec;
    case 0x100795f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100795f0;
    case 0x100795fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100795fd;
    case 0x1007960fu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007960f;
    case 0x10079614u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079614;
    case 0x10079618u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079618;
    case 0x10079626u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079626;
    case 0x10079638u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079638;
    case 0x1007963du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007963d;
    case 0x10079641u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079641;
    case 0x1007964fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007964f;
    case 0x10079661u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079661;
    case 0x10079666u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079666;
    case 0x1007966eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007966e;
    case 0x10079680u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079680;
    case 0x10079685u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079685;
    case 0x1007968du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007968d;
    case 0x1007969fu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007969f;
    case 0x100796a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100796a4;
    case 0x100796acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100796ac;
    case 0x100796beu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100796be;
    case 0x100796c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100796c3;
    case 0x100796c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100796c7;
    case 0x100796d9u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100796d9;
    case 0x100796deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100796de;
    case 0x100796e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100796e2;
    case 0x100796f4u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100796f4;
    case 0x100796f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100796f9;
    case 0x100796fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_100796fd;
    case 0x10079714u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079714;
    case 0x10079726u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079726;
    case 0x1007972bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007972b;
    case 0x1007972fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_1007972f;
    case 0x10079743u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079743;
    case 0x10079751u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x468u); in_esi = rd32(sp0 - 0x464u); in_ebx = rd32(sp0 - 0x460u); g->ebx = rd32(sp0 - 0x460u); g->edi = rd32(sp0 - 0x468u); g->esi = rd32(sp0 - 0x464u); goto E_10079751;
    case 0x10079762u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10079762;
    case 0x10079769u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10079769;
    case 0x10079773u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10079773;
    case 0x1007977du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1007977d;
    case 0x10079786u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10079786;
    case 0x10079790u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_468 = rd32(sp0 - 0x468u); loc_464 = rd32(sp0 - 0x464u); loc_460 = rd32(sp0 - 0x460u); goto E_10079790;
    case 0x100797b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_468 = rd32(sp0 - 0x468u); loc_464 = rd32(sp0 - 0x464u); loc_460 = rd32(sp0 - 0x460u); goto E_100797b0;
    case 0x100797c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_468 = rd32(sp0 - 0x468u); loc_464 = rd32(sp0 - 0x464u); loc_460 = rd32(sp0 - 0x460u); goto E_100797c2;
    default: break;
    }
#endif

    COW_AT(10079420)
    wr32(sp0 - 0x460u, in_ebx);
    wr32(sp0 - 0x464u, in_esi);
    wr32(sp0 - 0x468u, in_edi);
    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr8(sp0 - 0x458u, 1u);
    if (t1 == 0u)
    {
        eax = t1;
        edx = in_edx;
        goto L_10079743;
    }
    eax = t1;
    COW_AT(10079443)
    esi = eax;
    edi = COW_IMG(0x10357cb0u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(10079455)
        edx = -cf + 1u - cf;
    }
    COW_AT(1007945a)
    if (edx != 0u) goto L_100794b6;
    COW_AT(1007945e)
    wr8(sp0 - 0x458u, 2u);
    loc_460 = in_ebx;
    loc_464 = in_esi;
    loc_468 = in_edi;
L_10079463: ;
    COW_AT(10079463)
    wr8(sp0 - 0x45cu, 5u);
L_10079468: ;
    COW_AT(10079468)
    if (rd32(rd32(COW_IMG(0x103551e4u)) + (uint8_t)rd32(sp0 - 0x458u) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x103551e4u)) + (uint8_t)rd32(sp0 - 0x458u) * 4u;
        edx = rd32(COW_IMG(0x103551e4u));
        goto L_10079790;
    }
    ecx = rd32(rd32(COW_IMG(0x103551e4u)) + (uint8_t)rd32(sp0 - 0x458u) * 4u);
    edx = rd32(COW_IMG(0x103551e4u));
    COW_AT(10079486)
    wr32(sp0 - 0x46cu, ecx);
    wr32(sp0 - 0x470u, sp0 - 0x400u);
    g->esp = sp0 - 0x454u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), sp0 - 0x400u, 7, sp0 - 0x400u, ecx, loc_468, loc_464, loc_460, rd32(sp0 - 0x45cu), rd32(sp0 - 0x458u));
    t6 = g->ecx;
    wr32(sp0 - 0x474u, sp0 - 0x400u);
    t7 = rd32(sp0 - 0x45cu);
    wr32(sp0 - 0x478u, t7);
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x470u;
    cow_cdecl(g, COW_IMG(0x100f8cc0u), 2, t7, sp0 - 0x400u);
    t8 = g->edx;
    g->ebx = rd32(sp0 - 0x460u);
    g->esi = rd32(sp0 - 0x464u);
    g->edi = rd32(sp0 - 0x468u);
    g->edx = t8;
    return arg3;
L_100794b6: ;
    COW_AT(100794b6)
    esi = eax;
    edi = COW_IMG(0x1034f7b0u);
    ecx = 2u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(100794c5)
        edx = -cf + 1u - cf;
    }
    COW_AT(100794ca)
    if (edx != 0u) goto L_100794d4;
    COW_AT(100794ce)
    wr8(sp0 - 0x458u, 2u);
    loc_460 = in_ebx;
    loc_464 = in_esi;
    loc_468 = in_edi;
    goto L_10079463;
L_100794d4: ;
    COW_AT(100794d4)
    esi = eax;
    edi = COW_IMG(0x10357ca8u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(100794e6)
        edx = -cf + 1u - cf;
    }
    COW_AT(100794eb)
    if (edx != 0u) goto L_100794fd;
    COW_AT(100794ef)
    wr8(sp0 - 0x45cu, 6u);
    wr8(sp0 - 0x458u, 2u);
    loc_460 = in_ebx;
    loc_464 = in_esi;
    loc_468 = in_edi;
    goto L_10079468;
L_100794fd: ;
    COW_AT(100794fd)
    esi = eax;
    edi = COW_IMG(0x10357ca4u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(1007950f)
        edx = -cf + 1u - cf;
    }
    COW_AT(10079514)
    if (edx != 0u) goto L_10079526;
    COW_AT(10079518)
    wr8(sp0 - 0x45cu, 6u);
    wr8(sp0 - 0x458u, 2u);
    loc_460 = in_ebx;
    loc_464 = in_esi;
    loc_468 = in_edi;
    goto L_10079468;
L_10079526: ;
    COW_AT(10079526)
    esi = eax;
    edi = COW_IMG(0x10357c9cu);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(10079538)
        edx = -cf + 1u - cf;
    }
    COW_AT(1007953d)
    if (edx == 0u) goto L_100796fd;
    COW_AT(10079545)
    esi = eax;
    edi = COW_IMG(0x10357c98u);
    ecx = 2u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(10079554)
        edx = -cf + 1u - cf;
    }
    COW_AT(10079559)
    if (edx == 0u) goto L_1007972f;
    COW_AT(10079561)
    esi = eax;
    edi = COW_IMG(0x10357c90u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(10079573)
        edx = -cf + 1u - cf;
    }
    COW_AT(10079578)
    if (edx != 0u) goto L_1007958a;
    COW_AT(1007957c)
    wr8(sp0 - 0x45cu, 1u);
    wr8(sp0 - 0x458u, 2u);
    loc_460 = in_ebx;
    loc_464 = in_esi;
    loc_468 = in_edi;
    goto L_10079468;
L_1007958a: ;
    COW_AT(1007958a)
    esi = eax;
    edi = COW_IMG(0x10357c8cu);
    ecx = 2u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(10079599)
        edx = -cf + 1u - cf;
    }
    COW_AT(1007959e)
    if (edx != 0u) goto L_100795b0;
    COW_AT(100795a2)
    wr8(sp0 - 0x45cu, 1u);
    wr8(sp0 - 0x458u, 2u);
    loc_460 = in_ebx;
    loc_464 = in_esi;
    loc_468 = in_edi;
    goto L_10079468;
L_100795b0: ;
    COW_AT(100795b0)
    esi = eax;
    edi = COW_IMG(0x10357c80u);
    ecx = 0xau;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(100795c2)
        edx = -cf + 1u - cf;
    }
    COW_AT(100795c7)
    if (edx != 0u) goto L_100795d8;
    COW_AT(100795cb)
    wr8(sp0 - 0x45cu, 2u);
    wr8(sp0 - 0x458u, 2u);
    loc_460 = in_ebx;
    loc_464 = in_esi;
    loc_468 = in_edi;
    goto L_10079468;
L_100795d8: ;
    COW_AT(100795d8)
    esi = eax;
    edi = COW_IMG(0x10357c7cu);
    ecx = 2u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(100795e7)
        edx = -cf + 1u - cf;
    }
    COW_AT(100795ec)
    if (edx != 0u) goto L_100795fd;
    COW_AT(100795f0)
    wr8(sp0 - 0x45cu, 2u);
    wr8(sp0 - 0x458u, 2u);
    loc_460 = in_ebx;
    loc_464 = in_esi;
    loc_468 = in_edi;
    goto L_10079468;
L_100795fd: ;
    COW_AT(100795fd)
    esi = eax;
    edi = COW_IMG(0x10357c4cu);
    ecx = 0xbu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(1007960f)
        edx = -cf + 1u - cf;
    }
    COW_AT(10079614)
    if (edx != 0u) goto L_10079626;
    COW_AT(10079618)
    wr8(sp0 - 0x45cu, 3u);
    wr8(sp0 - 0x458u, 2u);
    loc_460 = in_ebx;
    loc_464 = in_esi;
    loc_468 = in_edi;
    goto L_10079468;
L_10079626: ;
    COW_AT(10079626)
    esi = eax;
    edi = COW_IMG(0x10357c48u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(10079638)
        edx = -cf + 1u - cf;
    }
    COW_AT(1007963d)
    if (edx != 0u) goto L_1007964f;
    COW_AT(10079641)
    wr8(sp0 - 0x45cu, 3u);
    wr8(sp0 - 0x458u, 2u);
    loc_460 = in_ebx;
    loc_464 = in_esi;
    loc_468 = in_edi;
    goto L_10079468;
L_1007964f: ;
    COW_AT(1007964f)
    esi = eax;
    edi = COW_IMG(0x10357c5cu);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(10079661)
        edx = -cf + 1u - cf;
    }
    COW_AT(10079666)
    if (edx == 0u)
    {
        loc_460 = in_ebx;
        loc_464 = in_esi;
        loc_468 = in_edi;
        goto L_100797b0;
    }
    COW_AT(1007966e)
    esi = eax;
    edi = COW_IMG(0x10357c40u);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(10079680)
        edx = -cf + 1u - cf;
    }
    COW_AT(10079685)
    if (edx == 0u)
    {
        loc_460 = in_ebx;
        loc_464 = in_esi;
        loc_468 = in_edi;
        goto L_100797b0;
    }
    COW_AT(1007968d)
    esi = eax;
    edi = COW_IMG(0x10357c3cu);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(1007969f)
        edx = -cf + 1u - cf;
    }
    COW_AT(100796a4)
    if (edx == 0u)
    {
        loc_460 = in_ebx;
        loc_464 = in_esi;
        loc_468 = in_edi;
        goto L_100797b0;
    }
    COW_AT(100796ac)
    esi = eax;
    edi = COW_IMG(0x10357c34u);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(100796be)
        edx = -cf + 1u - cf;
    }
    COW_AT(100796c3)
    if (edx == 0u) goto L_1007972f;
    COW_AT(100796c7)
    esi = eax;
    edi = COW_IMG(0x10357c30u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(100796d9)
        edx = -cf + 1u - cf;
    }
    COW_AT(100796de)
    if (edx == 0u) goto L_1007972f;
    COW_AT(100796e2)
    esi = eax;
    edi = COW_IMG(0x10357c74u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(100796f4)
        edx = -cf + 1u - cf;
    }
    COW_AT(100796f9)
    if (edx != 0u) goto L_10079714;
L_100796fd: ;
    COW_AT(100796fd)
    edi = sp0 - 0x454u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x46cu, sp0 - 0x454u);
    ecx = sp0 - 0x454u;
    loc_460 = in_ebx;
    loc_464 = in_esi;
    loc_468 = in_edi;
L_100797c2: ;
    COW_AT(100797c2)
    wr16(sp0 - 0x44cu, 0x69u);
    g->ebx = 2u;
    g->edx = edx;
    g->esp = sp0 - 0x46cu;
    cow_stdcall(g, COW_IMG(0x100a1ab0u), 0);
    t5 = g->edx;
    g->ebx = rd32(sp0 - 0x460u);
    g->esi = rd32(sp0 - 0x464u);
    g->edi = rd32(sp0 - 0x468u);
    g->edx = t5;
    return arg3;
L_10079714: ;
    COW_AT(10079714)
    esi = eax;
    edi = COW_IMG(0x10357c70u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = 0u;
    }
    else
    {
    COW_AT(10079726)
        eax = -cf + 1u - cf;
    }
    COW_AT(1007972b)
    if (eax != 0u) goto L_10079743;
L_1007972f: ;
    COW_AT(1007972f)
    edi = sp0 - 0x454u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x46cu, sp0 - 0x454u);
    edx = sp0 - 0x454u;
    loc_460 = in_ebx;
    loc_464 = in_esi;
    loc_468 = in_edi;
    goto L_100797c2;
L_10079743: ;
    COW_AT(10079743)
    if (rd32(COW_IMG(0x10662da4u)) == 0u)
    {
        loc_460 = in_ebx;
        loc_464 = in_esi;
        loc_468 = in_edi;
        goto L_10079463;
    }
    ecx = rd32(COW_IMG(0x10662da4u));
    COW_AT(10079751)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x468u;
    t2 = cow_thiscall(g, COW_IMG(0x101ad830u), ecx, 0);
    t3 = g->edx;
    if (t2 - 3u > 9u)
    {
        loc_460 = in_ebx;
        loc_464 = in_esi;
        loc_468 = in_edi;
        goto L_10079463;
    }
    eax = t2 - 3u;
    edx = t3;
    COW_AT(10079762)
    t4 = rd32(COW_IMG(0x100797e4u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x10079463u: loc_460 = rd32(sp0 - 0x460u); loc_464 = rd32(sp0 - 0x464u); loc_468 = rd32(sp0 - 0x468u); goto L_10079463;
    case 0x10079769u: goto L_10079769;
    case 0x10079773u: goto L_10079773;
    case 0x1007977du: goto L_1007977d;
    case 0x10079786u: goto L_10079786;
    case 0x100797b0u: loc_460 = rd32(sp0 - 0x460u); loc_464 = rd32(sp0 - 0x464u); loc_468 = rd32(sp0 - 0x468u); goto L_100797b0;
    default: rt_fatal(g, COW_IMG(0x10079762u), "switch");
    }
    return 0;
L_10079769: ;
    COW_AT(10079769)
    wr8(sp0 - 0x45cu, 6u);
    loc_460 = rd32(sp0 - 0x460u);
    loc_464 = rd32(sp0 - 0x464u);
    loc_468 = rd32(sp0 - 0x468u);
    goto L_10079468;
L_10079773: ;
    COW_AT(10079773)
    wr8(sp0 - 0x45cu, 1u);
    loc_460 = rd32(sp0 - 0x460u);
    loc_464 = rd32(sp0 - 0x464u);
    loc_468 = rd32(sp0 - 0x468u);
    goto L_10079468;
L_1007977d: ;
    COW_AT(1007977d)
    wr8(sp0 - 0x45cu, 2u);
    loc_460 = rd32(sp0 - 0x460u);
    loc_464 = rd32(sp0 - 0x464u);
    loc_468 = rd32(sp0 - 0x468u);
    goto L_10079468;
L_10079786: ;
    COW_AT(10079786)
    wr8(sp0 - 0x45cu, 3u);
    loc_460 = rd32(sp0 - 0x460u);
    loc_464 = rd32(sp0 - 0x464u);
    loc_468 = rd32(sp0 - 0x468u);
    goto L_10079468;
L_10079790: ;
    COW_AT(10079790)
    wr32(sp0 - 0x46cu, 0u);
    t9 = rd32(sp0 - 0x45cu);
    wr32(sp0 - 0x470u, t9);
    g->edx = edx;
    g->esp = sp0 - 0x468u;
    cow_cdecl(g, COW_IMG(0x100f8cc0u), 2, t9, 0u);
    t10 = g->edx;
    g->ebx = rd32(sp0 - 0x460u);
    g->esi = rd32(sp0 - 0x464u);
    g->edi = rd32(sp0 - 0x468u);
    g->edx = t10;
    return arg3;
L_100797b0: ;
    COW_AT(100797b0)
    edi = sp0 - 0x454u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x46cu, sp0 - 0x454u);
    eax = sp0 - 0x454u;
    goto L_100797c2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10079420(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10079443u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079455u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007945au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007945eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        (void)sp0;
        return 1;
    }
    case 0x10079463u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_460;
        uint32_t loc_464;
        uint32_t loc_468;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_468 = rd32(sp0 - 0x468u);
        loc_464 = rd32(sp0 - 0x464u);
        loc_460 = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        (void)sp0;
        return 1;
    }
    case 0x10079468u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_460;
        uint32_t loc_464;
        uint32_t loc_468;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_468 = rd32(sp0 - 0x468u);
        loc_464 = rd32(sp0 - 0x464u);
        loc_460 = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        (void)sp0;
        return 1;
    }
    case 0x10079486u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_460;
        uint32_t loc_464;
        uint32_t loc_468;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_468 = rd32(sp0 - 0x468u);
        loc_464 = rd32(sp0 - 0x464u);
        loc_460 = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        (void)sp0;
        return 1;
    }
    case 0x100794b6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100794c5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100794cau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100794ceu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100794d4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100794e6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100794ebu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100794efu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100794fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007950fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079514u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079518u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079526u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079538u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007953du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079545u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079554u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079559u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079561u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079573u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079578u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007957cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007958au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079599u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007959eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100795a2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100795b0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100795c2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100795c7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100795cbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100795d8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100795e7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100795ecu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100795f0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100795fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007960fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079614u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079618u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079626u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079638u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007963du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079641u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007964fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079661u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079666u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007966eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079680u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079685u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007968du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007969fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100796a4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100796acu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100796beu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100796c3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100796c7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100796d9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100796deu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100796e2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100796f4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->edx = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100796f9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100796fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079714u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079726u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->eax = 0u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007972bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1007972fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079743u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079751u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x468u);
        in_esi = rd32(sp0 - 0x464u);
        in_ebx = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079762u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079769u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x468u;
        (void)sp0;
        return 1;
    }
    case 0x10079773u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x468u;
        (void)sp0;
        return 1;
    }
    case 0x1007977du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10079786u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x468u;
        (void)sp0;
        return 1;
    }
    case 0x10079790u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_460;
        uint32_t loc_464;
        uint32_t loc_468;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_468 = rd32(sp0 - 0x468u);
        loc_464 = rd32(sp0 - 0x464u);
        loc_460 = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        (void)sp0;
        return 1;
    }
    case 0x100797b0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_460;
        uint32_t loc_464;
        uint32_t loc_468;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_468 = rd32(sp0 - 0x468u);
        loc_464 = rd32(sp0 - 0x464u);
        loc_460 = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x468u;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100797c2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_460;
        uint32_t loc_464;
        uint32_t loc_468;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_468 = rd32(sp0 - 0x468u);
        loc_464 = rd32(sp0 - 0x464u);
        loc_460 = rd32(sp0 - 0x460u);
        g->esp = sp0 - 0x46cu;
        g->ebx = 2u;
        wr32(sp0 - 0x46cu, sp0 - 0x454u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10079420(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10079420(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
