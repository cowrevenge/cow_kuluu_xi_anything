/* f_0x10190280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10190280(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_420;
    uint32_t loc_428;
    uint32_t loc_42c;
    uint32_t loc_430;
    uint32_t loc_434;
    uint32_t loc_438;
    uint32_t loc_43c;
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
    uint32_t t5;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1019029bu: eax = g->eax; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x43cu); in_esi = rd32(sp0 - 0x438u); in_ebp = rd32(sp0 - 0x434u); in_ebx = rd32(sp0 - 0x430u); g->ebp = rd32(sp0 - 0x434u); g->ebx = rd32(sp0 - 0x430u); g->edi = rd32(sp0 - 0x43cu); g->esi = rd32(sp0 - 0x438u); goto E_1019029b;
    case 0x1019029fu: eax = g->eax; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x43cu); in_esi = rd32(sp0 - 0x438u); in_ebp = rd32(sp0 - 0x434u); in_ebx = rd32(sp0 - 0x430u); g->ebp = rd32(sp0 - 0x434u); g->ebx = rd32(sp0 - 0x430u); g->edi = rd32(sp0 - 0x43cu); g->esi = rd32(sp0 - 0x438u); goto E_1019029f;
    case 0x101902a5u: eax = g->eax; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); goto E_101902a5;
    case 0x101902bcu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); goto E_101902bc;
    case 0x101902ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); goto E_101902cc;
    case 0x101902d3u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); goto E_101902d3;
    case 0x101902dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); goto E_101902dc;
    case 0x101902e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); goto E_101902e1;
    case 0x101902eau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); goto E_101902ea;
    case 0x101902efu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); goto E_101902ef;
    case 0x101902f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); goto E_101902f8;
    case 0x10190307u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); goto E_10190307;
    case 0x1019031cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); goto E_1019031c;
    case 0x1019032au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); goto E_1019032a;
    case 0x10190332u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_428 = rd32(sp0 - 0x428u); goto E_10190332;
    case 0x10190339u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_428 = rd32(sp0 - 0x428u); goto E_10190339;
    case 0x10190340u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_428 = rd32(sp0 - 0x428u); goto E_10190340;
    case 0x10190347u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_428 = rd32(sp0 - 0x428u); goto E_10190347;
    case 0x1019034du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_428 = rd32(sp0 - 0x428u); goto E_1019034d;
    case 0x10190354u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); goto E_10190354;
    case 0x10190360u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); goto E_10190360;
    case 0x10190367u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); goto E_10190367;
    case 0x1019036cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); goto E_1019036c;
    case 0x10190373u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); goto E_10190373;
    case 0x1019037au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); goto E_1019037a;
    case 0x10190380u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); goto E_10190380;
    case 0x1019038bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_1019038b;
    case 0x1019038fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_1019038f;
    case 0x1019039cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_1019039c;
    case 0x101903a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903a4;
    case 0x101903aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903aa;
    case 0x101903b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903b1;
    case 0x101903b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903b5;
    case 0x101903b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903b9;
    case 0x101903bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903bd;
    case 0x101903c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903c2;
    case 0x101903c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903c6;
    case 0x101903cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903cb;
    case 0x101903ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903cc;
    case 0x101903d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903d0;
    case 0x101903d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903d4;
    case 0x101903d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_43c = rd32(sp0 - 0x43cu); loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_420 = rd32(sp0 - 0x420u); goto E_101903d7;
    case 0x1019041fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1019041f;
    case 0x10190433u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_10190433;
    case 0x10190437u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_10190437;
    case 0x10190443u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_10190443;
    case 0x10190447u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_10190447;
    case 0x1019044du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1019044d;
    case 0x10190454u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10190454;
    case 0x1019045fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1019045f;
    case 0x1019046cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1019046c;
    case 0x1019047bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1019047b;
    case 0x10190485u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_10190485;
    case 0x10190488u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_10190488;
    case 0x1019049du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_1019049d;
    case 0x101904b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101904b4;
    case 0x101904bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_101904bc;
    case 0x101904c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_101904c6;
    case 0x101904d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_101904d1;
    case 0x101904d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101904d7;
    case 0x101904deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101904de;
    case 0x101904e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_101904e6;
    case 0x101904eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_101904ee;
    case 0x101904f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_101904f2;
    case 0x101904fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101904fa;
    case 0x10190508u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_10190508;
    case 0x1019050au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1019050a;
    case 0x10190510u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_10190510;
    case 0x1019051au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_1019051a;
    case 0x10190524u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_10190524;
    case 0x1019052fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_1019052f;
    case 0x10190535u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10190535;
    case 0x1019053cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1019053c;
    case 0x10190544u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_10190544;
    case 0x1019054cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_1019054c;
    case 0x10190550u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_10190550;
    case 0x1019055au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1019055a;
    case 0x10190560u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10190560;
    case 0x10190562u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10190562;
    case 0x10190568u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_42c = rd32(sp0 - 0x42cu); goto E_10190568;
    case 0x101905a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101905a0;
    case 0x101905aeu: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101905ae;
    case 0x101905b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101905b0;
    case 0x101905bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101905bb;
    case 0x101905c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101905c7;
    case 0x101905ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101905ce;
    case 0x101905e2u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101905e2;
    case 0x101905e8u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101905e8;
    case 0x101905f1u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101905f1;
    case 0x101905f6u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101905f6;
    case 0x101905f9u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101905f9;
    case 0x101905fbu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101905fb;
    case 0x10190609u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10190609;
    case 0x10190610u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10190610;
    case 0x10190627u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10190627;
    case 0x1019064eu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1019064e;
    default: break;
    }
#endif

    COW_AT(10190280)
    wr32(sp0 - 0x430u, in_ebx);
    wr32(sp0 - 0x434u, in_ebp);
    wr32(sp0 - 0x438u, in_esi);
    wr32(sp0 - 0x43cu, in_edi);
    if ((int32_t)rd32(arg6) < 0) goto L_1019029f;
    eax = rd32(arg6);
    COW_AT(1019029b)
    if ((int32_t)eax < (int32_t)arg2)
    {
        loc_430 = in_ebx;
        loc_434 = in_ebp;
        loc_438 = in_esi;
        loc_43c = in_edi;
        goto L_101902a5;
    }
L_1019029f: ;
    COW_AT(1019029f)
    wr32(arg6, 0u);
    loc_430 = rd32(sp0 - 0x430u);
    loc_434 = rd32(sp0 - 0x434u);
    loc_438 = rd32(sp0 - 0x438u);
    loc_43c = rd32(sp0 - 0x43cu);
L_101902a5: ;
    COW_AT(101902a5)
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (arg2 == ~ecx - 1u)
    {
        ecx = ~ecx - 1u;
        goto L_101902cc;
    }
    COW_AT(101902bc)
    wr32(arg6, eax);
    g->ebx = rd32(sp0 - 0x430u);
    g->esi = loc_438;
    g->edi = loc_43c;
    g->ebp = rd32(sp0 - 0x434u);
    return 0xffffffffu;
L_101902cc: ;
    COW_AT(101902cc)
    if ((int32_t)arg2 <= 1)
    {
        eax = 0u;
    }
    else
    {
    COW_AT(101902d3)
        eax = 0u;
        edx = arg1;
L_101902dc: ;
    COW_AT(101902dc)
        t1 = rd8(edx);
        if ((uint8_t)t1 != 0x7fu) goto L_101902ef;
    COW_AT(101902e1)
        if (rd8(arg1 + eax + 1u) == 0xffu) goto L_101902f8;
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + eax + 1u);
    COW_AT(101902ea)
        if ((uint8_t)ecx == 0xfeu) goto L_101902f8;
L_101902ef: ;
    COW_AT(101902ef)
        if ((int32_t)(edx - arg1 + 2u) < (int32_t)arg2)
        {
            eax = eax + 1u;
            ecx = edx - arg1 + 2u;
            edx = edx + 1u;
            goto L_101902dc;
        }
        eax = eax + 1u;
    }
L_101902f8: ;
    COW_AT(101902f8)
    wr32(sp0 - 0x42cu, 0u);
    if (eax + 1u != arg2)
    {
        ecx = eax + 1u;
        goto L_1019032a;
    }
    ecx = eax + 1u;
    COW_AT(10190307)
    wr32(sp0 - 0x428u, ecx);
    if ((int32_t)(arg2 + 2u) < (int32_t)(arg4 - 1u))
    {
        edi = ecx;
        loc_428 = ecx;
        goto L_10190332;
    }
    COW_AT(1019031c)
    g->ebx = loc_430;
    g->esi = loc_438;
    g->edi = loc_43c;
    g->ebp = loc_434;
    return 0xffffffffu;
L_1019032a: ;
    COW_AT(1019032a)
    wr32(sp0 - 0x428u, eax);
    edi = eax;
    loc_428 = eax;
    eax = ecx;
L_10190332: ;
    COW_AT(10190332)
    if ((int32_t)(eax + 1u) >= (int32_t)arg2) goto L_1019034d;
    ecx = eax + 1u;
L_10190339: ;
    COW_AT(10190339)
    t2 = rd8(arg1 + ecx - 1u);
    if ((uint8_t)t2 != 0x7fu) goto L_10190347;
    COW_AT(10190340)
    t3 = rd8(arg1 + eax + 1u);
    if ((uint8_t)t3 == 0xffu) goto L_1019034d;
L_10190347: ;
    COW_AT(10190347)
    if ((int32_t)(ecx + 1u) < (int32_t)arg2)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        goto L_10190339;
    }
    eax = eax + 1u;
L_1019034d: ;
    COW_AT(1019034d)
    if ((int32_t)(eax + 1u) >= (int32_t)arg2)
    {
        loc_42c = 0u;
    }
    else
    {
    COW_AT(10190354)
        wr32(sp0 - 0x424u, eax);
        wr32(sp0 - 0x42cu, 1u);
        loc_42c = 1u;
    }
    COW_AT(10190360)
    if ((int32_t)arg2 <= 1)
    {
        ecx = 0u;
    }
    else
    {
    COW_AT(10190367)
        eax = 1u;
        ecx = 0u;
L_1019036c: ;
    COW_AT(1019036c)
        t4 = rd8(arg1 + eax - 1u);
        if ((uint8_t)t4 != 0x7fu) goto L_1019037a;
    COW_AT(10190373)
        t5 = rd8(arg1 + ecx + 1u);
        if ((uint8_t)t5 == 0xfeu) goto L_10190380;
L_1019037a: ;
    COW_AT(1019037a)
        if ((int32_t)(eax + 1u) < (int32_t)arg2)
        {
            eax = eax + 1u;
            ecx = ecx + 1u;
            goto L_1019036c;
        }
        ecx = ecx + 1u;
    }
L_10190380: ;
    COW_AT(10190380)
    wr32(sp0 - 0x420u, ecx);
    if ((int32_t)(ecx + 1u) < (int32_t)arg2)
    {
        eax = ecx + 1u;
        loc_420 = ecx;
    }
    else
    {
        eax = ecx + 1u;
    COW_AT(1019038b)
        wr32(sp0 - 0x420u, edi);
        loc_420 = edi;
    }
    COW_AT(1019038f)
    if ((int32_t)edi >= (int32_t)rd32(arg6))
    {
        edx = rd32(arg6);
    COW_AT(101903a4)
        if ((int32_t)edx <= 0)
        {
            ecx = 0u;
            goto L_101903d0;
        }
        ecx = 0u;
L_101903aa: ;
    COW_AT(101903aa)
        if (rd8(arg1 + ecx) < 0x80u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
            goto L_101903b5;
        }
        eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
    COW_AT(101903b1)
        if ((uint8_t)eax <= 0x9fu) goto L_101903bd;
L_101903b5: ;
    COW_AT(101903b5)
        if ((uint8_t)eax < 0xe0u) goto L_101903c2;
    COW_AT(101903b9)
        if ((uint8_t)eax > 0xffu) goto L_101903c2;
L_101903bd: ;
    COW_AT(101903bd)
        ecx = ecx + 2u;
L_101903cc: ;
    COW_AT(101903cc)
        if ((int32_t)ecx < (int32_t)edx) goto L_101903aa;
L_101903d0: ;
    COW_AT(101903d0)
        if (ecx != edx)
        {
    COW_AT(101903d4)
            wr32(arg6, edx - 1u);
            loc_430 = rd32(sp0 - 0x430u);
            loc_434 = rd32(sp0 - 0x434u);
            loc_438 = rd32(sp0 - 0x438u);
            loc_43c = rd32(sp0 - 0x43cu);
            loc_42c = rd32(sp0 - 0x42cu);
            loc_428 = rd32(sp0 - 0x428u);
            loc_420 = rd32(sp0 - 0x420u);
        }
    }
    else
    {
    COW_AT(1019039c)
        wr32(arg6, 0u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_438 = rd32(sp0 - 0x438u);
        loc_43c = rd32(sp0 - 0x43cu);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
    }
    COW_AT(101903d7)
    t6 = rd32(loc_42c * 4u + sp0 - 0x428u) - rd32(arg6);
    t7 = rd32(arg6);
    esi = arg1 + t7;
    edi = sp0 - 0x41cu;
    ecx = t6 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t6 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x440u, sp0 - 0x41cu);
    wr8(sp0 + t6 - 0x41cu, 0x7fu);
    wr8(sp0 + t6 - 0x41bu, 0xffu);
    wr8(sp0 + t6 - 0x41au, 0u);
    g->edx = t6;
    g->esp = sp0 - 0x42cu;
    t8 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0x41cu, ecx, g->edx, 1, 5, rd32(sp0 - 0x440u), rd32(sp0 - 0x43cu), rd32(sp0 - 0x438u), rd32(sp0 - 0x434u), rd32(sp0 - 0x430u));
    t9 = g->edx;
    eax = t8;
    edx = t9;
    edi = t6 + 2u;
    COW_AT(1019041f)
    wr32(sp0 - 0x42cu, eax);
    if ((int32_t)eax <= (int32_t)arg5)
    {
        esi = 0u;
        goto L_1019049d;
    }
    ecx = arg5;
    esi = 0u;
    loc_42c = eax;
L_10190433: ;
    COW_AT(10190433)
    if ((int32_t)esi >= (int32_t)edi) goto L_1019049d;
    COW_AT(10190437)
    if (rd8(esi + sp0 - 0x41cu) != 0x7fu)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x41cu);
        ebp = esi + sp0 - 0x41cu;
        goto L_10190447;
    }
    COW_AT(10190443)
    eax = 0u;
L_10190485: ;
    COW_AT(10190485)
    esi = esi + 2u;
L_10190488: ;
    COW_AT(10190488)
    wr32(sp0 - 0x42cu, loc_42c - eax);
    if ((int32_t)(loc_42c - eax) > (int32_t)arg5)
    {
        ecx = loc_42c - eax;
        loc_42c = loc_42c - eax;
        eax = arg5;
        goto L_10190433;
    }
L_1019049d: ;
    COW_AT(1019049d)
    t19 = esi + rd32(arg6);
    t20 = rd32(sp0 - 0x428u);
    wr32(arg6, t19);
    if ((int32_t)t20 >= (int32_t)t19)
    {
        edx = t20;
    }
    else
    {
        edx = t20;
    COW_AT(101904b4)
        wr32(sp0 - 0x42cu, 0u);
        loc_42c = 0u;
L_101904bc: ;
    COW_AT(101904bc)
        if ((int32_t)rd32(arg6) <= 0)
        {
            eax = 0u;
            goto L_101904f2;
        }
        ecx = rd32(arg6);
        esi = 0u;
L_101904c6: ;
    COW_AT(101904c6)
        if (rd8(arg1 + esi) == 0x7fu)
        {
            ecx = (ecx & 0xffffff00u) | rd8(arg1 + esi);
            goto L_101904e6;
        }
        eax = arg1 + esi;
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + esi);
    COW_AT(101904d1)
        wr32(sp0 - 0x440u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x43cu;
        t21 = cow_cdecl(g, COW_IMG(0x1011c900u), 1, eax);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    COW_AT(101904d7)
        if ((uint8_t)eax == 0u)
        {
            loc_42c = rd32(sp0 - 0x42cu);
            goto L_101904e6;
        }
    COW_AT(101904de)
        eax = 1u;
        esi = esi + 1u;
        loc_42c = rd32(sp0 - 0x42cu);
L_101904ee: ;
    COW_AT(101904ee)
        if ((int32_t)esi < (int32_t)rd32(arg6)) goto L_101904c6;
L_101904f2: ;
    COW_AT(101904f2)
        t24 = rd32(arg6) - eax;
        t25 = rd32(arg6);
        wr32(arg6, t24);
        if ((int32_t)(t25 - eax) < 0) goto L_1019050a;
    COW_AT(101904fa)
        t26 = rd32(sp0 - 0x42cu) + 1u;
        t27 = rd32(sp0 - 0x42cu);
        wr32(sp0 - 0x42cu, t26);
        if ((int32_t)(t27 + 1u) < 5)
        {
            loc_42c = t26;
            goto L_101904bc;
        }
    COW_AT(10190508)
    }
L_10190510: ;
    COW_AT(10190510)
    if ((int32_t)rd32(sp0 - 0x428u) >= (int32_t)rd32(arg6)) goto L_10190568;
L_1019051a: ;
    COW_AT(1019051a)
    if ((int32_t)rd32(arg6) <= 0)
    {
        eax = 0u;
        goto L_10190550;
    }
    ecx = rd32(arg6);
    esi = 0u;
L_10190524: ;
    COW_AT(10190524)
    if (rd8(arg1 + esi) == 0x7fu)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + esi);
        goto L_10190544;
    }
    eax = arg1 + esi;
    ecx = (ecx & 0xffffff00u) | rd8(arg1 + esi);
    COW_AT(1019052f)
    wr32(sp0 - 0x440u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x43cu;
    t28 = cow_cdecl(g, COW_IMG(0x1011c900u), 1, eax);
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(10190535)
    if ((uint8_t)eax == 0u) goto L_10190544;
    COW_AT(1019053c)
    eax = 1u;
    esi = esi + 1u;
L_1019054c: ;
    COW_AT(1019054c)
    if ((int32_t)esi < (int32_t)rd32(arg6)) goto L_10190524;
L_10190550: ;
    COW_AT(10190550)
    t31 = rd32(arg6) - eax;
    t32 = rd32(arg6);
    wr32(arg6, t31);
    if ((int32_t)(t32 - eax) < 0) goto L_10190562;
    eax = t31;
    COW_AT(1019055a)
    t33 = rd32(sp0 - 0x428u);
    if ((int32_t)t33 < (int32_t)eax) goto L_1019051a;
    COW_AT(10190560)
L_10190568: ;
    COW_AT(10190568)
    t34 = arg2 - rd32(arg6);
    t35 = rd32(arg6);
    esi = arg1 + t35;
    edi = sp0 - 0x41cu;
    ecx = t34 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x440u, sp0 - 0x41cu);
    ecx = t34 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(sp0 + t34 - 0x41cu, 0u);
    g->edx = t34;
    g->esp = sp0 - 0x42cu;
    t36 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0x41cu, ecx, g->edx, 1, 5, rd32(sp0 - 0x440u), rd32(sp0 - 0x43cu), rd32(sp0 - 0x438u), rd32(sp0 - 0x434u), rd32(sp0 - 0x430u));
    t37 = g->edx;
    eax = t36;
    edx = t37;
    ebp = t34;
    COW_AT(101905a0)
    if ((int32_t)eax <= (int32_t)arg5)
    {
        ecx = arg5;
    }
    else
    {
    COW_AT(101905ae)
L_101905b0: ;
    COW_AT(101905b0)
        wr32(sp0 - 0x440u, ebp);
        wr32(sp0 - 0x444u, sp0 - 0x41cu);
        g->eax = eax;
        g->ecx = sp0 - 0x41cu;
        g->esp = sp0 - 0x430u;
        t38 = cow_cdecl(g, COW_IMG(0x10190680u), 5, sp0 - 0x41cu, ebp, rd32(sp0 - 0x43cu), rd32(sp0 - 0x438u), rd32(sp0 - 0x434u));
        t39 = g->ecx;
        eax = t38;
        ecx = t39;
    COW_AT(101905bb)
        wr32(sp0 - 0x448u, sp0 - 0x41cu);
        g->edx = sp0 - 0x41cu;
        g->esp = sp0 - 0x434u;
        t40 = cow_call_regs(g, COW_IMG(0x10190830u), eax, ecx, g->edx, 1, 5, sp0 - 0x41cu, sp0 - 0x41cu, rd32(sp0 - 0x440u), rd32(sp0 - 0x43cu), rd32(sp0 - 0x438u));
        t41 = g->ecx;
        t42 = g->edx;
        ecx = t41;
        edx = t42;
        ebp = eax;
        eax = t40;
    COW_AT(101905c7)
        if ((int32_t)eax > (int32_t)arg5) goto L_101905b0;
    }
    COW_AT(101905ce)
    if ((int32_t)rd32(arg6) < 0) goto L_10190609;
    eax = rd32(arg6);
L_101905e2: ;
    COW_AT(101905e2)
    t43 = rd8(arg1 + eax);
    if ((uint8_t)t43 != 0x7fu) goto L_101905f6;
    COW_AT(101905e8)
    if ((int8_t)rd8(arg1 + eax + 1u) < 100)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + eax + 1u);
        goto L_101905f6;
    }
    ecx = (ecx & 0xffffff00u) | rd8(arg1 + eax + 1u);
    COW_AT(101905f1)
    if ((int8_t)ecx < 120) goto L_101905fb;
L_101905f6: ;
    COW_AT(101905f6)
    if ((int32_t)(eax - 1u) >= 0)
    {
        eax = eax - 1u;
        goto L_101905e2;
    }
    COW_AT(101905f9)
L_10190609: ;
    COW_AT(10190609)
    wr8(arg3, 0x7fu);
    wr8(arg3 + 1u, 0x64u);
L_10190610: ;
    COW_AT(10190610)
    if ((int32_t)rd32(sp0 - 0x420u) >= (int32_t)rd32(arg6))
    {
        ecx = ebp;
        goto L_1019064e;
    }
    ecx = ebp;
    COW_AT(10190627)
    wr8(arg3 + 2u, 0x7fu);
    wr8(arg3 + 3u, 0xfeu);
    t44 = ecx;
    esi = sp0 - 0x41cu;
    edi = arg3 + 4u;
    ecx = t44 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t44 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->ebx = rd32(sp0 - 0x430u);
    g->esi = rd32(sp0 - 0x438u);
    g->edi = rd32(sp0 - 0x43cu);
    g->ebp = rd32(sp0 - 0x434u);
    return ebp + 4u;
L_101903c2: ;
    COW_AT(101903c2)
    if ((uint8_t)eax != 0x7fu)
    {
    COW_AT(101903cb)
        ecx = ecx + 1u;
    }
    else
    {
    COW_AT(101903c6)
        ecx = ecx + 2u;
    }
    goto L_101903cc;
L_10190447: ;
    COW_AT(10190447)
    wr32(sp0 - 0x440u, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x43cu;
    t10 = cow_cdecl(g, COW_IMG(0x1011c900u), 1, ebp);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(1019044d)
    if ((uint8_t)eax == 0u) goto L_1019046c;
    COW_AT(10190454)
    t13 = (ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(ebp);
    wr32(sp0 - 0x440u, t13);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x43cu;
    t14 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t13);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(1019045f)
    esi = esi + 1u;
    loc_42c = rd32(sp0 - 0x42cu);
    goto L_10190488;
L_1019046c: ;
    COW_AT(1019046c)
    t16 = rd8(esi + sp0 - 0x41bu) | (uint32_t)rd8(ebp) << 8u;
    wr32(sp0 - 0x440u, t16);
    g->eax = t16;
    g->edx = edx;
    g->esp = sp0 - 0x43cu;
    t17 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t16);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(1019047b)
    loc_42c = rd32(sp0 - 0x42cu);
    goto L_10190485;
L_101904e6: ;
    COW_AT(101904e6)
    eax = 2u;
    esi = esi + 2u;
    goto L_101904ee;
L_1019050a: ;
    COW_AT(1019050a)
    wr32(arg6, 0u);
    goto L_10190510;
L_10190544: ;
    COW_AT(10190544)
    eax = 2u;
    esi = esi + 2u;
    goto L_1019054c;
L_10190562: ;
    COW_AT(10190562)
    wr32(arg6, 0u);
    goto L_10190568;
L_101905fb: ;
    COW_AT(101905fb)
    wr8(arg3, 0x7fu);
    wr8(arg3 + 1u, rd8(arg1 + eax + 1u));
    if ((int32_t)eax >= 0) goto L_10190610;
    goto L_10190609;
L_1019064e: ;
    COW_AT(1019064e)
    t45 = ecx;
    esi = sp0 - 0x41cu;
    edi = arg3 + 2u;
    ecx = t45 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t45 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t46 = rd32(sp0 - 0x43cu);
    wr8(arg3 + ebp + 2u, 0u);
    g->ebx = rd32(sp0 - 0x430u);
    g->esi = rd32(sp0 - 0x438u);
    g->edi = t46;
    g->ebp = rd32(sp0 - 0x434u);
    return ebp + 2u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10190280(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1019029bu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x43cu);
        in_esi = rd32(sp0 - 0x438u);
        in_ebp = rd32(sp0 - 0x434u);
        in_ebx = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->edx = arg6;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1019029fu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x43cu);
        in_esi = rd32(sp0 - 0x438u);
        in_ebp = rd32(sp0 - 0x434u);
        in_ebx = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->edx = arg6;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101902a5u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->edx = arg6;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101902bcu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->edx = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101902ccu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101902d3u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->eax = 0u;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101902dcu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        g->esi = 1u - arg1;
        (void)sp0;
        return 1;
    }
    case 0x101902e1u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        g->esi = 1u - arg1;
        (void)sp0;
        return 1;
    }
    case 0x101902eau:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        g->esi = 1u - arg1;
        (void)sp0;
        return 1;
    }
    case 0x101902efu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        g->esi = 1u - arg1;
        (void)sp0;
        return 1;
    }
    case 0x101902f8u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10190307u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x42cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1019031cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x1019032au:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x42cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10190332u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x42cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10190339u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x42cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10190340u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x42cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10190347u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x42cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1019034du:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x42cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10190354u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10190360u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10190367u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        g->ecx = 0u;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1019036cu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10190373u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1019037au:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10190380u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
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
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1019038bu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1019038fu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1019039cu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903a4u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903aau:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903b1u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903b5u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903b9u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903bdu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903c2u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903c6u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903cbu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903ccu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903d0u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903d4u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101903d7u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_420;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        uint32_t loc_43c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_43c = rd32(sp0 - 0x43cu);
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_420 = rd32(sp0 - 0x420u);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1019041fu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x440u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10190433u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10190437u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10190443u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10190447u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x1019044du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x440u;
        (void)sp0;
        return 1;
    }
    case 0x10190454u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x1019045fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x440u;
        (void)sp0;
        return 1;
    }
    case 0x1019046cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x1019047bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x440u;
        (void)sp0;
        return 1;
    }
    case 0x10190485u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10190488u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1019049du:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101904b4u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101904bcu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101904c6u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101904d1u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101904d7u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x440u;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101904deu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101904e6u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101904eeu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101904f2u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x101904fau:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10190508u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x1019050au:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10190510u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x1019051au:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10190524u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x1019052fu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10190535u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x440u;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x1019053cu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10190544u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x1019054cu:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10190550u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
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
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x1019055au:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10190560u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10190562u:
    {
        unsigned af;
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10190568u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_42c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101905a0u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x440u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101905aeu:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->ecx = arg5;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101905b0u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x101905bbu:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x444u;
        g->ebx = arg1;
        g->esi = arg5;
        wr32(sp0 - 0x444u, sp0 - 0x41cu);
        (void)sp0;
        return 1;
    }
    case 0x101905c7u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x448u;
        g->ebx = arg1;
        g->esi = arg5;
        wr32(sp0 - 0x448u, sp0 - 0x41cu);
        wr32(sp0 - 0x444u, sp0 - 0x41cu);
        (void)sp0;
        return 1;
    }
    case 0x101905ceu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101905e2u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->edx = arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101905e8u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->edx = arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101905f1u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->edx = arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101905f6u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->edx = arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101905f9u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101905fbu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->edx = arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10190609u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10190610u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10190627u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->edx = arg3;
        g->esi = sp0 - 0x41cu;
        (void)sp0;
        return 1;
    }
    case 0x1019064eu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x43cu;
        g->edx = arg3;
        g->esi = sp0 - 0x41cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10190280(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10190280(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
