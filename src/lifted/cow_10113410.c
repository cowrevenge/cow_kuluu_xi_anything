/* f_0x10113410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10113410(Guest* g)
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
    uint32_t loc_208;
    uint32_t loc_218;
    uint32_t loc_21c;
    uint32_t loc_220;
    uint32_t loc_224;
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
    uint32_t t60;
    uint32_t t61;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 576u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10113428u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x224u); in_esi = rd32(sp0 - 0x220u); in_ebp = rd32(sp0 - 0x21cu); in_ebx = rd32(sp0 - 0x218u); g->ebp = rd32(sp0 - 0x21cu); g->ebx = rd32(sp0 - 0x218u); g->edi = rd32(sp0 - 0x224u); g->esi = rd32(sp0 - 0x220u); goto E_10113428;
    case 0x1011343du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x224u); in_esi = rd32(sp0 - 0x220u); in_ebp = rd32(sp0 - 0x21cu); in_ebx = rd32(sp0 - 0x218u); g->ebp = rd32(sp0 - 0x21cu); g->ebx = rd32(sp0 - 0x218u); g->edi = rd32(sp0 - 0x224u); g->esi = rd32(sp0 - 0x220u); goto E_1011343d;
    case 0x10113453u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x224u); in_esi = rd32(sp0 - 0x220u); in_ebp = rd32(sp0 - 0x21cu); in_ebx = rd32(sp0 - 0x218u); g->ebp = rd32(sp0 - 0x21cu); g->ebx = rd32(sp0 - 0x218u); g->edi = rd32(sp0 - 0x224u); g->esi = rd32(sp0 - 0x220u); goto E_10113453;
    case 0x1011345au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x224u); in_esi = rd32(sp0 - 0x220u); in_ebp = rd32(sp0 - 0x21cu); in_ebx = rd32(sp0 - 0x218u); g->ebp = rd32(sp0 - 0x21cu); g->ebx = rd32(sp0 - 0x218u); g->edi = rd32(sp0 - 0x224u); g->esi = rd32(sp0 - 0x220u); goto E_1011345a;
    case 0x10113489u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113489;
    case 0x101134bau: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101134ba;
    case 0x101134c4u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101134c4;
    case 0x101134ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101134cc;
    case 0x101134f9u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101134f9;
    case 0x10113506u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113506;
    case 0x1011351au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1011351a;
    case 0x10113533u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113533;
    case 0x10113547u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113547;
    case 0x10113555u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113555;
    case 0x1011356au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1011356a;
    case 0x1011358du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_1011358d;
    case 0x101135a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101135a8;
    case 0x101135adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101135ad;
    case 0x101135bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101135bf;
    case 0x101135d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101135d0;
    case 0x101135e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101135e6;
    case 0x101135efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101135ef;
    case 0x101135f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101135f7;
    case 0x10113626u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_10113626;
    case 0x10113632u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_10113632;
    case 0x1011363au: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_1011363a;
    case 0x10113648u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_10113648;
    case 0x10113652u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113652;
    case 0x1011365au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1011365a;
    case 0x10113663u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113663;
    case 0x1011366bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1011366b;
    case 0x1011367fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1011367f;
    case 0x1011368cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1011368c;
    case 0x10113698u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113698;
    case 0x101136b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101136b6;
    case 0x101136c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101136c6;
    case 0x101136ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101136dd;
    case 0x101136e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101136e7;
    case 0x101136ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101136ec;
    case 0x101136f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101136f4;
    case 0x10113712u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_10113712;
    case 0x10113716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_10113716;
    case 0x10113734u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_10113734;
    case 0x1011373bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_1011373b;
    case 0x10113742u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_10113742;
    case 0x10113750u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_10113750;
    case 0x1011375eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_1011375e;
    case 0x10113763u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_10113763;
    case 0x10113765u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_10113765;
    case 0x10113774u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113774;
    case 0x10113779u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113779;
    case 0x1011377bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_1011377b;
    case 0x101137a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101137a8;
    case 0x101137b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101137b1;
    case 0x101137b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101137b6;
    case 0x101137bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101137bf;
    case 0x101137c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101137c4;
    case 0x101137ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101137cc;
    case 0x101137dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101137db;
    case 0x101137e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101137e9;
    case 0x10113807u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113807;
    case 0x10113819u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113819;
    case 0x1011382eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1011382e;
    case 0x1011383bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1011383b;
    case 0x10113859u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113859;
    case 0x10113865u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113865;
    case 0x1011387bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_1011387b;
    case 0x1011389au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_1011389a;
    case 0x101138a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101138a5;
    case 0x101138a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101138a7;
    case 0x101138acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101138ac;
    case 0x101138e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101138e1;
    case 0x10113906u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_10113906;
    case 0x1011390au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_1011390a;
    case 0x10113926u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10113926;
    case 0x10113929u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_224 = rd32(sp0 - 0x224u); loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_218 = rd32(sp0 - 0x218u); loc_208 = rd32(sp0 - 0x208u); goto E_10113929;
    default: break;
    }
#endif

    COW_AT(10113410)
    wr32(sp0 - 0x218u, in_ebx);
    wr32(sp0 - 0x21cu, in_ebp);
    wr32(sp0 - 0x220u, in_esi);
    wr32(sp0 - 0x224u, in_edi);
    wr32(sp0 - 0x228u, 1u);
    wr32(sp0 - 0x22cu, 1u);
    wr32(sp0 - 0x230u, 0xd3u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x224u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xd3u, 1u, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10113428)
    wr32(sp0 - 0x208u, 2u);
    if (eax == 0u)
    {
        loc_218 = in_ebx;
        loc_21c = in_ebp;
        loc_220 = in_esi;
        loc_224 = in_edi;
    }
    else
    {
        ebp = eax;
    COW_AT(1011343d)
        wr32(sp0 - 0x214u, 0u);
        t4 = rd8(COW_IMG(0x104e1b64u));
        wr8(COW_IMG(0x104e1b64u), (uint8_t)(t4 + 1u));
        if ((uint8_t)(t4 + 1u) == 0u)
        {
    COW_AT(10113453)
            wr8(COW_IMG(0x104e1b64u), 1u);
        }
    COW_AT(1011345a)
        wr16(sp0 - 0x214u, (uint32_t)rd8(COW_IMG(0x104e1b64u)) << 8u ^ (arg2 & 0xfu));
        wr32(sp0 - 0x228u, ebp + 8u);
        wr32(sp0 - 0x22cu, ebp);
        g->eax = ebp + 8u;
        g->ecx = 0u;
        g->edx = arg2 & 0xfu;
        g->esp = sp0 - 0x224u;
        t5 = cow_cdecl(g, COW_IMG(0x10113940u), 2, ebp, ebp + 8u);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    COW_AT(10113489)
        t8 = rd32(sp0 - 0x212u);
        t9 = rd8(sp0 - 0x212u);
        wr16(sp0 - 0x212u, (uint16_t)((t8 & 0xff00u) + 0x100u ^ t9));
        if (arg1 == 0u)
        {
            ebx = eax;
            esi = (t8 & 0xff00u) + 0x100u ^ t9;
        }
        else
        {
            ebx = eax;
            esi = (t8 & 0xff00u) + 0x100u ^ t9;
    COW_AT(101134ba)
            if (rd32(arg1 + 0x8f0u) != 0u)
            {
                eax = rd32(arg1 + 0x8f0u);
    COW_AT(101134c4)
                wr32(sp0 - 0x228u, ebx);
                wr32(sp0 - 0x22cu, ebp);
                wr32(sp0 - 0x230u, arg1);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x224u;
                t10 = cow_cdecl(g, COW_IMG(0x101139c0u), 3, arg1, ebp, ebx);
                t11 = g->edx;
                eax = t10;
                edx = t11;
    COW_AT(101134cc)
                t12 = rd8(sp0 - 0x212u);
                t13 = rd32(sp0 - 0x212u);
                wr16(sp0 - 0x212u, (uint16_t)((t13 & 0xff00u) + 0x100u ^ t12));
                edx = t12;
                ebx = eax;
                esi = (t13 & 0xff00u) + 0x100u ^ t12;
            }
        }
    COW_AT(101134f9)
        if (rd32(COW_IMG(0x104e1708u)) == 0u)
        {
            eax = rd32(COW_IMG(0x104e1708u));
            loc_208 = rd32(sp0 - 0x208u);
        }
        else
        {
            eax = rd32(COW_IMG(0x104e1708u));
    COW_AT(10113506)
            t14 = rd8(eax + 0x62u) - rd8(eax + 0x60u) & 7u;
            if ((uint16_t)t14 == 0u)
            {
                edx = t14;
                loc_208 = rd32(sp0 - 0x208u);
            }
            else
            {
                edi = t14;
    COW_AT(1011351a)
                if (ebx + (uint16_t)edi * 8u - ebp + 4u < 0x104u)
                {
                    loc_208 = rd32(sp0 - 0x208u);
                    goto L_1011358d;
                }
                edx = ebx + (uint16_t)edi * 8u - ebp + 4u;
    COW_AT(10113533)
                wr32(sp0 - 0x228u, 0u);
                wr32(sp0 - 0x22cu, ebx - ebp);
                wr32(sp0 - 0x230u, ebp);
                t15 = rd32(sp0 - 0x214u);
                wr32(ebp + 4u, t15);
                g->eax = t15;
                g->ecx = ebx - ebp;
                g->edx = edx;
                g->esp = sp0 - 0x224u;
                t16 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u));
                t17 = g->ecx;
                t18 = g->edx;
                eax = t16;
                ecx = t17;
                edx = t18;
    COW_AT(10113547)
                wr32(sp0 - 0x234u, 2u);
                wr32(sp0 - 0x238u, 2u);
                wr32(sp0 - 0x23cu, 0xd3u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x230u;
                t19 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xd3u, 2u, 2u);
                t20 = g->edx;
                eax = t19;
                edx = t20;
    COW_AT(10113555)
                wr32(sp0 - 0x208u, 3u);
                if (eax == 0u)
                {
                    ebp = eax;
                    loc_208 = 3u;
                    goto L_10113626;
                }
                ebp = eax;
    COW_AT(1011356a)
                t21 = rd32(COW_IMG(0x104e1708u));
                wr16(sp0 - 0x212u, ((rd32(sp0 - 0x212u) + 1u ^ rd8(sp0 - 0x212u)) & 0x7fu) ^ rd8(sp0 - 0x212u));
                eax = t21;
                ebx = ebp + 8u;
                loc_208 = 3u;
L_1011358d: ;
    COW_AT(1011358d)
                wr32(sp0 - 0x20cu, 0u);
                wr8(sp0 - 0x20cu, 2u);
                ecx = 6u - ebp;
                edx = ebx;
                ebx = ebx + 4u;
L_101135ad: ;
    COW_AT(101135ad)
                if (ebx + ecx + 2u >= 0x104u) goto L_101135f7;
                esi = ebx + ecx + 2u;
                edi = edi + 0xffffu;
    COW_AT(101135bf)
                if (eax + (edi + ((esi & 0xffff0000u) | rd16(eax + 0x60u)) & 7u) * 8u + 0x20u == 0u)
                {
    COW_AT(101135e6)
                    wr32(ebx, 0u);
                    wr32(ebx + 4u, 0u);
                }
                else
                {
                    t22 = eax;
                    eax = t22 + (edi + ((esi & 0xffff0000u) | rd16(t22 + 0x60u)) & 7u) * 8u + 0x20u;
                    esi = edi + ((esi & 0xffff0000u) | rd16(t22 + 0x60u)) & 7u;
    COW_AT(101135d0)
                    t23 = rd16(eax);
                    wr16(ebx, (uint16_t)t23);
                    wr16(ebx + 2u, rd16(eax + 2u));
                    t24 = rd32(eax + 4u);
                    wr32(ebx + 4u, t24);
                }
    COW_AT(101135ef)
                if ((uint16_t)edi != 0u)
                {
                    ebx = ebx + 8u;
                    goto L_101135a8;
                }
                ebx = ebx + 8u;
                loc_208 = rd32(sp0 - 0x208u);
L_101135f7: ;
    COW_AT(101135f7)
                t25 = rd32(sp0 - 0x212u);
                wr8(sp0 - 0x20bu, (uint8_t)((uint8_t)ebx - (uint8_t)edx));
                t26 = rd32(sp0 - 0x20cu);
                t27 = rd8(sp0 - 0x212u);
                wr32(edx, t26);
                wr16(sp0 - 0x212u, (uint16_t)((t25 & 0xff00u) + 0x100u ^ t27));
                esi = (t25 & 0xff00u) + 0x100u ^ t27;
                loc_208 = rd32(sp0 - 0x208u);
L_10113626: ;
    COW_AT(10113626)
                eax = rd32(COW_IMG(0x104e1708u));
            }
        }
    COW_AT(10113632)
        if (arg1 != 0u)
        {
    COW_AT(1011363a)
            if (rd32(arg1 + 0x8f0u) != 0u)
            {
                ecx = rd32(arg1 + 0x8f0u);
    COW_AT(10113648)
                wr32(sp0 - 0x228u, ecx);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x224u;
                t28 = cow_thiscall(g, COW_IMG(0x1010f600u), sp0 - 0x204u, 1, ecx);
                t29 = g->edx;
                eax = t28;
                edx = t29;
    COW_AT(10113652)
                if (ebp == 0u)
                {
                    loc_208 = rd32(sp0 - 0x208u);
                    goto L_101137b6;
                }
L_1011365a: ;
    COW_AT(1011365a)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x224u;
                t30 = cow_thiscall(g, COW_IMG(0x1010f680u), sp0 - 0x204u, 0);
                t31 = g->ecx;
                t32 = g->edx;
                eax = t30;
                ecx = t31;
                edx = t32;
    COW_AT(10113663)
                if ((uint8_t)eax != 0u)
                {
                    loc_208 = rd32(sp0 - 0x208u);
                    goto L_101137b6;
                }
    COW_AT(1011366b)
                wr32(sp0 - 0x228u, 0xf4u);
                wr32(sp0 - 0x22cu, sp0 - 0x1e0u);
                wr32(sp0 - 0x230u, sp0 - 0x204u);
                g->eax = sp0 - 0x204u;
                g->ecx = ecx;
                g->edx = sp0 - 0x1e0u;
                g->esp = sp0 - 0x224u;
                t33 = cow_cdecl(g, COW_IMG(0x10113a70u), 3, sp0 - 0x204u, sp0 - 0x1e0u, 0xf4u);
                t34 = g->ecx;
                t35 = g->edx;
                eax = t33;
                ecx = t34;
                edx = t35;
    COW_AT(1011367f)
                if ((uint16_t)eax < 2u) goto L_101137a8;
    COW_AT(1011368c)
                if ((rd32(sp0 - 0x212u) & 0xff00u) == 0u)
                {
                    edi = rd32(sp0 - 0x212u);
                    loc_208 = rd32(sp0 - 0x208u);
                    goto L_10113716;
                }
    COW_AT(10113698)
                edi = sp0 - 0x1e0u;
                eax = 0u;
                ecx = 0xffffffffu;
                cf = ebx < ebp;
                pf = PARITY((uint8_t)(ebx - ebp));
                af = (ebx ^ ebp ^ ebx - ebp) >> 4u & 1u;
                zf = ebx == ebp;
                sf = (int32_t)(ebx - ebp) < 0;
                of = ((ebx ^ ebp) & (ebx ^ ebx - ebp)) >> 0x1fu;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                if (ebx + ~ecx - ebp + 7u <= 0x104u)
                {
                    edx = ebx - ebp;
                    loc_208 = rd32(sp0 - 0x208u);
                    goto L_10113712;
                }
                ecx = ebx + ~ecx - ebp + 7u;
                edx = ebx - ebp;
    COW_AT(101136b6)
                wr32(sp0 - 0x228u, 0u);
                wr32(sp0 - 0x22cu, edx);
                wr32(sp0 - 0x230u, ebp);
                t36 = rd32(sp0 - 0x214u);
                wr32(ebp + 4u, t36);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x224u;
                cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u));
                t37 = g->ecx;
                t38 = g->edx;
                ecx = t37;
                edx = t38;
    COW_AT(101136c6)
                t39 = rd32(sp0 - 0x208u);
                wr32(sp0 - 0x234u, (uint16_t)t39);
                wr32(sp0 - 0x238u, (uint16_t)t39);
                wr32(sp0 - 0x23cu, 0xd3u);
                g->eax = (uint16_t)t39;
                g->edx = edx;
                g->esp = sp0 - 0x230u;
                t40 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xd3u, (uint16_t)t39, (uint16_t)t39);
                t41 = g->edx;
                eax = t40;
                edx = t41;
                edi = t39;
    COW_AT(101136dd)
                if ((uint16_t)edi == 0u)
                {
                    ebp = eax;
                    loc_208 = rd32(sp0 - 0x208u);
                }
                else
                {
                    ebp = eax;
    COW_AT(101136e7)
                    wr32(sp0 - 0x208u, edi + 1u);
                    loc_208 = edi + 1u;
                }
    COW_AT(101136ec)
                if (ebp == 0u) goto L_101137b6;
    COW_AT(101136f4)
                t42 = rd8(sp0 - 0x212u);
                wr16(sp0 - 0x212u, (uint16_t)(((rd32(sp0 - 0x212u) + 1u ^ t42) & 0x7fu) ^ t42));
                eax = (eax & 0xffffff00u) | t42;
                ebx = ebp + 8u;
L_10113712: ;
    COW_AT(10113712)
                edi = rd32(sp0 - 0x212u);
L_10113716: ;
    COW_AT(10113716)
                wr32(sp0 - 0x20cu, 0u);
                t43 = rd8(sp0 - 0x1e0u);
                wr8(sp0 - 0x20cu, 3u);
                if ((uint8_t)t43 == 0u)
                {
                    ecx = ebx;
                    ebx = ebx + 4u;
                    esi = sp0 - 0x1e0u;
                }
                else
                {
                    ecx = ebx;
                    ebx = ebx + 4u;
    COW_AT(10113734)
                    eax = ebx - ebp + 4u;
                    esi = sp0 - 0x1e0u;
L_1011373b: ;
    COW_AT(1011373b)
                    if (eax >= 0x104u) goto L_10113750;
    COW_AT(10113742)
                    t44 = rd8(esi);
                    wr8(ebx, (uint8_t)t44);
                    if (rd8(esi + 1u) != 0u)
                    {
                        eax = eax + 1u;
                        edx = ((edx | t44) & 0xffffff00u) | rd8(esi + 1u);
                        ebx = ebx + 1u;
                        esi = esi + 1u;
                        loc_208 = rd32(sp0 - 0x208u);
                        goto L_1011373b;
                    }
                    ebx = ebx + 1u;
                    esi = esi + 1u;
                    loc_208 = rd32(sp0 - 0x208u);
                }
L_10113750: ;
    COW_AT(10113750)
                if ((int32_t)(ebx - ecx & 0x80000003u) >= 0)
                {
                    eax = ebx - ecx;
                    zf = (ebx - ecx & 0x80000003u) == 0u;
                }
                else
                {
                    eax = ebx - ecx;
                    edx = ebx - ecx & 0x80000003u;
    COW_AT(1011375e)
                    zf = (edx - 1u | 0xfffffffcu) + 1u == 0u;
                }
    COW_AT(10113763)
                if (zf) goto L_1011377b;
L_10113765: ;
    COW_AT(10113765)
                wr8(ebx, 0u);
                if ((int32_t)(eax + 1u & 0x80000003u) >= 0)
                {
                    ebx = ebx + 1u;
                    zf = (eax + 1u & 0x80000003u) == 0u;
                    eax = eax + 1u;
                }
                else
                {
                    edx = eax + 1u & 0x80000003u;
                    eax = eax + 1u;
                    ebx = ebx + 1u;
    COW_AT(10113774)
                    zf = (edx - 1u | 0xfffffffcu) + 1u == 0u;
                }
    COW_AT(10113779)
                if (!zf)
                {
                    loc_208 = rd32(sp0 - 0x208u);
                    goto L_10113765;
                }
                loc_208 = rd32(sp0 - 0x208u);
L_1011377b: ;
    COW_AT(1011377b)
                wr8(sp0 - 0x20bu, (uint8_t)((uint8_t)ebx - (uint8_t)ecx));
                t45 = rd32(sp0 - 0x20cu);
                t46 = rd8(sp0 - 0x212u);
                wr32(ecx, t45);
                wr16(sp0 - 0x212u, (uint16_t)((edi & 0xff00u) + 0x100u ^ t46));
                eax = t46;
                edx = t45;
                esi = (esi & 0xffff0000u) | (uint16_t)((edi & 0xff00u) + 0x100u ^ t46);
L_101137a8: ;
    COW_AT(101137a8)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x224u;
                t47 = cow_thiscall(g, COW_IMG(0x1010f7a0u), sp0 - 0x204u, 0);
                t48 = g->edx;
                eax = t47;
                edx = t48;
    COW_AT(101137b1)
                goto L_1011365a;
            }
        }
L_101137c4: ;
    COW_AT(101137c4)
        if (eax == 0u) goto L_10113906;
    COW_AT(101137cc)
        wr32(sp0 - 0x228u, 8u);
        wr32(sp0 - 0x22cu, sp0 - 0xe0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x224u;
        t50 = cow_cdecl(g, COW_IMG(0x10114b40u), 2, sp0 - 0xe0u, 8u);
        t51 = g->edx;
        eax = t50;
        edx = t51;
    COW_AT(101137db)
        if ((uint16_t)eax == 0u) goto L_10113906;
        edi = eax;
    COW_AT(101137e9)
        if (ebx + (uint16_t)eax * 0x1cu - ebp + 4u < 0x104u) goto L_10113859;
        edx = (uint16_t)eax * 0x1cu - ebp;
        eax = ebx + (uint16_t)eax * 0x1cu - ebp + 4u;
    COW_AT(10113807)
        wr32(sp0 - 0x228u, 0u);
        wr32(sp0 - 0x22cu, ebx - ebp);
        wr32(sp0 - 0x230u, ebp);
        t52 = rd32(sp0 - 0x214u);
        wr32(ebp + 4u, t52);
        g->ecx = t52;
        g->edx = edx;
        g->esp = sp0 - 0x224u;
        cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u));
        t53 = g->ecx;
        t54 = g->edx;
        ecx = t53;
        edx = t54;
    COW_AT(10113819)
        t55 = (uint16_t)rd32(sp0 - 0x208u);
        wr32(sp0 - 0x234u, t55);
        wr32(sp0 - 0x238u, t55);
        wr32(sp0 - 0x23cu, 0xd3u);
        g->eax = t55;
        g->esp = sp0 - 0x230u;
        t56 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xd3u, t55, t55);
        eax = t56;
    COW_AT(1011382e)
        if (eax == 0u)
        {
            loc_218 = rd32(sp0 - 0x218u);
            loc_21c = rd32(sp0 - 0x21cu);
            loc_220 = rd32(sp0 - 0x220u);
            loc_224 = rd32(sp0 - 0x224u);
            goto L_10113929;
        }
        ebp = eax;
    COW_AT(1011383b)
        wr16(sp0 - 0x212u, ((rd32(sp0 - 0x212u) + 1u ^ rd8(sp0 - 0x212u)) & 0x7fu) ^ rd8(sp0 - 0x212u));
        ebx = ebp + 8u;
L_10113859: ;
    COW_AT(10113859)
        if (ebp == 0u)
        {
            loc_218 = rd32(sp0 - 0x218u);
            loc_21c = rd32(sp0 - 0x21cu);
            loc_220 = rd32(sp0 - 0x220u);
            loc_224 = rd32(sp0 - 0x224u);
            goto L_10113929;
        }
        esi = rd32(sp0 - 0x212u);
    COW_AT(10113865)
        wr32(sp0 - 0x20cu, 0u);
        wr8(sp0 - 0x20cu, 4u);
        wr32(sp0 - 0x208u, ebx);
        ecx = ebx;
        loc_208 = ebx;
        ebx = ebx + 4u;
L_1011387b: ;
    COW_AT(1011387b)
        if (ebx + (uint16_t)edi * 0x1cu - ebp < 0x104u)
        {
            eax = (uint16_t)edi;
            goto L_101138a7;
        }
        eax = (uint16_t)edi;
    COW_AT(1011389a)
        if ((uint16_t)(edi + 0xffffu) != 0u)
        {
            edi = edi + 0xffffu;
            goto L_1011387b;
        }
    COW_AT(101138a5)
L_101138e1: ;
    COW_AT(101138e1)
        wr8(sp0 - 0x20bu, (uint8_t)((uint8_t)ebx - (uint8_t)ecx));
        t59 = rd32(sp0 - 0x20cu);
        t60 = rd8(sp0 - 0x212u);
        wr32(ecx, t59);
        eax = t60;
        edx = t59;
        esi = (esi & 0xff00u) + 0x100u ^ t60;
L_10113906: ;
    COW_AT(10113906)
        if (ebp == 0u)
        {
            loc_218 = rd32(sp0 - 0x218u);
            loc_21c = rd32(sp0 - 0x21cu);
            loc_220 = rd32(sp0 - 0x220u);
            loc_224 = rd32(sp0 - 0x224u);
        }
        else
        {
    COW_AT(1011390a)
            wr16(sp0 - 0x212u, (uint16_t)(esi | 0x80u));
            wr32(sp0 - 0x228u, 0u);
            wr32(sp0 - 0x22cu, ebx - ebp);
            wr32(sp0 - 0x230u, ebp);
            t61 = rd32(sp0 - 0x214u);
            wr32(ebp + 4u, t61);
            g->esp = sp0 - 0x224u;
            cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u));
    COW_AT(10113926)
            loc_218 = rd32(sp0 - 0x218u);
            loc_21c = rd32(sp0 - 0x21cu);
            loc_220 = rd32(sp0 - 0x220u);
            loc_224 = rd32(sp0 - 0x224u);
        }
    }
L_10113929: ;
    COW_AT(10113929)
    g->ebx = loc_218;
    g->esi = loc_220;
    g->edi = loc_224;
    g->ebp = loc_21c;
    return;
L_101135a8: ;
    COW_AT(101135a8)
    eax = rd32(COW_IMG(0x104e1708u));
    loc_208 = rd32(sp0 - 0x208u);
    goto L_101135ad;
L_101137b6: ;
    COW_AT(101137b6)
    g->edx = edx;
    g->esp = sp0 - 0x224u;
    cow_thiscall(g, COW_IMG(0x1010f5f0u), sp0 - 0x204u, 0);
    t49 = g->edx;
    edx = t49;
    COW_AT(101137bf)
    eax = rd32(COW_IMG(0x104e1708u));
    loc_208 = rd32(sp0 - 0x208u);
    goto L_101137c4;
L_101138a7: ;
    COW_AT(101138a7)
    if ((uint16_t)edi != 0u)
    {
    COW_AT(101138ac)
        t57 = (uint16_t)edi * 0x1cu;
        t58 = edi;
        esi = sp0 - 0xe0u;
        edi = ebx;
        ecx = t57 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t57 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        eax = t57;
        ecx = rd32(sp0 - 0x208u);
        ebx = ebx + t57;
        esi = rd32(sp0 - 0x212u);
    }
    goto L_101138e1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10113410(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10113428u:
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
        in_edi = rd32(sp0 - 0x224u);
        in_esi = rd32(sp0 - 0x220u);
        in_ebp = rd32(sp0 - 0x21cu);
        in_ebx = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x230u;
        (void)sp0;
        return 1;
    }
    case 0x1011343du:
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
        in_edi = rd32(sp0 - 0x224u);
        in_esi = rd32(sp0 - 0x220u);
        in_ebp = rd32(sp0 - 0x21cu);
        in_ebx = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x224u;
        wr32(sp0 - 0x208u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x10113453u:
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
        in_edi = rd32(sp0 - 0x224u);
        in_esi = rd32(sp0 - 0x220u);
        in_ebp = rd32(sp0 - 0x21cu);
        in_ebx = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x224u;
        wr32(sp0 - 0x214u, 0u);
        wr32(sp0 - 0x208u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x1011345au:
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
        in_edi = rd32(sp0 - 0x224u);
        in_esi = rd32(sp0 - 0x220u);
        in_ebp = rd32(sp0 - 0x21cu);
        in_ebx = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x224u;
        wr32(sp0 - 0x214u, 0u);
        wr32(sp0 - 0x208u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x10113489u:
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
        g->esp = sp0 - 0x22cu;
        (void)sp0;
        return 1;
    }
    case 0x101134bau:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
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
        g->esp = sp0 - 0x224u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101134c4u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
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
        g->esp = sp0 - 0x224u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101134ccu:
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
        g->esp = sp0 - 0x230u;
        (void)sp0;
        return 1;
    }
    case 0x101134f9u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
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
        g->esp = sp0 - 0x224u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10113506u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
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
        g->esp = sp0 - 0x224u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1011351au:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113533u:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113547u:
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
        g->esp = sp0 - 0x230u;
        (void)sp0;
        return 1;
    }
    case 0x10113555u:
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
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x1011356au:
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
        g->esp = sp0 - 0x224u;
        wr32(sp0 - 0x208u, 3u);
        (void)sp0;
        return 1;
    }
    case 0x1011358du:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101135a8u:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101135adu:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101135bfu:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101135d0u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101135e6u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101135efu:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101135f7u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113626u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113632u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_208;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1011363au:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_208;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10113648u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113652u:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x1011365au:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113663u:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x1011366bu:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x1011367fu:
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
        g->esp = sp0 - 0x230u;
        wr32(sp0 - 0x230u, sp0 - 0x204u);
        wr32(sp0 - 0x22cu, sp0 - 0x1e0u);
        (void)sp0;
        return 1;
    }
    case 0x1011368cu:
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
        g->esp = sp0 - 0x224u;
        wr32(sp0 - 0x230u, sp0 - 0x204u);
        wr32(sp0 - 0x22cu, sp0 - 0x1e0u);
        (void)sp0;
        return 1;
    }
    case 0x10113698u:
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
        g->esp = sp0 - 0x224u;
        wr32(sp0 - 0x230u, sp0 - 0x204u);
        wr32(sp0 - 0x22cu, sp0 - 0x1e0u);
        (void)sp0;
        return 1;
    }
    case 0x101136b6u:
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
        g->esp = sp0 - 0x224u;
        wr32(sp0 - 0x230u, sp0 - 0x204u);
        wr32(sp0 - 0x22cu, sp0 - 0x1e0u);
        (void)sp0;
        return 1;
    }
    case 0x101136c6u:
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
        g->esp = sp0 - 0x230u;
        (void)sp0;
        return 1;
    }
    case 0x101136ddu:
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
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x101136e7u:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101136ecu:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101136f4u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113712u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113716u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113734u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        g->esi = sp0 - 0x1e0u;
        (void)sp0;
        return 1;
    }
    case 0x1011373bu:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113742u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113750u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x1011375eu:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113763u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113765u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113774u:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113779u:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x1011377bu:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101137a8u:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101137b1u:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101137b6u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101137bfu:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101137c4u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101137ccu:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101137dbu:
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
        g->esp = sp0 - 0x22cu;
        wr32(sp0 - 0x22cu, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x101137e9u:
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
        g->esp = sp0 - 0x224u;
        wr32(sp0 - 0x22cu, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x10113807u:
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
        g->esp = sp0 - 0x224u;
        wr32(sp0 - 0x22cu, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x10113819u:
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
        g->esp = sp0 - 0x230u;
        (void)sp0;
        return 1;
    }
    case 0x1011382eu:
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
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x1011383bu:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113859u:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113865u:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x1011387bu:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x1011389au:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101138a5u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101138a7u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101138acu:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101138e1u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113906u:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x1011390au:
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
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10113926u:
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
        g->esp = sp0 - 0x230u;
        (void)sp0;
        return 1;
    }
    case 0x10113929u:
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
        uint32_t loc_208;
        uint32_t loc_218;
        uint32_t loc_21c;
        uint32_t loc_220;
        uint32_t loc_224;
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
        loc_224 = rd32(sp0 - 0x224u);
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_218 = rd32(sp0 - 0x218u);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10113410(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10113410(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
