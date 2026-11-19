/* f_0x102eb95f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102eb95f(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_118;
    uint32_t loc_11c;
    uint32_t loc_120;
    uint32_t loc_124;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
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
    cow_frame(g, sp0, 300u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102eb979u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102eb979;
    case 0x102eb989u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102eb989;
    case 0x102eb9a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102eb9a1;
    case 0x102eb9afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102eb9af;
    case 0x102eb9bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102eb9ba;
    case 0x102eb9c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102eb9c6;
    case 0x102eb9d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102eb9d8;
    case 0x102eb9eau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102eb9ea;
    case 0x102eb9efu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102eb9ef;
    case 0x102eba00u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102eba00;
    case 0x102eba0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102eba0e;
    case 0x102eba23u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102eba23;
    case 0x102eba28u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102eba28;
    case 0x102eba39u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102eba39;
    case 0x102eba47u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102eba47;
    case 0x102eba49u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102eba49;
    case 0x102eba5au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102eba5a;
    case 0x102eba5du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102eba5d;
    case 0x102eba68u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102eba68;
    case 0x102eba6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102eba6f;
    case 0x102eba80u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102eba80;
    case 0x102eba86u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102eba86;
    case 0x102eba8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102eba8e;
    case 0x102eba9du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102eba9d;
    case 0x102ebaa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102ebaa2;
    case 0x102ebaabu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102ebaab;
    case 0x102ebab2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ebab2;
    case 0x102ebab7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ebab7;
    case 0x102ebabcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ebabc;
    case 0x102ebac5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ebac5;
    case 0x102ebadbu: ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebadb;
    case 0x102ebae0u: ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebae0;
    case 0x102ebae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebae5;
    case 0x102ebaecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebaec;
    case 0x102ebaf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebaf0;
    case 0x102ebb22u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebb22;
    case 0x102ebb2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebb2c;
    case 0x102ebb38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebb38;
    case 0x102ebb42u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebb42;
    case 0x102ebb47u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebb47;
    case 0x102ebb4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebb4b;
    case 0x102ebb4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebb4c;
    case 0x102ebb4du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebb4d;
    case 0x102ebb52u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102ebb52;
    case 0x102ebb5au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102ebb5a;
    case 0x102ebb64u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebb64;
    case 0x102ebb6du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebb6d;
    case 0x102ebb76u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebb76;
    case 0x102ebb8du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebb8d;
    case 0x102ebb91u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebb91;
    case 0x102ebb99u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebb99;
    case 0x102ebba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebba2;
    case 0x102ebbafu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebbaf;
    case 0x102ebbbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebbbc;
    case 0x102ebbc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebbc3;
    case 0x102ebbc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebbc8;
    case 0x102ebbcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebbcd;
    case 0x102ebbdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebbdc;
    case 0x102ebbebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebbeb;
    case 0x102ebbf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_8 = rd32(sp0 - 8u); goto E_102ebbf0;
    case 0x102ebbfau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebbfa;
    case 0x102ebc03u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebc03;
    case 0x102ebc17u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebc17;
    case 0x102ebc1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebc1c;
    case 0x102ebc2du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ebc2d;
    case 0x102ebc3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ebc3f;
    case 0x102ebc4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ebc4b;
    case 0x102ebc66u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebc66;
    case 0x102ebc78u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebc78;
    case 0x102ebc8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebc8f;
    case 0x102ebc9du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebc9d;
    case 0x102ebca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebca8;
    case 0x102ebcbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebcbe;
    case 0x102ebccdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebccd;
    case 0x102ebcd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebcd2;
    case 0x102ebd10u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_102ebd10;
    case 0x102ebd1au: ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_102ebd1a;
    case 0x102ebd2au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_102ebd2a;
    case 0x102ebd34u: ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_102ebd34;
    case 0x102ebd44u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_102ebd44;
    case 0x102ebd4eu: ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); goto E_102ebd4e;
    case 0x102ebd60u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebd60;
    case 0x102ebd6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebd6c;
    case 0x102ebd81u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebd81;
    case 0x102ebd99u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102ebd99;
    case 0x102ebda7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebda7;
    case 0x102ebdafu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebdaf;
    case 0x102ebdbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebdbb;
    case 0x102ebdbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebdbf;
    case 0x102ebdccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebdcc;
    case 0x102ebdd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebdd1;
    case 0x102ebdd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebdd7;
    case 0x102ebddeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102ebdde;
    case 0x102ebdf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102ebdf4;
    case 0x102ebe03u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102ebe03;
    case 0x102ebe08u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102ebe08;
    case 0x102ebe2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102ebe2f;
    case 0x102ebe3du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102ebe3d;
    case 0x102ebe42u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102ebe42;
    case 0x102ebe50u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102ebe50;
    case 0x102ebe55u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebe55;
    case 0x102ebe5au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebe5a;
    case 0x102ebe64u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102ebe64;
    case 0x102ebe6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ebe6f;
    case 0x102ebe72u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ebe72;
    default: break;
    }
#endif

    COW_AT(102eb95f)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x118u, in_ebx);
    wr32(sp0 - 0x11cu, in_esi);
    wr32(self + 0x3d8u, 0u);
    wr32(sp0 - 0x120u, in_edi);
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_118 = in_ebx;
    loc_11c = in_esi;
    loc_120 = in_edi;
L_102ebc2d: ;
    COW_AT(102ebc2d)
    if (rd32(self + 0xc0u) < rd32(self + 0xc4u)) goto L_102eb979;
    eax = rd32(self + 0xc0u);
    COW_AT(102ebc3f)
    if (eax != rd32(self + 0xc4u))
    {
    COW_AT(102ebe6f)
        eax = 0xffffffffu;
    }
    else
    {
    COW_AT(102ebc4b)
        wr32(self + 0xc0u, eax + 1u);
        wr32(self + 0x3d8u, 1u);
        eax = 0x10cu;
    }
L_102ebe72: ;
    COW_AT(102ebe72)
    g->ebx = loc_118;
    g->esi = loc_11c;
    g->edi = loc_120;
    g->ebp = loc_4;
    return eax;
L_102eb979: ;
    COW_AT(102eb979)
    t1 = rd32(self + 0xc0u);
    t2 = rd8(rd32(self + 0xc0u));
    wr8(sp0 - 0xdu, (uint8_t)t2);
    if ((uint8_t)t2 != 0xau)
    {
        ecx = (ecx & 0xffffff00u) | t2;
        goto L_102eb9a1;
    }
    eax = t1;
    ecx = (ecx & 0xffffff00u) | t2;
    COW_AT(102eb989)
    wr32(self + 0x1d0u, rd32(self + 0x1d0u) + 1u);
    wr32(self + 0xc0u, eax + 1u);
    wr32(self + 0xbcu, eax + 1u);
    goto L_102ebc2d;
L_102eb9a1: ;
    COW_AT(102eb9a1)
    wr32(sp0 - 0x124u, (uint32_t)(int8_t)ecx);
    g->eax = (uint32_t)(int8_t)ecx;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x103147f1u), ecx, 1, (uint32_t)(int8_t)ecx);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        ecx = rd32(sp0 - 0x124u);
        edx = t4;
        goto L_102eb9ba;
    }
    ecx = rd32(sp0 - 0x124u);
    edx = t4;
    COW_AT(102eb9af)
    wr32(self + 0xc0u, rd32(self + 0xc0u) + 1u);
    loc_4 = rd32(sp0 - 4u);
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    goto L_102ebc2d;
L_102eb9ba: ;
    COW_AT(102eb9ba)
    if (rd8(sp0 - 0xdu) != 0x23u)
    {
        edx = (edx & 0xffffff00u) | rd8(sp0 - 0xdu);
        goto L_102ebb64;
    }
    edx = (edx & 0xffffff00u) | rd8(sp0 - 0xdu);
    COW_AT(102eb9c6)
    if (rd32(self + 0xc0u) != rd32(self + 0xbcu))
    {
        eax = rd32(self + 0xc0u);
        goto L_102ebc66;
    }
    eax = rd32(self + 0xc0u);
    COW_AT(102eb9d8)
    wr32(sp0 - 8u, eax);
    t5 = rd32(self + 0xc4u);
    wr32(self + 0xc0u, eax + 1u);
    if (eax + 1u >= t5)
    {
        loc_8 = eax;
        eax = eax + 1u;
        goto L_102eba00;
    }
    loc_8 = eax;
    eax = eax + 1u;
L_102eb9ea: ;
    COW_AT(102eb9ea)
    if (rd8(eax) == 0xau) goto L_102eba00;
    COW_AT(102eb9ef)
    wr32(self + 0xc0u, eax + 1u);
    if (eax + 1u < rd32(self + 0xc4u))
    {
        eax = eax + 1u;
        goto L_102eb9ea;
    }
    eax = eax + 1u;
L_102eba00: ;
    COW_AT(102eba00)
    if ((int32_t)(eax - loc_8) <= 5)
    {
        ecx = eax - loc_8;
        goto L_102ebb5a;
    }
    COW_AT(102eba0e)
    wr32(sp0 - 0x124u, 5u);
    esi = loc_8;
    edi = COW_IMG(0x103468ccu);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = 0u;
        goto L_102ebb5a;
    }
    COW_AT(102eba23)
    if (loc_8 >= eax)
    {
        edx = 0u;
        goto L_102eba5d;
    }
    edx = 0u;
L_102eba28: ;
    COW_AT(102eba28)
    wr32(sp0 - 0x124u, (uint32_t)(int8_t)rd8(loc_8));
    g->eax = (uint32_t)(int8_t)rd8(loc_8);
    g->edx = edx;
    t6 = rd8(loc_8);
    g->esp = sp0 - 0x120u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x103147f1u), ecx, 1, (uint32_t)(int8_t)t6);
    t8 = g->edx;
    if (t7 != 0u)
    {
        ecx = rd32(sp0 - 0x124u);
        edx = t8;
        loc_8 = rd32(sp0 - 8u);
        goto L_102eba5d;
    }
    ecx = rd32(sp0 - 0x124u);
    edx = t8;
    COW_AT(102eba39)
    t9 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t9);
    if (t9 < rd32(self + 0xc0u))
    {
        loc_8 = t9;
        goto L_102eba28;
    }
    loc_8 = t9;
    COW_AT(102eba47)
L_102eba5d: ;
    COW_AT(102eba5d)
    if (loc_8 < rd32(self + 0xc0u)) goto L_102eba49;
L_102eba68: ;
    COW_AT(102eba68)
    eax = loc_8;
    esi = loc_8;
L_102eba86: ;
    COW_AT(102eba86)
    if (eax < rd32(self + 0xc0u)) goto L_102eba6f;
L_102eba8e: ;
    COW_AT(102eba8e)
    if (loc_8 >= rd32(self + 0xc0u))
    {
        eax = loc_8;
        ecx = loc_8;
        edx = rd32(self + 0xc0u);
        goto L_102ebaab;
    }
    eax = loc_8;
    ecx = loc_8;
    edx = rd32(self + 0xc0u);
L_102eba9d: ;
    COW_AT(102eba9d)
    if (rd8(eax) == 0x22u) goto L_102ebaab;
    COW_AT(102ebaa2)
    if (eax + 1u < rd32(self + 0xc0u))
    {
        eax = eax + 1u;
        goto L_102eba9d;
    }
    eax = eax + 1u;
L_102ebaab: ;
    COW_AT(102ebaab)
    wr32(sp0 - 0x14u, eax);
    if (eax >= edx)
    {
        loc_14 = eax;
    }
    else
    {
        loc_14 = eax;
    COW_AT(102ebab2)
        if (eax + 1u >= edx)
        {
            eax = eax + 1u;
            goto L_102ebac5;
        }
        eax = eax + 1u;
L_102ebab7: ;
    COW_AT(102ebab7)
        if (rd8(eax) == 0x22u) goto L_102ebac5;
    COW_AT(102ebabc)
        if (eax + 1u < rd32(self + 0xc0u))
        {
            eax = eax + 1u;
            goto L_102ebab7;
        }
        eax = eax + 1u;
    }
L_102ebac5: ;
    COW_AT(102ebac5)
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 8u, eax - loc_14);
    if (ecx - esi < 0x100u)
    {
        edx = ecx - esi;
        ecx = ecx - esi;
        loc_8 = eax - loc_14;
        loc_c = eax;
    }
    else
    {
        ecx = ecx - esi;
        loc_8 = eax - loc_14;
        loc_c = eax;
    COW_AT(102ebadb)
        edx = 0xffu;
    }
    COW_AT(102ebae0)
    if (loc_8 >= 0x100u)
    {
    COW_AT(102ebae5)
        wr32(sp0 - 8u, 0xffu);
        loc_8 = 0xffu;
    }
    COW_AT(102ebaec)
    if (edx != 0u)
    {
    COW_AT(102ebaf0)
        edi = sp0 - 0x114u;
        ecx = edx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = edx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr8(edx + sp0 - 0x114u, 0u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        g->eax = sp0 - 0x114u;
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t18 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x114u);
        t19 = g->edx;
        wr32(self + 0x1d0u, t18 - 1u);
        ecx = sp0 - 0x114u;
        edx = t19;
        loc_8 = rd32(sp0 - 8u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
    }
    COW_AT(102ebb22)
    if (loc_8 <= 1u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
    }
    else
    {
    COW_AT(102ebb2c)
        eax = self + 0x1d4u;
        esi = loc_14 + 1u;
L_102ebb4d: ;
    COW_AT(102ebb4d)
        if (esi < loc_c) goto L_102ebb38;
    COW_AT(102ebb52)
        wr8(eax, 0u);
        loc_4 = rd32(sp0 - 4u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
    }
    goto L_102ebc2d;
L_102eba49: ;
    COW_AT(102eba49)
    wr32(sp0 - 0x124u, (uint32_t)(int8_t)rd8(loc_8));
    g->eax = (uint32_t)(int8_t)rd8(loc_8);
    g->edx = edx;
    t10 = rd8(loc_8);
    g->esp = sp0 - 0x120u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x103147f1u), ecx, 1, (uint32_t)(int8_t)t10);
    t12 = g->edx;
    if (t11 == 0u)
    {
        ecx = rd32(sp0 - 0x124u);
        edx = t12;
        loc_8 = rd32(sp0 - 8u);
        goto L_102eba68;
    }
    ecx = rd32(sp0 - 0x124u);
    edx = t12;
    COW_AT(102eba5a)
    t13 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t13);
    loc_8 = t13;
    goto L_102eba5d;
L_102eba6f: ;
    COW_AT(102eba6f)
    wr32(sp0 - 0x124u, (uint32_t)(int8_t)rd8(loc_8));
    g->eax = (uint32_t)(int8_t)rd8(loc_8);
    g->edx = edx;
    t14 = rd8(loc_8);
    g->esp = sp0 - 0x120u;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x103147f1u), ecx, 1, (uint32_t)(int8_t)t14);
    t16 = g->edx;
    if (t15 != 0u)
    {
        loc_8 = rd32(sp0 - 8u);
        goto L_102eba8e;
    }
    ecx = rd32(sp0 - 0x124u);
    edx = t16;
    COW_AT(102eba80)
    t17 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t17);
    eax = t17;
    loc_8 = t17;
    goto L_102eba86;
L_102ebb38: ;
    COW_AT(102ebb38)
    t20 = rd8(esi);
    wr8(eax, (uint8_t)t20);
    if ((uint8_t)t20 != 0x5cu)
    {
        ecx = (ecx & 0xffffff00u) | t20;
        esi = esi + 1u;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | t20;
        esi = esi + 1u;
    COW_AT(102ebb42)
        if (esi < loc_c)
        {
    COW_AT(102ebb47)
            if (rd8(esi) == (uint8_t)ecx)
            {
    COW_AT(102ebb4b)
                esi = esi + 1u;
            }
        }
    }
    COW_AT(102ebb4c)
    eax = eax + 1u;
    goto L_102ebb4d;
L_102ebb5a: ;
    COW_AT(102ebb5a)
    wr32(sp0 - 0x124u, COW_IMG(0x103468a0u));
    loc_124 = COW_IMG(0x103468a0u);
L_102ebbf0: ;
    COW_AT(102ebbf0)
    wr32(sp0 - 0x128u, self);
    g->ebx = self;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    cow_cdecl(g, COW_IMG(0x102ea931u), 5, self, loc_124, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u));
    t21 = g->edx;
    ecx = rd32(sp0 - 0x124u);
    edx = t21;
    loc_4 = rd32(sp0 - 4u);
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    goto L_102ebc2d;
L_102ebb64: ;
    COW_AT(102ebb64)
    if ((uint8_t)edx == 0x3bu) goto L_102ebc03;
    COW_AT(102ebb6d)
    if ((uint8_t)edx != 0x2fu) goto L_102ebc66;
    COW_AT(102ebb76)
    if (rd32(self + 0xc0u) + 1u >= rd32(self + 0xc4u))
    {
        eax = rd32(self + 0xc0u);
        ecx = rd32(self + 0xc0u) + 1u;
        goto L_102ebc66;
    }
    eax = rd32(self + 0xc0u);
    ecx = rd32(self + 0xc0u) + 1u;
    esi = rd32(self + 0xc4u);
    COW_AT(102ebb8d)
    if (rd8(ecx) == (uint8_t)edx) goto L_102ebc03;
    COW_AT(102ebb91)
    if (ecx >= esi) goto L_102ebc66;
    COW_AT(102ebb99)
    if (rd8(ecx) != 0x2au) goto L_102ebc66;
    COW_AT(102ebba2)
    wr32(self + 0xc0u, eax + 2u);
    if (eax + 2u >= esi)
    {
        eax = eax + 2u;
        goto L_102ebbeb;
    }
L_102ebbaf: ;
    COW_AT(102ebbaf)
    if (rd8(rd32(self + 0xc0u)) != 0x2au)
    {
        eax = rd32(self + 0xc0u);
        edx = (edx & 0xffffff00u) | rd8(rd32(self + 0xc0u));
        goto L_102ebbc8;
    }
    eax = rd32(self + 0xc0u);
    edx = (edx & 0xffffff00u) | rd8(rd32(self + 0xc0u));
    COW_AT(102ebbbc)
    if (eax + 1u >= esi)
    {
        ecx = eax + 1u;
        goto L_102ebbc8;
    }
    ecx = eax + 1u;
    COW_AT(102ebbc3)
    if (rd8(ecx) == 0x2fu) goto L_102ebbfa;
L_102ebbc8: ;
    COW_AT(102ebbc8)
    if ((uint8_t)edx == 0xau)
    {
    COW_AT(102ebbcd)
        wr32(self + 0x1d0u, rd32(self + 0x1d0u) + 1u);
        wr32(self + 0xbcu, eax + 1u);
        ecx = eax + 1u;
    }
    COW_AT(102ebbdc)
    wr32(self + 0xc0u, eax + 1u);
    if (eax + 1u < rd32(self + 0xc4u)) goto L_102ebbaf;
    eax = eax + 1u;
L_102ebbeb: ;
    COW_AT(102ebbeb)
    wr32(sp0 - 0x124u, COW_IMG(0x1034687cu));
    loc_124 = COW_IMG(0x1034687cu);
    goto L_102ebbf0;
L_102ebbfa: ;
    COW_AT(102ebbfa)
    wr32(self + 0xc0u, rd32(self + 0xc0u) + 2u);
    loc_4 = rd32(sp0 - 4u);
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    goto L_102ebc2d;
L_102ebc03: ;
    COW_AT(102ebc03)
    wr32(self + 0xc0u, rd32(self + 0xc0u) + 1u);
    if (rd32(self + 0xc0u) >= rd32(self + 0xc4u))
    {
        loc_4 = rd32(sp0 - 4u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
        goto L_102ebc2d;
    }
    eax = rd32(self + 0xc0u);
L_102ebc17: ;
    COW_AT(102ebc17)
    if (rd8(eax) == 0xau)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
        goto L_102ebc2d;
    }
    COW_AT(102ebc1c)
    wr32(self + 0xc0u, eax + 1u);
    if (eax + 1u < rd32(self + 0xc4u))
    {
        ecx = eax + 1u;
        eax = eax + 1u;
        goto L_102ebc17;
    }
    ecx = eax + 1u;
    loc_4 = rd32(sp0 - 4u);
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    goto L_102ebc2d;
L_102ebc66: ;
    COW_AT(102ebc66)
    wr32(sp0 - 0x124u, (uint32_t)(int8_t)edx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t22 = cow_thiscall_cdecl(g, COW_IMG(0x1031471eu), ecx, 1, (uint32_t)(int8_t)edx);
    t23 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        ecx = rd32(sp0 - 0x124u);
        esi = (uint32_t)(int8_t)edx;
        edx = t23;
    COW_AT(102ebd6c)
        wr32(sp0 - 0x124u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t32 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), ecx, 1, esi);
        t33 = g->edx;
        if (t32 == 0u)
        {
            eax = rd32(self + 0xc0u);
    COW_AT(102ebe55)
            if (rd8(eax) == 0x2bu)
            {
    COW_AT(102ebe5a)
                wr32(self + 0x3d8u, 1u);
            }
    COW_AT(102ebe64)
            wr32(self + 0xc0u, eax + 1u);
            eax = esi;
            loc_4 = rd32(sp0 - 4u);
            loc_118 = rd32(sp0 - 0x118u);
            loc_11c = rd32(sp0 - 0x11cu);
            loc_120 = rd32(sp0 - 0x120u);
        }
        else
        {
            eax = rd32(self + 0xc0u);
            ecx = rd32(sp0 - 0x124u);
            edx = t33;
    COW_AT(102ebd81)
            wr32(sp0 - 0xcu, 0x10au);
            t34 = rd32(self + 0xc4u);
            wr32(self + 0xc0u, eax + 1u);
            if (eax + 1u >= t34)
            {
                esi = eax;
                loc_c = 0x10au;
                goto L_102ebdf4;
            }
            esi = eax;
            eax = eax + 1u;
            loc_c = 0x10au;
L_102ebd99: ;
    COW_AT(102ebd99)
            wr32(sp0 - 0x124u, (uint32_t)(int8_t)rd8(eax));
            g->eax = (uint32_t)(int8_t)rd8(eax);
            g->edx = edx;
            t35 = rd8(eax);
            g->esp = sp0 - 0x120u;
            t36 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), ecx, 1, (uint32_t)(int8_t)t35);
            t37 = g->edx;
            if (t36 != 0u)
            {
                edx = t37;
                loc_c = rd32(sp0 - 0xcu);
                goto L_102ebdde;
            }
            eax = t36;
            ecx = rd32(sp0 - 0x124u);
            edx = t37;
    COW_AT(102ebda7)
            if (rd32(self + 0xb4u) == eax) goto L_102ebdbf;
    COW_AT(102ebdaf)
            if (rd8(rd32(self + 0xc0u)) == 0x2eu) goto L_102ebdd7;
            eax = (rd32(self + 0xc0u) & 0xffffff00u) | rd8(rd32(self + 0xc0u));
    COW_AT(102ebdbb)
            if ((uint8_t)eax == 0x65u) goto L_102ebdd7;
L_102ebdbf: ;
    COW_AT(102ebdbf)
            if (rd8(rd32(self + 0xc0u)) == 0x2bu)
            {
                eax = rd32(self + 0xc0u);
                goto L_102ebdd1;
            }
            eax = rd32(self + 0xc0u);
            ecx = (ecx & 0xffffff00u) | rd8(rd32(self + 0xc0u));
    COW_AT(102ebdcc)
            if ((uint8_t)ecx != 0x2du)
            {
                loc_c = rd32(sp0 - 0xcu);
                goto L_102ebdf4;
            }
L_102ebdd1: ;
    COW_AT(102ebdd1)
            if (rd8(eax - 1u) != 0x65u)
            {
                loc_c = rd32(sp0 - 0xcu);
                goto L_102ebdf4;
            }
L_102ebdd7: ;
    COW_AT(102ebdd7)
            wr32(sp0 - 0xcu, 0x10bu);
            loc_c = 0x10bu;
L_102ebdde: ;
    COW_AT(102ebdde)
            wr32(self + 0xc0u, rd32(self + 0xc0u) + 1u);
            t38 = rd32(self + 0xc0u);
            if (t38 < rd32(self + 0xc4u))
            {
                eax = t38;
                ecx = t38;
                goto L_102ebd99;
            }
L_102ebdf4: ;
    COW_AT(102ebdf4)
            if (rd32(self + 0xc0u) - esi < 0x100u)
            {
                eax = rd32(self + 0xc0u) - esi;
            }
            else
            {
    COW_AT(102ebe03)
                eax = 0xffu;
            }
    COW_AT(102ebe08)
            edi = self + 0xc8u;
            ecx = eax >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = eax & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            wr8(eax + self + 0xc8u, 0u);
            if (rd32(self + 0xb4u) != 0u)
            {
    COW_AT(102ebe2f)
                if (rd32(self + 0xc0u) < rd32(self + 0xc4u))
                {
                    eax = rd32(self + 0xc0u);
    COW_AT(102ebe3d)
                    if (rd8(eax) == 0x66u)
                    {
    COW_AT(102ebe42)
                        wr32(sp0 - 0xcu, 0x10bu);
                        wr32(self + 0xc0u, eax + 1u);
                        loc_c = 0x10bu;
                    }
                }
            }
    COW_AT(102ebe50)
            eax = loc_c;
            loc_4 = rd32(sp0 - 4u);
            loc_118 = rd32(sp0 - 0x118u);
            loc_11c = rd32(sp0 - 0x11cu);
            loc_120 = rd32(sp0 - 0x120u);
        }
    }
    else
    {
        ecx = rd32(sp0 - 0x124u);
        edx = t23;
    COW_AT(102ebc78)
        t24 = rd32(self + 0xc0u) + 1u;
        t25 = rd32(self + 0xc0u);
        t26 = rd32(self + 0xc4u);
        wr32(self + 0xc0u, t24);
        if (t25 + 1u >= t26)
        {
            esi = t25;
            goto L_102ebcbe;
        }
        eax = t24;
        esi = t25;
L_102ebc8f: ;
    COW_AT(102ebc8f)
        wr32(sp0 - 0x124u, (uint32_t)(int8_t)rd8(eax));
        g->eax = (uint32_t)(int8_t)rd8(eax);
        g->edx = edx;
        t27 = rd8(eax);
        g->esp = sp0 - 0x120u;
        t28 = cow_thiscall_cdecl(g, COW_IMG(0x10314841u), ecx, 1, (uint32_t)(int8_t)t27);
        t29 = g->edx;
        if (t28 != 0u)
        {
            edx = t29;
            goto L_102ebca8;
        }
        edx = t29;
    COW_AT(102ebc9d)
        if (rd8(rd32(self + 0xc0u)) != 0x5fu) goto L_102ebcbe;
L_102ebca8: ;
    COW_AT(102ebca8)
        wr32(self + 0xc0u, rd32(self + 0xc0u) + 1u);
        t30 = rd32(self + 0xc0u);
        if (t30 < rd32(self + 0xc4u))
        {
            eax = t30;
            ecx = t30;
            goto L_102ebc8f;
        }
L_102ebcbe: ;
    COW_AT(102ebcbe)
        if (rd32(self + 0xc0u) - esi < 0x100u)
        {
            eax = rd32(self + 0xc0u) - esi;
        }
        else
        {
    COW_AT(102ebccd)
            eax = 0xffu;
        }
    COW_AT(102ebcd2)
        edi = self + 0xc8u;
        ecx = eax >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = eax & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr8(eax + self + 0xc8u, 0u);
        wr32(sp0 - 0x124u, 3u);
        wr32(self + 0x3d8u, 1u);
        esi = self + 0xc8u;
        edi = COW_IMG(0x10346878u);
        ecx = 3u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf)
        {
    COW_AT(102ebd1a)
            wr32(sp0 - 0x124u, 3u);
            esi = self + 0xc8u;
            edi = COW_IMG(0x10346874u);
            ecx = 3u;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
            if (!zf)
            {
    COW_AT(102ebd34)
                wr32(sp0 - 0x124u, 4u);
                esi = self + 0xc8u;
                edi = COW_IMG(0x103465a4u);
                ecx = 4u;
                cf = 0u;
                pf = PARITY(0u);
                af = 0u;
                zf = 1u;
                sf = 0u;
                of = 0u;
                while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                if (!zf)
                {
    COW_AT(102ebd4e)
                    g->eax = 0u;
                    g->esp = sp0 - 0x120u;
                    t31 = cow_thiscall(g, COW_IMG(0x102eaa67u), self, 0);
                    if (t31 != 0x109u)
                    {
                        eax = t31;
                        loc_4 = rd32(sp0 - 4u);
                        loc_118 = rd32(sp0 - 0x118u);
                        loc_11c = rd32(sp0 - 0x11cu);
                        loc_120 = rd32(sp0 - 0x120u);
                    }
                    else
                    {
                        eax = t31;
    COW_AT(102ebd60)
                        wr32(self + 0x3d8u, 0u);
                        loc_4 = rd32(sp0 - 4u);
                        loc_118 = rd32(sp0 - 0x118u);
                        loc_11c = rd32(sp0 - 0x11cu);
                        loc_120 = rd32(sp0 - 0x120u);
                    }
                }
                else
                {
    COW_AT(102ebd44)
                    eax = 0x103u;
                    loc_4 = rd32(sp0 - 4u);
                    loc_118 = rd32(sp0 - 0x118u);
                    loc_11c = rd32(sp0 - 0x11cu);
                    loc_120 = rd32(sp0 - 0x120u);
                }
            }
            else
            {
    COW_AT(102ebd2a)
                eax = 0x102u;
                loc_4 = rd32(sp0 - 4u);
                loc_118 = rd32(sp0 - 0x118u);
                loc_11c = rd32(sp0 - 0x11cu);
                loc_120 = rd32(sp0 - 0x120u);
            }
        }
        else
        {
    COW_AT(102ebd10)
            eax = 0x101u;
            loc_4 = rd32(sp0 - 4u);
            loc_118 = rd32(sp0 - 0x118u);
            loc_11c = rd32(sp0 - 0x11cu);
            loc_120 = rd32(sp0 - 0x120u);
        }
    }
    goto L_102ebe72;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102eb95f(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102eb979u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb989u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb9a1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb9afu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb9bau:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb9c6u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb9d8u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb9eau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb9efu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba00u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba0eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba23u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba28u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba39u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba47u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba49u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba5au:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba5du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba68u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba6fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba80u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba86u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba8eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eba9du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebaa2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebaabu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebab2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebab7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebabcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebac5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebadbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->eax = 0x100u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebae0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->eax = 0x100u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebae5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebaecu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebaf0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb22u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb2cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb38u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb42u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb47u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb4bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb4cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb4du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb52u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb5au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb64u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb6du:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb76u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb8du:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb91u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebb99u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebba2u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebbafu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebbbcu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebbc3u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebbc8u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebbcdu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebbdcu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebbebu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebbf0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x124u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebbfau:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebc03u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebc17u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebc1cu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebc2du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebc3fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebc4bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebc66u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebc78u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebc8fu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebc9du:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebca8u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebcbeu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebccdu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebcd2u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebd10u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebd1au:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->eax = self + 0xc8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebd2au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebd34u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->eax = self + 0xc8u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebd44u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
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
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebd4eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_124;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x120u;
        g->eax = 0u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebd60u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebd6cu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebd81u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebd99u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebda7u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebdafu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebdbbu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebdbfu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebdccu:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebdd1u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebdd7u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebddeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebdf4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebe03u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebe08u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebe2fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebe3du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebe42u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebe50u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
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
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebe55u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebe5au:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebe64u:
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebe6fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ebe72u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
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
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x120u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102eb95f(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102eb95f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
