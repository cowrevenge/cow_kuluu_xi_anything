/* f_0x102f182d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102f182d(Guest* g)
{
    uint32_t cf;
    double d1;
    double d10;
    double d16;
    double d2;
    double d24;
    double d25;
    double d29;
    double d30;
    double d46;
    double d5;
    double d50;
    double d51;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    double loc_24_d;
    double loc_2c_d;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f184eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x30u); goto E_102f184e;
    case 0x102f185bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f185b;
    case 0x102f1870u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1870;
    case 0x102f1880u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1880;
    case 0x102f1882u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1882;
    case 0x102f1891u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1891;
    case 0x102f189du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f189d;
    case 0x102f18aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f18ae;
    case 0x102f18bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f18bf;
    case 0x102f18d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f18d3;
    case 0x102f18d8u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f18d8;
    case 0x102f18e1u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f18e1;
    case 0x102f18f3u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f18f3;
    case 0x102f18f5u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f18f5;
    case 0x102f1900u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1900;
    case 0x102f1904u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1904;
    case 0x102f190bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f190b;
    case 0x102f1911u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1911;
    case 0x102f191bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f191b;
    case 0x102f191eu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f191e;
    case 0x102f1924u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1924;
    case 0x102f192cu: edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f192c;
    case 0x102f192fu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f192f;
    case 0x102f1934u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1934;
    case 0x102f1937u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1937;
    case 0x102f193cu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f193c;
    case 0x102f193fu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f193f;
    case 0x102f196cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f196c;
    case 0x102f197cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f197c;
    case 0x102f197eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f197e;
    case 0x102f198du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f198d;
    case 0x102f19a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f19a4;
    case 0x102f19a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f19a8;
    case 0x102f19adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f19ad;
    case 0x102f19b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f19b4;
    case 0x102f19cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f19ca;
    case 0x102f19ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f19cc;
    case 0x102f19e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f19e7;
    case 0x102f19edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f19ed;
    case 0x102f19f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_d = rdf64(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f19f0;
    case 0x102f1a07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_d = rdf64(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1a07;
    case 0x102f1a0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_d = rdf64(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1a0f;
    case 0x102f1a16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_d = rdf64(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1a16;
    case 0x102f1a30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_d = rdf64(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1a30;
    case 0x102f1a53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_d = rdf64(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1a53;
    case 0x102f1a5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_d = rdf64(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1a5f;
    case 0x102f1a68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_d = rdf64(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1a68;
    case 0x102f1a75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_d = rdf64(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1a75;
    case 0x102f1a96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_d = rdf64(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1a96;
    case 0x102f1a9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1a9b;
    case 0x102f1aa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1aa3;
    case 0x102f1ab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1ab5;
    case 0x102f1abcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1abc;
    case 0x102f1adau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1ada;
    case 0x102f1ae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1ae4;
    case 0x102f1aeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1aea;
    case 0x102f1af8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1af8;
    case 0x102f1b09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1b09;
    case 0x102f1b26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1b26;
    case 0x102f1b31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_d = rdf64(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x30u); goto E_102f1b31;
    case 0x102f1b33u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x30u); loc_2c_d = rdf64(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x30u); goto E_102f1b33;
    default: break;
    }
#endif

    COW_AT(102f182d)
    d1 = (double)rdf32(rd32(sp0 + 4u) + 0x130u);
    if (d1 == rdf64(COW_IMG(0x1032a108u)))
    {
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x1032a108u)), 0u);
        esi = rd32(sp0 + 4u);
    COW_AT(102f184e)
        if (rd8(esi + 0x117u) > 8u)
        {
    COW_AT(102f18d8)
            if ((rd8(esi + 0x116u) & 2u) == 0u)
            {
    COW_AT(102f1904)
                eax = rd8(esi + 0x153u);
                edx = in_edx;
            }
            else
            {
    COW_AT(102f18e1)
                if ((int32_t)rd8(esi + 0x151u) <= (int32_t)rd8(esi + 0x150u))
                {
                    eax = rd8(esi + 0x150u);
                }
                else
                {
                    edx = rd8(esi + 0x151u);
    COW_AT(102f18f3)
                    eax = edx;
                }
    COW_AT(102f18f5)
                if ((int32_t)rd8(esi + 0x152u) <= (int32_t)eax)
                {
                    edx = rd8(esi + 0x152u);
                }
                else
                {
                    edx = rd8(esi + 0x152u);
    COW_AT(102f1900)
                    eax = edx;
                }
            }
    COW_AT(102f190b)
            if ((int32_t)eax <= 0)
            {
    COW_AT(102f191b)
                loc_8 = 0u;
            }
            else
            {
    COW_AT(102f1911)
                edx = 0x10u - eax;
                loc_8 = 0x10u - eax;
            }
    COW_AT(102f191e)
            if ((rd8(esi + 0x61u) & 4u) != 0u)
            {
    COW_AT(102f1924)
                if ((int32_t)loc_8 < 5)
                {
    COW_AT(102f192c)
                    loc_8 = 5u;
                }
            }
    COW_AT(102f192f)
            if ((int32_t)loc_8 > 8)
            {
    COW_AT(102f1934)
                loc_8 = 8u;
            }
    COW_AT(102f1937)
            if ((int32_t)loc_8 < 0)
            {
    COW_AT(102f193c)
                loc_8 = 0u;
            }
    COW_AT(102f193f)
            wr32(esi + 0x12cu, (uint8_t)loc_8);
            t15 = 1u << (8u - loc_8 & 0x1fu);
            d16 = (double)rdf32(esi + 0x134u);
            if ((cow_fsw(g, d16, rdf64(COW_IMG(0x10340b18u)), 0u) >> 8u & 0x41u) != 0u)
            {
                ecx = esi + 0x134u;
                ebx = t15;
                loc_14 = 8u - loc_8;
                loc_18 = t15;
    COW_AT(102f197c)
                x0 = 1.0;
            }
            else
            {
                ecx = esi + 0x134u;
                ebx = t15;
                loc_14 = 8u - loc_8;
                loc_18 = t15;
    COW_AT(102f196c)
                x0 = fr(g, rdf64(COW_IMG(0x1032a100u)) / fr(g, (double)rdf32(ecx) * (double)rdf32(esi + 0x130u)));
            }
    COW_AT(102f197e)
            g->eax = ebx << 2u;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t17 = cow_cdecl(g, COW_IMG(0x102f7637u), 2, esi, ebx << 2u);
            t18 = g->edx;
            eax = t17;
            edx = t18;
            loc_3c = ebx << 2u;
            loc_24_d = x0;
            loc_40 = esi;
    COW_AT(102f198d)
            t19 = rd16(esi + 0x60u);
            wr32(esi + 0x144u, eax);
            wr32(sp0 + 4u, 0u);
            if ((t19 & 0x480u) == 0u)
            {
                ecx = loc_3c;
    COW_AT(102f1a9b)
                if ((int32_t)ebx > 0)
                {
    COW_AT(102f1aa3)
                    t41 = COW_IMG(0x103cd400u) + loc_8 * 4u;
                    eax = t41;
                    loc_1c = t41;
L_102f1ab5: ;
    COW_AT(102f1ab5)
                    g->eax = eax;
                    g->esp = sp0 - 0x38u;
                    t42 = cow_cdecl(g, COW_IMG(0x102f7637u), 2, esi, 0x200u);
                    eax = t42;
                    loc_40 = esi;
    COW_AT(102f1abc)
                    t43 = rd32(sp0 + 4u);
                    t44 = rd32(esi + 0x144u);
                    wr32(t44 + t43 * 4u, eax);
                    t45 = rd32(loc_1c) * t43 >> 4u;
                    ecx = t43;
                    edx = t44;
                    ebx = 0u;
                    loc_10 = t45;
L_102f1ada: ;
    COW_AT(102f1ada)
                    if ((int32_t)loc_10 >= 0)
                    {
                        eax = loc_10;
                        x0 = (double)(int32_t)loc_10;
                    }
                    else
                    {
                        eax = loc_10;
                        x0 = (double)(int32_t)loc_10;
    COW_AT(102f1ae4)
                        x0 = fr(g, x0 + rdf64(COW_IMG(0x103480f8u)));
                    }
    COW_AT(102f1aea)
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    d46 = fr(g, x0 * rdf64(COW_IMG(0x10342dd8u)));
                    fpush(g, d46);
                    fpush(g, loc_24_d);
                    g->esp = sp0 - 0x1cu;
                    t47 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, in_edi, in_ebx, in_esi, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), cow_dlo(loc_24_d), cow_dhi(loc_24_d));
                    t48 = g->ecx;
                    t49 = g->edx;
                    d50 = cow_take_float(g);
                    eax = t47;
                    ecx = t48;
                    edx = t49;
                    x0 = d50;
    COW_AT(102f1af8)
                    d51 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dd0u))) + rdf64(COW_IMG(0x1032ab90u)));
                    fpush(g, d51);
                    g->esp = sp0 - 0x38u;
                    t52 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    eax = t52;
    COW_AT(102f1b09)
                    t53 = rd32(rd32(esi + 0x144u) + rd32(sp0 + 4u) * 4u);
                    t54 = rd32(sp0 + 4u);
                    wr16(ebx + t53, (uint16_t)eax);
                    if ((int32_t)(ebx + 2u) < 512)
                    {
                        ecx = t53;
                        edx = t54;
                        ebx = ebx + 2u;
                        loc_10 = loc_10 + 0x100u;
                        goto L_102f1ada;
                    }
                    ecx = t53;
                    edx = t54;
    COW_AT(102f1b26)
                    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
                    if ((int32_t)rd32(sp0 + 4u) < (int32_t)loc_18)
                    {
                        eax = rd32(sp0 + 4u);
                        goto L_102f1ab5;
                    }
                }
            }
            else
            {
                ecx = loc_3c;
    COW_AT(102f19a4)
                if ((int32_t)ebx > 0)
                {
    COW_AT(102f19a8)
L_102f19ad: ;
    COW_AT(102f19ad)
                    g->eax = eax;
                    g->esp = sp0 - 0x38u;
                    t20 = cow_cdecl(g, COW_IMG(0x102f7637u), 2, esi, 0x200u);
                    eax = t20;
                    loc_40 = esi;
    COW_AT(102f19b4)
                    t21 = rd32(sp0 + 4u);
                    wr32(sp0 + 4u, t21 + 1u);
                    t22 = rd32(esi + 0x144u);
                    t23 = rd32(sp0 + 4u);
                    wr32(t21 * 4u + t22, eax);
                    if ((int32_t)t23 < (int32_t)ebx)
                    {
                        ecx = t22;
                        edx = t21;
                        goto L_102f19ad;
                    }
                    ecx = t22;
                    edx = t21;
    COW_AT(102f19ca)
                }
    COW_AT(102f19cc)
                wr32(sp0 + 4u, 0u);
                d24 = fr(g, 1.0 / loc_24_d);
                if ((int32_t)(ebx << 8u) >= 0)
                {
                    loc_18 = ebx << 8u;
                    loc_24_d = d24;
                    x0 = (double)(int32_t)(ebx << 8u);
                }
                else
                {
                    loc_18 = ebx << 8u;
                    loc_24_d = d24;
                    x0 = (double)(int32_t)(ebx << 8u);
    COW_AT(102f19e7)
                    x0 = fr(g, x0 + rdf64(COW_IMG(0x103480f8u)));
                }
    COW_AT(102f19ed)
                edi = 0u;
                loc_2c_d = x0;
L_102f19f0: ;
    COW_AT(102f19f0)
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                d25 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) + rdf64(COW_IMG(0x1032ab90u))) * rdf64(COW_IMG(0x10342de0u)));
                fpush(g, d25);
                fpush(g, loc_24_d);
                g->esp = sp0 - 0x1cu;
                t26 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, in_edi, in_ebx, in_esi, cow_dlo(loc_2c_d), cow_dhi(loc_2c_d), cow_dlo(loc_24_d), cow_dhi(loc_24_d));
                t27 = g->ecx;
                t28 = g->edx;
                d29 = cow_take_float(g);
                eax = t26;
                ecx = t27;
                edx = t28;
                x0 = d29;
    COW_AT(102f1a07)
                g->ecx = ecx;
                g->edx = edx;
                d30 = fr(g, x0 * loc_2c_d);
                fpush(g, d30);
                g->esp = sp0 - 0x38u;
                t31 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t32 = g->ecx;
                t33 = g->edx;
                eax = t31;
                ecx = t32;
                edx = t33;
    COW_AT(102f1a0f)
                if (edi <= eax)
                {
                    loc_1c = eax;
    COW_AT(102f1a16)
                    t34 = (uint32_t)(uint8_t)rd32(sp0 + 4u) << 8u;
                    t35 = t34 | rd32(sp0 + 4u);
                    t36 = (uint32_t)((int32_t)0xffu >> ((loc_8 & 0x1fu) < 0x20u ? loc_8 & 0x1fu : 0x1fu));
                    cf = (loc_8 & 0x1fu) != 0u ? (uint32_t)((int32_t)0xffu >> ((loc_8 & 0x1fu) < 0x20u ? loc_8 & 0x1fu : 0x1fu) - ((loc_8 & 0x1fu) < 0x20u)) & 1u : 0u;
                    pf = (loc_8 & 0x1fu) != 0u ? PARITY((uint8_t)(uint32_t)((int32_t)0xffu >> ((loc_8 & 0x1fu) < 0x20u ? loc_8 & 0x1fu : 0x1fu))) : PARITY((uint8_t)(t34 | rd32(sp0 + 4u)));
                    zf = (loc_8 & 0x1fu) != 0u ? (uint32_t)((int32_t)0xffu >> ((loc_8 & 0x1fu) < 0x20u ? loc_8 & 0x1fu : 0x1fu)) == 0u : (t34 | rd32(sp0 + 4u)) == 0u;
                    sf = (loc_8 & 0x1fu) != 0u ? (int32_t)(uint32_t)((int32_t)0xffu >> ((loc_8 & 0x1fu) < 0x20u ? loc_8 & 0x1fu : 0x1fu)) < 0 : (int32_t)(t34 | rd32(sp0 + 4u)) < 0;
                    of = 0u;
                    loc_c = t36;
                    loc_10 = t35;
L_102f1a30: ;
    COW_AT(102f1a30)
                    t37 = rd32((loc_c & edi) * 4u + rd32(esi + 0x144u));
                    t38 = rd32(esi + 0x144u);
                    wr16((edi >> (loc_14 & 0x1fu)) * 2u + t37, (uint16_t)loc_10);
                    if (edi + 1u <= loc_1c)
                    {
                        cf = edi + 1u < loc_1c;
                        pf = PARITY((uint8_t)(edi + 1u - loc_1c));
                        zf = edi + 1u == loc_1c;
                        sf = (int32_t)(edi + 1u - loc_1c) < 0;
                        of = ((edi + 1u ^ loc_1c) & (edi + 1u ^ edi + 1u - loc_1c)) >> 0x1fu;
                        edi = edi + 1u;
                        goto L_102f1a30;
                    }
                    eax = t37;
                    ecx = (loc_14 & 0xffff0000u) | (uint16_t)loc_10;
                    edx = t38;
                    edi = edi + 1u;
                }
    COW_AT(102f1a53)
                wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
                if ((int32_t)rd32(sp0 + 4u) < 256) goto L_102f19f0;
    COW_AT(102f1a5f)
                if (edi < loc_18)
                {
                    cf = edi < loc_18;
                    pf = PARITY((uint8_t)(edi - loc_18));
                    zf = edi == loc_18;
                    sf = (int32_t)(edi - loc_18) < 0;
                    of = ((edi ^ loc_18) & (edi ^ edi - loc_18)) >> 0x1fu;
    COW_AT(102f1a68)
                    t39 = (uint32_t)((int32_t)0xffu >> ((loc_8 & 0x1fu) < 0x20u ? loc_8 & 0x1fu : 0x1fu));
                    cf = (loc_8 & 0x1fu) != 0u ? (uint32_t)((int32_t)0xffu >> ((loc_8 & 0x1fu) < 0x20u ? loc_8 & 0x1fu : 0x1fu) - ((loc_8 & 0x1fu) < 0x20u)) & 1u : cf;
                    pf = (loc_8 & 0x1fu) != 0u ? PARITY((uint8_t)(uint32_t)((int32_t)0xffu >> ((loc_8 & 0x1fu) < 0x20u ? loc_8 & 0x1fu : 0x1fu))) : pf;
                    zf = (loc_8 & 0x1fu) != 0u ? (uint32_t)((int32_t)0xffu >> ((loc_8 & 0x1fu) < 0x20u ? loc_8 & 0x1fu : 0x1fu)) == 0u : zf;
                    sf = (loc_8 & 0x1fu) != 0u ? (int32_t)(uint32_t)((int32_t)0xffu >> ((loc_8 & 0x1fu) < 0x20u ? loc_8 & 0x1fu : 0x1fu)) < 0 : sf;
                    of = (loc_8 & 0x1fu) != 0u ? 0u : of;
                    loc_c = t39;
L_102f1a75: ;
    COW_AT(102f1a75)
                    t40 = rd32(esi + 0x144u);
                    wr16((edi >> (loc_14 & 0x1fu)) * 2u + rd32((loc_c & edi) * 4u + t40), rd16((edi >> (loc_14 & 0x1fu)) * 2u + rd32((loc_c & edi) * 4u + t40)) | 0xffffu);
                    if (edi + 1u < loc_18)
                    {
                        cf = edi + 1u < loc_18;
                        pf = PARITY((uint8_t)(edi + 1u - loc_18));
                        zf = edi + 1u == loc_18;
                        sf = (int32_t)(edi + 1u - loc_18) < 0;
                        of = ((edi + 1u ^ loc_18) & (edi + 1u ^ edi + 1u - loc_18)) >> 0x1fu;
                        edi = edi + 1u;
                        goto L_102f1a75;
                    }
                    edx = t40;
    COW_AT(102f1a96)
                }
            }
        }
        else
        {
    COW_AT(102f185b)
            d2 = (double)rdf32(esi + 0x134u);
            if ((cow_fsw(g, d2, rdf64(COW_IMG(0x10340b18u)), 0u) >> 8u & 0x41u) != 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, rdf64(COW_IMG(0x10340b18u)), 0u);
                ecx = esi + 0x134u;
    COW_AT(102f1880)
                x0 = 1.0;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, rdf64(COW_IMG(0x10340b18u)), 0u);
                ecx = esi + 0x134u;
    COW_AT(102f1870)
                x0 = fr(g, rdf64(COW_IMG(0x1032a100u)) / fr(g, (double)rdf32(ecx) * (double)rdf32(esi + 0x130u)));
            }
    COW_AT(102f1882)
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 0x38u;
            t3 = cow_cdecl(g, COW_IMG(0x102f7637u), 2, esi, 0x100u);
            t4 = g->edx;
            eax = t3;
            edx = t4;
            loc_24_d = x0;
            loc_40 = esi;
    COW_AT(102f1891)
            wr32(sp0 + 4u, 0u);
            wr32(esi + 0x138u, eax);
            ecx = 0x100u;
L_102f189d: ;
    COW_AT(102f189d)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            d5 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * rdf64(COW_IMG(0x1033cd88u)));
            fpush(g, d5);
            fpush(g, loc_24_d);
            g->esp = sp0 - 0x1cu;
            t6 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, in_edi, in_ebx, in_esi, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), cow_dlo(loc_24_d), cow_dhi(loc_24_d));
            t7 = g->ecx;
            t8 = g->edx;
            d9 = cow_take_float(g);
            eax = t6;
            ecx = t7;
            edx = t8;
            x0 = d9;
    COW_AT(102f18ae)
            d10 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dc8u))) + rdf64(COW_IMG(0x1032ab90u)));
            fpush(g, d10);
            g->esp = sp0 - 0x38u;
            t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            eax = t11;
    COW_AT(102f18bf)
            t12 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t12 + 1u);
            t13 = rd32(esi + 0x138u);
            t14 = rd32(sp0 + 4u);
            wr8(t12 + t13, (uint8_t)eax);
            if ((int32_t)t14 < 256)
            {
                ecx = t13;
                edx = t12;
                goto L_102f189d;
            }
            edx = t12;
    COW_AT(102f18d3)
        }
    COW_AT(102f1b31)
    }
    COW_AT(102f1b33)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f182d(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f184eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f185bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1870u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1880u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1882u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1891u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_24_d;
        uint32_t loc_40;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        wr32(sp0 - 0x3cu, 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102f189du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102f18aeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102f18bfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102f18d3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f18d8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f18e1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f18f3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f18f5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1900u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1904u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f190bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1911u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f191bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f191eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f1924u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f192cu:
    {
        uint32_t cf;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->eax = 5u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f192fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f1934u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f1937u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f193cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f193fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f196cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f197cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f197eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_3c;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f198du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f19a4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f19a8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f19adu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102f19b4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_24_d;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        wr32(sp0 - 0x3cu, 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102f19cau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f19ccu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f19e7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f19edu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f19f0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        double loc_2c_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_d = rdf64(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1a07u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        double loc_2c_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_d = rdf64(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1a0fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        double loc_2c_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_d = rdf64(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1a16u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        double loc_2c_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_d = rdf64(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1a30u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        double loc_2c_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_d = rdf64(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1a53u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        double loc_2c_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_d = rdf64(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1a5fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        double loc_2c_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_d = rdf64(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1a68u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        double loc_2c_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_d = rdf64(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1a75u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        double loc_2c_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_d = rdf64(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1a96u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        double loc_2c_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_d = rdf64(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1a9bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f1aa3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1ab5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102f1abcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        wr32(sp0 - 0x3cu, 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102f1adau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102f1ae4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102f1aeau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102f1af8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102f1b09u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102f1b26u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102f1b31u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        double loc_2c_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_d = rdf64(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1b33u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double loc_24_d;
        double loc_2c_d;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_d = rdf64(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f182d(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102f182d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
