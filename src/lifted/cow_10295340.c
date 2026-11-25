/* f_0x10295340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10295340(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d1;
    double d19;
    double d2;
    double d22;
    double d26;
    double d30;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_b4;
    uint32_t loc_bc;
    uint32_t loc_c0;
    uint32_t loc_c4;
    uint32_t loc_c8;
    uint32_t loc_cc;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 248u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10295362u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_10295362;
    case 0x1029537bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_1029537b;
    case 0x10295385u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_10295385;
    case 0x1029538au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_1029538a;
    case 0x10295398u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10295398;
    case 0x102953b5u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_102953b5;
    case 0x102953c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102953c1;
    case 0x102953d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_b4 = rd32(sp0 - 0xb4u); goto E_102953d9;
    case 0x102953dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_b4 = rd32(sp0 - 0xb4u); goto E_102953df;
    case 0x102953e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_b4 = rd32(sp0 - 0xb4u); goto E_102953e5;
    case 0x102953eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_b4 = rd32(sp0 - 0xb4u); goto E_102953ea;
    case 0x102953f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_b4 = rd32(sp0 - 0xb4u); goto E_102953f2;
    case 0x10295408u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10295408;
    case 0x1029541du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029541d;
    case 0x1029543cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029543c;
    case 0x1029545eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_1029545e;
    case 0x1029546eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_1029546e;
    case 0x10295476u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10295476;
    case 0x10295487u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10295487;
    case 0x1029548eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_1029548e;
    case 0x1029549cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_1029549c;
    case 0x102954a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_102954a2;
    case 0x102954bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_102954bb;
    case 0x102954c4u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102954c4;
    case 0x102954d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102954d8;
    case 0x102954e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102954e2;
    case 0x102954eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_102954ee;
    case 0x102954f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); goto E_102954f5;
    case 0x10295502u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); goto E_10295502;
    case 0x10295510u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); goto E_10295510;
    case 0x10295521u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); goto E_10295521;
    case 0x1029553cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029553c;
    case 0x10295543u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10295543;
    case 0x10295549u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10295549;
    case 0x1029555au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1029555a;
    case 0x1029556au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1029556a;
    case 0x10295575u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10295575;
    case 0x10295585u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10295585;
    case 0x1029559cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029559c;
    case 0x102955acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102955ac;
    case 0x102955d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102955d5;
    case 0x102955e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102955e4;
    case 0x102955f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102955f8;
    case 0x1029560bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029560b;
    case 0x10295614u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10295614;
    case 0x10295621u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10295621;
    default: break;
    }
#endif

    COW_AT(10295340)
    wr32(sp0 - 0xc0u, in_ebx);
    wr32(sp0 - 0xc4u, in_ebp);
    wr32(sp0 - 0xc8u, in_esi);
    wr32(sp0 - 0xccu, in_edi);
    wr32(sp0 - 0xb4u, 0u);
    if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
    {
        eax = in_eax;
        edx = rd32(arg1 + 0x1cu);
        goto L_1029538a;
    }
    ecx = 0u;
    edx = rd32(arg1 + 0x1cu);
    esi = 0u;
L_10295362: ;
    COW_AT(10295362)
    d1 = fabs((double)rdf32(arg3 + ecx * 4u));
    if (d1 < rdf64(COW_IMG(0x10340b18u)))
    {
        eax = (arg3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x10340b18u)), 0u);
        goto L_10295385;
    }
    eax = (arg3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x10340b18u)), 0u);
    COW_AT(1029537b)
    if (esi + 1u == 0x10u) goto L_102954ee;
    esi = esi + 1u;
L_10295385: ;
    COW_AT(10295385)
    if ((int32_t)(ecx + 1u) < (int32_t)edx)
    {
        ecx = ecx + 1u;
        goto L_10295362;
    }
L_1029538a: ;
    COW_AT(1029538a)
    wr32(sp0 - 0xbcu, 0u);
    if ((int32_t)edx <= 0)
    {
        loc_c0 = in_ebx;
        loc_c4 = in_ebp;
        loc_c8 = in_esi;
        loc_cc = in_edi;
        goto L_10295621;
    }
    ecx = 0u;
    ebx = 0u;
    loc_c0 = in_ebx;
    loc_c4 = in_ebp;
    loc_c8 = in_esi;
    loc_cc = in_edi;
    loc_b4 = 0u;
    loc_bc = 0u;
L_10295398: ;
    COW_AT(10295398)
    d2 = fabs((double)rdf32(arg3 + ecx * 4u));
    if (d2 < rdf64(COW_IMG(0x10340b18u))) goto L_1029545e;
    COW_AT(102953b5)
    t3 = rd32(ecx * 4u + rd32(arg1 + 0x20u));
    wr32(sp0 - 0xd0u, t3);
    g->eax = rd32(arg1 + 0x20u);
    t4 = rd32(arg1 + 0x20u);
    g->esp = sp0 - 0xd0u;
    t5 = cow_stdcall(g, COW_IMG(0x1028d990u), 0);
    eax = t5;
    COW_AT(102953c1)
    wr32(sp0 - 0xb4u, eax);
    if (eax == 0u)
    {
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_cc = rd32(sp0 - 0xccu);
        goto L_102954f5;
    }
    esi = eax;
    loc_b4 = eax;
    COW_AT(102953d9)
    if ((int32_t)arg2 <= 0)
    {
        eax = 0u;
        goto L_102953ea;
    }
    eax = 0u;
L_102953df: ;
    COW_AT(102953df)
    t6 = rd32(eax * 4u + esi);
    if (t6 == 1u) goto L_102953ea;
    COW_AT(102953e5)
    if ((int32_t)(eax + 1u) < (int32_t)arg2)
    {
        eax = eax + 1u;
        goto L_102953df;
    }
    eax = eax + 1u;
L_102953ea: ;
    COW_AT(102953ea)
    if (eax == arg2)
    {
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_cc = rd32(sp0 - 0xccu);
        goto L_102954f5;
    }
    COW_AT(102953f2)
    wr32(sp0 - 0xb8u, arg2 * 4u);
    t7 = rd32(rd32(arg1 + 0x20u));
    wr32(sp0 - 0xd0u, t7);
    g->eax = arg2 * 4u;
    g->esp = sp0 - 0xd0u;
    t8 = cow_stdcall(g, COW_IMG(0x1028d990u), 0);
    eax = t8;
    COW_AT(10295408)
    t9 = rd32(sp0 - 0xb8u);
    edi = eax;
    ecx = t9;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t9;
        goto L_102954c4;
    }
    COW_AT(1029541d)
    wr32(sp0 - 0xd0u, arg4);
    t10 = rd32(rd32(arg1 + 0x20u) + rd32(sp0 - 0xbcu) * 4u);
    wr32(sp0 - 0xd4u, t10);
    g->eax = t10;
    t11 = rd32(sp0 - 0xbcu);
    g->esp = sp0 - 0xc8u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x1028d930u), arg1, 3, t10, arg4, rd32(sp0 - 0xccu));
    eax = t12;
    esi = t11;
    COW_AT(1029543c)
    wr32(ebx * 4u + sp0 - 0x80u, eax);
    t13 = rd32(arg3 + esi * 4u);
    wr32(ebx * 4u + sp0 - 0x40u, t13);
    ecx = esi;
    ebx = ebx + 1u;
    loc_c0 = rd32(sp0 - 0xc0u);
    loc_c4 = rd32(sp0 - 0xc4u);
    loc_c8 = rd32(sp0 - 0xc8u);
    loc_cc = rd32(sp0 - 0xccu);
    loc_b4 = rd32(sp0 - 0xb4u);
L_1029545e: ;
    COW_AT(1029545e)
    wr32(sp0 - 0xbcu, ecx + 1u);
    if ((int32_t)(ecx + 1u) < (int32_t)rd32(arg1 + 0x1cu))
    {
        eax = rd32(arg1 + 0x1cu);
        loc_bc = ecx + 1u;
        ecx = ecx + 1u;
        goto L_10295398;
    }
    ecx = ecx + 1u;
    COW_AT(1029546e)
    if (ebx != 0u)
    {
    COW_AT(10295476)
        if ((int32_t)arg2 > 0)
        {
    COW_AT(10295487)
            ebp = arg5;
            esi = 0u;
L_1029548e: ;
    COW_AT(1029548e)
            t20 = rd32(esi * 4u + loc_b4);
            if (t20 == 1u)
            {
    COW_AT(10295575)
                wr32(sp0 - 0xd0u, esi);
                t23 = rd32(sp0 - 0x80u);
                wr32(sp0 - 0xd4u, t23);
                wr32(sp0 - 0xd8u, sp0 - 0xb0u);
                g->esp = sp0 - 0xccu;
                cow_cdecl(g, COW_IMG(0x1027d0d0u), 3, sp0 - 0xb0u, t23, esi);
    COW_AT(10295585)
                t24 = rd32(sp0 - 0x40u);
                wr32(sp0 - 0xbcu, t24);
                if ((int32_t)ebx <= 1)
                {
                    ecx = t24;
                    goto L_102955f8;
                }
                ecx = t24;
                edi = 1u;
L_1029559c: ;
    COW_AT(1029559c)
                wr32(sp0 - 0xd0u, esi);
                t25 = rd32(edi * 4u + sp0 - 0x80u);
                wr32(sp0 - 0xd4u, t25);
                wr32(sp0 - 0xd8u, sp0 - 0x90u);
                g->esp = sp0 - 0xccu;
                cow_cdecl(g, COW_IMG(0x1027d0d0u), 3, sp0 - 0x90u, t25, esi);
    COW_AT(102955ac)
                d26 = (double)(float)(double)rdf32(edi * 4u + sp0 - 0x40u);
                wrf32(sp0 - 0xb8u, (float)d26);
                wr32(sp0 - 0xdcu, cow_f2bits(d26));
                t27 = rd32(sp0 - 0xbcu);
                wr32(sp0 - 0xe0u, t27);
                wr32(sp0 - 0xe4u, sp0 - 0x90u);
                wr32(sp0 - 0xe8u, sp0 - 0xb0u);
                wr32(sp0 - 0xecu, sp0 - 0xa0u);
                g->edx = sp0 - 0xa0u;
                g->esp = sp0 - 0xd0u;
                cow_call_regs(g, COW_IMG(0x10294fb0u), sp0 - 0x90u, sp0 - 0xb0u, g->edx, 1, 7, sp0 - 0xa0u, sp0 - 0xb0u, sp0 - 0x90u, t27, cow_f2bits(d26), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u));
                t28 = g->edx;
                edx = t28;
    COW_AT(102955d5)
                wr32(sp0 - 0xf0u, sp0 - 0xa0u);
                wr32(sp0 - 0xf4u, sp0 - 0xb0u);
                g->ecx = sp0 - 0xb0u;
                g->esp = sp0 - 0xecu;
                cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0xb0u, sp0 - 0xa0u);
                t29 = g->ecx;
                ecx = t29;
    COW_AT(102955e4)
                d30 = fr(g, (double)rdf32(sp0 - 0xb8u) + (double)rdf32(sp0 - 0xbcu));
                wrf32(sp0 - 0xbcu, (float)(double)(float)d30);
                if ((int32_t)(edi + 1u) < (int32_t)ebx)
                {
                    edi = edi + 1u;
                    goto L_1029559c;
                }
L_102955f8: ;
    COW_AT(102955f8)
                wr32(sp0 - 0xd0u, esi);
                wr32(sp0 - 0xd4u, arg5);
                wr32(sp0 - 0xd8u, sp0 - 0xb0u);
                g->ecx = ecx;
                g->esp = sp0 - 0xccu;
                cow_cdecl(g, COW_IMG(0x1027d0a0u), 3, sp0 - 0xb0u, arg5, esi);
                t31 = g->ecx;
                ecx = t31;
    COW_AT(1029560b)
                ebp = ebp + 0x10u;
                esi = esi + 4u;
                loc_c0 = rd32(sp0 - 0xc0u);
                loc_c4 = rd32(sp0 - 0xc4u);
                loc_c8 = rd32(sp0 - 0xc8u);
                loc_cc = rd32(sp0 - 0xccu);
                loc_b4 = rd32(sp0 - 0xb4u);
            }
            else
            {
    COW_AT(1029549c)
                if ((int32_t)ebx <= 0) goto L_102954bb;
                eax = 0u;
L_102954a2: ;
    COW_AT(102954a2)
                t21 = rd32(eax * 4u + sp0 - 0x80u);
                d22 = fr(g, fr(g, (double)rdf32(esi * 4u + rd32(eax * 4u + sp0 - 0x80u)) * (double)rdf32(eax * 4u + sp0 - 0x40u)) + (double)rdf32(ebp));
                wrf32(ebp, (float)d22);
                if ((int32_t)(eax + 1u) < (int32_t)ebx)
                {
                    eax = eax + 1u;
                    loc_c0 = rd32(sp0 - 0xc0u);
                    loc_c4 = rd32(sp0 - 0xc4u);
                    loc_c8 = rd32(sp0 - 0xc8u);
                    loc_cc = rd32(sp0 - 0xccu);
                    loc_b4 = rd32(sp0 - 0xb4u);
                    goto L_102954a2;
                }
                ecx = t21;
                loc_c0 = rd32(sp0 - 0xc0u);
                loc_c4 = rd32(sp0 - 0xc4u);
                loc_c8 = rd32(sp0 - 0xc8u);
                loc_cc = rd32(sp0 - 0xccu);
                loc_b4 = rd32(sp0 - 0xb4u);
L_102954bb: ;
    COW_AT(102954bb)
                ebp = ebp + 4u;
                esi = esi + 1u;
            }
    COW_AT(10295614)
            if ((int32_t)esi < (int32_t)arg2) goto L_1029548e;
        }
    }
L_10295621: ;
    COW_AT(10295621)
    g->ebx = loc_c0;
    g->esi = loc_c8;
    g->edi = loc_cc;
    g->ebp = loc_c4;
    return;
L_102954c4: ;
    COW_AT(102954c4)
    wr32(sp0 - 0xd0u, 0x199u);
    wr32(sp0 - 0xd4u, COW_IMG(0x103bb674u));
    wr32(sp0 - 0xd8u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = 0u;
    g->esp = sp0 - 0xd0u;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(102954d8)
    wr32(sp0 - 0xdcu, COW_IMG(0x103bb7c8u));
    g->ebx = ebx;
    g->esp = sp0 - 0xd4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb7c8u), rd32(sp0 - 0xd8u));
    COW_AT(102954e2)
    loc_c0 = rd32(sp0 - 0xc0u);
    loc_c4 = rd32(sp0 - 0xc4u);
    loc_c8 = rd32(sp0 - 0xc8u);
    loc_cc = rd32(sp0 - 0xccu);
L_102954f5: ;
    COW_AT(102954f5)
    if ((int32_t)rd32(arg1 + 0x1cu) <= 0) goto L_10295621;
    eax = rd32(arg1 + 0x1cu);
    COW_AT(10295502)
    ebx = 0u;
    esi = arg3;
L_10295510: ;
    COW_AT(10295510)
    if (fabs((double)rdf32(esi)) < rdf64(COW_IMG(0x10340b18u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fabs((double)rdf32(esi)), rdf64(COW_IMG(0x10340b18u)), 0u);
    }
    else
    {
    COW_AT(10295521)
        wr32(sp0 - 0xd0u, arg4);
        t17 = rd32(ebx * 4u + rd32(arg1 + 0x20u));
        wr32(sp0 - 0xd4u, t17);
        g->eax = t17;
        g->esp = sp0 - 0xc8u;
        t18 = cow_thiscall_cdecl(g, COW_IMG(0x1028d930u), arg1, 3, t17, arg4, loc_cc);
        eax = t18;
    COW_AT(1029553c)
        if ((int32_t)arg2 <= 0)
        {
            loc_c0 = rd32(sp0 - 0xc0u);
            loc_c4 = rd32(sp0 - 0xc4u);
            loc_c8 = rd32(sp0 - 0xc8u);
            loc_cc = rd32(sp0 - 0xccu);
        }
        else
        {
    COW_AT(10295543)
            eax = eax - arg5;
            ecx = arg5;
            edx = arg2;
L_10295549: ;
    COW_AT(10295549)
            d19 = fr(g, fr(g, (double)rdf32(eax + ecx) * (double)rdf32(esi)) + (double)rdf32(ecx));
            wrf32(ecx, (float)d19);
            if (edx != 1u)
            {
                ecx = ecx + 4u;
                edx = edx - 1u;
                goto L_10295549;
            }
            loc_c0 = rd32(sp0 - 0xc0u);
            loc_c4 = rd32(sp0 - 0xc4u);
            loc_c8 = rd32(sp0 - 0xc8u);
            loc_cc = rd32(sp0 - 0xccu);
        }
    }
    COW_AT(1029555a)
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x1cu))
    {
        ebx = ebx + 1u;
        esi = esi + 4u;
        goto L_10295510;
    }
    COW_AT(1029556a)
    g->ebx = loc_c0;
    g->esi = loc_c8;
    g->edi = loc_cc;
    g->ebp = loc_c4;
    return;
L_102954ee: ;
    COW_AT(102954ee)
    loc_c0 = in_ebx;
    loc_c4 = in_ebp;
    loc_c8 = in_esi;
    loc_cc = in_edi;
    goto L_102954f5;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10295340(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10295362u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0xb4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1029537bu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0xb4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10295385u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0xb4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1029538au:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0xb4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10295398u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102953b5u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102953c1u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xd0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102953d9u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
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
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102953dfu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
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
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102953e5u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
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
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102953eau:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
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
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102953f2u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
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
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10295408u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0xd0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1029541du:
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
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x1029543cu:
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
        g->esp = sp0 - 0xd4u;
        (void)sp0;
        return 1;
    }
    case 0x1029545eu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029546eu:
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
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10295476u:
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
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10295487u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1029548eu:
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
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x1029549cu:
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
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x102954a2u:
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
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x102954bbu:
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
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x102954c4u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xccu;
        g->edx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102954d8u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0xd8u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102954e2u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0xdcu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102954eeu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b4;
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
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102954f5u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10295502u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10295510u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10295521u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029553cu:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0xd4u;
        g->ebp = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10295543u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10295549u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029555au:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029556au:
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
        uint32_t loc_b4;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10295575u:
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
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10295585u:
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
        g->esp = sp0 - 0xd8u;
        (void)sp0;
        return 1;
    }
    case 0x1029559cu:
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
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x102955acu:
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
        g->esp = sp0 - 0xd8u;
        (void)sp0;
        return 1;
    }
    case 0x102955d5u:
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
        g->esp = sp0 - 0xecu;
        (void)sp0;
        return 1;
    }
    case 0x102955e4u:
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
        g->esp = sp0 - 0xf4u;
        (void)sp0;
        return 1;
    }
    case 0x102955f8u:
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
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x1029560bu:
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
        g->esp = sp0 - 0xd8u;
        (void)sp0;
        return 1;
    }
    case 0x10295614u:
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
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10295621u:
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
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
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
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10295340(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10295340(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
