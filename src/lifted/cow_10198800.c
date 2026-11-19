/* f_0x10198800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10198800(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t of;
    uint32_t sf;
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
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1019881du: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019881d;
    case 0x1019882cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019882c;
    case 0x10198845u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198845;
    case 0x10198862u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198862;
    case 0x1019888du: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019888d;
    case 0x101988b0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101988b0;
    case 0x101988bau: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101988ba;
    case 0x101988c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101988c8;
    case 0x101988d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101988d5;
    case 0x101988e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101988e1;
    case 0x101988feu: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101988fe;
    case 0x1019890au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019890a;
    case 0x10198911u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198911;
    case 0x1019891du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019891d;
    case 0x10198937u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198937;
    case 0x10198948u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198948;
    case 0x10198976u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198976;
    case 0x10198981u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198981;
    case 0x101989afu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101989af;
    case 0x101989bbu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101989bb;
    case 0x101989cau: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101989ca;
    case 0x101989cdu: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101989cd;
    case 0x101989cfu: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101989cf;
    case 0x101989ebu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101989eb;
    case 0x101989efu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101989ef;
    case 0x10198a19u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198a19;
    case 0x10198a35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198a35;
    case 0x10198a3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198a3a;
    case 0x10198a4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198a4c;
    case 0x10198a74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198a74;
    case 0x10198a7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198a7b;
    case 0x10198aa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198aa3;
    case 0x10198aaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198aaa;
    case 0x10198aafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198aaf;
    case 0x10198ab8u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198ab8;
    case 0x10198abdu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198abd;
    case 0x10198ac2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198ac2;
    case 0x10198ad8u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198ad8;
    case 0x10198addu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198add;
    case 0x10198ae2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198ae2;
    case 0x10198af5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198af5;
    case 0x10198b03u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b03;
    case 0x10198b0cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b0c;
    case 0x10198b11u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b11;
    case 0x10198b27u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b27;
    case 0x10198b29u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b29;
    case 0x10198b32u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b32;
    case 0x10198b37u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b37;
    case 0x10198b4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b4d;
    case 0x10198b5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b5a;
    case 0x10198b5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b5e;
    case 0x10198b63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b63;
    case 0x10198b78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b78;
    case 0x10198b7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b7c;
    case 0x10198b81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b81;
    case 0x10198b9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198b9b;
    case 0x10198ba7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10198ba7;
    default: break;
    }
#endif

    COW_AT(10198800)
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au) goto L_10198b63;
    ebx = rd32(rd32(self + 8u) + 0x88u);
    edi = rd32(self + 8u);
    COW_AT(1019881d)
    t1 = rd32(COW_IMG(0x10198bb0u) + rd8(COW_IMG(0x10198bdcu) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x1019882cu: goto L_1019882c;
    case 0x1019888du: goto L_1019888d;
    case 0x101988b0u: goto L_101988b0;
    case 0x101988feu: ecx = rd8(COW_IMG(0x10198bdcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_101988fe;
    case 0x10198937u: goto L_10198937;
    case 0x10198976u: ecx = rd8(COW_IMG(0x10198bdcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10198976;
    case 0x101989afu: goto L_101989af;
    case 0x10198a3au: goto L_10198a3a;
    case 0x10198af5u: goto L_10198af5;
    case 0x10198b4du: goto L_10198b4d;
    case 0x10198b63u: goto L_10198b63;
    default: rt_fatal(g, COW_IMG(0x10198825u), "switch");
    }
    return 0;
L_1019882c: ;
    COW_AT(1019882c)
    if ((int32_t)((uint32_t)(int16_t)arg2 + rd32(self + 0x28u) - 1u) < (int32_t)rd32(self + 0x2cu))
    {
        eax = (uint32_t)(int16_t)arg2 + rd32(self + 0x28u);
        ecx = (uint32_t)(int16_t)arg2 + rd32(self + 0x28u) - 1u;
    COW_AT(10198845)
        t70 = rd32(eax * 0x10u + rd32(self + 0x18u) - 0x10u);
        g->eax = t70;
        g->esp = sp0 - 0xcu;
        t71 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t70);
        if (t71 != 0u)
        {
    COW_AT(10198862)
            t72 = (uint32_t)(int16_t)arg2 + rd32(self + 0x28u) - 1u;
            wr32(self + 0x1cu, t72);
            t73 = rd32(COW_IMG(0x10662738u));
            wr32(t73 + 0x20u, t72);
            g->ebx = ebx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a780u), 1u, 0u);
        }
    }
L_10198b63: ;
    COW_AT(10198b63)
    if (rd32(self + 0x1cu) == rd32(self + 0x28u) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u)
    {
        eax = rd32(self + 0x1cu);
        edx = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 0x1cu);
        edx = rd32(self + 8u);
        edi = rd32(self + 0x28u) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
    COW_AT(10198b78)
        if ((int32_t)edi >= 0)
        {
    COW_AT(10198b7c)
            if ((int32_t)edi < (int32_t)rd32(self + 0x2cu))
            {
    COW_AT(10198b81)
                t74 = rd32(edi * 0x10u + rd32(self + 0x18u));
                g->eax = rd32(self + 0x18u);
                g->edx = edi << 4u;
                t75 = rd32(self + 0x18u);
                g->esp = sp0 - 0xcu;
                t76 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t74);
                t77 = g->edx;
                if (t76 == 0u)
                {
                    eax = t76;
                    edx = t77;
                }
                else
                {
                    eax = t76;
    COW_AT(10198b9b)
                    wr32(self + 0x1cu, edi);
                    t78 = rd32(COW_IMG(0x10662734u));
                    wr32(t78 + 0x24u, edi);
                    edx = t78;
                }
            }
        }
    }
    COW_AT(10198ba7)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_1019888d: ;
    COW_AT(1019888d)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t68 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a76cu));
    t69 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a758u));
    goto L_10198b63;
L_101988b0: ;
    COW_AT(101988b0)
    if ((uint16_t)arg2 == 1u) goto L_101988c8;
    COW_AT(101988ba)
    if ((int16_t)arg2 <= (int32_t)rd32(self + 0x2cu))
    {
        eax = (uint32_t)(int16_t)arg2;
        ecx = rd32(self + 0x2cu);
        edx = in_edx;
        goto L_10198b5e;
    }
L_101988c8: ;
    COW_AT(101988c8)
    if ((int32_t)(rd32(self + 0x28u) + 0xbu) >= (int32_t)rd32(self + 0x2cu))
    {
        eax = rd32(self + 0x28u);
        edx = rd32(self + 0x2cu);
    }
    else
    {
        eax = rd32(self + 0x28u);
        ecx = rd32(self + 0x28u) + 0xbu;
        edx = rd32(self + 0x2cu);
    COW_AT(101988d5)
        wr32(self + 0x28u, eax + 1u);
        wr32(ebx + 0x14u, eax + 1u);
        g->eax = eax + 1u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t62 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t63 = g->edx;
        eax = t62;
        edx = t63;
    }
    COW_AT(101988e1)
    t64 = (edx & 0xffff0000u) | rd16(self + 0x2cu);
    t65 = rd32(self + 8u);
    g->ebx = ebx;
    g->edx = t64;
    g->esp = sp0 - 0xcu;
    t66 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t65, g->edx, 0, 2, t64, 0u);
    t67 = g->edx;
    g->edi = t65;
    cow_thiscall(g, COW_IMG(0x101186a0u), t65, 0);
    goto L_10198b63;
L_101988fe: ;
    COW_AT(101988fe)
    if ((uint16_t)arg2 != 0xbu)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10198b5e;
    }
    COW_AT(1019890a)
    if ((int32_t)rd32(self + 0x28u) <= 0)
    {
        eax = rd32(self + 0x28u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x28u);
    COW_AT(10198911)
        wr32(self + 0x28u, eax - 1u);
        wr32(ebx + 0x14u, eax - 1u);
        g->eax = eax - 1u;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t57 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t58 = g->edx;
        eax = t57;
        edx = t58;
    }
    COW_AT(1019891d)
    t59 = rd32(self + 8u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t60 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t59, g->edx, 0, 2, 1u, 0u);
    t61 = g->edx;
    g->edi = t59;
    cow_thiscall(g, COW_IMG(0x101186a0u), t59, 0);
    goto L_10198b63;
L_10198937: ;
    COW_AT(10198937)
    if ((int32_t)(rd32(self + 0x28u) + 0xbu) < (int32_t)rd32(self + 0x2cu))
    {
        eax = rd32(self + 0x28u);
        ecx = rd32(self + 0x28u) + 0xbu;
        edx = rd32(self + 0x2cu);
    COW_AT(10198948)
        wr32(self + 0x28u, eax + 1u);
        g->eax = eax + 1u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t50 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t51 = g->edx;
        t52 = rd32(self + 8u);
        t53 = (t51 & 0xffff0000u) | (uint16_t)(rd16(t52 + 0x4cu) - 1u);
        g->ebx = ebx;
        g->edx = t53;
        t54 = cow_call_regs(g, COW_IMG(0x10118db0u), t50, t52, g->edx, 0, 2, t53, 0u);
        t55 = g->edx;
        g->edi = t52;
        cow_thiscall(g, COW_IMG(0x101186a0u), t52, 0);
        t56 = rd32(self + 0x28u);
        wr32(ebx + 0x14u, t56);
    }
    goto L_10198b63;
L_10198976: ;
    COW_AT(10198976)
    if ((int32_t)rd32(self + 0x28u) > 0)
    {
        eax = rd32(self + 0x28u);
    COW_AT(10198981)
        wr32(self + 0x28u, eax - 1u);
        g->eax = eax - 1u;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t42 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t43 = g->ecx;
        t44 = g->edx;
        t45 = (t43 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 8u) + 0x4cu) + 1u);
        t46 = rd32(self + 8u);
        g->ebx = ebx;
        g->edx = t44;
        t47 = cow_call_regs(g, COW_IMG(0x10118db0u), t42, t46, g->edx, 0, 2, t45, 0u);
        t48 = g->edx;
        g->edi = t46;
        cow_thiscall(g, COW_IMG(0x101186a0u), t46, 0);
        t49 = rd32(self + 0x28u);
        wr32(ebx + 0x14u, t49);
    }
    goto L_10198b63;
L_101989af: ;
    COW_AT(101989af)
    if ((int32_t)(rd32(self + 0x28u) - 0xbu) < 0)
    {
        eax = rd32(self + 0x28u) - 0xbu;
        ecx = rd32(self + 0x28u);
        goto L_101989eb;
    }
    eax = rd32(self + 0x28u) - 0xbu;
    COW_AT(101989bb)
    wr32(self + 0x28u, eax);
    if ((uint16_t)arg2 == 0xbu)
    {
        ecx = edi;
    COW_AT(101989cd)
        loc_14 = 1u;
    }
    else
    {
        ecx = edi;
    COW_AT(101989ca)
        loc_14 = arg2;
    }
    COW_AT(101989cf)
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t25 = cow_call_regs(g, COW_IMG(0x10118db0u), arg2, ecx, g->edx, 0, 2, loc_14, 0u);
    t26 = g->edx;
    g->edi = edi;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t28 = g->ecx;
    t29 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b30u), t28, 0);
    t30 = rd32(self + 0x28u);
    wr32(ebx + 0x14u, t30);
    goto L_10198b63;
L_101989eb: ;
    COW_AT(101989eb)
    if ((int32_t)ecx <= 0) goto L_10198a19;
    COW_AT(101989ef)
    wr32(self + 0x28u, 0u);
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t31 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, arg2, 0u);
    t32 = g->edx;
    g->edi = edi;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t34 = g->ecx;
    t35 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b30u), t34, 0);
    t36 = rd32(self + 0x28u);
    wr32(ebx + 0x14u, t36);
    goto L_10198b63;
L_10198a19: ;
    COW_AT(10198a19)
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t37 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, 1u, 0u);
    t38 = g->edx;
    g->edi = edi;
    g->edx = t38;
    t39 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t40 = g->ecx;
    t41 = g->edx;
    if ((uint16_t)arg2 != 1u)
    {
        eax = t39;
        ecx = t40;
        edx = t41;
        goto L_10198b5e;
    }
    COW_AT(10198a35)
    goto L_10198b63;
L_10198a3a: ;
    COW_AT(10198a3a)
    if ((int32_t)(rd32(self + 0x28u) + 0xbu) >= (int32_t)(rd32(self + 0x2cu) - 0xcu))
    {
        eax = rd32(self + 0x2cu);
        edx = rd32(self + 0x28u);
        goto L_10198a74;
    }
    ecx = rd32(self + 0x28u) + 0xbu;
    edx = rd32(self + 0x28u);
    COW_AT(10198a4c)
    wr32(self + 0x28u, ecx);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10118db0u), arg2, edi, g->edx, 0, 2, arg2, 0u);
    t7 = g->edx;
    g->edi = edi;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t9 = g->ecx;
    t10 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b30u), t9, 0);
    t11 = rd32(self + 0x28u);
    wr32(ebx + 0x14u, t11);
    goto L_10198b63;
L_10198a74: ;
    COW_AT(10198a74)
    if ((int32_t)edx >= (int32_t)(eax - 0xbu)) goto L_10198aa3;
    ecx = eax - 0xbu;
    COW_AT(10198a7b)
    wr32(self + 0x28u, ecx);
    g->ebx = ebx;
    g->edx = arg2;
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, arg2, 0u);
    t13 = g->edx;
    g->edi = edi;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t15 = g->ecx;
    t16 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b30u), t15, 0);
    t17 = rd32(self + 0x28u);
    wr32(ebx + 0x14u, t17);
    goto L_10198b63;
L_10198aa3: ;
    COW_AT(10198aa3)
    if ((int32_t)eax < 11)
    {
        ecx = eax;
    }
    else
    {
    COW_AT(10198aaa)
        ecx = 0xbu;
    }
    COW_AT(10198aaf)
    if ((uint32_t)(int16_t)arg2 == ecx) goto L_10198ad8;
    COW_AT(10198ab8)
    if ((int32_t)eax >= 11)
    {
    COW_AT(10198abd)
        eax = 0xbu;
    }
    COW_AT(10198ac2)
    g->ebx = ebx;
    g->edx = (uint32_t)(int16_t)arg2;
    g->esp = sp0 - 0xcu;
    t18 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, eax, 0u);
    t19 = g->edx;
    g->edi = edi;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
L_10198b5e: ;
    COW_AT(10198b5e)
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    goto L_10198b63;
L_10198ad8: ;
    COW_AT(10198ad8)
    if ((int32_t)eax >= 11)
    {
    COW_AT(10198add)
        eax = 0xbu;
    }
    COW_AT(10198ae2)
    g->ebx = ebx;
    g->edx = (uint32_t)(int16_t)arg2;
    g->esp = sp0 - 0xcu;
    t23 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, eax, 0u);
    t24 = g->edx;
    g->edi = edi;
    cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    goto L_10198b63;
L_10198af5: ;
    COW_AT(10198af5)
    if ((int32_t)rd32(self + 0x28u) >= (int32_t)rd32(ebx + 0x14u))
    {
        eax = rd32(self + 0x28u);
        ecx = (uint32_t)(int16_t)rd16(edi + 0x4cu);
        zf = rd32(self + 0x28u) == rd32(ebx + 0x14u);
        sf = (int32_t)(rd32(self + 0x28u) - rd32(ebx + 0x14u)) < 0;
        of = ((rd32(self + 0x28u) ^ rd32(ebx + 0x14u)) & (rd32(self + 0x28u) ^ rd32(self + 0x28u) - rd32(ebx + 0x14u))) >> 0x1fu;
        ebx = rd32(ebx + 0x14u);
    COW_AT(10198b27)
        if (!(zf || sf != of))
        {
    COW_AT(10198b29)
            if ((int32_t)(eax + ecx - ebx) <= 11)
            {
                ecx = eax + ecx - ebx;
                eax = eax - ebx;
            }
            else
            {
                eax = eax - ebx;
    COW_AT(10198b32)
                ecx = 0xbu;
            }
    COW_AT(10198b37)
            g->ebx = ebx;
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t4 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, ecx, 0u);
            t5 = g->edx;
            g->edi = edi;
            cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
            wr32(self + 0x28u, ebx);
        }
    }
    else
    {
        eax = rd32(self + 0x28u);
        ecx = (uint32_t)(int16_t)rd16(edi + 0x4cu);
        ebx = rd32(ebx + 0x14u);
    COW_AT(10198b03)
        if ((int32_t)(eax + ecx - ebx) >= 1)
        {
            ecx = eax + ecx - ebx;
            eax = eax - ebx;
        }
        else
        {
            eax = eax - ebx;
    COW_AT(10198b0c)
            ecx = 1u;
        }
    COW_AT(10198b11)
        g->ebx = ebx;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t2 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, ecx, 0u);
        t3 = g->edx;
        g->edi = edi;
        cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
        wr32(self + 0x28u, ebx);
    }
    goto L_10198b63;
L_10198b4d: ;
    COW_AT(10198b4d)
    if ((int32_t)(rd32(self + 0x28u) + 0xbu) > (int32_t)rd32(self + 0x2cu)) goto L_10198b63;
    eax = rd32(self + 0x28u);
    ecx = rd32(self + 0x28u) + 0xbu;
    edx = rd32(self + 0x2cu);
    COW_AT(10198b5a)
    if ((int32_t)eax < 0) goto L_10198b63;
    goto L_10198b5e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10198800(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1019881du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1019882cu:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198845u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = (uint32_t)(int16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10198862u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = (uint32_t)(int16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1019888du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101988b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101988bau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101988c8u:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101988d5u:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101988e1u:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101988feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1019890au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198911u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1019891du:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198937u:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198948u:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198976u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198981u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101989afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101989bbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101989cau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101989cdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101989cfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->eax = arg2;
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101989ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101989efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10198a19u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10198a35u:
    {
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
        uint32_t loc_14;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198a3au:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198a4cu:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198a74u:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198a7bu:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198aa3u:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198aaau:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198aafu:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198ab8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = (uint32_t)(int16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10198abdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = (uint32_t)(int16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10198ac2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = (uint32_t)(int16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10198ad8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = (uint32_t)(int16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10198addu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = (uint32_t)(int16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10198ae2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = (uint32_t)(int16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10198af5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b03u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b0cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b11u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b27u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b29u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b32u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b37u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b4du:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b5au:
    {
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
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b5eu:
    {
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
        uint32_t loc_14;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b63u:
    {
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
        uint32_t loc_14;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b78u:
    {
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
        uint32_t loc_14;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b7cu:
    {
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
        uint32_t loc_14;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b81u:
    {
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
        uint32_t loc_14;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198b9bu:
    {
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
        uint32_t loc_14;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10198ba7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10198800(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10198800(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
