/* f_0x100091b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100091b0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_654;
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
    cow_frame(g, sp0, 1668u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100091ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100091cc;
    case 0x100091f2u: ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100091f2;
    case 0x10009206u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_10009206;
    case 0x10009216u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_10009216;
    case 0x10009229u: ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_10009229;
    case 0x10009237u: ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_10009237;
    case 0x10009243u: ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_10009243;
    case 0x1000925du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_1000925d;
    case 0x10009266u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_10009266;
    case 0x10009272u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_10009272;
    case 0x1000927bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_1000927b;
    case 0x10009287u: eax = g->eax; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_10009287;
    case 0x1000928eu: eax = g->eax; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_1000928e;
    case 0x10009296u: eax = g->eax; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_10009296;
    case 0x1000929du: eax = g->eax; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_1000929d;
    case 0x100092a9u: edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100092a9;
    case 0x100092b0u: edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100092b0;
    case 0x100092c3u: eax = g->eax; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100092c3;
    case 0x100092cdu: eax = g->eax; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100092cd;
    case 0x100092d2u: eax = g->eax; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100092d2;
    case 0x100092d8u: eax = g->eax; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100092d8;
    case 0x100092dfu: eax = g->eax; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100092df;
    case 0x100092e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100092e4;
    case 0x100092ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100092eb;
    case 0x100092f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100092f1;
    case 0x100092f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100092f8;
    case 0x100092feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_100092fe;
    case 0x10009305u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x664u); in_esi = rd32(sp0 - 0x660u); in_ebp = rd32(sp0 - 0x65cu); in_ebx = rd32(sp0 - 0x658u); g->ebp = rd32(sp0 - 0x65cu); g->ebx = rd32(sp0 - 0x658u); g->edi = rd32(sp0 - 0x664u); g->esi = rd32(sp0 - 0x660u); goto E_10009305;
    case 0x10009325u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009325;
    case 0x1000933cu: eax = g->eax; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000933c;
    case 0x10009343u: eax = g->eax; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009343;
    case 0x1000934bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000934b;
    case 0x10009351u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009351;
    case 0x10009361u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009361;
    case 0x1000937bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000937b;
    case 0x1000937fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000937f;
    case 0x10009388u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009388;
    case 0x1000938fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000938f;
    case 0x100093a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100093a9;
    case 0x100093adu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100093ad;
    case 0x100093b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100093b6;
    case 0x100093bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100093bd;
    case 0x100093d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100093d4;
    case 0x100093d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100093d8;
    case 0x100093e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100093e1;
    case 0x100093e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100093e8;
    case 0x100093fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100093fd;
    case 0x10009401u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009401;
    case 0x1000940bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000940b;
    case 0x10009420u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009420;
    case 0x10009424u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009424;
    case 0x1000942eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000942e;
    case 0x10009436u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009436;
    case 0x1000943du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000943d;
    case 0x10009444u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009444;
    case 0x1000944bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000944b;
    case 0x10009454u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009454;
    case 0x1000945bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000945b;
    case 0x10009477u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009477;
    case 0x10009484u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009484;
    case 0x1000948bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000948b;
    case 0x100094a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100094a7;
    case 0x100094afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100094af;
    case 0x100094bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100094bb;
    case 0x100094c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100094c2;
    case 0x100094ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100094ce;
    case 0x100094dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100094db;
    case 0x100094e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100094e2;
    case 0x100094efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100094ef;
    case 0x100094fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100094fb;
    case 0x10009506u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009506;
    case 0x10009515u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_654 = rd32(sp0 - 0x654u); goto E_10009515;
    case 0x10009517u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_654 = rd32(sp0 - 0x654u); goto E_10009517;
    case 0x10009526u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_654 = rd32(sp0 - 0x654u); goto E_10009526;
    case 0x10009560u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10009560;
    case 0x10009578u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_654 = rd32(sp0 - 0x654u); goto E_10009578;
    case 0x1000957au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000957a;
    case 0x10009589u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_654 = rd32(sp0 - 0x654u); goto E_10009589;
    case 0x1000958bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_654 = rd32(sp0 - 0x654u); goto E_1000958b;
    case 0x1000959au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_654 = rd32(sp0 - 0x654u); goto E_1000959a;
    case 0x100095d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100095d5;
    case 0x100095edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_654 = rd32(sp0 - 0x654u); goto E_100095ed;
    case 0x100095f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_654 = rd32(sp0 - 0x654u); goto E_100095f7;
    case 0x100095ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100095ff;
    default: break;
    }
#endif

    COW_AT(100091b0)
    wr32(sp0 - 0x658u, in_ebx);
    wr32(sp0 - 0x65cu, in_ebp);
    wr32(sp0 - 0x660u, in_esi);
    wr32(sp0 - 0x664u, in_edi);
    wr32(sp0 - 0x668u, self + 0x834u);
    t1 = rd32(self + 0xcu);
    wr32(sp0 - 0x66cu, t1);
    g->esp = sp0 - 0x664u;
    cow_thiscall(g, rd32(rd32(t1) + 0x1cu), rd32(t1), 2, t1, self + 0x834u);
    COW_AT(100091cc)
    wr32(self + 0x924u, 8u);
    wr32(self + 0x928u, 1u);
    if ((rd32(self + 0x850u) & 0x10000u) == 0u)
    {
    COW_AT(10009206)
        wr32(self + 0x924u, 0x10u);
        wr32(self + 0x928u, 2u);
    }
    else
    {
    COW_AT(100091f2)
        wr8(self + 0x908u, 1u);
        wr32(self + 0x924u, 8u);
        wr32(self + 0x928u, 1u);
    }
    COW_AT(10009216)
    if (rd32(self + 0x8f8u) >= 0xfffe0101u)
    {
    COW_AT(10009229)
        wr8(self + 0x909u, 1u);
        wr16(self + 0x90cu, 0x101u);
    }
    COW_AT(10009237)
    if (rd32(self + 0x900u) >= 0xffff0101u)
    {
    COW_AT(10009243)
        wr8(self + 0x90au, 1u);
        wr16(self + 0x90eu, 0x101u);
        if (rd32(self + 0x900u) >= 0xffff0104u)
        {
    COW_AT(1000925d)
            wr16(self + 0x90eu, 0x104u);
        }
    COW_AT(10009266)
        if (rd32(self + 0x900u) >= 0xffff0200u)
        {
    COW_AT(10009272)
            wr16(self + 0x90eu, 0x200u);
        }
    }
    COW_AT(1000927b)
    if ((rd32(self + 0x854u) & 0x800u) != 0u)
    {
    COW_AT(10009287)
        wr8(self + 0x913u, 1u);
    }
    COW_AT(1000928e)
    if ((rd32(self + 0x854u) >> 8u & 4u) != 0u)
    {
    COW_AT(10009296)
        wr8(self + 0x914u, 1u);
    }
    COW_AT(1000929d)
    if ((rd32(self + 0x840u) & 0x20000u) != 0u)
    {
    COW_AT(100092a9)
        wr8(self + 0x915u, 1u);
    }
    COW_AT(100092b0)
    t2 = rd32(self + 0x8e0u);
    wr32(self + 0x918u, t2);
    if ((rd32(self + 0x858u) & 0x20000u) != 0u)
    {
    COW_AT(100092c3)
        if ((rd32(self + 0x874u) & 0x4000000u) != 0u)
        {
            eax = rd32(self + 0x874u);
    COW_AT(100092cd)
            if ((eax >> 8u & 4u) != 0u)
            {
    COW_AT(100092d2)
                if (rd32(self + 0x8a0u) >= 2u)
                {
    COW_AT(100092d8)
                    wr8(self + 0x92cu, 1u);
                }
            }
        }
    }
    COW_AT(100092df)
    if ((rd32(self + 0x870u) & 0x800u) != 0u)
    {
    COW_AT(100092e4)
        wr8(self + 0x921u, 1u);
    }
    COW_AT(100092eb)
    if ((rd8(self + 0x870u) & 2u) != 0u)
    {
    COW_AT(100092f1)
        wr8(self + 0x930u, 1u);
    }
    COW_AT(100092f8)
    if ((rd8(self + 0x870u) & 0x20u) != 0u)
    {
    COW_AT(100092fe)
        wr8(self + 0x931u, 1u);
    }
    COW_AT(10009305)
    t3 = rd32(self + 0x88cu);
    wr32(self + 0x934u, t3);
    t4 = rd32(self + 0x890u);
    t5 = rd32(self + 0xcu);
    wr32(self + 0x938u, t4);
    wr32(sp0 - 0x668u, sp0 - 0x63cu);
    wr32(sp0 - 0x66cu, t5);
    g->esp = sp0 - 0x664u;
    cow_thiscall(g, rd32(rd32(t5) + 0x20u), sp0 - 0x63cu, 2, t5, sp0 - 0x63cu);
    COW_AT(10009325)
    t6 = rd32(sp0 - 0x630u);
    wr32(self + 0x830u, 0x20u);
    if (t6 - 0x15u > 4u) goto L_10009351;
    eax = t6 - 0x15u;
    COW_AT(1000933c)
    t7 = rd32(COW_IMG(0x1000960cu) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x10009343u: goto L_10009343;
    case 0x1000934bu: goto L_1000934b;
    default: rt_fatal(g, COW_IMG(0x1000933cu), "switch");
    }
    return 0;
L_10009343: ;
    COW_AT(10009343)
    wr32(self + 0x830u, 0x20u);
L_10009351: ;
    COW_AT(10009351)
    wr32(sp0 - 0x668u, sp0 - 0x64cu);
    wr32(sp0 - 0x66cu, 0u);
    t8 = rd32(self + 8u);
    wr32(sp0 - 0x670u, t8);
    g->esp = sp0 - 0x664u;
    cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x20u), rd32(rd32(self + 8u)), 3, t8, 0u, sp0 - 0x64cu);
    COW_AT(10009361)
    wr32(sp0 - 0x668u, 0x31545844u);
    wr32(sp0 - 0x66cu, 3u);
    wr32(sp0 - 0x670u, 0u);
    t9 = rd32(sp0 - 0x640u);
    wr32(sp0 - 0x674u, t9);
    wr32(sp0 - 0x678u, 1u);
    wr32(sp0 - 0x67cu, 0u);
    t10 = rd32(self + 8u);
    wr32(sp0 - 0x680u, t10);
    g->eax = t10;
    g->esp = sp0 - 0x664u;
    t11 = cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x28u), rd32(rd32(self + 8u)), 7, t10, 0u, 1u, t9, 0u, 3u, 0x31545844u);
    eax = t11;
    COW_AT(1000937b)
    if ((int32_t)eax >= 0)
    {
    COW_AT(10009388)
        wr8(self + 0x910u, 1u);
    }
    else
    {
    COW_AT(1000937f)
        wr8(self + 0x910u, 0u);
    }
    COW_AT(1000938f)
    wr32(sp0 - 0x668u, 0x33545844u);
    wr32(sp0 - 0x66cu, 3u);
    wr32(sp0 - 0x670u, 0u);
    t12 = rd32(sp0 - 0x640u);
    wr32(sp0 - 0x674u, t12);
    wr32(sp0 - 0x678u, 1u);
    wr32(sp0 - 0x67cu, 0u);
    t13 = rd32(self + 8u);
    wr32(sp0 - 0x680u, t13);
    g->eax = t13;
    g->esp = sp0 - 0x664u;
    t14 = cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x28u), rd32(rd32(self + 8u)), 7, t13, 0u, 1u, t12, 0u, 3u, 0x33545844u);
    eax = t14;
    COW_AT(100093a9)
    if ((int32_t)eax >= 0)
    {
    COW_AT(100093b6)
        wr8(self + 0x911u, 1u);
    }
    else
    {
    COW_AT(100093ad)
        wr8(self + 0x911u, 0u);
    }
    COW_AT(100093bd)
    wr32(sp0 - 0x668u, 0x29u);
    wr32(sp0 - 0x66cu, 3u);
    wr32(sp0 - 0x670u, 0u);
    t15 = rd32(sp0 - 0x640u);
    wr32(sp0 - 0x674u, t15);
    wr32(sp0 - 0x678u, 1u);
    wr32(sp0 - 0x67cu, 0u);
    t16 = rd32(self + 8u);
    wr32(sp0 - 0x680u, t16);
    g->eax = t16;
    g->esp = sp0 - 0x664u;
    t17 = cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x28u), rd32(rd32(self + 8u)), 7, t16, 0u, 1u, t15, 0u, 3u, 0x29u);
    eax = t17;
    COW_AT(100093d4)
    if ((int32_t)eax >= 0)
    {
    COW_AT(100093e1)
        wr8(self + 0x912u, 1u);
    }
    else
    {
    COW_AT(100093d8)
        wr8(self + 0x912u, 0u);
    }
    COW_AT(100093e8)
    wr32(sp0 - 0x668u, 2u);
    wr32(sp0 - 0x66cu, 0u);
    t18 = rd32(sp0 - 0x640u);
    wr32(sp0 - 0x670u, t18);
    wr32(sp0 - 0x674u, 1u);
    wr32(sp0 - 0x678u, 0u);
    t19 = rd32(self + 8u);
    wr32(sp0 - 0x67cu, t19);
    g->eax = t19;
    g->esp = sp0 - 0x664u;
    t20 = cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x2cu), rd32(rd32(self + 8u)), 6, t19, 0u, 1u, t18, 0u, 2u);
    eax = t20;
    COW_AT(100093fd)
    if ((int32_t)eax >= 0)
    {
    COW_AT(10009401)
        wr32(self + 0x91cu, 2u);
    }
    COW_AT(1000940b)
    wr32(sp0 - 0x668u, 4u);
    wr32(sp0 - 0x66cu, 0u);
    t21 = rd32(sp0 - 0x640u);
    wr32(sp0 - 0x670u, t21);
    wr32(sp0 - 0x674u, 1u);
    wr32(sp0 - 0x678u, 0u);
    t22 = rd32(self + 8u);
    wr32(sp0 - 0x67cu, t22);
    g->eax = t22;
    g->esp = sp0 - 0x664u;
    t23 = cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x2cu), rd32(rd32(self + 8u)), 6, t22, 0u, 1u, t21, 0u, 4u);
    eax = t23;
    COW_AT(10009420)
    if ((int32_t)eax >= 0)
    {
    COW_AT(10009424)
        wr32(self + 0x91cu, 4u);
    }
    COW_AT(1000942e)
    if (!(rd32(self + 0x858u) >> 8u & 1u))
    {
        eax = rd32(self + 0x858u);
    }
    else
    {
        eax = rd32(self + 0x858u);
    COW_AT(10009436)
        wr8(self + 0x92du, 1u);
    }
    COW_AT(1000943d)
    if ((int8_t)rd8(self + 0x858u) < 0)
    {
    COW_AT(10009444)
        wr8(self + 0x92eu, 1u);
    }
    COW_AT(1000944b)
    if ((rd32(self + 0x858u) & 0x10000u) != 0u)
    {
    COW_AT(10009454)
        wr8(self + 0x92fu, 1u);
    }
    COW_AT(1000945b)
    wr32(sp0 - 0x668u, sp0 - 0x42cu);
    t24 = rd32(self + 8u);
    wr8(self + 0x920u, 0u);
    wr32(sp0 - 0x66cu, 2u);
    wr32(sp0 - 0x670u, 0u);
    wr32(sp0 - 0x674u, t24);
    g->eax = t24;
    g->edx = sp0 - 0x42cu;
    t25 = rd32(t24);
    g->esp = sp0 - 0x664u;
    t26 = cow_thiscall(g, rd32(t25 + 0x14u), t25, 4, t24, 0u, 2u, sp0 - 0x42cu);
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(10009477)
    if (rd32(sp0 - 0x24u) == 0x1002u)
    {
    COW_AT(10009484)
        wr8(self + 0x920u, 1u);
    }
    COW_AT(1000948b)
    wr32(sp0 - 0x668u, COW_IMG(0x10456568u));
    wr32(sp0 - 0x66cu, 0x104u);
    wr32(self + 0xa00u, 0xffffffffu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x664u;
    t29 = cow_stdcall(g, rd32(COW_IMG(0x10329118u)), 2, 0x104u, COW_IMG(0x10456568u));   /* kernel32.dll!GetCurrentDirectoryA */
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(100094a7)
    if (eax == 0u) goto L_1000957a;
    COW_AT(100094af)
    wr32(sp0 - 0x668u, 0x5cu);
    wr32(sp0 - 0x66cu, COW_IMG(0x10456568u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x65cu;
    t32 = cow_thiscall_cdecl(g, COW_IMG(0x10312800u), ecx, 4, COW_IMG(0x10456568u), 0x5cu, rd32(sp0 - 0x664u), rd32(sp0 - 0x660u));
    t33 = g->ecx;
    t34 = g->edx;
    eax = t32;
    ecx = t33;
    edx = t34;
    COW_AT(100094bb)
    if (eax != 0u)
    {
        ebx = 0u;
        goto L_100094db;
    }
    COW_AT(100094c2)
    wr32(sp0 - 0x668u, 0x2fu);
    wr32(sp0 - 0x66cu, COW_IMG(0x10456568u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x65cu;
    t35 = cow_thiscall_cdecl(g, COW_IMG(0x10312800u), ecx, 4, COW_IMG(0x10456568u), 0x2fu, rd32(sp0 - 0x664u), rd32(sp0 - 0x660u));
    t36 = g->ecx;
    t37 = g->edx;
    eax = t35;
    ecx = t36;
    edx = t37;
    COW_AT(100094ce)
    if (eax == 0u) goto L_100095f7;
    ebx = 1u;
L_100094db: ;
    COW_AT(100094db)
    if (rd8(eax + 1u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(100094e2)
        edi = eax;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if ((uint8_t)ebx == 0u)
        {
    COW_AT(100094fb)
            t38 = rd16(COW_IMG(0x1034f8e0u));
            wr16(edi - 1u, (uint16_t)t38);
            ecx = (ecx & 0xffff0000u) | t38;
        }
        else
        {
    COW_AT(100094ef)
            wr16(edi - 1u, rd16(COW_IMG(0x1034ffb8u)));
        }
    }
    COW_AT(10009506)
    wr32(sp0 - 0x654u, self + 0xa04u);
    ebx = COW_IMG(0x1034fbb0u);
    loc_654 = self + 0xa04u;
L_10009515: ;
    COW_AT(10009515)
    eax = 0u;
L_10009517: ;
    COW_AT(10009517)
    t39 = rd8(COW_IMG(0x10456568u) + eax);
    wr8(eax + sp0 - 0x62cu, (uint8_t)t39);
    if ((uint8_t)t39 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t39;
        goto L_10009517;
    }
    ecx = (ecx & 0xffffff00u) | t39;
    COW_AT(10009526)
    edi = ebx;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t40 = edi - ~ecx;
    edi = sp0 - 0x62cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t40;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x668u, sp0 - 0x62cu);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->eax = sp0 - 0x62cu;
    g->edx = ~ecx;
    g->esp = sp0 - 0x664u;
    t41 = cow_stdcall(g, rd32(COW_IMG(0x10329378u)), 1, sp0 - 0x62cu);   /* user32.dll!LoadCursorFromFileA */
    t42 = g->edx;
    eax = t41;
    edx = t42;
    COW_AT(10009560)
    t43 = rd32(sp0 - 0x654u);
    wr32(t43, eax);
    wr32(sp0 - 0x654u, t43 + 4u);
    if ((int32_t)(ebx + 0x20u) < (int32_t)COW_IMG(0x1034fdf0u))
    {
        ecx = t43 + 4u;
        ebx = ebx + 0x20u;
        loc_654 = t43 + 4u;
        goto L_10009515;
    }
    ecx = t43 + 4u;
    COW_AT(10009578)
L_100095ed: ;
    COW_AT(100095ed)
    wr32(self + 0xa4cu, 0u);
L_100095f7: ;
    COW_AT(100095f7)
    wr32(sp0 - 0x668u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x664u;
    t49 = cow_stdcall(g, rd32(COW_IMG(0x10329380u)), 1, 0u);   /* user32.dll!SetCursor */
    eax = t49;
    COW_AT(100095ff)
    g->ebx = rd32(sp0 - 0x658u);
    g->esi = rd32(sp0 - 0x660u);
    g->edi = rd32(sp0 - 0x664u);
    g->ebp = rd32(sp0 - 0x65cu);
    return (eax & 0xffffff00u) | 1u;
L_1000934b: ;
    COW_AT(1000934b)
    wr32(self + 0x830u, 0x10u);
    goto L_10009351;
L_1000957a: ;
    COW_AT(1000957a)
    wr32(sp0 - 0x654u, self + 0xa04u);
    ecx = self + 0xa04u;
    ebx = COW_IMG(0x1034fbb0u);
    loc_654 = self + 0xa04u;
L_10009589: ;
    COW_AT(10009589)
    eax = 0u;
L_1000958b: ;
    COW_AT(1000958b)
    t44 = rd8(COW_IMG(0x10456568u) + eax);
    wr8(eax + sp0 - 0x62cu, (uint8_t)t44);
    if ((uint8_t)t44 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t44;
        goto L_1000958b;
    }
    ecx = (ecx & 0xffffff00u) | t44;
    COW_AT(1000959a)
    edi = ebx;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x668u, 0x7f00u);
    t45 = edi - ~ecx;
    edi = sp0 - 0x62cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t45;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x66cu, eax);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->eax = eax;
    g->edx = ~ecx;
    g->esp = sp0 - 0x664u;
    t46 = cow_stdcall(g, rd32(COW_IMG(0x1032937cu)), 2, eax, 0x7f00u);   /* user32.dll!LoadCursorA */
    t47 = g->edx;
    eax = t46;
    edx = t47;
    COW_AT(100095d5)
    t48 = rd32(sp0 - 0x654u);
    wr32(t48, eax);
    wr32(sp0 - 0x654u, t48 + 4u);
    if ((int32_t)(ebx + 0x20u) < (int32_t)COW_IMG(0x1034fdf0u))
    {
        ecx = t48 + 4u;
        ebx = ebx + 0x20u;
        loc_654 = t48 + 4u;
        goto L_10009589;
    }
    ecx = t48 + 4u;
    goto L_100095ed;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100091b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100091ccu:
    {
        unsigned af;
        unsigned cf;
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
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x100091f2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->eax = 8u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10009206u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10009216u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10009229u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->eax = 0x101u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10009237u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->eax = 0x101u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10009243u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->eax = 0x101u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000925du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10009266u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10009272u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000927bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10009287u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
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
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ecx = 0x800u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000928eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
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
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ecx = 0x800u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10009296u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
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
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ecx = 0x800u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000929du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
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
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ecx = 0x800u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100092a9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->eax = 0x20000u;
        g->ecx = 0x800u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100092b0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->eax = 0x20000u;
        g->ecx = 0x800u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100092c3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
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
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ecx = 0x800u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100092cdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
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
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ecx = 0x800u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100092d2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
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
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ecx = 0x800u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100092d8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
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
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ecx = 0x800u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100092dfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
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
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ecx = 0x800u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100092e4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100092ebu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100092f1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100092f8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100092feu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10009305u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x664u);
        in_esi = rd32(sp0 - 0x660u);
        in_ebp = rd32(sp0 - 0x65cu);
        in_ebx = rd32(sp0 - 0x658u);
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10009325u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        wr32(sp0 - 0x668u, sp0 - 0x63cu);
        (void)sp0;
        return 1;
    }
    case 0x1000933cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ecx = 0x20u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        wr32(sp0 - 0x668u, sp0 - 0x63cu);
        (void)sp0;
        return 1;
    }
    case 0x10009343u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ecx = 0x20u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        wr32(sp0 - 0x668u, sp0 - 0x63cu);
        (void)sp0;
        return 1;
    }
    case 0x1000934bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        g->edi = 0x10u;
        wr32(sp0 - 0x668u, sp0 - 0x63cu);
        (void)sp0;
        return 1;
    }
    case 0x10009351u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        wr32(sp0 - 0x668u, sp0 - 0x63cu);
        (void)sp0;
        return 1;
    }
    case 0x10009361u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        wr32(sp0 - 0x668u, sp0 - 0x64cu);
        (void)sp0;
        return 1;
    }
    case 0x1000937bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x1000937fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x10009388u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x1000938fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x100093a9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x100093adu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x100093b6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x100093bdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x100093d4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x100093d8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x100093e1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x100093e8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x100093fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x10009401u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x1000940bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x10009420u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x10009424u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x1000942eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x10009436u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x1000943du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x10009444u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x1000944bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        g->esi = self + 0x834u;
        (void)sp0;
        return 1;
    }
    case 0x10009454u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1000945bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10009477u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        wr32(sp0 - 0x668u, sp0 - 0x42cu);
        (void)sp0;
        return 1;
    }
    case 0x10009484u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        wr32(sp0 - 0x668u, sp0 - 0x42cu);
        (void)sp0;
        return 1;
    }
    case 0x1000948bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 1u;
        wr32(sp0 - 0x668u, sp0 - 0x42cu);
        (void)sp0;
        return 1;
    }
    case 0x100094a7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100094afu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100094bbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x66cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100094c2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100094ceu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x66cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100094dbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x100094e2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x100094efu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x100094fbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x10009506u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x10009515u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_654;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_654 = rd32(sp0 - 0x654u);
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x10009517u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_654;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_654 = rd32(sp0 - 0x654u);
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x10009526u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_654;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_654 = rd32(sp0 - 0x654u);
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x10009560u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        wr32(sp0 - 0x668u, sp0 - 0x62cu);
        (void)sp0;
        return 1;
    }
    case 0x10009578u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_654;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_654 = rd32(sp0 - 0x654u);
        g->esp = sp0 - 0x664u;
        wr32(sp0 - 0x668u, sp0 - 0x62cu);
        (void)sp0;
        return 1;
    }
    case 0x1000957au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x10009589u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_654;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_654 = rd32(sp0 - 0x654u);
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x1000958bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_654;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_654 = rd32(sp0 - 0x654u);
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x1000959au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_654;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_654 = rd32(sp0 - 0x654u);
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x100095d5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x100095edu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_654;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_654 = rd32(sp0 - 0x654u);
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x100095f7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_654;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_654 = rd32(sp0 - 0x654u);
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    case 0x100095ffu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x664u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100091b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100091b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
