/* f_0x10249e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10249e20(Guest* g)
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
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    unsigned of;
    unsigned pf;
    int64_t q14;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 128u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10249e56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_4c = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_10249e56;
    case 0x10249e66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_10249e66;
    case 0x10249e6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_10249e6c;
    case 0x10249e70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_10249e70;
    case 0x10249e7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_10249e7a;
    case 0x10249e7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_10249e7e;
    case 0x10249e88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_10249e88;
    case 0x10249e91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_10249e91;
    case 0x10249e99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_10249e99;
    case 0x10249ec1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_48 = rd32(sp0 - 0x48u); goto E_10249ec1;
    case 0x10249ec9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_48 = rd32(sp0 - 0x48u); goto E_10249ec9;
    case 0x10249ee0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10249ee0;
    case 0x10249ee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_10249ee2;
    case 0x10249eeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_10249eea;
    case 0x10249ef3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_10249ef3;
    case 0x10249f1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_10249f1b;
    case 0x10249f2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_10249f2f;
    case 0x10249f43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10249f43;
    case 0x10249f5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_10249f5d;
    case 0x10249f5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10249f5f;
    case 0x10249f69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10249f69;
    case 0x10249f73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_10249f73;
    case 0x10249f75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_10249f75;
    case 0x10249f7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_10249f7d;
    case 0x10249f86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_10249f86;
    case 0x10249f8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_10249f8c;
    case 0x10249f98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_10249f98;
    case 0x10249fb8u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10249fb8;
    case 0x10249fd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10249fd7;
    case 0x1024a008u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024a008;
    case 0x1024a014u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_50 = rd32(sp0 - 0x50u); goto E_1024a014;
    case 0x1024a027u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); goto E_1024a027;
    case 0x1024a035u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_48 = rd32(sp0 - 0x48u); goto E_1024a035;
    case 0x1024a039u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_1024a039;
    case 0x1024a03du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_1024a03d;
    case 0x1024a041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_1024a041;
    case 0x1024a04au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_1024a04a;
    case 0x1024a04eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_1024a04e;
    case 0x1024a057u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_1024a057;
    case 0x1024a059u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_1024a059;
    default: break;
    }
#endif

    COW_AT(10249e20)
    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x4cu, rd32(COW_IMG(0x10669100u)));
    t1 = rd32(COW_IMG(0x10669100u));
    edi = sp0 - 0x38u;
    eax = 0u;
    ecx = 0xeu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd8(t1 + 4u) == 0u)
    {
        loc_54 = in_ebx;
        loc_58 = in_ebp;
        loc_5c = in_esi;
        loc_60 = in_edi;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(t1 + 4u);
        edi = t1 + 4u;
        loc_4c = t1;
    COW_AT(10249e56)
        wr32(sp0 - 0x50u, rd32(COW_IMG(0x106690fcu)));
        if (rd32(rd32(COW_IMG(0x106690fcu))) == 0u)
        {
            eax = rd32(COW_IMG(0x106690fcu));
            edx = rd32(COW_IMG(0x106690fcu));
            loc_50 = rd32(COW_IMG(0x106690fcu));
        }
        else
        {
            eax = rd32(COW_IMG(0x106690fcu));
            edx = rd32(COW_IMG(0x106690fcu));
    COW_AT(10249e66)
            ecx = edx + 0x108u;
L_10249e6c: ;
    COW_AT(10249e6c)
            if (eax >= ecx) goto L_10249e7a;
    COW_AT(10249e70)
            if (rd32(eax + 0xcu) != 0u)
            {
                eax = eax + 0xcu;
                goto L_10249e6c;
            }
            eax = eax + 0xcu;
L_10249e7a: ;
    COW_AT(10249e7a)
            wr32(sp0 - 0x50u, eax);
            loc_50 = eax;
        }
    COW_AT(10249e7e)
        if (eax < edx + 0x108u)
        {
            edx = edx + 0x108u;
        }
        else
        {
            edx = edx + 0x108u;
    COW_AT(10249e88)
            g->eax = eax;
            g->esp = sp0 - 0x60u;
            t2 = cow_fastcall(g, COW_IMG(0x10249d90u), ecx, edx, 0);
            t3 = g->ecx;
            t4 = g->edx;
            wr32(sp0 - 0x50u, t2);
            eax = t2;
            ecx = t3;
            edx = t4;
            loc_4c = rd32(sp0 - 0x4cu);
            loc_50 = t2;
        }
    COW_AT(10249e91)
        if (eax == 0u)
        {
            loc_54 = in_ebx;
            loc_58 = in_ebp;
            loc_5c = in_esi;
            loc_60 = in_edi;
        }
        else
        {
    COW_AT(10249e99)
            wr32(sp0 - 0x64u, 0x104u);
            g->eax = eax;
            g->esp = sp0 - 0x58u;
            t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x104u, in_edi, in_esi);
            t6 = g->ecx;
            t7 = g->edx;
            wr32(sp0 - 0x68u, 0x30u);
            wr32(sp0 - 0x44u, t5);
            g->esp = sp0 - 0x5cu;
            t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t6, t7, 1, 3, 0x30u, 0x104u, in_edi);
            t9 = g->ecx;
            t10 = g->edx;
            wr32(sp0 - 0x48u, t8);
            if (t5 == 0u)
            {
                eax = t8;
                ecx = t9;
                edx = t10;
                ebx = t5;
                ebp = t8;
                goto L_1024a035;
            }
            eax = t8;
            ecx = t9;
            edx = t10;
            ebx = t5;
            ebp = t8;
            loc_48 = t8;
    COW_AT(10249ec1)
            if (ebp == 0u) goto L_1024a035;
            esi = 0u;
L_10249ec9: ;
    COW_AT(10249ec9)
            wr32(sp0 - 0x64u, 0x104u);
            g->eax = eax;
            g->esp = sp0 - 0x58u;
            t11 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x104u, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu));
            t12 = g->ecx;
            t13 = g->edx;
            wr32(esi * 4u + sp0 - 0x40u, t11);
            if ((int32_t)(esi + 1u) < 16)
            {
                eax = t11;
                ecx = t12;
                edx = t13;
                esi = esi + 1u;
                loc_48 = rd32(sp0 - 0x48u);
                goto L_10249ec9;
            }
            eax = t11;
            ecx = t12;
            edx = t13;
    COW_AT(10249ee0)
            ebp = 0u;
            loc_4c = rd32(sp0 - 0x4cu);
L_10249ee2: ;
    COW_AT(10249ee2)
            if (rd32(ebp * 4u + sp0 - 0x40u) == 0u)
            {
                esi = rd32(ebp * 4u + sp0 - 0x40u);
            }
            else
            {
                esi = rd32(ebp * 4u + sp0 - 0x40u);
    COW_AT(10249eea)
                if (rd32(loc_4c) != 0u)
                {
                    eax = loc_4c;
    COW_AT(10249f1b)
                    wr32(sp0 - 0x64u, arg1);
                    wr32(sp0 - 0x68u, edi);
                    wr32(sp0 - 0x6cu, COW_IMG(0x10388c94u));
                    wr32(sp0 - 0x70u, esi);
                    g->ebx = ebx;
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = arg1;
                    g->esp = sp0 - 0x5cu;
                    t20 = cow_cdecl(g, COW_IMG(0x10312031u), 5, esi, COW_IMG(0x10388c94u), edi, arg1, rd32(sp0 - 0x60u));
                    t21 = g->ecx;
                    t22 = g->edx;
                    eax = t20;
                    ecx = t21;
                    edx = t22;
                    loc_4c = rd32(sp0 - 0x4cu);
                }
                else
                {
    COW_AT(10249ef3)
                    q14 = (int64_t)cow_muls(0x10624dd3u, arg1);
                    wr32(sp0 - 0x64u, arg1);
                    t15 = (uint32_t)((int32_t)cow_qhi(q14) >> 6u);
                    t16 = t15 + (t15 >> 0x1fu);
                    wr32(sp0 - 0x68u, t16);
                    wr32(sp0 - 0x6cu, edi);
                    wr32(sp0 - 0x70u, COW_IMG(0x10388ca4u));
                    wr32(sp0 - 0x74u, esi);
                    g->ebx = ebx;
                    g->eax = (uint32_t)(q14);
                    g->ecx = t15 >> 0x1fu;
                    g->edx = t16;
                    g->esp = sp0 - 0x60u;
                    t17 = cow_cdecl(g, COW_IMG(0x10312031u), 5, esi, COW_IMG(0x10388ca4u), edi, t16, arg1);
                    t18 = g->ecx;
                    t19 = g->edx;
                    eax = t17;
                    ecx = t18;
                    edx = t19;
                    loc_4c = rd32(sp0 - 0x4cu);
                }
            }
    COW_AT(10249f2f)
            wr32(sp0 - 0x64u, COW_IMG(0x1034f2d0u));
            wr32(sp0 - 0x68u, esi);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x54u;
            t23 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, esi, COW_IMG(0x1034f2d0u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
            t24 = g->ecx;
            t25 = g->edx;
            if (t23 != 0u)
            {
                ecx = t24;
                ebx = t23;
                goto L_10249f5f;
            }
            eax = t23;
            ecx = t24;
            edx = t25;
            ebx = t23;
    COW_AT(10249f43)
            t26 = rd32(sp0 - 0x4cu) + 0x108u;
            wr32(sp0 - 0x4cu, t26);
            if ((int32_t)(ebp + 1u) < 16)
            {
                ebp = ebp + 1u;
                edi = edi + 0x108u;
                loc_4c = t26;
                goto L_10249ee2;
            }
    COW_AT(10249f5d)
L_10249f73: ;
    COW_AT(10249f73)
            esi = 0u;
L_10249f75: ;
    COW_AT(10249f75)
            if (rd32(esi * 4u + sp0 - 0x40u) == 0u)
            {
                eax = rd32(esi * 4u + sp0 - 0x40u);
            }
            else
            {
                eax = rd32(esi * 4u + sp0 - 0x40u);
    COW_AT(10249f7d)
                wr32(sp0 - 0x64u, eax);
                g->eax = eax;
                g->esp = sp0 - 0x60u;
                t28 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
                t29 = g->ecx;
                t30 = g->edx;
                eax = t28;
                ecx = t29;
                edx = t30;
            }
    COW_AT(10249f86)
            if ((int32_t)(esi + 1u) < 16)
            {
                esi = esi + 1u;
                goto L_10249f75;
            }
    COW_AT(10249f8c)
            if (ebx == 0u)
            {
                ebp = rd32(sp0 - 0x48u);
                goto L_1024a027;
            }
            ebp = rd32(sp0 - 0x48u);
    COW_AT(10249f98)
            wr32(sp0 - 0x64u, ebx);
            wr32(sp0 - 0x68u, 0x30u);
            wr32(sp0 - 0x6cu, 1u);
            wr32(sp0 - 0x70u, ebp);
            g->esp = sp0 - 0x58u;
            cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, ebp, 1u, 0x30u, ebx, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu));
            t31 = g->edx;
            esi = ebp;
            edi = COW_IMG(0x10388c8cu);
            ecx = 7u;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
            if (!zf)
            {
                eax = 0u;
                edx = t31;
                goto L_1024a008;
            }
            edx = t31;
    COW_AT(10249fb8)
            t32 = (rd32(ebp + 8u) + 3u) >> 2u << 2u;
            wr32(sp0 - 0x64u, t32);
            g->eax = 0u;
            g->esp = sp0 - 0x58u;
            t33 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t32, edx, 1, 3, t32, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu));
            t34 = g->ecx;
            t35 = g->edx;
            t36 = rd32(sp0 - 0x50u);
            wr32(t36, t33);
            if (t33 == 0u)
            {
                eax = t33;
                ecx = t34;
                edx = t35;
                goto L_1024a008;
            }
            eax = t33;
            ecx = t34;
            edx = t35;
            esi = t36;
    COW_AT(10249fd7)
            wr32(sp0 - 0x64u, 0u);
            wr32(sp0 - 0x68u, 0u);
            wr32(sp0 - 0x6cu, ebx);
            g->ecx = ecx;
            g->esp = sp0 - 0x60u;
            cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, ebx, 0u, 0u);
            t37 = g->ecx;
            wr32(sp0 - 0x70u, ebx);
            t38 = rd32(ebp + 8u);
            wr32(sp0 - 0x74u, t38);
            wr32(sp0 - 0x78u, 1u);
            wr32(sp0 - 0x7cu, rd32(esi));
            g->eax = rd32(esi);
            g->ecx = t37;
            t39 = rd32(esi);
            g->esp = sp0 - 0x64u;
            t40 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, t38, 1, 6, t39, 1u, t38, ebx, rd32(sp0 - 0x6cu), 0u);
            t41 = g->ecx;
            t42 = g->edx;
            g->edx = t42;
            g->esp = sp0 - 0x60u;
            t43 = cow_stdcall(g, COW_IMG(0x10249c80u), 0);
            t44 = g->edx;
            wr32(esi + 8u, 1u);
            wr32(esi + 4u, arg1);
            eax = t43;
            ecx = arg1;
            edx = t44;
L_1024a014: ;
    COW_AT(1024a014)
            wr32(sp0 - 0x64u, ebx);
            g->edi = edi;
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x58u;
            t45 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, ebx, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu));
            t46 = g->ecx;
            t47 = g->edx;
            eax = t45;
            ecx = t46;
            edx = t47;
            ebx = rd32(sp0 - 0x44u);
            ebp = rd32(sp0 - 0x48u);
L_1024a03d: ;
    COW_AT(1024a03d)
            if (ebx != 0u)
            {
    COW_AT(1024a041)
                wr32(sp0 - 0x64u, ebx);
                g->eax = eax;
                g->esp = sp0 - 0x60u;
                t48 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebx);
                t49 = g->ecx;
                t50 = g->edx;
                eax = t48;
                ecx = t49;
                edx = t50;
            }
    COW_AT(1024a04a)
            if (ebp != 0u)
            {
    COW_AT(1024a04e)
                wr32(sp0 - 0x64u, ebp);
                g->esp = sp0 - 0x60u;
                cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebp);
            }
    COW_AT(1024a057)
            eax = esi;
            loc_54 = rd32(sp0 - 0x54u);
            loc_58 = rd32(sp0 - 0x58u);
            loc_5c = rd32(sp0 - 0x5cu);
            loc_60 = rd32(sp0 - 0x60u);
        }
    }
    COW_AT(1024a059)
    g->ebx = loc_54;
    g->esi = loc_5c;
    g->edi = loc_60;
    g->ebp = loc_58;
    return eax;
L_10249f5f: ;
    COW_AT(10249f5f)
    eax = rd32(ebp * 4u + sp0 - 0x40u);
    edx = rd32(sp0 - 0x44u) - rd32(ebp * 4u + sp0 - 0x40u);
L_10249f69: ;
    COW_AT(10249f69)
    t27 = rd8(eax);
    wr8(eax + edx, (uint8_t)t27);
    if ((uint8_t)t27 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t27;
        goto L_10249f69;
    }
    ecx = (ecx & 0xffffff00u) | t27;
    goto L_10249f73;
L_1024a008: ;
    COW_AT(1024a008)
    wr32(sp0 - 0x50u, 0u);
    esi = 0u;
    goto L_1024a014;
L_1024a027: ;
    COW_AT(1024a027)
    wr32(sp0 - 0x50u, 0u);
    ebx = rd32(sp0 - 0x44u);
L_1024a039: ;
    COW_AT(1024a039)
    esi = 0u;
    goto L_1024a03d;
L_1024a035: ;
    COW_AT(1024a035)
    wr32(sp0 - 0x50u, 0u);
    goto L_1024a039;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10249e20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10249e56u:
    {
        unsigned af;
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
        uint32_t loc_4c;
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
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10249e66u:
    {
        unsigned af;
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
        uint32_t loc_4c;
        uint32_t loc_50;
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
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10249e6cu:
    {
        unsigned af;
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
        uint32_t loc_4c;
        uint32_t loc_50;
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
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10249e70u:
    {
        unsigned af;
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
        uint32_t loc_4c;
        uint32_t loc_50;
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
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10249e7au:
    {
        unsigned af;
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
        uint32_t loc_4c;
        uint32_t loc_50;
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
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10249e7eu:
    {
        unsigned af;
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
        uint32_t loc_4c;
        uint32_t loc_50;
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
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10249e88u:
    {
        unsigned af;
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
        uint32_t loc_4c;
        uint32_t loc_50;
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
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10249e91u:
    {
        unsigned af;
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
        uint32_t loc_4c;
        uint32_t loc_50;
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
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10249e99u:
    {
        unsigned af;
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
        uint32_t loc_4c;
        uint32_t loc_50;
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
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10249ec1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_48;
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
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10249ec9u:
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
        uint32_t loc_48;
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
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249ee0u:
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
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249ee2u:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249eeau:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249ef3u:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249f1bu:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249f2fu:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249f43u:
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
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249f5du:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249f5fu:
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
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249f69u:
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
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249f73u:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249f75u:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249f7du:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249f86u:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249f8cu:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249f98u:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10249fb8u:
    {
        unsigned af;
        unsigned cf;
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
        g->esp = sp0 - 0x60u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10249fd7u:
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
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1024a008u:
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
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1024a014u:
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
        uint32_t loc_50;
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
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1024a027u:
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
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1024a035u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_48;
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
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024a039u:
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
        uint32_t loc_48;
        uint32_t loc_4c;
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
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x50u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024a03du:
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
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
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
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1024a041u:
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
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
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
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1024a04au:
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
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
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
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1024a04eu:
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
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
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
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1024a057u:
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
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
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
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1024a059u:
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
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
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
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10249e20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10249e20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
