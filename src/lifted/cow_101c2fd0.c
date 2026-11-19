/* f_0x101c2fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c2fd0(Guest* g)
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
    uint32_t loc_244;
    uint32_t loc_24c;
    uint32_t loc_250;
    uint32_t loc_254;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 612u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c2ff8u: in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x248u); self = g->eax - 0xd0u; g->ebx = rd32(sp0 - 0x248u); goto E_101c2ff8;
    case 0x101c3010u: eax = g->eax; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x248u); self = g->ecx - 0x1f4u; g->ebx = rd32(sp0 - 0x248u); goto E_101c3010;
    case 0x101c3025u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); goto E_101c3025;
    case 0x101c3041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_244 = rd32(sp0 - 0x244u); goto E_101c3041;
    case 0x101c304du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_244 = rd32(sp0 - 0x244u); goto E_101c304d;
    case 0x101c3056u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c3056;
    case 0x101c306eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c306e;
    case 0x101c3086u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c3086;
    case 0x101c309eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c309e;
    case 0x101c30b6u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c30b6;
    case 0x101c30ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c30ce;
    case 0x101c30e6u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c30e6;
    case 0x101c30feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c30fe;
    case 0x101c3116u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c3116;
    case 0x101c312eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c312e;
    case 0x101c3146u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c3146;
    case 0x101c315eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c315e;
    case 0x101c3176u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c3176;
    case 0x101c318eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c318e;
    case 0x101c31a6u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c31a6;
    case 0x101c31beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c31be;
    case 0x101c31d6u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c31d6;
    case 0x101c31eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c31ee;
    case 0x101c3206u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c3206;
    case 0x101c321eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c321e;
    case 0x101c3236u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c3236;
    case 0x101c324eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c324e;
    case 0x101c3266u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c3266;
    case 0x101c327eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c327e;
    case 0x101c3296u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c3296;
    case 0x101c32aeu: ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c32ae;
    case 0x101c32d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c32d2;
    case 0x101c32f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c32f8;
    case 0x101c32feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c32fe;
    case 0x101c3308u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3308;
    case 0x101c330eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c330e;
    case 0x101c331fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c331f;
    case 0x101c332fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c332f;
    case 0x101c3331u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3331;
    case 0x101c3335u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3335;
    case 0x101c333du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c333d;
    case 0x101c333fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c333f;
    case 0x101c334cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_244 = rd32(sp0 - 0x244u); goto E_101c334c;
    case 0x101c3360u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3360;
    case 0x101c3373u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3373;
    case 0x101c3381u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3381;
    case 0x101c3397u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3397;
    case 0x101c339fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c339f;
    case 0x101c33a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c33a3;
    case 0x101c33acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c33ac;
    case 0x101c33b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c33b8;
    case 0x101c33bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c33bc;
    case 0x101c33c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c33c5;
    default: break;
    }
#endif

    COW_AT(101c2fd0)
    wr32(sp0 - 0x248u, in_ebx);
    wr32(sp0 - 0x24cu, arg1);
    wr32(sp0 - 0x250u, self + 0x1f4u);
    if (rd8(self + 0xd0u) == 0u)
    {
    COW_AT(101c3010)
        wr32(sp0 - 0x254u, COW_IMG(0x1037cc20u));
        wr32(sp0 - 0x258u, sp0 - 0x100u);
        g->ebx = 0u;
        g->eax = sp0 - 0x100u;
        g->esp = sp0 - 0x244u;
        t2 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cc20u), self + 0x1f4u, arg1, in_ebx);
        eax = t2;
    }
    else
    {
    COW_AT(101c2ff8)
        wr32(sp0 - 0x254u, self + 0xd0u);
        wr32(sp0 - 0x258u, COW_IMG(0x1037cc28u));
        wr32(sp0 - 0x25cu, sp0 - 0x100u);
        g->ebx = 0u;
        g->eax = sp0 - 0x100u;
        g->esp = sp0 - 0x248u;
        t1 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cc28u), self + 0xd0u, self + 0x1f4u, arg1);
        eax = t1;
    }
    COW_AT(101c3025)
    wr32(sp0 - 0x24cu, sp0 - 0x240u);
    wr32(sp0 - 0x250u, sp0 - 0x100u);
    g->eax = eax;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x248u;
    t3 = cow_stdcall(g, rd32(COW_IMG(0x10329128u)), 2, sp0 - 0x100u, sp0 - 0x240u);   /* kernel32.dll!FindFirstFileA */
    t4 = g->edx;
    wr32(sp0 - 0x244u, t3);
    if (t3 != 0xffffffffu)
    {
        edx = t4;
        loc_244 = t3;
        goto L_101c304d;
    }
    eax = t3;
    COW_AT(101c3041)
    g->ebx = rd32(sp0 - 0x248u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax;
L_101c304d: ;
    COW_AT(101c304d)
    wr32(sp0 - 0x24cu, in_ebp);
    wr32(sp0 - 0x250u, in_esi);
    wr32(sp0 - 0x254u, in_edi);
    ebx = 0u;
    ebp = rd32(COW_IMG(0x10329120u));
    loc_24c = in_ebp;
    loc_250 = in_esi;
    loc_254 = in_edi;
L_101c3056: ;
    COW_AT(101c3056)
    esi = sp0 - 0x214u;
    edi = COW_IMG(0x10354054u);
    ecx = 2u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
    COW_AT(101c306e)
        esi = sp0 - 0x214u;
        edi = COW_IMG(0x1037cbc4u);
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
    COW_AT(101c3086)
            esi = sp0 - 0x214u;
            edi = COW_IMG(0x103502d4u);
            ecx = 7u;
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
    COW_AT(101c309e)
                esi = sp0 - 0x214u;
                edi = COW_IMG(0x103502dcu);
                ecx = 9u;
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
    COW_AT(101c30b6)
                    esi = sp0 - 0x214u;
                    edi = COW_IMG(0x103502ccu);
                    ecx = 7u;
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
    COW_AT(101c30ce)
                        esi = sp0 - 0x214u;
                        edi = COW_IMG(0x103502c4u);
                        ecx = 7u;
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
    COW_AT(101c30e6)
                            esi = sp0 - 0x214u;
                            edi = COW_IMG(0x103502bcu);
                            ecx = 7u;
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
    COW_AT(101c30fe)
                                esi = sp0 - 0x214u;
                                edi = COW_IMG(0x103502b4u);
                                ecx = 7u;
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
    COW_AT(101c3116)
                                    esi = sp0 - 0x214u;
                                    edi = COW_IMG(0x103502acu);
                                    ecx = 7u;
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
    COW_AT(101c312e)
                                        esi = sp0 - 0x214u;
                                        edi = COW_IMG(0x103502a4u);
                                        ecx = 7u;
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
    COW_AT(101c3146)
                                            esi = sp0 - 0x214u;
                                            edi = COW_IMG(0x1035029cu);
                                            ecx = 7u;
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
    COW_AT(101c315e)
                                                esi = sp0 - 0x214u;
                                                edi = COW_IMG(0x10350294u);
                                                ecx = 7u;
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
    COW_AT(101c3176)
                                                    esi = sp0 - 0x214u;
                                                    edi = COW_IMG(0x10350288u);
                                                    ecx = 9u;
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
    COW_AT(101c318e)
                                                        esi = sp0 - 0x214u;
                                                        edi = COW_IMG(0x1035027cu);
                                                        ecx = 9u;
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
    COW_AT(101c31a6)
                                                            esi = sp0 - 0x214u;
                                                            edi = COW_IMG(0x10350270u);
                                                            ecx = 9u;
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
    COW_AT(101c31be)
                                                                esi = sp0 - 0x214u;
                                                                edi = COW_IMG(0x10350264u);
                                                                ecx = 9u;
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
    COW_AT(101c31d6)
                                                                    esi = sp0 - 0x214u;
                                                                    edi = COW_IMG(0x10350258u);
                                                                    ecx = 9u;
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
    COW_AT(101c31ee)
                                                                        esi = sp0 - 0x214u;
                                                                        edi = COW_IMG(0x1035024cu);
                                                                        ecx = 9u;
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
    COW_AT(101c3206)
                                                                            esi = sp0 - 0x214u;
                                                                            edi = COW_IMG(0x10350240u);
                                                                            ecx = 9u;
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
    COW_AT(101c321e)
                                                                                esi = sp0 - 0x214u;
                                                                                edi = COW_IMG(0x1037c928u);
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
    COW_AT(101c3236)
                                                                                    esi = sp0 - 0x214u;
                                                                                    edi = COW_IMG(0x1037cc18u);
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
    COW_AT(101c324e)
                                                                                        esi = sp0 - 0x214u;
                                                                                        edi = COW_IMG(0x1037cc10u);
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
    COW_AT(101c3266)
                                                                                            esi = sp0 - 0x214u;
                                                                                            edi = COW_IMG(0x1037cc04u);
                                                                                            ecx = 9u;
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
    COW_AT(101c327e)
                                                                                                esi = sp0 - 0x214u;
                                                                                                edi = COW_IMG(0x1037cbf4u);
                                                                                                ecx = 0xeu;
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
    COW_AT(101c3296)
                                                                                                    esi = sp0 - 0x214u;
                                                                                                    edi = COW_IMG(0x1037cbe8u);
                                                                                                    ecx = 9u;
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
    COW_AT(101c32ae)
                                                                                                        edi = COW_IMG(0x1037cbe4u);
                                                                                                        eax = 0u;
                                                                                                        ecx = 0xffffffffu;
                                                                                                        cf = 0u;
                                                                                                        pf = PARITY(0xffu);
                                                                                                        af = 0u;
                                                                                                        zf = 0u;
                                                                                                        sf = 1u;
                                                                                                        of = 0u;
                                                                                                        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                                                                                                        t5 = ~ecx - 1u;
                                                                                                        wr32(sp0 - 0x258u, t5);
                                                                                                        wr32(sp0 - 0x25cu, COW_IMG(0x1037cbe4u));
                                                                                                        wr32(sp0 - 0x260u, sp0 - 0x214u);
                                                                                                        g->eax = eax;
                                                                                                        g->ecx = sp0 - 0x214u;
                                                                                                        g->edx = 0u;
                                                                                                        g->esp = sp0 - 0x24cu;
                                                                                                        t6 = cow_cdecl(g, COW_IMG(0x10312980u), 5, sp0 - 0x214u, COW_IMG(0x1037cbe4u), t5, loc_254, loc_250);
                                                                                                        t7 = g->ecx;
                                                                                                        t8 = g->edx;
                                                                                                        if (t6 == 0u)
                                                                                                        {
                                                                                                            edx = t8;
                                                                                                            loc_24c = rd32(sp0 - 0x24cu);
                                                                                                            loc_250 = rd32(sp0 - 0x250u);
                                                                                                            loc_244 = rd32(sp0 - 0x244u);
                                                                                                            loc_254 = rd32(sp0 - 0x254u);
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            ecx = t7;
    COW_AT(101c32d2)
                                                                                                            edi = COW_IMG(0x1037cbdcu);
                                                                                                            eax = 0u;
                                                                                                            ecx = 0xffffffffu;
                                                                                                            cf = 0u;
                                                                                                            pf = PARITY(0u);
                                                                                                            af = 0u;
                                                                                                            zf = 1u;
                                                                                                            sf = 0u;
                                                                                                            of = 0u;
                                                                                                            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                                                                                                            t9 = ~ecx - 1u;
                                                                                                            wr32(sp0 - 0x258u, t9);
                                                                                                            wr32(sp0 - 0x25cu, COW_IMG(0x1037cbdcu));
                                                                                                            wr32(sp0 - 0x260u, sp0 - 0x214u);
                                                                                                            g->eax = eax;
                                                                                                            g->ecx = t9;
                                                                                                            g->edx = sp0 - 0x214u;
                                                                                                            g->esp = sp0 - 0x24cu;
                                                                                                            t10 = cow_cdecl(g, COW_IMG(0x10312980u), 5, sp0 - 0x214u, COW_IMG(0x1037cbdcu), t9, rd32(sp0 - 0x254u), rd32(sp0 - 0x250u));
                                                                                                            t11 = g->ecx;
                                                                                                            t12 = g->edx;
                                                                                                            if (t10 == 0u)
                                                                                                            {
                                                                                                                edx = t12;
                                                                                                                loc_24c = rd32(sp0 - 0x24cu);
                                                                                                                loc_250 = rd32(sp0 - 0x250u);
                                                                                                                loc_244 = rd32(sp0 - 0x244u);
                                                                                                                loc_254 = rd32(sp0 - 0x254u);
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                eax = t10;
                                                                                                                ecx = t11;
                                                                                                                edx = t12;
    COW_AT(101c32f8)
                                                                                                                if (ebx == 0u)
                                                                                                                {
                                                                                                                    esi = ebx;
                                                                                                                    goto L_101c330e;
                                                                                                                }
                                                                                                                esi = ebx;
L_101c32fe: ;
    COW_AT(101c32fe)
                                                                                                                if (rd32(esi + 0x140u) == 0u)
                                                                                                                {
                                                                                                                    eax = rd32(esi + 0x140u);
                                                                                                                    goto L_101c330e;
                                                                                                                }
                                                                                                                eax = rd32(esi + 0x140u);
    COW_AT(101c3308)
                                                                                                                if (eax != 0u)
                                                                                                                {
                                                                                                                    esi = eax;
                                                                                                                    goto L_101c32fe;
                                                                                                                }
                                                                                                                esi = eax;
L_101c330e: ;
    COW_AT(101c330e)
                                                                                                                wr32(sp0 - 0x258u, 0x144u);
                                                                                                                g->eax = eax;
                                                                                                                g->esp = sp0 - 0x24cu;
                                                                                                                t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x144u, rd32(sp0 - 0x254u), rd32(sp0 - 0x250u));
                                                                                                                t14 = g->edx;
                                                                                                                if (t13 == 0u)
                                                                                                                {
                                                                                                                    edx = t14;
    COW_AT(101c332f)
                                                                                                                    eax = 0u;
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    eax = t13;
                                                                                                                    edx = t14;
    COW_AT(101c331f)
                                                                                                                    wr8(eax + 0x2cu, 0u);
                                                                                                                    wr32(eax + 0x140u, 0u);
                                                                                                                }
    COW_AT(101c3331)
                                                                                                                if (esi == 0u)
                                                                                                                {
    COW_AT(101c333d)
                                                                                                                    ebx = eax;
                                                                                                                }
                                                                                                                else
                                                                                                                {
    COW_AT(101c3335)
                                                                                                                    wr32(esi + 0x140u, eax);
                                                                                                                }
    COW_AT(101c333f)
                                                                                                                esi = sp0 - 0x240u;
                                                                                                                edi = eax;
                                                                                                                ecx = 0x50u;
                                                                                                                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                                                                                                                loc_24c = rd32(sp0 - 0x24cu);
                                                                                                                loc_250 = rd32(sp0 - 0x250u);
                                                                                                                loc_244 = rd32(sp0 - 0x244u);
                                                                                                                loc_254 = rd32(sp0 - 0x254u);
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    COW_AT(101c334c)
    wr32(sp0 - 0x258u, sp0 - 0x240u);
    wr32(sp0 - 0x25cu, loc_244);
    g->eax = sp0 - 0x240u;
    g->edx = edx;
    g->esp = sp0 - 0x254u;
    t15 = cow_thiscall(g, ebp, loc_244, 2, loc_244, sp0 - 0x240u);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 != 0u)
    {
        edx = t17;
        loc_24c = rd32(sp0 - 0x24cu);
        loc_250 = rd32(sp0 - 0x250u);
        loc_244 = rd32(sp0 - 0x244u);
        loc_254 = rd32(sp0 - 0x254u);
        goto L_101c3056;
    }
    eax = t15;
    ecx = t16;
    COW_AT(101c3360)
    t18 = rd32(sp0 - 0x244u);
    wr32(sp0 - 0x258u, t18);
    g->ecx = ecx;
    g->edx = t18;
    g->esp = sp0 - 0x254u;
    cow_stdcall(g, rd32(COW_IMG(0x1032911cu)), 1, t18);   /* kernel32.dll!FindClose */
    t19 = g->ecx;
    t20 = g->edx;
    if (ebx == 0u)
    {
        ecx = t19;
        edx = t20;
    }
    else
    {
        eax = ebx;
        ecx = t19;
        edx = t20;
        esi = ebx;
    COW_AT(101c3373)
L_101c3381: ;
    COW_AT(101c3381)
        wr32(sp0 - 0x258u, arg3);
        wr32(sp0 - 0x25cu, eax + 0x2cu);
        g->edx = edx;
        g->esp = sp0 - 0x254u;
        cow_thiscall_cdecl(g, arg2, ecx, 2, eax + 0x2cu, arg3);
        t21 = g->ecx;
        t22 = g->edx;
        t23 = rd32(esi + 0x140u);
        if (rd32(esi + 0x140u) != 0u)
        {
            eax = t23;
            ecx = t21;
            edx = t22;
            esi = t23;
            goto L_101c3381;
        }
        ecx = t21;
        edx = t22;
    }
    COW_AT(101c3397)
    if (ebx == 0u) goto L_101c33c5;
    eax = 0u;
    esi = ebx;
L_101c339f: ;
    COW_AT(101c339f)
    if (eax != 0u)
    {
    COW_AT(101c33a3)
        wr32(sp0 - 0x258u, eax);
        g->esp = sp0 - 0x254u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t24 = g->ecx;
        t25 = g->edx;
        ecx = t24;
        edx = t25;
    }
    COW_AT(101c33ac)
    if (rd32(esi + 0x140u) != 0u)
    {
        eax = esi;
        esi = rd32(esi + 0x140u);
        goto L_101c339f;
    }
    eax = esi;
    COW_AT(101c33b8)
    if (eax != 0u)
    {
    COW_AT(101c33bc)
        wr32(sp0 - 0x258u, eax);
        g->esp = sp0 - 0x254u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
    }
L_101c33c5: ;
    COW_AT(101c33c5)
    g->ebx = rd32(sp0 - 0x248u);
    g->esi = rd32(sp0 - 0x250u);
    g->edi = rd32(sp0 - 0x254u);
    g->ebp = rd32(sp0 - 0x24cu);
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c2fd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c2ff8u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x248u);
        self = g->eax - 0xd0u;
        g->esp = sp0 - 0x250u;
        g->ecx = self + 0x1f4u;
        g->edx = arg1;
        g->ebx = 0u;
        wr32(sp0 - 0x250u, self + 0x1f4u);
        wr32(sp0 - 0x24cu, arg1);
        (void)sp0;
        return 1;
    }
    case 0x101c3010u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
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
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x248u);
        self = g->ecx - 0x1f4u;
        g->esp = sp0 - 0x250u;
        g->edx = arg1;
        g->ebx = 0u;
        wr32(sp0 - 0x250u, self + 0x1f4u);
        wr32(sp0 - 0x24cu, arg1);
        (void)sp0;
        return 1;
    }
    case 0x101c3025u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_254;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_254 = rd32(sp0 - 0x254u);
        g->esp = sp0 - 0x248u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c3041u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_244;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x248u;
        wr32(sp0 - 0x250u, sp0 - 0x100u);
        wr32(sp0 - 0x24cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x101c304du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_244;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x248u;
        g->ebx = 0u;
        wr32(sp0 - 0x250u, sp0 - 0x100u);
        wr32(sp0 - 0x24cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x101c3056u:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c306eu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c3086u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c309eu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c30b6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c30ceu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c30e6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c30feu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c3116u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c312eu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c3146u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c315eu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c3176u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c318eu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c31a6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c31beu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c31d6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c31eeu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c3206u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c321eu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c3236u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c324eu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c3266u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c327eu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c3296u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c32aeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        g->eax = 0u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c32d2u:
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
        g->esp = sp0 - 0x254u;
        wr32(sp0 - 0x260u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x101c32f8u:
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
        g->esp = sp0 - 0x254u;
        wr32(sp0 - 0x260u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x101c32feu:
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
        g->esp = sp0 - 0x254u;
        wr32(sp0 - 0x260u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x101c3308u:
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
        g->esp = sp0 - 0x254u;
        wr32(sp0 - 0x260u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x101c330eu:
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
        g->esp = sp0 - 0x254u;
        wr32(sp0 - 0x260u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x101c331fu:
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
        g->esp = sp0 - 0x254u;
        wr32(sp0 - 0x260u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x101c332fu:
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
        g->esp = sp0 - 0x254u;
        wr32(sp0 - 0x260u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x101c3331u:
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
        g->esp = sp0 - 0x254u;
        wr32(sp0 - 0x260u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x101c3335u:
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
        g->esp = sp0 - 0x254u;
        wr32(sp0 - 0x260u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x101c333du:
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
        g->esp = sp0 - 0x254u;
        wr32(sp0 - 0x260u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x101c333fu:
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
        g->esp = sp0 - 0x254u;
        wr32(sp0 - 0x260u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x101c334cu:
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
        uint32_t loc_244;
        uint32_t loc_24c;
        uint32_t loc_250;
        uint32_t loc_254;
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
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c3360u:
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
        g->esp = sp0 - 0x254u;
        wr32(sp0 - 0x258u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x101c3373u:
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
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c3381u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x254u;
        g->ebp = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c3397u:
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
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c339fu:
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
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c33a3u:
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
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c33acu:
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
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c33b8u:
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
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c33bcu:
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
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x101c33c5u:
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
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c2fd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c2fd0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
