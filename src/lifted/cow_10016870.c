/* f_0x10016870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10016870(Guest* g)
{
    double d24;
    double d33;
    double d35;
    double d36;
    double d38;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_54;
    double loc_58_f;
    uint32_t loc_60;
    double loc_60_f;
    uint32_t loc_64;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t34;
    uint32_t t37;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 148u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10016884u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016884;
    case 0x1001688au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_1001688a;
    case 0x10016896u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016896;
    case 0x100168a5u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100168a5;
    case 0x100168afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100168af;
    case 0x100168b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100168b8;
    case 0x100168c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100168c5;
    case 0x100168ceu: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100168ce;
    case 0x100168d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100168d8;
    case 0x100168e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100168e1;
    case 0x100168eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100168ee;
    case 0x100168f7u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100168f7;
    case 0x1001690bu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_1001690b;
    case 0x1001691cu: eax = g->eax; self = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_1001691c;
    case 0x1001692bu: eax = g->eax; self = g->ecx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_1001692b;
    case 0x1001695au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_1001695a;
    case 0x10016964u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); goto E_10016964;
    case 0x10016997u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10016997;
    case 0x100169acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100169ac;
    case 0x100169b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100169b4;
    case 0x100169bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100169bd;
    case 0x100169c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100169c4;
    case 0x100169e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100169e7;
    case 0x100169edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100169ed;
    case 0x10016a0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); goto E_10016a0f;
    case 0x10016a15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); goto E_10016a15;
    case 0x10016a52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_60_f = rdf32(sp0 - 0x60u); loc_58_f = rdf32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_10016a52;
    case 0x10016a57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_60_f = rdf32(sp0 - 0x60u); loc_58_f = rdf32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_10016a57;
    case 0x10016a8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_60_f = rdf32(sp0 - 0x60u); loc_58_f = rdf32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_10016a8e;
    case 0x10016ab7u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); g->ebp = rd32(sp0 - 0x70u); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016ab7;
    case 0x10016ac3u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016ac3;
    case 0x10016ac5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016ac5;
    case 0x10016aceu: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016ace;
    case 0x10016ad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016ad5;
    case 0x10016ae3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016ae3;
    case 0x10016aefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016aef;
    case 0x10016afdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016afd;
    case 0x10016b09u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b09;
    case 0x10016b1bu: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b1b;
    case 0x10016b21u: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b21;
    case 0x10016b2cu: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b2c;
    case 0x10016b32u: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b32;
    case 0x10016b35u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b35;
    case 0x10016b40u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b40;
    case 0x10016b49u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b49;
    case 0x10016b56u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b56;
    case 0x10016b68u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b68;
    case 0x10016b71u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b71;
    case 0x10016b7cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b7c;
    case 0x10016b8bu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b8b;
    case 0x10016b9au: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016b9a;
    case 0x10016bb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10016bb6;
    case 0x10016bbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10016bbf;
    case 0x10016bc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10016bc4;
    case 0x10016bd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10016bd2;
    case 0x10016c41u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016c41;
    case 0x10016c4cu: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016c4c;
    case 0x10016c55u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016c55;
    case 0x10016c64u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016c64;
    case 0x10016c74u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016c74;
    case 0x10016c83u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); g->ebp = rd32(sp0 - 0x70u); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016c83;
    case 0x10016c8fu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); g->ebp = rd32(sp0 - 0x70u); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016c8f;
    case 0x10016c9bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016c9b;
    case 0x10016ca3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016ca3;
    case 0x10016ca5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016ca5;
    case 0x10016caeu: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016cae;
    case 0x10016cb5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016cb5;
    case 0x10016cc1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016cc1;
    case 0x10016ccbu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016ccb;
    case 0x10016cdcu: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016cdc;
    case 0x10016ce7u: in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016ce7;
    case 0x10016cebu: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016ceb;
    case 0x10016cf4u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016cf4;
    case 0x10016cffu: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016cff;
    case 0x10016d06u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016d06;
    case 0x10016d12u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016d12;
    case 0x10016d1au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016d1a;
    case 0x10016d26u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); g->ebp = rd32(sp0 - 0x70u); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016d26;
    case 0x10016d30u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); g->ebp = rd32(sp0 - 0x70u); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016d30;
    case 0x10016d37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); goto E_10016d37;
    case 0x10016d5du: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); g->ebp = rd32(sp0 - 0x70u); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016d5d;
    case 0x10016d67u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); g->ebp = rd32(sp0 - 0x70u); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016d67;
    case 0x10016d6eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); g->ebp = rd32(sp0 - 0x70u); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016d6e;
    case 0x10016d73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10016d73;
    default: break;
    }
#endif

    COW_AT(10016870)
    wr32(sp0 - 0x6cu, in_ebx);
    wr32(sp0 - 0x70u, in_ebp);
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    if (arg2 > 0x46u) goto L_10016ab7;
    COW_AT(10016884)
    if (arg2 == 0x46u) goto L_1001690b;
    COW_AT(1001688a)
    if (arg2 - 2u > 0x12u) goto L_10016c9b;
    COW_AT(10016896)
    t1 = rd32(COW_IMG(0x10016d84u) + rd8(COW_IMG(0x10016d98u) + arg2 - 2u) * 4u);
    switch (t1 - RD)
    {
    case 0x100168a5u: ecx = rd8(COW_IMG(0x10016d98u) + arg2 - 2u); goto L_100168a5;
    case 0x100168ceu: ecx = rd8(COW_IMG(0x10016d98u) + arg2 - 2u); goto L_100168ce;
    case 0x100168f7u: ecx = rd8(COW_IMG(0x10016d98u) + arg2 - 2u); goto L_100168f7;
    case 0x10016c9bu: goto L_10016c9b;
    case 0x10016d73u: edx = in_edx; goto L_10016d73;
    default: rt_fatal(g, COW_IMG(0x1001689eu), "switch");
    }
    return 0;
L_100168a5: ;
    COW_AT(100168a5)
    g->eax = arg2 - 2u;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x78u;
    t6 = cow_stdcall(g, rd32(COW_IMG(0x103291a4u)), 0);   /* kernel32.dll!GetCurrentProcess */
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
    COW_AT(100168af)
        wr32(sp0 - 0x7cu, 0x20u);
        wr32(sp0 - 0x80u, eax);
        g->esp = sp0 - 0x78u;
        cow_stdcall(g, rd32(COW_IMG(0x103291a0u)), 2, eax, 0x20u);   /* kernel32.dll!SetPriorityClass */
    }
    COW_AT(100168b8)
    if (rd32(COW_IMG(0x103d3c64u)) == 0u)
    {
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_78 = rd32(sp0 - 0x78u);
    }
    else
    {
        eax = rd32(COW_IMG(0x103d3c64u));
    COW_AT(100168c5)
        wr8(eax + 0x1cu, 1u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_78 = rd32(sp0 - 0x78u);
    }
L_10016d37: ;
    COW_AT(10016d37)
    wr32(sp0 - 0x7cu, arg4);
    wr32(sp0 - 0x80u, arg3);
    wr32(sp0 - 0x84u, arg2);
    wr32(sp0 - 0x88u, arg1);
    g->eax = arg3;
    g->edx = arg4;
    g->esp = sp0 - 0x78u;
    t50 = cow_stdcall(g, rd32(COW_IMG(0x103293d4u)), 4, arg1, arg2, arg3, arg4);   /* user32.dll!DefWindowProcA */
    t51 = g->edx;
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 0x70u);
    g->edx = t51;
    return t50;
L_100168ce: ;
    COW_AT(100168ce)
    g->eax = arg2 - 2u;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x78u;
    t3 = cow_stdcall(g, rd32(COW_IMG(0x103291a4u)), 0);   /* kernel32.dll!GetCurrentProcess */
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
    COW_AT(100168d8)
        wr32(sp0 - 0x7cu, 0x40u);
        wr32(sp0 - 0x80u, eax);
        g->esp = sp0 - 0x78u;
        cow_stdcall(g, rd32(COW_IMG(0x103291a0u)), 2, eax, 0x40u);   /* kernel32.dll!SetPriorityClass */
    }
    COW_AT(100168e1)
    if (rd32(COW_IMG(0x103d3c64u)) == 0u)
    {
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_78 = rd32(sp0 - 0x78u);
    }
    else
    {
        eax = rd32(COW_IMG(0x103d3c64u));
    COW_AT(100168ee)
        wr8(eax + 0x1cu, 0u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_78 = rd32(sp0 - 0x78u);
    }
    goto L_10016d37;
L_100168f7: ;
    COW_AT(100168f7)
    wr32(sp0 - 0x7cu, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x78u;
    cow_stdcall(g, rd32(COW_IMG(0x10329318u)), 1, 0u);   /* user32.dll!PostQuitMessage */
    t2 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t2;
    return 0u;
L_1001690b: ;
    COW_AT(1001690b)
    if (rd8(arg4 + 0x18u) & 1u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    else
    {
    COW_AT(1001691c)
        if (rd32(COW_IMG(0x10456a7cu)) == 0u)
        {
            loc_6c = in_ebx;
            loc_70 = in_ebp;
            loc_74 = in_esi;
            loc_78 = in_edi;
        }
        else
        {
            eax = rd32(COW_IMG(0x10456a7cu));
    COW_AT(1001692b)
            wr32(sp0 - 0x7cu, 0x20u);
            t9 = rd8(COW_IMG(0x10456a30u));
            t10 = rd32(COW_IMG(0x103293a0u));
            wr8(sp0 - 0x65u, (uint8_t)t9);
            g->eax = (eax & 0xffffff00u) | t9;
            g->edx = arg4;
            g->esp = sp0 - 0x78u;
            t11 = cow_thiscall(g, t10, self, 1, 0x20u);
            t12 = g->ecx;
            t13 = g->edx;
            wr32(sp0 - 0x7cu, 0x21u);
            g->edx = t13;
            t14 = cow_thiscall(g, t10, t12, 1, 0x21u);
            t15 = g->ecx;
            t16 = g->edx;
            wr32(sp0 - 0x7cu, 4u);
            wr32(sp0 - 0x60u, t14);
            g->edx = t16;
            t17 = cow_thiscall(g, t10, t15, 1, 4u);
            t18 = g->ecx;
            t19 = g->edx;
            wr32(sp0 - 0x64u, t17);
            if (rd32(COW_IMG(0x10456a7cu)) != 3u)
            {
                eax = rd32(COW_IMG(0x10456a7cu));
                ecx = t18;
                edx = t19;
                esi = t10;
                edi = t11;
                loc_64 = t17;
                loc_60 = rd32(sp0 - 0x60u);
            }
            else
            {
                eax = rd32(COW_IMG(0x10456a7cu));
                ecx = t18;
                edx = t19;
                esi = t10;
    COW_AT(1001695a)
                wr32(sp0 - 0x60u, 0u);
                wr32(sp0 - 0x64u, 0u);
                edi = 0u;
                loc_64 = 0u;
                loc_60 = 0u;
            }
    COW_AT(10016964)
            wr32(sp0 - 0x7cu, 0x1cu);
            wr32(sp0 - 0x50u, edi * 2u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x78u;
            t20 = cow_thiscall(g, esi, ecx, 1, 0x1cu);
            t21 = g->ecx;
            t22 = g->edx;
            t23 = t20 - edi * 2u;
            wr32(sp0 - 0x5cu, t23);
            g->edx = t22;
            d24 = fr(g, fr(g, (double)(int32_t)t23 / (double)(int32_t)rd32(COW_IMG(0x10456a58u))) * (double)(int32_t)rd32(COW_IMG(0x10456c08u)));
            fpush(g, d24);
            t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), t23, g->ecx, g->edx, 1, 0);
            t26 = g->edx;
            if ((int32_t)rd32(arg4 + 0x14u) >= (int32_t)t25)
            {
                eax = t25;
                edx = t26;
                ebx = 0u;
                edi = edi * 2u;
            }
            else
            {
                eax = t25;
                edi = edi * 2u;
    COW_AT(10016997)
                t27 = rd32(sp0 - 0x60u);
                wr32(arg4 + 0x10u, edi);
                t28 = eax + t27 * 2u + rd32(sp0 - 0x64u);
                t29 = rd32(sp0 - 0x64u);
                wr32(arg4 + 0x14u, t28);
                eax = t29;
                edx = t28;
                ebx = 1u;
            }
    COW_AT(100169ac)
            if (rd8(sp0 - 0x65u) != 0u) goto L_100169c4;
    COW_AT(100169b4)
            if ((uint8_t)ebx != 1u)
            {
                loc_6c = rd32(sp0 - 0x6cu);
                loc_70 = rd32(sp0 - 0x70u);
                loc_74 = rd32(sp0 - 0x74u);
                loc_78 = rd32(sp0 - 0x78u);
                goto L_10016d37;
            }
    COW_AT(100169bd)
L_100169c4: ;
    COW_AT(100169c4)
            wr32(sp0 - 0x7cu, sp0 - 0x4cu);
            wr32(sp0 - 0x80u, arg1);
            g->esp = sp0 - 0x78u;
            cow_stdcall(g, rd32(COW_IMG(0x103293e4u)), 2, arg1, sp0 - 0x4cu);   /* user32.dll!GetWindowRect */
            t30 = rd32(sp0 - 0x44u);
            if ((int32_t)(t30 - rd32(arg4 + 0x10u) - rd32(sp0 - 0x4cu)) >= 0)
            {
                eax = t30 - rd32(arg4 + 0x10u) - rd32(sp0 - 0x4cu);
                edx = rd32(arg4 + 0x10u);
            }
            else
            {
                ecx = t30;
                edx = rd32(arg4 + 0x10u);
                esi = rd32(sp0 - 0x4cu);
    COW_AT(100169e7)
                eax = edx + esi - ecx;
            }
    COW_AT(100169ed)
            wr32(sp0 - 0x5cu, eax);
            t31 = rd32(sp0 - 0x40u);
            if ((int32_t)(t31 - rd32(arg4 + 0x14u) - rd32(sp0 - 0x48u)) >= 0)
            {
                ecx = t31 - rd32(arg4 + 0x14u) - rd32(sp0 - 0x48u);
                x0 = (double)(int32_t)eax;
                eax = rd32(arg4 + 0x14u);
            }
            else
            {
                ebp = rd32(sp0 - 0x48u);
                esi = t31;
                x0 = (double)(int32_t)eax;
                eax = rd32(arg4 + 0x14u);
    COW_AT(10016a0f)
                ecx = eax + ebp - esi;
            }
    COW_AT(10016a15)
            wr32(sp0 - 0x5cu, ecx);
            t32 = rd32(sp0 - 0x60u);
            d33 = (double)(float)(double)(int32_t)rd32(COW_IMG(0x10456c08u));
            wrf32(sp0 - 0x60u, (float)d33);
            wr32(sp0 - 0x54u, t32 * 2u);
            t34 = eax - t32 * 2u - rd32(sp0 - 0x64u);
            wr32(sp0 - 0x58u, t34);
            d35 = (double)(float)fr(g, (double)(int32_t)t34 / d33);
            wrf32(sp0 - 0x58u, (float)d35);
            if (x0 < (double)(int32_t)ecx)
            {
                eax = (t34 & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)(int32_t)ecx, 0u);
                ecx = t32 * 2u;
                loc_58_f = d35;
                goto L_10016a8e;
            }
            eax = (t34 & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)(int32_t)ecx, 0u);
            ecx = t32 * 2u;
            loc_60_f = d33;
            loc_54 = t32 * 2u;
            loc_58_f = d35;
    COW_AT(10016a52)
            if ((uint8_t)ebx == 1u) goto L_10016a8e;
    COW_AT(10016a57)
            wr32(sp0 - 0x58u, edx - edi);
            d36 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)(edx - edi) / (double)(int32_t)rd32(COW_IMG(0x10456a58u))) * loc_60_f) + (double)(int32_t)loc_54) + (double)(int32_t)rd32(sp0 - 0x64u));
            fpush(g, d36);
            g->esp = sp0 - 0x78u;
            t37 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            wr32(arg4 + 0x14u, t37);
            loc_6c = rd32(sp0 - 0x6cu);
            loc_70 = rd32(sp0 - 0x70u);
            loc_74 = rd32(sp0 - 0x74u);
            loc_78 = rd32(sp0 - 0x78u);
        }
    }
    goto L_10016d37;
L_10016a8e: ;
    COW_AT(10016a8e)
    d38 = fr(g, fr(g, (double)(int32_t)rd32(COW_IMG(0x10456a58u)) * loc_58_f) + (double)(int32_t)rd32(sp0 - 0x50u));
    fpush(g, d38);
    g->esp = sp0 - 0x78u;
    t39 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    wr32(arg4 + 0x10u, t39);
    loc_6c = rd32(sp0 - 0x6cu);
    loc_70 = rd32(sp0 - 0x70u);
    loc_74 = rd32(sp0 - 0x74u);
    loc_78 = rd32(sp0 - 0x78u);
    goto L_10016d37;
L_10016ab7: ;
    COW_AT(10016ab7)
    if (arg2 > 0x112u) goto L_10016c83;
    COW_AT(10016ac3)
    if (arg2 == 0x112u) goto L_10016b09;
    COW_AT(10016ac5)
    if (arg2 == 0x100u) goto L_10016aef;
    COW_AT(10016ace)
    if (arg2 != 0x101u) goto L_10016c9b;
    COW_AT(10016ad5)
    if (arg3 != 0x10u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    else
    {
    COW_AT(10016ae3)
        wr8(COW_IMG(0x10456a30u), 0u);
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    goto L_10016d37;
L_10016aef: ;
    COW_AT(10016aef)
    if (arg3 != 0x10u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    else
    {
    COW_AT(10016afd)
        wr8(COW_IMG(0x10456a30u), 1u);
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    goto L_10016d37;
L_10016b09: ;
    COW_AT(10016b09)
    if (arg3 > 0xf090u) goto L_10016c64;
    COW_AT(10016b1b)
    if (arg3 == 0xf090u)
    {
        edx = in_edx;
        goto L_10016d73;
    }
    COW_AT(10016b21)
    if (arg3 > 0xf040u) goto L_10016c41;
    COW_AT(10016b2c)
    if (arg3 == 0xf040u)
    {
        edx = in_edx;
        goto L_10016d73;
    }
    COW_AT(10016b32)
    if (arg3 == 1u) goto L_10016b8b;
    COW_AT(10016b35)
    if (arg3 - 1u == 0xefffu)
    {
        edx = in_edx;
        goto L_10016d73;
    }
    COW_AT(10016b40)
    if (arg3 - 0xf000u == 0x10u)
    {
        edx = in_edx;
        goto L_10016d73;
    }
L_10016b49: ;
    COW_AT(10016b49)
    if (rd32(COW_IMG(0x10456a7cu)) != 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
    COW_AT(10016b56)
    if (arg3 == 0xf020u)
    {
        edx = in_edx;
        goto L_10016d73;
    }
    COW_AT(10016b68)
    if (arg3 - 0xf020u == 0x10u)
    {
        edx = in_edx;
        goto L_10016d73;
    }
    COW_AT(10016b71)
    if (arg3 - 0xf030u != 0xf0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
    COW_AT(10016b7c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 1u;
L_10016b8b: ;
    COW_AT(10016b8b)
    if (rd32(COW_IMG(0x10456a7cu)) == 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    else
    {
        eax = rd32(COW_IMG(0x10456a7cu));
    COW_AT(10016b9a)
        wr32(sp0 - 0x7cu, sp0 - 0x2cu);
        wr32(sp0 - 0x80u, arg1);
        wr32(sp0 - 0x2cu, 0x2cu);
        g->eax = eax;
        g->ecx = self;
        g->edx = sp0 - 0x2cu;
        g->esp = sp0 - 0x78u;
        t40 = cow_stdcall(g, rd32(COW_IMG(0x103293ccu)), 2, arg1, sp0 - 0x2cu);   /* user32.dll!GetWindowPlacement */
        t41 = g->ecx;
        t42 = g->edx;
        if (t40 == 0u)
        {
            ecx = t41;
            edx = t42;
            goto L_10016bd2;
        }
        ecx = t41;
        edx = t42;
    COW_AT(10016bb6)
        if (rd32(sp0 - 0x24u) == 2u)
        {
            eax = rd32(sp0 - 0x24u);
            goto L_10016bc4;
        }
        eax = rd32(sp0 - 0x24u);
    COW_AT(10016bbf)
        if (eax != 3u) goto L_10016bd2;
L_10016bc4: ;
    COW_AT(10016bc4)
        wr32(sp0 - 0x7cu, 1u);
        wr32(sp0 - 0x80u, arg1);
        g->esp = sp0 - 0x78u;
        cow_stdcall(g, rd32(COW_IMG(0x10329368u)), 2, arg1, 1u);   /* user32.dll!ShowWindow */
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_78 = rd32(sp0 - 0x78u);
    }
    goto L_10016d37;
L_10016bd2: ;
    COW_AT(10016bd2)
    wr32(sp0 - 0x7cu, sp0 - 0x3cu);
    wr32(sp0 - 0x80u, arg1);
    g->esp = sp0 - 0x78u;
    cow_stdcall(g, rd32(COW_IMG(0x103293e4u)), 2, arg1, sp0 - 0x3cu);   /* user32.dll!GetWindowRect */
    wr32(sp0 - 0x44u, rd32(COW_IMG(0x10456a58u)));
    wr32(sp0 - 0x40u, rd32(COW_IMG(0x10456c08u)));
    wr32(sp0 - 0x7cu, rd32(COW_IMG(0x103505a4u)));
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, rd32(COW_IMG(0x103505a8u)));
    wr32(sp0 - 0x88u, sp0 - 0x4cu);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0u);
    t43 = rd32(COW_IMG(0x10456a58u));
    t44 = rd32(COW_IMG(0x10456c08u));
    cow_stdcall(g, rd32(COW_IMG(0x10329348u)), 4, sp0 - 0x4cu, rd32(COW_IMG(0x103505a8u)), 0u, rd32(COW_IMG(0x103505a4u)));   /* user32.dll!AdjustWindowRectEx */
    wr32(sp0 - 0x7cu, 1u);
    t45 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x80u, t45);
    t46 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x84u, t46);
    t47 = rd32(sp0 - 0x38u);
    wr32(sp0 - 0x88u, t47);
    t48 = rd32(sp0 - 0x3cu);
    wr32(sp0 - 0x8cu, t48);
    wr32(sp0 - 0x90u, arg1);
    cow_stdcall(g, rd32(COW_IMG(0x103293d0u)), 6, arg1, t48, t47, t46, t45, 1u);   /* user32.dll!MoveWindow */
    loc_6c = rd32(sp0 - 0x6cu);
    loc_70 = rd32(sp0 - 0x70u);
    loc_74 = rd32(sp0 - 0x74u);
    loc_78 = rd32(sp0 - 0x78u);
    goto L_10016d37;
L_10016c41: ;
    COW_AT(10016c41)
    if (arg3 == 0xf050u)
    {
        edx = in_edx;
        goto L_10016d73;
    }
    COW_AT(10016c4c)
    if (arg3 - 0xf050u != 0x10u) goto L_10016b49;
    COW_AT(10016c55)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 1u;
L_10016c64: ;
    COW_AT(10016c64)
    if (arg3 - 0xf100u > 0x80u) goto L_10016b49;
    COW_AT(10016c74)
    t49 = rd32(COW_IMG(0x10016dacu) + rd8(COW_IMG(0x10016db4u) + arg3 - 0xf100u) * 4u);
    switch (t49 - RD)
    {
    case 0x10016b49u: goto L_10016b49;
    case 0x10016d73u: edx = in_edx; goto L_10016d73;
    default: rt_fatal(g, COW_IMG(0x10016c7cu), "switch");
    }
    return 0;
L_10016c83: ;
    COW_AT(10016c83)
    if (arg2 == 0x401u) goto L_10016d5d;
    COW_AT(10016c8f)
    if (arg2 == 0x800bu) goto L_10016d26;
L_10016c9b: ;
    COW_AT(10016c9b)
    if (arg2 > 0x282u) goto L_10016d12;
    COW_AT(10016ca3)
    if (arg2 == 0x282u) goto L_10016cc1;
    COW_AT(10016ca5)
    if (arg2 == 0x10du) goto L_10016cb5;
    COW_AT(10016cae)
    if (arg2 != 0x10eu)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
L_10016cb5: ;
    COW_AT(10016cb5)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10016cc1: ;
    COW_AT(10016cc1)
    if (arg3 == 8u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
    COW_AT(10016ccb)
    if (arg3 != 0xeu) goto L_10016ceb;
    COW_AT(10016cdc)
    if (arg4 == 5u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
    COW_AT(10016ce7)
    if (arg4 == 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
L_10016ceb: ;
    COW_AT(10016ceb)
    if (rd8(COW_IMG(0x104569ecu)) != 1u) goto L_10016d06;
    COW_AT(10016cf4)
    if (arg3 == 5u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
    COW_AT(10016cff)
    if (arg3 == 4u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
L_10016d06: ;
    COW_AT(10016d06)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10016d12: ;
    COW_AT(10016d12)
    if (arg2 != 0x283u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_10016d37;
    }
    COW_AT(10016d1a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10016d26: ;
    COW_AT(10016d26)
    if (rd32(COW_IMG(0x103d3cb8u)) == 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    else
    {
        ecx = rd32(COW_IMG(0x103d3cb8u));
    COW_AT(10016d30)
        wr32(sp0 - 0x7cu, 0u);
        g->esp = sp0 - 0x78u;
        cow_thiscall(g, COW_IMG(0x10002840u), ecx, 1, 0u);
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
    }
    goto L_10016d37;
L_10016d5d: ;
    COW_AT(10016d5d)
    if (rd32(COW_IMG(0x103d3c64u)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x103d3c64u));
    COW_AT(10016d67)
        if (rd8(ecx + 0x1du) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            eax = (in_eax & 0xffffff00u) | rd8(ecx + 0x1du);
    COW_AT(10016d6e)
            g->edx = in_edx;
            g->esp = sp0 - 0x78u;
            cow_thiscall(g, COW_IMG(0x10001b50u), ecx, 0);
            t52 = g->edx;
            edx = t52;
        }
    }
L_10016d73: ;
    COW_AT(10016d73)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10016870(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10016884u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        g->zf = (uint8_t)(arg2 == 0x46u);
        (void)sp0;
        return 1;
    }
    case 0x1001688au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016896u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg2 - 2u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100168a5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg2 - 2u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100168afu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100168b8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100168c5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100168ceu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg2 - 2u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100168d8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100168e1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100168eeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100168f7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg2 - 2u;
        (void)sp0;
        return 1;
    }
    case 0x1001690bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1001691cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->edx = arg4;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1001692bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->edx = arg4;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1001695au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x78u;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016964u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x78u;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016997u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = 0u;
        g->ebp = arg2;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100169acu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100169b4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100169bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x100169c4u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100169e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x100169edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10016a0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10016a15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10016a52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        double loc_58_f;
        double loc_60_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10016a57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        double loc_58_f;
        double loc_60_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10016a8eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        double loc_58_f;
        double loc_60_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10016ab7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        wr32(sp0 - 0x6cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10016ac3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        g->zf = (uint8_t)(arg2 == 0x112u);
        (void)sp0;
        return 1;
    }
    case 0x10016ac5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016aceu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg2 - 0x100u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016ad5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016ae3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016aefu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016afdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016b09u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016b1bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg3;
        g->ebp = arg2;
        g->zf = (uint8_t)(arg3 == 0xf090u);
        (void)sp0;
        return 1;
    }
    case 0x10016b21u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg3;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016b2cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg3;
        g->ebp = arg2;
        g->zf = (uint8_t)(arg3 == 0xf040u);
        (void)sp0;
        return 1;
    }
    case 0x10016b32u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg3;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016b35u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg3 - 1u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016b40u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg3 - 0xf000u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016b49u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016b56u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016b68u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg3 - 0xf020u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016b71u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg3 - 0xf030u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016b7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10016b8bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016b9au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10016bb6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        g->esi = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10016bbfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        g->esi = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10016bc4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10016bd2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        g->esi = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10016c41u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg3;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016c4cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg3 - 0xf050u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016c55u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10016c64u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg3;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016c74u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg3 - 0xf100u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016c83u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        wr32(sp0 - 0x6cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10016c8fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        wr32(sp0 - 0x6cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10016c9bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016ca3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        g->zf = (uint8_t)(arg2 == 0x282u);
        (void)sp0;
        return 1;
    }
    case 0x10016ca5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016caeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg2 - 0x10du;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016cb5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10016cc1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016ccbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016cdcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = 5u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016ce7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = 5u;
        g->ecx = arg4;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016cebu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = 5u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016cf4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = 5u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016cffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ecx = arg3;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016d06u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10016d12u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016d1au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10016d26u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        wr32(sp0 - 0x6cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10016d30u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        wr32(sp0 - 0x6cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10016d37u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016d5du:
    {
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x6cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10016d67u:
    {
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x6cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10016d6eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x6cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10016d73u:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10016870(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10016870(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
